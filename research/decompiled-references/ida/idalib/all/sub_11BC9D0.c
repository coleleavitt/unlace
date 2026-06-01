__int64 __fastcall sub_11BC9D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+8h] [rbp-B0h]
  __m128i v9[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int16 v10; // [rsp+30h] [rbp-88h]
  __m128i v11[2]; // [rsp+40h] [rbp-78h] BYREF
  __int16 v12; // [rsp+60h] [rbp-58h]
  __m128i v13[4]; // [rsp+70h] [rbp-48h] BYREF

  if ( (unsigned __int8)sub_21B7850(a1, 3081, 3015, 0) )
    sub_10DC5D0(a2, (__int64)"-compress");
  if ( sub_10DCD30(a1, 0xD45u) )
    sub_10DC5D0(a2, (__int64)"-verbose");
  result = sub_10DCD30(a1, 0xC08u);
  if ( result )
  {
    v6 = **(_BYTE ***)(result + 48);
    v12 = 257;
    if ( *v6 )
    {
      v11[0].m128i_i64[0] = (__int64)v6;
      LOBYTE(v12) = 3;
    }
    v9[0].m128i_i64[0] = (__int64)"-compression-level=";
    v10 = 259;
    sub_A41580(v13, v9, v11, v3, v4, v5);
    result = sub_10DA6C0(a1, (__int64)v13);
    v7 = *(unsigned int *)(a2 + 8);
    if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      v8 = result;
      sub_2237220(a2, a2 + 16, v7 + 1, 8);
      v7 = *(unsigned int *)(a2 + 8);
      result = v8;
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v7) = result;
    ++*(_DWORD *)(a2 + 8);
  }
  return result;
}
