unsigned __int64 __fastcall sub_418A80(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v5; // rdi
  __m128i v6; // xmm1
  _QWORD *v7; // rbp
  unsigned int i; // ebx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __m128i v12; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+14h] [rbp-B4h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v16; // [rsp+30h] [rbp-98h]
  _QWORD *v17; // [rsp+40h] [rbp-88h] BYREF
  __int64 v18; // [rsp+48h] [rbp-80h] BYREF
  __int128 v19; // [rsp+50h] [rbp-78h]
  __int128 v20; // [rsp+60h] [rbp-68h]
  __int128 v21; // [rsp+70h] [rbp-58h]
  __int128 v22; // [rsp+80h] [rbp-48h]
  unsigned __int64 v23; // [rsp+98h] [rbp-30h]

  v3 = *(_QWORD **)(a2 + 1480);
  v23 = __readfsqword(0x28u);
  v19 = 0;
  v17 = v3;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v5 = *v3;
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_417B20, (__m128i)(unsigned __int64)sub_41BA90);
  sub_6141A0(v5, 26, &v18, 8);
  v6 = _mm_load_si128(&v12);
  v15[0] = a3;
  v15[1] = &v17;
  v16 = v6;
  if ( sub_417B20 )
  {
    v7 = *(_QWORD **)(a2 + 1480);
    for ( i = sub_614FB0(*v7, 19);
          i < (unsigned int)sub_614FB0(*v7, 20);
          i = sub_3BC980(v7, i, v10, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_4176E0, nullptr) )
    {
      v9 = sub_3B9AA0((__int64)v7, i, 0);
      v13 = i;
      v14 = v9;
      if ( !v16.m128i_i64[0] )
        std::__throw_bad_function_call();
      if ( ((unsigned int (__fastcall *)(_QWORD *, __int64, unsigned int *, unsigned __int64 *))v16.m128i_i64[1])(
             v15,
             a2,
             &v13,
             &v14) )
      {
        break;
      }
      v10 = sub_614FB0(*v7, 20);
    }
    if ( v16.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v16.m128i_i64[0])(v15, v15, 3);
  }
  return v23 - __readfsqword(0x28u);
}

