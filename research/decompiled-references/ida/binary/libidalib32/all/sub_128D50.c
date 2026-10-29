__int64 __fastcall sub_128D50(__int64 a1, int a2)
{
  __int64 result; // rax
  const char **v4; // r12
  const char *v5; // rbp
  _BYTE *v6; // r13
  __int128 v7; // kr00_16
  __int64 v8; // rdi
  _BYTE *v9; // rdi
  int v10; // ebp
  __int64 i; // rax
  int v12; // esi
  _DWORD *v13; // rax
  _DWORD *v14; // rdx
  const char *v15; // r12
  size_t v16; // rbp
  char *v17; // rax
  signed __int64 v18; // rdx
  _BYTE *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-68h] BYREF
  __int128 v21; // [rsp+8h] [rbp-60h]
  _BYTE *v22; // [rsp+20h] [rbp-48h]
  __int128 v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  result = 0;
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
    return 0;
  if ( *(_DWORD *)(a1 + 144) != a2 )
  {
    *(_DWORD *)(a1 + 144) = a2;
    v20 = 0;
    v21 = 0;
    sub_1289F0(a1, &v20, a1 + 96);
    v4 = (const char **)(*(_QWORD *)a1 + 24LL * a2);
    sub_1289F0(a1, (__int64 *)(a1 + 72), (__int64)v4);
    v5 = v4[1];
    if ( !v5 )
      goto LABEL_7;
    v15 = *v4;
    v16 = (size_t)(v5 - 1);
    v17 = strchr(v15, 45);
    v22 = nullptr;
    v23 = 0;
    v18 = v17 - v15;
    if ( v16 <= v17 - v15 )
      v18 = v16;
    if ( v17 )
      v16 = v18;
    if ( v16 )
    {
      v19 = (_BYTE *)qvector_reserve();
      *(_QWORD *)&v23 = v16 + 1;
      v22 = v19;
      memmove(v19, v15, v16);
      v22[v16] = 0;
      v6 = v22;
      v7 = v23;
    }
    else
    {
LABEL_7:
      v6 = nullptr;
      v7 = 0u;
    }
    v8 = *(_QWORD *)(a1 + 96);
    v22 = nullptr;
    v23 = 0;
    if ( v8 )
    {
      *(_QWORD *)(a1 + 104) = 0;
      qfree();
      v9 = v22;
      *(_QWORD *)(a1 + 96) = v6;
      *(_OWORD *)(a1 + 104) = v7;
      if ( v9 )
      {
        *(_QWORD *)&v23 = 0;
        qfree();
      }
    }
    else
    {
      *(_QWORD *)(a1 + 96) = v6;
      *(_OWORD *)(a1 + 104) = v7;
    }
    v10 = 0;
    for ( i = 0; v10 < (unsigned __int64)v21; i = v10 )
    {
      v12 = *(_DWORD *)(v20 + 4 * i);
      v13 = *(_DWORD **)(a1 + 72);
      v14 = &v13[*(_QWORD *)(a1 + 80)];
      if ( v13 != v14 )
      {
        while ( v12 != *v13 )
        {
          if ( v14 == ++v13 )
            goto LABEL_18;
        }
        if ( v13 != v14 )
          sub_1281D0((_QWORD *)a1, v12);
      }
LABEL_18:
      ++v10;
    }
    sub_1284E0(a1);
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree();
    }
    return 1;
  }
  return result;
}

