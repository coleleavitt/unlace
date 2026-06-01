bool __fastcall sub_1E8C0F0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  char v8; // dl
  __int64 v10; // rax
  int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+4h] [rbp-24h]

  v15 = sub_A85680(a1[31], a2, a3, a4, a5, a6);
  if ( v8 )
    return v15 != 0;
  v10 = sub_1E8B930(a1, a2, a7, a8);
  v11 = v10;
  sub_AB4B90(a1[31], a2, v10, v12, v13, v14);
  return v11 != 0;
}
