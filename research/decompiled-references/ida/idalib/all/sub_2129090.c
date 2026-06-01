__int64 __fastcall sub_2129090(__int64 a1, _QWORD *a2)
{
  __int64 v3; // [rsp+8h] [rbp-80h] BYREF
  const char *v4; // [rsp+10h] [rbp-78h] BYREF
  __int16 v5; // [rsp+30h] [rbp-58h]
  const char *v6; // [rsp+40h] [rbp-48h] BYREF
  __int16 v7; // [rsp+60h] [rbp-28h]

  v3 = 0;
  if ( (unsigned __int8)sub_2153C10(a1, &v3) )
    return 1;
  v7 = 259;
  v6 = "expected function id";
  if ( (unsigned __int8)sub_2154400(a1, a2, &v6) )
    return 1;
  v4 = "expected function id within range [0, UINT_MAX)";
  v5 = 259;
  return sub_2154450(a1, *a2 > 0xFFFFFFFE, v3, &v4);
}
