__int64 __fastcall sub_76A720(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // ecx
  const char **v4; // r15
  unsigned int v5; // ebx
  const char *v6; // r12
  size_t v7; // rax
  int v8; // edx
  int v9; // edx
  unsigned int v10; // eax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  const char ***v13; // rbp
  const char ***v14; // r13
  const char **v15; // r12
  const char *v16; // r14
  size_t v17; // rax
  int v18; // edx
  int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // r15d
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  int v26; // [rsp+0h] [rbp-78h]
  unsigned int v27; // [rsp+0h] [rbp-78h]
  __int64 v28; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31; // [rsp+28h] [rbp-50h]
  _BYTE v32[72]; // [rsp+30h] [rbp-48h] BYREF

  v29 = a3;
  v3 = a3;
  v28 = a2;
  if ( a3 <= 1 )
    return 0;
  v4 = (const char **)&off_47D8800;
  v5 = 1;
  ptr = v32;
  v31 = 0x200000000LL;
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 )
    {
      v26 = v3;
      v7 = strlen(*v4);
      v3 = v26;
      v8 = v7;
    }
    else
    {
      v8 = 0;
      v7 = 0;
    }
    v9 = v8 - v3;
    if ( v9 <= 0 )
      v9 = -v9;
    if ( v5 >= v9 )
    {
      v10 = sub_25E41D0(&v28, v6, v7, 1, v5);
      if ( v10 < v5 )
      {
        LODWORD(v31) = 0;
        v11 = 1;
        v12 = 0;
        goto LABEL_12;
      }
      if ( v5 == v10 )
        break;
    }
    v4 += 3;
    if ( qword_47D9AA8 == (__int64 *)v4 )
      goto LABEL_15;
LABEL_4:
    v3 = v29;
  }
  v12 = (unsigned int)v31;
  v11 = (unsigned int)v31 + 1LL;
LABEL_12:
  if ( HIDWORD(v31) < v11 )
  {
    v27 = v10;
    sub_25D6060(&ptr, v32, v11, 8);
    v12 = (unsigned int)v31;
    v10 = v27;
  }
  v5 = v10;
  *((_QWORD *)ptr + v12) = v4;
  v4 += 3;
  LODWORD(v31) = v31 + 1;
  if ( qword_47D9AA8 != (__int64 *)v4 )
    goto LABEL_4;
LABEL_15:
  v13 = *(const char ****)(a1 + 16);
  v14 = &v13[*(unsigned int *)(a1 + 24)];
  if ( v14 != v13 )
  {
    while ( 1 )
    {
      v15 = *v13;
      if ( (*((_BYTE *)*v13 + 21) & 4) != 0 )
        goto LABEL_17;
      v16 = *v15;
      if ( *v15 )
      {
        v17 = strlen(*v15);
        v18 = v17;
      }
      else
      {
        v18 = 0;
        v17 = 0;
      }
      v19 = v18 - v29;
      if ( v19 <= 0 )
        v19 = -v19;
      if ( v5 < v19 )
        goto LABEL_17;
      v20 = sub_25E41D0(&v28, v16, v17, 1, v5);
      v21 = v20;
      if ( v20 >= v5 )
      {
        if ( v5 == v20 )
        {
          v23 = (unsigned int)v31;
          v22 = (unsigned int)v31 + 1LL;
          goto LABEL_26;
        }
LABEL_17:
        if ( v14 == ++v13 )
          break;
      }
      else
      {
        LODWORD(v31) = 0;
        v22 = 1;
        v23 = 0;
LABEL_26:
        if ( HIDWORD(v31) < v22 )
        {
          sub_25D6060(&ptr, v32, v22, 8);
          v23 = (unsigned int)v31;
        }
        ++v13;
        v5 = v21;
        *((_QWORD *)ptr + v23) = v15;
        LODWORD(v31) = v31 + 1;
        if ( v14 == v13 )
          break;
      }
    }
  }
  v24 = 0;
  if ( (_DWORD)v31 == 1 )
    v24 = *(_QWORD *)ptr;
  if ( ptr != v32 )
    free(ptr);
  return v24;
}

