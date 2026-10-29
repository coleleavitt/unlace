__int64 __fastcall sub_B1A580(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  const char **v3; // r15
  int v4; // r14d
  unsigned int v5; // ebx
  size_t v6; // rax
  const char *v7; // r13
  unsigned int v8; // eax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  const char ***v11; // rbp
  const char ***v12; // r15
  const char **v13; // r14
  const char *v14; // r12
  size_t v15; // rax
  int v16; // ecx
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned int v22; // [rsp+10h] [rbp-78h]
  unsigned int v23; // [rsp+1Ch] [rbp-6Ch]
  __int64 v24; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h]
  _BYTE v28[72]; // [rsp+40h] [rbp-48h] BYREF

  v24 = a2;
  v25 = a3;
  if ( a3 <= 1 )
    return 0;
  v3 = (const char **)&off_2B1F2E0;
  v4 = a3;
  v5 = 1;
  ptr = v28;
  v27 = 0x200000000LL;
  while ( 1 )
  {
    v7 = *v3;
    if ( *v3 )
    {
      v6 = strlen(*v3);
      if ( v5 < abs32(v6 - v4) )
        goto LABEL_4;
    }
    else
    {
      v6 = 0;
      if ( v5 < abs32(-v4) )
        goto LABEL_4;
    }
    v8 = sub_22226F0(&v24, v7, v6, 1, v5);
    if ( v5 > v8 )
    {
      LODWORD(v27) = 0;
      v9 = 1;
      v10 = 0;
      goto LABEL_10;
    }
    if ( v5 == v8 )
      break;
LABEL_4:
    v3 += 3;
    if ( &unk_2B20588 == (_UNKNOWN *)v3 )
      goto LABEL_13;
LABEL_5:
    v4 = v25;
  }
  v10 = (unsigned int)v27;
  v9 = (unsigned int)v27 + 1LL;
LABEL_10:
  if ( HIDWORD(v27) < v9 )
  {
    v23 = v8;
    sub_22134E0(&ptr, v28, v9, 8);
    v10 = (unsigned int)v27;
    v8 = v23;
  }
  v5 = v8;
  *((_QWORD *)ptr + v10) = v3;
  v3 += 3;
  LODWORD(v27) = v27 + 1;
  if ( &unk_2B20588 != (_UNKNOWN *)v3 )
    goto LABEL_5;
LABEL_13:
  v11 = *(const char ****)(a1 + 16);
  v12 = &v11[*(unsigned int *)(a1 + 24)];
  if ( v11 != v12 )
  {
    while ( 1 )
    {
      v13 = *v11;
      if ( (*((_BYTE *)*v11 + 21) & 4) != 0 )
        goto LABEL_15;
      v14 = *v13;
      if ( *v13 )
      {
        v15 = strlen(*v13);
        v16 = v15;
      }
      else
      {
        v16 = 0;
        v15 = 0;
      }
      if ( abs32(v16 - v25) > v5 )
        goto LABEL_15;
      v17 = sub_22226F0(&v24, v14, v15, 1, v5);
      if ( v17 >= v5 )
      {
        if ( v17 == v5 )
        {
          v19 = (unsigned int)v27;
          v18 = (unsigned int)v27 + 1LL;
          goto LABEL_22;
        }
LABEL_15:
        if ( v12 == ++v11 )
          break;
      }
      else
      {
        LODWORD(v27) = 0;
        v18 = 1;
        v19 = 0;
LABEL_22:
        if ( HIDWORD(v27) < v18 )
        {
          v22 = v17;
          sub_22134E0(&ptr, v28, v18, 8);
          v19 = (unsigned int)v27;
          v17 = v22;
        }
        ++v11;
        v5 = v17;
        *((_QWORD *)ptr + v19) = v13;
        LODWORD(v27) = v27 + 1;
        if ( v12 == v11 )
          break;
      }
    }
  }
  v20 = 0;
  if ( (_DWORD)v27 == 1 )
    v20 = *(_QWORD *)ptr;
  if ( ptr != v28 )
    free(ptr);
  return v20;
}

