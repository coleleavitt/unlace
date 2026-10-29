__int64 __fastcall sub_3836A0(
        __int64 *a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  char *v11; // rbp
  unsigned int v12; // ebx
  __int64 v13; // rax
  const char *v14; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  double v22; // xmm4_8
  double v23; // xmm5_8
  const char *v24; // [rsp+0h] [rbp-1068h] BYREF
  __int128 v25; // [rsp+8h] [rbp-1060h]
  char v26[4104]; // [rsp+20h] [rbp-1048h] BYREF
  unsigned __int64 v27; // [rsp+1028h] [rbp-40h]

  v10 = *a1;
  v27 = __readfsqword(0x28u);
  v11 = (char *)a2;
  v24 = nullptr;
  v25 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64 *, const char *, const char **))(v10 + 32))(a1, a2, &v24);
  if ( (_BYTE)v12 )
  {
LABEL_7:
    sub_383150(v11, (__m128i)0LL);
    v12 = 1;
  }
  else
  {
    a2 = (const char *)&v24;
    v13 = (*(__int64 (__fastcall **)(__int64 *, const char **))(*a1 + 16))(a1, &v24);
    v14 = (const char *)v13;
    if ( v13 )
    {
      a2 = (_BYTE *)&stru_1000;
      if ( (unsigned __int8)qdirname(v26, 4096, v13) )
      {
        a2 = v26;
        if ( !(unsigned __int8)sub_23B740(&qword_8CC000, v26) )
        {
          if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64 *))(*a1 + 8))(a1) + 16) & 1) != 0 )
          {
            a2 = &s1;
            if ( (_QWORD)v25 )
              a2 = v24;
            sub_169700(
              (int)"warning: read_file failed: %s\n",
              (__int64)a2,
              v16,
              v17,
              v18,
              v19,
              (__m128)0LL,
              a4,
              a5,
              a6,
              v20,
              v21,
              a9,
              a10,
              (char)v24);
          }
          else
          {
            while ( 1 )
            {
              a2 = &s1;
              if ( (_QWORD)v25 )
                a2 = v24;
              sub_169700(
                (int)"warning: read_file failed: %s\n",
                (__int64)a2,
                v16,
                v17,
                v18,
                v19,
                (__m128)0LL,
                a4,
                a5,
                a6,
                v20,
                v21,
                a9,
                a10,
                (char)v24);
              if ( !(unsigned __int8)sub_24D4C0(v14, 0.0, a4, a5, a6, v22, v23, a9, a10) )
                break;
              a2 = v11;
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, const char **))(*a1 + 32))(a1, v11, &v24) )
                goto LABEL_7;
            }
          }
        }
      }
    }
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, a2);
  }
  return v12;
}
