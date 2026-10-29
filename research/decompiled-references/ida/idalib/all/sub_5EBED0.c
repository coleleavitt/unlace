__int64 __fastcall sub_5EBED0(_QWORD *a1)
{
  const char *v1; // rbp
  bool v2; // zf
  __int64 v4; // r12
  __int64 v5; // r13
  bool v6; // bp
  int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  const char *v13; // rsi
  char *v14; // rax
  char v15; // di
  __int64 v16; // rax
  char *v17; // rax
  char *v18; // rdi
  __int64 v19; // r14
  __int64 v20; // r15
  char *v21; // r12
  void *v22; // rdi
  void *v23; // rdi
  char *v24; // rdi
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // r12
  char *v28; // rbx
  void *v29; // rdi
  void *v30; // rdi
  __int64 v31; // [rsp+8h] [rbp-A0h]
  __int64 v32; // [rsp+18h] [rbp-90h] BYREF
  __int64 v33; // [rsp+20h] [rbp-88h] BYREF
  void *v34; // [rsp+28h] [rbp-80h] BYREF
  void *v35; // [rsp+30h] [rbp-78h] BYREF
  int v36[4]; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+48h] [rbp-60h]
  int v38[4]; // [rsp+50h] [rbp-58h]
  int v39; // [rsp+60h] [rbp-48h] BYREF
  char v40; // [rsp+64h] [rbp-44h]
  int v41[2]; // [rsp+68h] [rbp-40h]

  v1 = haystack;
  v2 = a1[6] == 0;
  *(_QWORD *)v41 = __readfsqword(0x28u);
  if ( !v2 )
    v1 = (const char *)a1[5];
  v4 = sub_5EBE00((__int64)a1, v1, &v32);
  if ( v4 )
  {
    v5 = v32;
    v6 = (unsigned int)sub_535940(v32) != 2;
    if ( (*(_BYTE *)(v5 + 52) & 7) != 0 )
      v7 = 1 << ((*(_BYTE *)(v5 + 52) & 7) - 1);
    else
      LOBYTE(v7) = getinf(61);
    v8 = *(_QWORD *)(v4 + 48);
    goto LABEL_7;
  }
  if ( !(unsigned int)get_named_type(a1[31], (_DWORD)v1, 64, (unsigned int)&v34, 0, 0, 0, 0, (__int64)&v33)
    && !(unsigned int)get_named_type(a1[31], (_DWORD)v1, 72, (unsigned int)&v34, 0, 0, 0, 0, (__int64)&v33) )
  {
LABEL_13:
    set_error_string(0, v1);
    return set_qerrno(53);
  }
  v13 = (const char *)v34;
  v14 = resolve_typedef(a1[31], (char *)v34);
  v34 = v14 + 1;
  v15 = *v14;
  if ( (*v14 & 0x3F) == 0x2D )
  {
    if ( (unsigned int)sub_6B38E0(&v34, 0) == -1 )
      goto LABEL_13;
    v17 = (char *)v34;
    v35 = nullptr;
    ptr = nullptr;
    v39 = 0;
    v40 = 0x80;
    *(_OWORD *)v36 = 0;
    *(_OWORD *)v38 = 0;
    if ( *(_BYTE *)v34 == 0xFE )
    {
      if ( !(unsigned __int8)sub_5383A0((unsigned __int8 **)&v34, &v39, nullptr) )
      {
        if ( ptr )
        {
          *(_QWORD *)v38 = 0;
          qfree(ptr);
        }
        v24 = (char *)v35;
        if ( v35 )
        {
          v25 = *(_QWORD *)v36;
          v26 = 0;
          v27 = 0;
          if ( *(_QWORD *)v36 )
          {
            do
            {
              v28 = &v24[v26];
              v29 = *(void **)&v24[v26 + 24];
              if ( v29 )
              {
                *((_QWORD *)v28 + 4) = 0;
                qfree(v29);
              }
              v30 = *(void **)v28;
              if ( *(_QWORD *)v28 )
              {
                *((_QWORD *)v28 + 1) = 0;
                qfree(v30);
              }
              ++v27;
              v24 = (char *)v35;
              v26 += 56;
            }
            while ( v25 != v27 );
          }
          *(_QWORD *)v36 = 0;
          qfree(v24);
        }
        goto LABEL_13;
      }
      v17 = (char *)v34;
    }
    v34 = v17 + 1;
    v40 = *v17;
    v6 = (unsigned int)sub_535940((__int64)&v35) != 2;
    if ( (v40 & 7) != 0 )
      v7 = 1 << ((v40 & 7) - 1);
    else
      LOBYTE(v7) = getinf(61);
    if ( ptr )
    {
      *(_QWORD *)v38 = 0;
      qfree(ptr);
    }
    v18 = (char *)v35;
    if ( v35 )
    {
      v31 = *(_QWORD *)v36;
      if ( *(_QWORD *)v36 )
      {
        v19 = 0;
        v20 = 0;
        do
        {
          v21 = &v18[v19];
          v22 = *(void **)&v18[v19 + 24];
          if ( v22 )
          {
            *((_QWORD *)v21 + 4) = 0;
            qfree(v22);
          }
          v23 = *(void **)v21;
          if ( *(_QWORD *)v21 )
          {
            *((_QWORD *)v21 + 1) = 0;
            qfree(v23);
          }
          v18 = (char *)v35;
          ++v20;
          v19 += 56;
        }
        while ( v31 != v20 );
      }
      *(_QWORD *)v36 = 0;
      qfree(v18);
    }
  }
  else
  {
    v6 = (unsigned int)sub_535040(v15) == 1;
    LOBYTE(v7) = sub_565B80(v15, v13);
  }
  v8 = v33;
LABEL_7:
  v9 = a1[50];
  v10 = a1[49];
  if ( a1[51] < (unsigned __int64)(v9 + 1) )
  {
    v16 = qvector_reserve(a1 + 49, v10, v9 + 1, 16);
    a1[49] = v16;
    v10 = v16;
    v9 = a1[50];
  }
  v11 = 16 * v9 + v10;
  *(_QWORD *)v11 = v8;
  *(_BYTE *)(v11 + 8) = v7;
  *(_BYTE *)(v11 + 9) = v6;
  ++a1[50];
  return 0;
}
