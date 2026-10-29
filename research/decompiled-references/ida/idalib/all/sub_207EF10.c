__int64 __fastcall sub_207EF10(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int8 v7; // cl
  int v8; // edi
  __int64 *v9; // rcx
  int v10; // ecx
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rsi
  unsigned int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  int v19; // r8d
  _QWORD *v20; // rdi
  __int64 *v21; // r10
  __int64 v22; // [rsp+8h] [rbp-60h] BYREF
  __int64 v23; // [rsp+10h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+28h] [rbp-40h]
  int v27; // [rsp+30h] [rbp-38h]
  int v28[13]; // [rsp+34h] [rbp-34h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *(_BYTE *)(*a2 - 16);
    v8 = *(unsigned __int16 *)(*a2 + 2);
    if ( (v7 & 2) != 0 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 16LL);
      v23 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 40LL);
      v24 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 48LL);
      v25 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 56LL);
      v9 = *(__int64 **)(v5 - 32);
    }
    else
    {
      v21 = (__int64 *)(v5 - 8LL * ((v7 >> 2) & 0xF));
      v9 = v21 - 2;
      v22 = *v21;
      v23 = v21[3];
      v24 = v21[4];
      v25 = v21[5];
    }
    v26 = v9[3];
    v10 = 0;
    if ( *(_WORD *)(v5 + 2) != 17152 )
      v10 = *(_DWORD *)(v5 + 4);
    v27 = v10;
    v13 = v3 - 1;
    v28[0] = *(_DWORD *)(v5 + 28);
    v14 = sub_2077860(v8, &v22, &v23, v28);
    v15 = *a2;
    v16 = v13 & v14;
    v17 = (_QWORD *)(v6 + 8LL * v16);
    v18 = *v17;
    if ( *a2 == *v17 )
    {
LABEL_17:
      *a3 = v17;
      return 1;
    }
    else
    {
      if ( v18 != -4096 )
      {
        v19 = 1;
        v20 = nullptr;
        while ( 1 )
        {
          if ( v18 != -8192 || v20 )
            v17 = v20;
          v16 = v13 & (v19 + v16);
          v18 = *(_QWORD *)(v6 + 8LL * v16);
          if ( v18 == v15 )
          {
            v17 = (_QWORD *)(v6 + 8LL * v16);
            goto LABEL_17;
          }
          if ( v18 == -4096 )
            break;
          ++v19;
          v20 = v17;
          v17 = (_QWORD *)(v6 + 8LL * v16);
        }
        if ( !v17 )
          v17 = (_QWORD *)(v6 + 8LL * v16);
      }
      *a3 = v17;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
