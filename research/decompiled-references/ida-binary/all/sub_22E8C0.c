__int64 __fastcall sub_22E8C0(
        unsigned int *a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int16 v16; // dx
  bool v17; // zf
  const char *v18; // rdx
  int v19; // edx
  __int64 result; // rax
  unsigned __int16 v21; // ax
  char v22; // [rsp+0h] [rbp-28h]
  __int16 v23; // [rsp+Ch] [rbp-1Ch] BYREF
  __int16 v24; // [rsp+Eh] [rbp-1Ah] BYREF
  _QWORD v25[3]; // [rsp+10h] [rbp-18h] BYREF

  v14 = a1[1];
  v15 = *a1;
  v25[1] = __readfsqword(0x28u);
  v25[0] = v15;
  v23 = v14 & 3 ^ 2;
  v16 = 1;
  if ( (v14 & 4) == 0 )
    v16 = 2 * ((v14 >> 3) & 1);
  v17 = *((_QWORD *)a1 + 2) == 0;
  v24 = v16;
  v18 = &s1;
  if ( !v17 )
    v18 = *((const char **)a1 + 1);
  v19 = sub_1697D0(
          (int)"@0:1414[]\n"
               "Exception handling\n"
               "Code: %N\n"
               "Name: %A\n"
               "<#Suspend when the exception occurs#~S~uspend program:C>\n"
               "<#Let the application handle the exception#~P~ass to application:C>>\n"
               "Report:\n"
               "<#Open a warning with the exception that just occurred#~W~arn exception:R>\n"
               "<#Log exception informations to output window#~L~og exception:R>\n"
               "<#Do not warn, or log exceptions to output window#Silent, do ~n~ot warn or log:R>>\n",
          (__int64)v25,
          (__int64)v18,
          (__int64)&v23,
          (__int64)&v24,
          a14,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          v22);
  result = 0;
  if ( v19 )
  {
    v21 = v23 ^ 2;
    v23 ^= 2u;
    if ( v24 == 1 )
    {
      v21 |= 4u;
      v23 = v21;
    }
    else if ( v24 == 2 )
    {
      v21 |= 8u;
      v23 = v21;
    }
    a1[1] = v21;
    if ( dbg )
    {
      if ( (unsigned __int8)netnode_inited() )
        dbg_save_exceptions(&qword_8CC2F0);
    }
    return 1;
  }
  return result;
}
