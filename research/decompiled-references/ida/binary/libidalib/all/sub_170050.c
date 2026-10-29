__int64 __fastcall sub_170050(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r12
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-D0h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+10h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+18h] [rbp-C0h]
  int v13; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-B0h]
  __int64 v15; // [rsp+30h] [rbp-A8h]
  int v16; // [rsp+38h] [rbp-A0h]
  __int64 v17; // [rsp+40h] [rbp-98h]
  __int128 v18; // [rsp+48h] [rbp-90h]
  __m128i si128; // [rsp+58h] [rbp-80h]
  int v20; // [rsp+68h] [rbp-70h]
  char v21; // [rsp+70h] [rbp-68h]
  __int64 v22; // [rsp+78h] [rbp-60h]
  int v23; // [rsp+80h] [rbp-58h]
  __int64 v24; // [rsp+88h] [rbp-50h]
  __int128 v25; // [rsp+90h] [rbp-48h]
  __int64 v26; // [rsp+A0h] [rbp-38h]
  char v27; // [rsp+A8h] [rbp-30h]
  unsigned __int64 v28; // [rsp+B8h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  v10 = -1;
  if ( !qword_254470 )
    goto LABEL_13;
  v18 = 0;
  v13 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
  v14 = 0;
  v15 = -1;
  v16 = -1;
  v17 = 0;
  v20 = -1;
  v21 = 0;
  v22 = -1;
  v23 = -2;
  v24 = -1;
  v26 = 0xFFFFFFFFLL;
  v27 = 0;
  v25 = 0;
  sub_15F500(qword_254470, (__int64)&v13, 2u);
  if ( v13 != 5 )
  {
    if ( v23 < -1 )
      goto LABEL_6;
    goto LABEL_4;
  }
  v8 = si128.m128i_i64[0];
  if ( si128.m128i_i64[0] == -1 )
    v8 = v22;
  v10 = v8;
  if ( v23 >= -1 )
  {
LABEL_4:
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
  }
LABEL_6:
  clear_tinfo_t();
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  if ( v10 == -1 )
  {
LABEL_13:
    v10 = xmmword_2528A0;
    if ( !(unsigned __int8)sub_16F580((__int64)&v10, (__int64)"Please enter the watch address") || v10 == -1 )
      return 1;
  }
  sub_16FF30(a1);
  v11 = (__int64 (__fastcall **)())(&dword_0 + 1);
  netnode_supset();
  v1 = qword_255530;
  v2 = v10;
  v3 = *(__int64 **)(qword_255530 + 760);
  v4 = v3[1];
  v5 = *v3;
  if ( v3[2] < (unsigned __int64)(v4 + 1) )
  {
    v9 = qvector_reserve();
    v1 = qword_255530;
    v4 = v3[1];
    *v3 = v9;
    v5 = v9;
  }
  *(_QWORD *)(v5 + 8 * v4) = v2;
  ++v3[1];
  v11 = off_2356F8;
  v12 = 0x22B00000000LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v1 + 760) + 8LL);
  LODWORD(v12) = 0x7FFFFFFF;
  HIDWORD(v12) = ((_DWORD)v6 == 0) + (_DWORD)v6 - 1;
  sub_15E330(v1, *(_QWORD *)(v1 + 888), (__int64)&v11);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_255530 + 256LL))(qword_255530, 2, 1);
  return 1;
}

