/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_slice
// Address: 0x0000000100038A40

//----- (0000000100038A40) ----------------------------------------------------
__int64 __fastcall get_idcv_slice(unsigned __int8 *a1, unsigned __int8 *a2, __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int8 *v8; // r12
  int v10; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r13
  bool v15; // cf
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  const void *v20; // r14
  size_t v21; // r13
  void *v22; // rdi
  void *v23; // r15
  __int64 v24; // r13
  __int64 v25; // r14
  _QWORD *v26; // r13
  int v27; // eax
  const char *v28; // rdi
  char *v29; // r15
  int v30; // eax
  _BYTE *v31; // rcx
  size_t v32; // rax
  size_t v33; // r15
  void *v34; // rax
  __int64 *v35; // rax
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  bool v38; // zf
  __int128 v39; // xmm0
  __int128 v40; // xmm0
  int v41; // eax
  void *v42; // rdi
  char v43; // bl
  unsigned __int64 v44; // [rsp+8h] [rbp-C8h]
  unsigned __int64 v45; // [rsp+10h] [rbp-C0h]
  void *v46; // [rsp+18h] [rbp-B8h]
  _QWORD *v47; // [rsp+20h] [rbp-B0h]
  unsigned __int64 v48; // [rsp+28h] [rbp-A8h] BYREF
  __m256i *v49; // [rsp+38h] [rbp-98h] BYREF
  __m256i __p; // [rsp+40h] [rbp-90h] BYREF
  char __s[32]; // [rsp+60h] [rbp-70h] BYREF
  __m256i v52; // [rsp+80h] [rbp-50h] BYREF

  if ( a2 == nullptr || a1 == nullptr )
    return set_qerrno();
  v8 = a2;
  while ( 1 )
  {
    v10 = *v8;
    if ( v10 != 10 )
      break;
    v8 = deref_idcv(v8, 0);
    if ( !v8 )
      return get_qerrno();
  }
  if ( v10 != 5 )
  {
    if ( v10 == 7 )
    {
      v12 = *((_QWORD *)v8 + 2);
      v13 = a4;
      v14 = 0;
      v15 = v12 == 0;
      v16 = v12 - 1;
      if ( v15 )
        v16 = 0;
      v17 = v16 + a3;
      if ( (__int64)(v16 + a3) <= 0 )
        v17 = 0;
      if ( a3 >= 0 )
        v17 = a3;
      v18 = v16;
      if ( v17 < v16 )
        v18 = v17;
      v19 = v18 + 1;
      if ( (a5 & 1) == 0 )
        v19 = v13;
      if ( (__int64)(v19 + v16) > 0 )
        v14 = v19 + v16;
      if ( v19 >= 0 )
        v14 = v19;
      if ( v14 < v18 )
        v14 = v17;
      if ( v14 >= v16 )
        v14 = v16;
      v20 = (const void *)(v18 + *((_QWORD *)v8 + 1));
      memset(&v52, 0, 24);
      v21 = v14 - v18;
      if ( v21 )
      {
        if ( v21 == -1 )
        {
          v22 = nullptr;
        }
        else
        {
          v22 = qvector_reserve((__int64)&v52, nullptr, v21 + 1, 1u);
          v52.i64[0] = (__int64)v22;
        }
        v52.i64[1] = v21 + 1;
        memmove(v22, v20, v21);
        *(_BYTE *)(v52.i64[0] + v21) = 0;
      }
      v41 = *a1;
      if ( v41 == 5 )
      {
        sub_1000380B0(*((unsigned __int8 ***)a1 + 1), a1);
      }
      else if ( v41 == 7 )
      {
        v42 = *((void **)a1 + 1);
        if ( v42 )
        {
          *((_QWORD *)a1 + 2) = 0;
          qfree(v42);
          *((_QWORD *)a1 + 1) = 0;
          *((_QWORD *)a1 + 3) = 0;
        }
      }
      *a1 = 7;
      *((_QWORD *)a1 + 1) = v52.i64[0];
      *((_OWORD *)a1 + 1) = *(__int128 *)((char *)v52.i128 + 8);
LABEL_85:
      LODWORD(v8) = 0;
      return (unsigned int)v8;
    }
    return set_qerrno();
  }
  if ( (a5 & 1) == 0 )
  {
    memset(&__p.u32[2], 0, 24);
    __p.i8[0] = 5;
    v23 = operator new(0x20u);
    sub_100032160((__int64)v23, 0);
    v45 = a4;
    v44 = a3;
    __p.i64[1] = (__int64)v23;
    v24 = *((_QWORD *)v8 + 1);
    memset(&v52, 0, 24);
    v52.i64[0] = (__int64)qvector_reserve((__int64)&v52, nullptr, 3u, 1u);
    v52.i64[1] = 3;
    *(_WORD *)v52.i64[0] = -209;
    *(_BYTE *)(v52.i64[0] + 2) = 0;
    v25 = *(_QWORD *)(v24 + 8);
    v26 = (_QWORD *)(v24 + 8);
    v46 = (void *)v52.i64[0];
    v47 = v26;
    if ( v25 )
    {
      v8 = (unsigned __int8 *)v52.i64[0];
      if ( !v52.i64[1] )
        v8 = (unsigned __int8 *)_s1;
      do
      {
        v28 = _s1;
        if ( *(_QWORD *)(v25 + 40) )
          v28 = *(const char **)(v25 + 32);
        v27 = strcmp(v28, (const char *)v8);
        if ( v27 >= 0 )
          v26 = (_QWORD *)v25;
        v25 = *(_QWORD *)(v25 + 8LL * ((unsigned int)v27 >> 31));
      }
      while ( v25 );
    }
    if ( v46 )
    {
      v52.i64[1] = 0;
      qfree(v46);
    }
    if ( v26 != v47 )
    {
      do
      {
        v29 = (char *)_s1;
        if ( v26[5] )
          v29 = (char *)v26[4];
        if ( strcmp(v29, ":") >= 0 )
          break;
        v30 = (unsigned __int8)*v29;
        if ( *v29 )
        {
          if ( v30 == 48 )
          {
            if ( !v29[1] )
            {
LABEL_57:
              qsscanf(v29, "%llu", &v48);
              if ( v48 >= v44 && (v48 < v45 || v45 == 0x7FFFFFFF) )
              {
                qsnprintf(__s, 32, "%llu", v48 - v44);
                if ( __p.i8[0] == 5 )
                {
                  memset(&v52, 0, 24);
                  v32 = strlen(__s);
                  v33 = v32;
                  v8 = (unsigned __int8 *)(v32 + 1);
                  if ( v32 == -1 )
                  {
                    v34 = nullptr;
                  }
                  else
                  {
                    v34 = qvector_reserve((__int64)&v52, nullptr, v32 + 1, 1u);
                    v52.i64[0] = (__int64)v34;
                  }
                  v52.i64[1] = (__int64)v8;
                  memmove(v34, __s, v33);
                  *(_BYTE *)(v52.i64[0] + v33) = 0;
                  v49 = &v52;
                  v35 = sub_100044870((__int64 **)__p.i64[1], (__int64)&v52, (__int64)&byte_10009086F, (__int64 *)&v49);
                  copy_idcv((unsigned __int8 *)v35 + 56, (unsigned __int8 *)v26 + 56);
                  if ( v52.i64[0] )
                  {
                    v52.i64[1] = 0;
                    qfree((void *)v52.i64[0]);
                  }
                }
                else
                {
                  LODWORD(v8) = set_qerrno();
                  if ( (_DWORD)v8 )
                  {
                    v43 = 0;
                    goto LABEL_73;
                  }
                }
              }
            }
          }
          else
          {
            v31 = v29 + 1;
            while ( (v30 & 0x80u) == 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v30] & 0x400) != 0 )
            {
              LOBYTE(v30) = *v31++;
              if ( !(_BYTE)v30 )
                goto LABEL_57;
            }
          }
        }
        v36 = (_QWORD *)v26[1];
        if ( v36 )
        {
          do
          {
            v37 = v36;
            v36 = (_QWORD *)*v36;
          }
          while ( v36 );
        }
        else
        {
          do
          {
            v37 = (_QWORD *)v26[2];
            v38 = *v37 == (_QWORD)v26;
            v26 = v37;
          }
          while ( !v38 );
        }
        v26 = v37;
      }
      while ( v37 != v47 );
    }
    v39 = *(_OWORD *)a1;
    v52.i128[1] = *((_OWORD *)a1 + 1);
    v52.i128[0] = v39;
    v40 = __p.i128[0];
    *((_OWORD *)a1 + 1) = __p.i128[1];
    *(_OWORD *)a1 = v40;
    __p = v52;
    v43 = 1;
LABEL_73:
    if ( __p.u8[0] == 5 )
    {
      sub_1000380B0((unsigned __int8 **)__p.i64[1], (unsigned __int8 *)&__p);
    }
    else if ( __p.u8[0] == 7 && __p.i64[1] )
    {
      __p.i64[2] = 0;
      qfree((void *)__p.i64[1]);
    }
    if ( !v43 )
      return (unsigned int)v8;
    goto LABEL_85;
  }
  qsnprintf(__s, 32, "%llu", a3);
  LODWORD(v8) = get_idcv_attr(a1, (__int64)v8, __s, 0);
  return (unsigned int)v8;
}
// 10009086F: using guessed type char byte_10009086F;
