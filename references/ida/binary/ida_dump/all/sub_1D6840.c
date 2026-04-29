__int64 __fastcall sub_1D6840(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, unsigned __int8 a6)
{
  int v8; // esi
  __int64 v9; // rbx
  int v11; // [rsp+0h] [rbp-68h] BYREF
  int dtype_size; // [rsp+4h] [rbp-64h]
  int v13; // [rsp+8h] [rbp-60h]
  int v14; // [rsp+10h] [rbp-58h] BYREF
  int v15; // [rsp+14h] [rbp-54h]
  int v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v13 = a4;
  v8 = 4;
  v11 = 1;
  v14 = 1;
  dtype_size = get_dtype_size();
  v15 = get_dtype_size();
  v16 = a5;
  if ( dtype_size != v15 )
    v8 = 9 - a6;
  v9 = sub_1D6450(a1, v8, (unsigned __int8 *)&v11, nullptr, (unsigned __int8 *)&v14);
  sub_11CDA0((__int64)&v14);
  sub_11CDA0((__int64)&v11);
  return v9;
}
