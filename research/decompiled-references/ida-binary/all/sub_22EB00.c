__int64 __fastcall sub_22EB00(
        unsigned int a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  size_t v14; // rax
  size_t v15; // r12
  unsigned __int16 v16; // cx
  const char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  const char *v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  unsigned int v25; // ebx
  size_t v27; // r13
  char v28; // [rsp-4h] [rbp-68h]
  char v29; // [rsp-4h] [rbp-68h]
  __int16 v30; // [rsp+0h] [rbp-64h] BYREF
  __int16 v31; // [rsp+2h] [rbp-62h] BYREF
  __int64 v32; // [rsp+4h] [rbp-60h] BYREF
  void *v33; // [rsp+Ch] [rbp-58h] BYREF
  __int128 v34; // [rsp+14h] [rbp-50h]
  unsigned __int64 v35; // [rsp+24h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v30 = 3;
  v31 = 0;
  v33 = nullptr;
  v34 = 0;
  if ( a2 )
  {
    v14 = strlen(a2);
    v15 = v14;
    if ( v14 )
    {
      v27 = v14 + 1;
      v33 = (void *)qvector_reserve(&v33, 0, v14 + 1, 1);
      *(_QWORD *)&v34 = v27;
      memmove(v33, a2, v15);
      *((_BYTE *)v33 + v15) = 0;
    }
  }
  v32 = a1;
  while ( 1 )
  {
    v20 = (const char *)&v33;
    if ( !(unsigned int)sub_1697D0(
                          (int)"@0:1414[]\n"
                               "New exception\n"
                               "\n"
                               "<#Exception mnemonic name#Name:q:256:30::>\n"
                               "<#Exception code#Code:N::30::>\n"
                               "<#Suspend when the exception occurs#~S~uspend program:C>\n"
                               "<#Let the application handle the exception#~P~ass to application:C>>\n"
                               "Report:\n"
                               "<#Open a warning with the exception that just occurred#~W~arn exception:R>\n"
                               "<#Log exception informations to output window#~L~og exception:R>\n"
                               "<#Do not warn, or log exceptions to output window#Silent, do ~n~ot warn or log:R>>\n",
                          (__int64)&v33,
                          (__int64)&v32,
                          (__int64)&v30,
                          (__int64)&v31,
                          a14,
                          (__m128)0LL,
                          a4,
                          a5,
                          a6,
                          a7,
                          a8,
                          a9,
                          a10,
                          v28) )
    {
      v25 = 0;
      goto LABEL_15;
    }
    v16 = v30 ^ 2;
    v30 ^= 2u;
    if ( v31 == 1 )
    {
      v16 |= 4u;
      v30 = v16;
    }
    else if ( v31 == 2 )
    {
      v16 |= 8u;
      v30 = v16;
    }
    v17 = &s1;
    if ( (_QWORD)v34 )
      v17 = (const char *)v33;
    v20 = sub_22D500(v32, v17, nullptr, v16);
    if ( !v20 )
      break;
    sub_169630(
      (int)"AUTOHIDE NONE\n%s",
      (__int64)v20,
      v18,
      v19,
      v21,
      v22,
      (__m128)0LL,
      a4,
      a5,
      a6,
      v23,
      v24,
      a9,
      a10,
      v29);
  }
  v25 = 1;
LABEL_15:
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33, v20);
  }
  return v25;
}
