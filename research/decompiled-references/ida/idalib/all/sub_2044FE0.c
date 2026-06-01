__int64 (__fastcall *__fastcall sub_2044FE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5))(__int64, __int64, __int64)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 (__fastcall **v17)(); // [rsp+10h] [rbp-488h] BYREF
  int v18; // [rsp+18h] [rbp-480h]
  __int128 v19; // [rsp+20h] [rbp-478h]
  __int64 v20; // [rsp+30h] [rbp-468h]
  char v21; // [rsp+38h] [rbp-460h]
  int v22; // [rsp+3Ch] [rbp-45Ch]
  __int64 v23; // [rsp+40h] [rbp-458h]
  __int64 v24; // [rsp+48h] [rbp-450h]
  _BYTE *v25; // [rsp+58h] [rbp-440h]
  __m128i si128; // [rsp+60h] [rbp-438h]
  _BYTE v27[16]; // [rsp+70h] [rbp-428h] BYREF
  __m128i v28[23]; // [rsp+80h] [rbp-418h] BYREF
  __int64 v29[85]; // [rsp+1F0h] [rbp-2A8h] BYREF

  sub_20326F0(v28, *(_QWORD *)(a1 + 40), 0);
  v19 = 0;
  v18 = 0;
  v17 = &off_2C75A88;
  v21 = 0;
  v22 = 1;
  v20 = 0;
  v23 = 0;
  v24 = 0;
  v25 = v27;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
  v27[8] = 0;
  sub_202EDF0((__int64)&v17, v10, v7, v8, v9, v10);
  sub_2036650((__int64)v29, (__int64)&v17, (__int64)v28, *(_QWORD *)(a1 + 40), a3, a5, a4);
  sub_2044110(v29, a1);
  sub_202F280((__int64)v29);
  sub_20322F0((__int64)&v17, a1, v11, v12, v13, v14);
  return sub_202EF80((__int64)v28);
}
