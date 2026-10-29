__int64 __fastcall sub_203ED60(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r15
  __m128i *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 (__fastcall **v18)(); // [rsp+0h] [rbp-488h] BYREF
  int v19; // [rsp+8h] [rbp-480h]
  __int128 v20; // [rsp+10h] [rbp-478h]
  __int64 v21; // [rsp+20h] [rbp-468h]
  char v22; // [rsp+28h] [rbp-460h]
  int v23; // [rsp+2Ch] [rbp-45Ch]
  __int64 v24; // [rsp+30h] [rbp-458h]
  __int64 v25; // [rsp+38h] [rbp-450h]
  _BYTE *v26; // [rsp+48h] [rbp-440h]
  __m128i si128; // [rsp+50h] [rbp-438h]
  _BYTE v28[16]; // [rsp+60h] [rbp-428h] BYREF
  __m128i v29[23]; // [rsp+70h] [rbp-418h] BYREF
  __int64 v30[85]; // [rsp+1E0h] [rbp-2A8h] BYREF

  v6 = a4;
  v20 = 0;
  v19 = 0;
  v18 = &off_2C75A88;
  v26 = v28;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
  v22 = 0;
  v23 = 1;
  v21 = 0;
  v24 = 0;
  v25 = 0;
  v28[8] = 0;
  sub_202EDF0((__int64)&v18, a2, (__int64)a3, a4, a5, a6);
  sub_20326F0(v29, 0, 0);
  if ( a3[1].m128i_i8[0] )
  {
    if ( sub_2032850(a3) )
    {
      if ( a3[1].m128i_i8[0] )
        v8 = sub_2032850(a3);
      else
        v8 = (__m128i *)a3[2].m128i_i64[1];
      goto LABEL_3;
    }
    goto LABEL_13;
  }
  v8 = (__m128i *)a3[2].m128i_i64[1];
  if ( !v8 )
LABEL_13:
    v8 = v29;
LABEL_3:
  if ( !*(_QWORD *)(a1 + 16) )
    goto LABEL_11;
  if ( ((__int64 (*)(void))sub_208B170)() )
  {
    v9 = *(_QWORD *)(sub_208B170(*(_QWORD *)(a1 + 16)) + 72);
    if ( v9 )
      sub_2032E40(a3, v9);
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 && sub_208B160(*(_QWORD *)(a1 + 16)) && (v11 = *(_QWORD *)(sub_208B160(v10) + 72)) != 0 )
    v12 = *(_QWORD *)(v11 + 40);
  else
LABEL_11:
    v12 = 0;
  sub_2036650((__int64)v30, (__int64)&v18, (__int64)v8, v12, 0, v6, 0);
  sub_203EA70(v30, a1);
  sub_202F280((__int64)v30);
  sub_202EF80((__int64)v29);
  return sub_20322F0((__int64)&v18, a1, v13, v14, v15, v16);
}
