__int64 __fastcall sub_3FDEE0(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        char a5,
        __int64 a6,
        int a7,
        void *a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        __int64 a21)
{
  unsigned int v23; // r15d
  unsigned int v24; // eax
  __int64 v25; // rsi
  unsigned int v26; // r14d
  __int64 v27; // r9
  __int64 v28; // rsi
  char v31; // [rsp+13h] [rbp-45h] BYREF
  unsigned int v32; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  sub_3FDE00((__int64)a1, a2, a3, a4, a5);
  v23 = sub_3B90A0(a1, a2);
  v24 = sub_3B90A0(a1, a3);
  v25 = *a1;
  v32 = v23;
  v26 = v24;
  v31 = a5;
  if ( a4 )
  {
    sub_79B440(&v32, v25, v24, &v31, 1, 100);
    v27 = 68;
  }
  else
  {
    sub_79B440(&v32, v25, v24, &v31, 1, 120);
    v27 = 88;
  }
  v28 = *a1;
  v32 = v26;
  v31 = a5;
  sub_79B440(&v32, v28, v23, &v31, 1, v27);
  if ( !sub_3B8910((__int64)a1, a3) )
    return v33 - __readfsqword(0x28u);
  sub_3CA560(a1, a3);
  if ( (sub_3B9AA0((__int64)a1, a3, 4) & 0x600) == 0x200 )
    sub_3BD5D0((__int64)a1, a3);
  return sub_4C2750((int)a1, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
}

