unsigned __int64 __fastcall sub_696100(__int64 a1, __int64 a2, __int32 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v10; // [rsp+8h] [rbp-60h] BYREF
  __int64 v11; // [rsp+10h] [rbp-58h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h] BYREF
  __m128i v14; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 1816);
  v12 = a2;
  v11 = a4;
  v10 = a5;
  v15 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 1672);
  v13 = 0;
  if ( (unsigned __int8)deserialize_tinfo(&v13, *(_QWORD *)(v7 + 8), &v11, &v10, 0, 0) )
  {
    if ( a3 == -1 )
    {
      sub_6942A0((_QWORD *)(v6 + 8), (void **)&v12, &v13, 0x9Au, v8);
    }
    else
    {
      v14.m128i_i32[2] = a3;
      v14.m128i_i64[0] = v12;
      sub_695580((_QWORD *)(v6 + 56), &v14, &v13, 0x9Cu, v8);
    }
  }
  clear_tinfo_t(&v13);
  return v15 - __readfsqword(0x28u);
}
