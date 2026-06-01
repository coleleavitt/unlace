__int64 __fastcall sub_2080E10(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int8 v7; // cl
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // [rsp+8h] [rbp-60h] BYREF
  __int64 v23; // [rsp+10h] [rbp-58h] BYREF
  int v24; // [rsp+18h] [rbp-50h] BYREF
  __int64 v25; // [rsp+20h] [rbp-48h] BYREF
  int v26; // [rsp+28h] [rbp-40h] BYREF
  int v27; // [rsp+2Ch] [rbp-3Ch] BYREF
  int v28; // [rsp+30h] [rbp-38h]
  __int64 v29[6]; // [rsp+38h] [rbp-30h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *(_BYTE *)(*a2 - 16);
    if ( (v7 & 2) != 0 )
    {
      v8 = **(_QWORD **)(v5 - 32);
      v22 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 8LL);
      v23 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 16LL);
      v24 = *(_DWORD *)(v5 + 16);
      v25 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 24LL);
      v26 = *(unsigned __int16 *)(v5 + 20);
      v27 = *(_DWORD *)(v5 + 24);
      v28 = *(_DWORD *)(v5 + 4);
      v9 = *(_QWORD **)(v5 - 32);
    }
    else
    {
      v20 = v5 - 8LL * ((v7 >> 2) & 0xF);
      v8 = *(_QWORD *)(v20 - 16);
      v21 = *(_QWORD *)(v20 - 8);
      v9 = (_QWORD *)(v20 - 16);
      v22 = v21;
      v23 = v9[2];
      v24 = *(_DWORD *)(v5 + 16);
      v25 = v9[3];
      v26 = *(unsigned __int16 *)(v5 + 20);
      v27 = *(_DWORD *)(v5 + 24);
      v28 = *(_DWORD *)(v5 + 4);
    }
    v12 = v3 - 1;
    v29[0] = v9[4];
    v13 = sub_20745B0(v8, &v22, &v23, &v24, &v25, &v26, &v27, v29);
    v14 = *a2;
    v15 = v12 & v13;
    v16 = (_QWORD *)(v6 + 8LL * v15);
    v17 = *v16;
    if ( *a2 == *v16 )
    {
LABEL_15:
      *a3 = v16;
      return 1;
    }
    else
    {
      if ( v17 != -4096 )
      {
        v18 = 1;
        v19 = nullptr;
        while ( 1 )
        {
          if ( v17 != -8192 || v19 )
            v16 = v19;
          v15 = v12 & (v18 + v15);
          v17 = *(_QWORD *)(v6 + 8LL * v15);
          if ( v17 == v14 )
          {
            v16 = (_QWORD *)(v6 + 8LL * v15);
            goto LABEL_15;
          }
          if ( v17 == -4096 )
            break;
          ++v18;
          v19 = v16;
          v16 = (_QWORD *)(v6 + 8LL * v15);
        }
        if ( !v16 )
          v16 = (_QWORD *)(v6 + 8LL * v15);
      }
      *a3 = v16;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
