__int64 __fastcall sub_7DCEC0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebp
  __int64 v5; // rbp
  __int64 result; // rax
  int v8; // esi
  __int64 v9; // r14
  bool v10; // al
  int v11; // r15d
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  int v15; // edx
  int v16; // r9d
  __int64 v17; // r8
  unsigned int i; // ecx
  int v19; // eax
  int v20; // esi
  unsigned int j; // eax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // esi
  bool v26; // al
  __int64 v27; // rsi
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // [rsp+Ch] [rbp-5Ch]
  __int64 v32; // [rsp+10h] [rbp-58h]
  unsigned int v33; // [rsp+18h] [rbp-50h]
  int v34; // [rsp+1Ch] [rbp-4Ch]
  __int64 v35; // [rsp+20h] [rbp-48h] BYREF
  int v36[16]; // [rsp+28h] [rbp-40h] BYREF

  v4 = *((_DWORD *)a1 + 4);
  if ( !v4 )
  {
    v5 = 0;
    result = 0;
    goto LABEL_3;
  }
  v8 = *(_DWORD *)a2;
  v9 = *a1;
  v36[0] = 73;
  v10 = sub_7204C0(v36, v8);
  v11 = *(_DWORD *)a2;
  if ( v10 )
  {
    v23 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)v36 = *(_QWORD *)(a2 + 16);
    v35 = v23;
    v12 = sub_7DB4D0(&v35, v36);
  }
  else if ( v11 == 5 )
  {
    v24 = *(_QWORD *)(a2 + 8);
    v35 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)v36 = v24;
    v12 = sub_7DB530(v36, &v35);
  }
  else
  {
    v12 = -1916529075;
    if ( v11 > 73 )
    {
      v13 = *(_QWORD *)(a2 + 8);
      v14 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (HIDWORD(v13) ^ (8LL * (unsigned int)v13 - 0xAE502812AA7333LL)))
           ^ HIDWORD(v13)
           ^ ((0x9DDFEA08EB382D69LL * (HIDWORD(v13) ^ (8LL * (unsigned int)v13 - 0xAE502812AA7333LL))) >> 47));
      v12 = -348639895 * (v14 ^ (v14 >> 47));
    }
  }
  v15 = v4 - 1;
  v16 = 1;
  v17 = 0;
  for ( i = (v4 - 1) & v12; ; i = v15 & v30 )
  {
    while ( 1 )
    {
      v5 = v9 + 48LL * i;
      v19 = *(_DWORD *)v5;
      if ( !v11 )
      {
        if ( v19 )
        {
          v20 = v16 + 1;
          for ( j = v15 & (i + v16); ; j = v15 & (v22 + j) )
          {
            v5 = v9 + 48LL * j;
            if ( !*(_DWORD *)v5 )
              break;
            v22 = v20++;
          }
        }
LABEL_25:
        result = 1;
        goto LABEL_3;
      }
      if ( v11 == 1045 )
        break;
      if ( v11 != v19 )
        goto LABEL_21;
      if ( v19 == 6 )
      {
        if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(v5 + 8) )
          goto LABEL_25;
        goto LABEL_33;
      }
      v25 = *(_DWORD *)a2;
      v34 = v16;
      v33 = i;
      v32 = v17;
      v31 = v15;
      v36[0] = 73;
      v26 = sub_7204C0(v36, v25);
      v15 = v31;
      v17 = v32;
      i = v33;
      v16 = v34;
      if ( v26 || *(_DWORD *)a2 == 5 )
      {
        if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(v5 + 8) && *(_QWORD *)(a2 + 16) == *(_QWORD *)(v5 + 16) )
          goto LABEL_25;
        v19 = *(_DWORD *)v5;
        goto LABEL_21;
      }
      v19 = *(_DWORD *)v5;
      if ( *(int *)a2 <= 73 )
      {
        if ( v19 <= 73 || !*(_QWORD *)(v5 + 8) )
          goto LABEL_25;
      }
      else
      {
        v27 = *(_QWORD *)(a2 + 8);
        if ( v19 <= 73 )
        {
          if ( !v27 )
            goto LABEL_25;
LABEL_21:
          if ( !v19 )
            goto LABEL_17;
          goto LABEL_33;
        }
        if ( *(_QWORD *)(v5 + 8) == v27 )
          goto LABEL_25;
      }
LABEL_33:
      v11 = *(_DWORD *)a2;
      if ( !v17 && v19 == 1045 )
      {
        v29 = i + v16;
        v17 = v5;
        ++v16;
        i = v15 & v29;
      }
      else
      {
        v28 = i + v16++;
        i = v15 & v28;
      }
    }
    if ( v19 == 1045 )
      goto LABEL_25;
    if ( !v19 )
      break;
    v30 = i + v16;
    v11 = *(_DWORD *)a2;
    ++v16;
  }
LABEL_17:
  if ( v17 )
    v5 = v17;
  result = 0;
LABEL_3:
  *a3 = v5;
  return result;
}

