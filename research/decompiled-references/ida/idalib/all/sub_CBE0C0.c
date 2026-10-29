__int64 __fastcall sub_CBE0C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  unsigned int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r8
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // r10d
  _QWORD *v19; // r11
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edi
  __int64 v25; // r8
  unsigned int v26; // esi
  int v27; // eax
  int v28; // esi
  __int64 v29; // rdi
  unsigned int v30; // r14d
  int v31; // r9d
  _QWORD *v32; // r8
  _QWORD *v33; // r9
  int v34; // r10d
  unsigned __int64 v35; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v36[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  v36[0] = a2 & 0xFFFFFFFFFFFFFFFBLL;
  if ( !(unsigned __int8)sub_D08440(a1, v36) )
    return 0;
  v10 = *(_DWORD *)(a1 + 24);
  v11 = a1 + 8;
  v12 = **(_QWORD **)(a2 + 120);
  if ( v10 )
  {
    v8 = v10 - 1;
    v13 = *(_QWORD *)(a1 + 8);
    v14 = v8 & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
    v15 = (_QWORD *)(v13 + 16LL * v14);
    v16 = *v15;
    if ( v12 == *v15 )
    {
LABEL_6:
      v17 = *((unsigned int *)v15 + 2);
      goto LABEL_7;
    }
    v18 = 1;
    v19 = nullptr;
    if ( v16 != -4096 )
    {
      while ( 1 )
      {
        if ( !v19 && v16 == -8192 )
          v19 = v15;
        v14 = v8 & (v18 + v14);
        v15 = (_QWORD *)(v13 + 16LL * v14);
        v16 = *v15;
        if ( v12 == *v15 )
          goto LABEL_6;
        if ( v16 == -4096 )
          break;
        ++v18;
      }
      if ( v19 )
        v15 = v19;
    }
    v6 = 3 * v10;
    v5 = (unsigned int)(*(_DWORD *)(a1 + 16) + 1);
    v7 = (unsigned int)(4 * v5);
    if ( (unsigned int)v7 < (unsigned int)v6 )
    {
      v20 = v10 - *(_DWORD *)(a1 + 20) - (unsigned int)v5;
      v21 = v10 >> 3;
      if ( (unsigned int)v20 > (unsigned int)v21 )
      {
LABEL_13:
        v22 = *v15;
        goto LABEL_14;
      }
      sub_CAD110(v11, v10, v5, v20, v21, v8);
      v27 = *(_DWORD *)(a1 + 24);
      if ( v27 )
      {
        v28 = v27 - 1;
        v29 = *(_QWORD *)(a1 + 8);
        v30 = (v27 - 1) & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
        LODWORD(v5) = *(_DWORD *)(a1 + 16) + 1;
        v15 = (_QWORD *)(v29 + 16LL * v30);
        v22 = *v15;
        if ( v12 != *v15 )
        {
          v31 = 1;
          v32 = nullptr;
          if ( v22 != -4096 )
          {
            while ( 1 )
            {
              if ( v22 == -8192 && !v32 )
                v32 = v15;
              v30 = v28 & (v31 + v30);
              v15 = (_QWORD *)(v29 + 16LL * v30);
              v22 = *v15;
              if ( v12 == *v15 )
                goto LABEL_14;
              if ( v22 == -4096 )
              {
                if ( !v32 )
                  goto LABEL_20;
                v22 = *v32;
                v15 = v32;
                goto LABEL_14;
              }
              ++v31;
            }
          }
          goto LABEL_20;
        }
LABEL_14:
        *(_DWORD *)(a1 + 16) = v5;
        if ( v22 != -4096 )
          --*(_DWORD *)(a1 + 20);
        goto LABEL_16;
      }
LABEL_51:
      ++*(_DWORD *)(a1 + 16);
      BUG();
    }
  }
  sub_CAD110(v11, 2 * v10, v5, v6, v7, v8);
  v23 = *(_DWORD *)(a1 + 24);
  if ( !v23 )
    goto LABEL_51;
  v24 = v23 - 1;
  v25 = *(_QWORD *)(a1 + 8);
  v26 = (v23 - 1) & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
  LODWORD(v5) = *(_DWORD *)(a1 + 16) + 1;
  v15 = (_QWORD *)(v25 + 16LL * v26);
  v22 = *v15;
  if ( v12 == *v15 )
    goto LABEL_14;
  if ( v22 != -4096 )
  {
    v33 = (_QWORD *)(v25 + 16LL * (v24 & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4))));
    v34 = 1;
    v15 = nullptr;
    while ( 1 )
    {
      if ( !v15 && v22 == -8192 )
        v15 = v33;
      v26 = v24 & (v34 + v26);
      v33 = (_QWORD *)(v25 + 16LL * v26);
      v22 = *v33;
      if ( v12 == *v33 )
      {
        v15 = (_QWORD *)(v25 + 16LL * v26);
        goto LABEL_14;
      }
      if ( v22 == -4096 )
        break;
      ++v34;
    }
    if ( v15 )
      goto LABEL_13;
    v15 = (_QWORD *)(v25 + 16LL * v26);
  }
LABEL_20:
  *(_DWORD *)(a1 + 16) = v5;
LABEL_16:
  *v15 = v12;
  v17 = 0;
  *((_DWORD *)v15 + 2) = 0;
  *((_BYTE *)v15 + 12) = 0;
LABEL_7:
  v36[0] = v3;
  if ( !(unsigned __int8)sub_D88CE0(a1, 13, v17, v36) )
    return 0;
  v35 = v3;
  result = sub_D06F70(a1, &v35);
  if ( (_BYTE)result )
  {
    v36[0] = v3;
    return sub_D4B810(a1, 13, v36);
  }
  return result;
}
