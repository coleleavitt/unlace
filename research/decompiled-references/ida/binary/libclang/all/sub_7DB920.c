__int64 __fastcall sub_7DB920(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbp
  int v6; // r13d
  int v7; // esi
  bool v8; // al
  int v9; // edx
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  int v13; // r9d
  __int64 v14; // r8
  unsigned int i; // r15d
  __int64 v16; // rcx
  int v17; // eax
  int v18; // esi
  unsigned int v19; // eax
  int v20; // r13d
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // esi
  bool v25; // al
  __int64 v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+8h] [rbp-60h]
  int v32; // [rsp+14h] [rbp-54h]
  __int64 v33; // [rsp+18h] [rbp-50h]
  __int64 v34; // [rsp+20h] [rbp-48h] BYREF
  int v35[16]; // [rsp+28h] [rbp-40h] BYREF

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v5 = a1 + 8;
    v6 = 1;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 16);
    if ( !v20 )
    {
      v16 = 0;
      result = 0;
      goto LABEL_16;
    }
    v5 = *(_QWORD *)(a1 + 8);
    v6 = v20 - 1;
  }
  v7 = *(_DWORD *)a2;
  v35[0] = 73;
  v8 = sub_7204C0(v35, v7);
  v9 = *(_DWORD *)a2;
  if ( v8 )
  {
    v22 = *(_QWORD *)(a2 + 8);
    v30 = *(_DWORD *)a2;
    *(_QWORD *)v35 = *(_QWORD *)(a2 + 16);
    v34 = v22;
    v10 = sub_7DB4D0(&v34, v35);
    v9 = v30;
  }
  else if ( v9 == 5 )
  {
    v23 = *(_QWORD *)(a2 + 8);
    v34 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)v35 = v23;
    v10 = sub_7DB530(v35, &v34);
    v9 = 5;
  }
  else
  {
    v10 = -1916529075;
    if ( v9 > 73 )
    {
      v11 = *(_QWORD *)(a2 + 8);
      v12 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (HIDWORD(v11) ^ (8LL * (unsigned int)v11 - 0xAE502812AA7333LL))) >> 47)
           ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v11) ^ (8LL * (unsigned int)v11 - 0xAE502812AA7333LL)))
           ^ HIDWORD(v11));
      v10 = -348639895 * (v12 ^ (v12 >> 47));
    }
  }
  v13 = 1;
  v14 = 0;
  for ( i = v6 & v10; ; i = v6 & v29 )
  {
    while ( 1 )
    {
      v16 = v5 + 40LL * i;
      v17 = *(_DWORD *)v16;
      if ( !v9 )
      {
        if ( v17 )
        {
          v18 = v13 + 1;
          v19 = v6 & (i + v13);
          v16 = v5 + 40LL * v19;
          if ( *(_DWORD *)v16 )
          {
            while ( 1 )
            {
              v19 = v6 & (v18 + v19);
              v16 = v5 + 40LL * v19;
              if ( !*(_DWORD *)v16 )
                break;
              ++v18;
            }
          }
        }
LABEL_25:
        result = 1;
        goto LABEL_16;
      }
      if ( v9 == 1045 )
        break;
      if ( v9 != v17 )
        goto LABEL_29;
      if ( v17 == 6 )
      {
        if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(v16 + 8) )
          goto LABEL_25;
        goto LABEL_36;
      }
      v24 = *(_DWORD *)a2;
      v33 = v5 + 40LL * i;
      v32 = v13;
      v31 = v14;
      v35[0] = 73;
      v25 = sub_7204C0(v35, v24);
      v14 = v31;
      v13 = v32;
      v16 = v33;
      if ( v25 || *(_DWORD *)a2 == 5 )
      {
        if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(v33 + 8) )
        {
          if ( *(_QWORD *)(a2 + 16) == *(_QWORD *)(v33 + 16) )
            goto LABEL_25;
          v17 = *(_DWORD *)v33;
        }
        else
        {
          v17 = *(_DWORD *)v33;
        }
LABEL_29:
        if ( !v17 )
          goto LABEL_20;
        goto LABEL_36;
      }
      v17 = *(_DWORD *)v33;
      if ( *(int *)a2 <= 73 )
      {
        if ( v17 <= 73 || !*(_QWORD *)(v33 + 8) )
          goto LABEL_25;
      }
      else
      {
        v26 = *(_QWORD *)(a2 + 8);
        if ( v17 <= 73 )
        {
          if ( !v26 )
            goto LABEL_25;
          goto LABEL_29;
        }
        if ( *(_QWORD *)(v33 + 8) == v26 )
          goto LABEL_25;
      }
LABEL_36:
      v9 = *(_DWORD *)a2;
      if ( v17 == 1045 && !v14 )
      {
        v28 = i + v13;
        v14 = v16;
        ++v13;
        i = v6 & v28;
      }
      else
      {
        v27 = i + v13++;
        i = v6 & v27;
      }
    }
    if ( v17 == 1045 )
      goto LABEL_25;
    if ( !v17 )
      break;
    v29 = i + v13;
    v9 = *(_DWORD *)a2;
    ++v13;
  }
LABEL_20:
  if ( v14 )
    v16 = v14;
  result = 0;
LABEL_16:
  *a3 = v16;
  return result;
}

