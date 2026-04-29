__int64 __fastcall sub_3FB270(__int64 a1, int a2, int a3, char a4, double a5, __m128 a6)
{
  unsigned __int8 v8; // al
  unsigned __int8 v9; // bl
  unsigned int v10; // ebx
  _DWORD v12[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v8 = sub_3FA390(a1, a1 + 40LL * a2 + 64);
  if ( v8 == 17 )
    v8 = 16;
  v9 = v8;
  v12[0] = 1;
  v12[2] = a3;
  v12[1] = get_dtype_size(v8);
  v10 = sub_3FAED0(a1, nullptr, a2, (__int64)v12, v9, a4, a5, a6);
  sub_11CDA0((__int64)v12);
  return v10;
}
