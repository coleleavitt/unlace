/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140039980
// Address: 0x0000000140039980

//----- (0000000140039980) ----------------------------------------------------
__int8 *__fastcall sub_140039980(__int8 *a1, __int64 a2, __m128i *a3, __int64 a4, char a5)
{
  __int64 v8; // rbx
  __int8 *v9; // rax
  __int8 *v10; // rdi
  char v11; // al
  __m128i v13[17]; // [rsp+30h] [rbp-148h] BYREF

  if ( a3 )
    sub_14005DA20(v13, 0x104u, a3);
  else
    sub_14005DB20(v13, 260);
  sub_140062250((__int64)v13, 47, 92);
  v8 = 0;
  v9 = sub_14005DE20(a1, a2, v13[0].m128i_i8, a4, 0);
  v10 = v9;
  if ( a5 )
    v11 = sub_14003D660(a1, a2);
  else
    v11 = sub_14005EF30(v9);
  if ( v11 )
    return v10;
  return (__int8 *)v8;
}
