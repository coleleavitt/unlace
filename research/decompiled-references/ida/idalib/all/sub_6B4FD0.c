unsigned __int64 __fastcall sub_6B4FD0(
        __int64 *a1,
        unsigned int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v11; // rdi
  __int64 v13; // r14
  const char *v14; // rax
  size_t v15; // rax
  size_t v16; // r15
  size_t v17; // r13
  const char *v18; // rsi
  char *v20; // r13
  double v21; // xmm4_8
  double v22; // xmm5_8
  size_t v23; // r15
  size_t v24; // r15
  char *v25; // r8
  size_t v26; // r15
  __int64 *v27; // rdi
  char *v28; // rdx
  char *v29; // rax
  char *v30; // [rsp+8h] [rbp-108h]
  char *v31; // [rsp+8h] [rbp-108h]
  char *v32; // [rsp+8h] [rbp-108h]
  const char *src; // [rsp+18h] [rbp-F8h]
  unsigned __int8 v34[4]; // [rsp+2Ch] [rbp-E4h] BYREF
  char *v35; // [rsp+30h] [rbp-E0h] BYREF
  char *s; // [rsp+38h] [rbp-D8h] BYREF
  char *v37; // [rsp+40h] [rbp-D0h] BYREF
  char *v38; // [rsp+48h] [rbp-C8h] BYREF
  void *v39; // [rsp+50h] [rbp-C0h] BYREF
  __int128 v40; // [rsp+58h] [rbp-B8h]
  void *v41; // [rsp+70h] [rbp-A0h] BYREF
  __int128 v42; // [rsp+78h] [rbp-98h]
  void *v43; // [rsp+90h] [rbp-80h] BYREF
  __int128 v44; // [rsp+98h] [rbp-78h]
  void *ptr; // [rsp+B0h] [rbp-60h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-58h]
  _BYTE v47[4]; // [rsp+D4h] [rbp-3Ch] BYREF
  unsigned __int64 v48; // [rsp+D8h] [rbp-38h]

  v11 = *a1;
  v48 = __readfsqword(0x28u);
  v13 = *(_QWORD *)(v11 + 8);
  v14 = (const char *)sub_64DFD0(v11, v13, a2, nullptr);
  v39 = nullptr;
  v40 = 0;
  if ( v14 )
  {
    src = v14;
    v15 = strlen(v14);
    v16 = v15 + 1;
    v17 = v15;
    v39 = (void *)qvector_reserve(&v39, 0, v15 + 1, 1);
    *(_QWORD *)&v40 = v16;
    memmove(v39, src, v17);
    *((_BYTE *)v39 + v17) = 0;
    if ( (unsigned __int64)v40 <= 1 )
    {
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39);
      }
    }
    else
    {
      if ( sub_6B9860(*a1, v39, 0, 0) == -1 )
      {
        if ( *((_BYTE *)a1 + 40) )
        {
          v18 = haystack;
          if ( (_QWORD)v40 )
            v18 = (const char *)v39;
          sub_6B9860(*a1, v18, 1, 1);
        }
        else
        {
          sub_6B4500(a1, -1);
        }
      }
      if ( (unsigned __int8)get_numbered_type(
                              v13,
                              a2,
                              (unsigned int)&v35,
                              (unsigned int)&s,
                              (unsigned int)&v37,
                              (unsigned int)&v38,
                              (__int64)v34) )
      {
        v20 = (char *)sub_5E6DC0(*(_QWORD *)*a1, (__int64)v47, v13, (__int64)v35, (const char *)v39, 0, nullptr);
        if ( v35 != v20 )
        {
          if ( *((_BYTE *)a1 + 40) )
          {
            v41 = nullptr;
            v42 = 0;
            if ( s )
            {
              v30 = s;
              v23 = strlen(s);
              v41 = (void *)qvector_reserve(&v41, 0, v23 + 1, 1);
              *(_QWORD *)&v42 = v23 + 1;
              memmove(v41, v30, v23);
              *((_BYTE *)v41 + v23) = 0;
            }
            v43 = nullptr;
            v44 = 0;
            if ( v37 )
            {
              v31 = v37;
              v24 = strlen(v37);
              v43 = (void *)qvector_reserve(&v43, 0, v24 + 1, 1);
              *(_QWORD *)&v44 = v24 + 1;
              memmove(v43, v31, v24);
              *((_BYTE *)v43 + v24) = 0;
            }
            v25 = v38;
            ptr = nullptr;
            v46 = 0;
            if ( v38 )
            {
              v32 = v38;
              v26 = strlen(v38);
              ptr = (void *)qvector_reserve(&ptr, 0, v26 + 1, 1);
              *(_QWORD *)&v46 = v26 + 1;
              memmove(ptr, v32, v26);
              *((_BYTE *)ptr + v26) = 0;
              v27 = (__int64 *)*a1;
              if ( (unsigned __int64)v46 <= 1 )
                v25 = nullptr;
              else
                v25 = (char *)ptr;
            }
            else
            {
              v27 = (__int64 *)*a1;
            }
            v28 = nullptr;
            if ( (unsigned __int64)v44 > 1 )
              v28 = (char *)v43;
            v29 = nullptr;
            if ( (unsigned __int64)v42 > 1 )
              v29 = (char *)v41;
            if ( (unsigned int)sub_65C7F0(
                                 v27,
                                 v13,
                                 a2,
                                 4,
                                 (char *)v39,
                                 v20,
                                 0.0,
                                 a4,
                                 a5,
                                 a6,
                                 v21,
                                 v22,
                                 a9,
                                 a10,
                                 v29,
                                 v28,
                                 v25,
                                 v34) )
              sub_651490((__int64 *)*a1, v13, a2);
            if ( ptr )
            {
              *(_QWORD *)&v46 = 0;
              qfree(ptr);
            }
            if ( v43 )
            {
              *(_QWORD *)&v44 = 0;
              qfree(v43);
            }
            if ( v41 )
            {
              *(_QWORD *)&v42 = 0;
              qfree(v41);
            }
          }
          else
          {
            sub_6B4500(a1, -1);
          }
        }
      }
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39);
      }
    }
  }
  return v48 - __readfsqword(0x28u);
}
