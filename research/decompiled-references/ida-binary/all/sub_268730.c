__int64 __fastcall sub_268730(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  double v4; // xmm0_8
  unsigned int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  v4 = serialize_json(&v7, a1, 0);
  v5 = sub_266310(a2, &v7, (unsigned int)a3 + 1, v4);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7, (const char *)&v7);
  }
  return v5;
}
