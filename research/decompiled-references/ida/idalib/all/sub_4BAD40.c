void __fastcall __noreturn sub_4BAD40(
        __int64 *a1,
        const __m128i *a2,
        unsigned int a3,
        int a4,
        const char *a5,
        __int64 a6,
        double a7)
{
  __int64 v11; // rsi
  int v12; // r9d
  unsigned int v13; // r12d
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // r13d
  __int64 v18; // r15
  __int64 v19; // rdi
  char v20; // al
  void *v21; // r14
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  const char *v25; // rbx
  size_t v26; // rax
  size_t v27; // r14
  void *v28; // r15
  __int64 v29; // rsi
  unsigned int v31; // [rsp+10h] [rbp-D8h]
  void *v33; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-A8h] BYREF
  void *v36; // [rsp+58h] [rbp-90h]
  void *v37[5]; // [rsp+70h] [rbp-78h] BYREF
  void *ptr; // [rsp+98h] [rbp-50h]
  unsigned __int64 v39; // [rsp+A8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  sub_4B7DA0(&v35, *a1, (__int64)a2, a6, 1, a7);
  v11 = *a1;
  v37[0] = v36;
  v31 = sub_7BE710(v37, v11, 1, 65);
  if ( a3 == -1 )
  {
    LODWORD(v33) = 0;
    v17 = 0;
    LODWORD(v34) = 0;
    v18 = a2[2].m128i_i64[1];
    if ( v31 )
    {
      while ( 1 )
      {
        v19 = *a1;
        v37[3] = (void *)-1LL;
        v37[4] = nullptr;
        ptr = nullptr;
        memset(v37, 0, 24);
        v20 = sub_4B8DE0(v19, (__int64)v37, (__int64)v36, v17);
        v21 = ptr;
        if ( v20 )
        {
          if ( !(*(unsigned int (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v18 + 160LL))(v18, ptr, a6) )
          {
            v22 = v34;
            if ( !(_DWORD)v34 )
            {
              v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 112LL))(v18);
              get_place_class(&v33, &v34, v23);
              v22 = v34;
            }
            if ( v22 <= 919
              || (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v18 + 168LL))(v18, v21, a6) )
            {
              break;
            }
          }
        }
        if ( v21 )
          qfree(v21);
        if ( v31 == ++v17 )
          goto LABEL_23;
      }
      if ( v21 )
        qfree(v21);
    }
    else
    {
LABEL_23:
      v17 = 0;
    }
    LODWORD(v37[0]) = v17;
    callui(187, (int)v37, (int)a2, a6, (int)&callui, v12);
  }
  memset(v37, 0, 24);
  if ( a5 )
  {
    if ( *a5 != 1 )
    {
      if ( a5 == (_BYTE *)&dword_0 + 1 )
      {
        if ( a3 < v31 )
        {
          v13 = 1;
          a5 = &byte_22F0C30;
          goto LABEL_8;
        }
      }
      else
      {
        if ( !*a5 )
        {
          sub_4B90B0((__int64)&v35, a3);
          v13 = 2;
          a5 = nullptr;
LABEL_9:
          sub_39ADA0(0x3Du, a3, a2, a5, v13);
          callui(78, a4, (int)&callui, v14, v15, v16);
        }
        if ( a3 < v31 )
        {
          v13 = 1;
LABEL_8:
          sub_4B7800((__int64)&v35, a3, a2, (__int64)a5);
          goto LABEL_9;
        }
      }
      v29 = *a1;
      v33 = v36;
      v34 = a3 + 1;
      sub_7BE7C0(&v33, v29, 1, &v34, 8, 65);
      v13 = 0;
      if ( a5 == (_BYTE *)&dword_0 + 1 )
        a5 = &byte_22F0C30;
      goto LABEL_8;
    }
    v25 = a5 + 1;
    v26 = strlen(v25);
    v27 = v26;
    if ( v26 )
    {
      v28 = (void *)(v26 + 1);
      v37[0] = (void *)qvector_reserve(v37, 0, v26 + 1, 1);
      v37[1] = v28;
      memmove(v37[0], v25, v27);
      *((_BYTE *)v37[0] + v27) = 0;
    }
  }
  else if ( a3 < v31 )
  {
    netnode_qsupstr(v36, v37, a3, 82);
  }
  else
  {
    v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2[2].m128i_i64[1] + 128LL))(a2[2].m128i_i64[1]);
    sub_4B7880((__int64)v37, v24);
  }
  sub_378F70();
}
