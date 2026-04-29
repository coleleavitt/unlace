unsigned __int64 __fastcall sub_12E10(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+0h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+10h] [rbp-98h]
  __int64 v5; // [rsp+20h] [rbp-88h]
  __int16 v6; // [rsp+28h] [rbp-80h]
  __int128 v7; // [rsp+30h] [rbp-78h]
  __int64 v8; // [rsp+40h] [rbp-68h]
  __int64 v9; // [rsp+48h] [rbp-60h]
  int v10; // [rsp+50h] [rbp-58h]
  __int64 v11; // [rsp+58h] [rbp-50h]
  int v12; // [rsp+60h] [rbp-48h]
  __int64 v13; // [rsp+68h] [rbp-40h]
  int v14; // [rsp+70h] [rbp-38h]
  __int64 v15; // [rsp+78h] [rbp-30h]
  int v16; // [rsp+80h] [rbp-28h]
  __int64 v17; // [rsp+88h] [rbp-20h]
  unsigned __int64 v18; // [rsp+98h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  v3[0] = a1;
  v6 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_21450);
  v3[1] = a2;
  v5 = 0;
  v8 = 0xFFFFFFFFLL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v7 = 0;
  ((void (__fastcall *)(_QWORD *))add_func_ex)(v3);
  return v18 - __readfsqword(0x28u);
}
