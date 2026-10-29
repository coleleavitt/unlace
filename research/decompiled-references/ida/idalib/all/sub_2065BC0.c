_QWORD *__fastcall sub_2065BC0(_QWORD *a1, __int64 a2, char *a3, __int64 a4)
{
  char v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  void *v9; // rax
  unsigned __int8 v10; // al
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r15
  unsigned int v14; // r13d
  __m128i *v15; // rax
  __m128i si128; // xmm0
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned __int8 v19; // [rsp+Eh] [rbp-DAh] BYREF
  unsigned __int8 v20; // [rsp+Fh] [rbp-D9h] BYREF
  __int64 *v21; // [rsp+10h] [rbp-D8h] BYREF
  void *v22; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-A0h]
  const char *v24; // [rsp+50h] [rbp-98h] BYREF
  __int64 v25; // [rsp+58h] [rbp-90h]
  __int64 v26; // [rsp+60h] [rbp-88h]
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __int64 v28; // [rsp+78h] [rbp-70h]
  _BYTE v29[104]; // [rsp+80h] [rbp-68h] BYREF

  v4 = *a3;
  ptr = v29;
  v28 = 0x300000000LL;
  if ( a4 )
  {
    --a4;
    ++a3;
  }
  v22 = a3;
  v23 = a4;
  sub_22476F0(&v22, &ptr, 58, 0xFFFFFFFFLL, 1);
  if ( (unsigned __int64)(unsigned int)v28 - 2 > 1 )
  {
    LOBYTE(v21) = v4;
    v22 = v21;
    v24 = "<size>:<abi>[:<pref>]";
    LOWORD(v26) = 776;
    sub_2065130(
      (__int64)a1,
      (__int64)"<size>:<abi>[:<pref>]",
      v5,
      v6,
      776,
      v7,
      v21,
      v23,
      (int)"<size>:<abi>[:<pref>]",
      v25,
      776);
    goto LABEL_5;
  }
  sub_2065000(&v22, *(_QWORD *)ptr, *((_QWORD *)ptr + 1), &v21, (__int64)"size", 4);
  v9 = v22;
  if ( v22 )
    goto LABEL_9;
  v19 = 0;
  sub_2065400(&v22, *((_QWORD *)ptr + 2), *((_QWORD *)ptr + 3), &v19, (__int64)"ABI", 3, 0);
  v9 = v22;
  if ( v22 )
    goto LABEL_9;
  v10 = v19;
  if ( v4 == 105 && (_DWORD)v21 == 8 )
  {
    if ( v19 )
    {
      v17 = sub_2220490();
      sub_A09EA0((__int64)a1, v17, v18, "i8 must be 8-bit aligned");
      goto LABEL_5;
    }
    v20 = 0;
    if ( (unsigned int)v28 <= 2 )
    {
LABEL_16:
      sub_20659F0(a2, v4, (unsigned int)v21, v19, v20);
      *a1 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v20 = v19;
    if ( (unsigned int)v28 <= 2 )
      goto LABEL_13;
  }
  sub_2065400(&v22, *((_QWORD *)ptr + 4), *((_QWORD *)ptr + 5), &v20, (__int64)"preferred", 9, 0);
  v9 = v22;
  if ( v22 )
  {
LABEL_9:
    *a1 = v9;
    goto LABEL_5;
  }
  v10 = v19;
LABEL_13:
  if ( v20 >= v10 )
    goto LABEL_16;
  v11 = sub_2220490();
  v13 = v12;
  v14 = v11;
  v22 = &v24;
  v15 = (__m128i *)operator new(0x3Au);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AB050);
  strcpy(v15[3].m128i_i8, "alignment");
  *v15 = si128;
  v15[1] = _mm_load_si128((const __m128i *)&xmmword_23AB060);
  v22 = v15;
  v15[2] = _mm_load_si128((const __m128i *)&xmmword_23AB070);
  v24 = (_BYTE *)(&word_38 + 1);
  v23 = 57;
  sub_22205D0(a1, &v22, v14, v13);
  if ( v22 != &v24 )
    operator delete(v22);
LABEL_5:
  if ( ptr != v29 )
    free(ptr);
  return a1;
}
