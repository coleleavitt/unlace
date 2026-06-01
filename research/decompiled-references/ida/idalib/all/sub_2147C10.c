__int64 __fastcall sub_2147C10(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 v3; // [rsp+8h] [rbp-40h] BYREF
  char *v4; // [rsp+10h] [rbp-38h] BYREF
  __int16 v5; // [rsp+30h] [rbp-18h]

  v3 = a1;
  result = sub_2154570(*(_QWORD *)(a1 + 8), sub_2148480, &v3, 1);
  if ( (_BYTE)result )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v4 = " in directive";
    v5 = 259;
    return sub_2153C30(v2, &v4);
  }
  return result;
}
