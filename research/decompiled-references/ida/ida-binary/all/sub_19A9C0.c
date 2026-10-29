__int64 __fastcall sub_19A9C0(
        _QWORD *a1,
        __int64 a2,
        int *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11)
{
  __int16 v11; // ax
  unsigned __int64 v13; // r13
  int v15; // eax
  __int64 (__fastcall *v16)(int, _QWORD *, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rsi
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 (*v21)(); // rcx
  __int64 v23; // r13
  const void *v24; // r14
  __int64 (__fastcall *v25)(int, _QWORD *, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // r15
  void *v26; // rdi
  __int64 v27; // [rsp-10h] [rbp-90h]
  int v29; // [rsp+14h] [rbp-6Ch] BYREF
  __int64 v30; // [rsp+18h] [rbp-68h] BYREF
  __int64 v31; // [rsp+20h] [rbp-60h] BYREF
  void *src; // [rsp+28h] [rbp-58h] BYREF
  __int128 v33; // [rsp+30h] [rbp-50h]
  int v34; // [rsp+40h] [rbp-40h]
  unsigned __int64 v35; // [rsp+48h] [rbp-38h]

  v11 = 35;
  v13 = a1[1];
  v35 = __readfsqword(0x28u);
  v31 = 40;
  src = nullptr;
  v34 = 0;
  v33 = 0;
  if ( v13 > 1 )
  {
    v24 = (const void *)*a1;
    src = (void *)qvector_reserve(&src, 0, v13, 1);
    *(_QWORD *)&v33 = v13;
    memmove(src, v24, v13 - 1);
    *((char *)src + v13 - 1) = 0;
    v11 = v34 | 0x23;
  }
  LOWORD(v34) = v11;
  v15 = *a3;
  HIWORD(v34) = 4;
  v29 = v15;
  v16 = sub_1999C0;
  v30 = 4;
  v17 = sub_1697D0(
          (int)"BUTTON YES OK\n"
               "STARTITEM 10\n"
               "@0:1488[]\n"
               "Edit script\n"
               "%/%*<Please enter script ~b~ody:t10::60:::>\n"
               "<~S~cripting language:b20:0:::> <~T~ab size:D30:5:5::> <#Compile script (syntax check)#~C~ompile:B40::::>\n",
          (__int64)sub_1999C0,
          a2,
          (__int64)&v31,
          a2,
          (__int64)&v29,
          (__m128)0LL,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          (char)&v30);
  v19 = v27;
  v20 = v17;
  v21 = sub_199280;
  if ( v17 == 1 )
  {
    v23 = v33;
    if ( (unsigned __int64)v33 > 1 )
    {
      v25 = (__int64 (__fastcall *)(int, _QWORD *, __m128, __m128, __m128, __m128, double, double, __m128, __m128))src;
      v26 = (void *)*a1;
      if ( a1[2] < (unsigned __int64)v33 )
      {
        v26 = (void *)qvector_reserve(a1, *a1, v33, 1);
        *a1 = v26;
      }
      v16 = v25;
      a1[1] = v23;
      memmove(v26, v25, v23 - 1);
      *(_BYTE *)(*a1 + v23 - 1) = 0;
    }
    else
    {
      a1[1] = 0;
    }
    *a3 = v29;
  }
  LOBYTE(v20) = v20 == 1;
  if ( src )
  {
    *(_QWORD *)&v33 = 0;
    qfree(src, v16, v19, v21, v18);
  }
  return v20;
}
