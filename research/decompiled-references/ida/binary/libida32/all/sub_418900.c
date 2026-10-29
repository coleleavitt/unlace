unsigned __int64 __fastcall sub_418900(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v4; // rax
  _QWORD *v5; // rbp
  unsigned int i; // ebx
  unsigned __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v10; // [rsp+4h] [rbp-64h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-60h] BYREF
  __int64 v12; // [rsp+10h] [rbp-58h] BYREF
  int v13; // [rsp+18h] [rbp-50h]
  int v14; // [rsp+1Ch] [rbp-4Ch]
  __m128i v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v4 = *a3;
  v13 = a4;
  v14 = 0;
  v12 = v4;
  v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_417B60, (__m128i)(unsigned __int64)sub_419FB0);
  if ( sub_417B60 )
  {
    v5 = *(_QWORD **)(a2 + 1480);
    for ( i = sub_614FB0(*v5, 19);
          i < (unsigned int)sub_614FB0(*v5, 20);
          i = sub_3BC980(v5, i, v8, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_4176E0, nullptr) )
    {
      v7 = sub_3B9AA0((__int64)v5, i, 0);
      v10 = i;
      v11 = v7;
      if ( !v15.m128i_i64[0] )
        std::__throw_bad_function_call();
      if ( ((unsigned int (__fastcall *)(__int64 *, __int64, unsigned int *, unsigned __int64 *))v15.m128i_i64[1])(
             &v12,
             a2,
             &v10,
             &v11) )
      {
        break;
      }
      v8 = sub_614FB0(*v5, 20);
    }
    if ( v15.m128i_i64[0] )
      ((void (__fastcall *)(__int64 *, __int64 *, __int64))v15.m128i_i64[0])(&v12, &v12, 3);
  }
  return v16 - __readfsqword(0x28u);
}

