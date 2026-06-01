__int64 __fastcall sub_212A250(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  unsigned __int8 v3; // al
  unsigned __int8 v4; // al
  __int64 v5; // [rsp+10h] [rbp-168h] BYREF
  __int64 v6; // [rsp+18h] [rbp-160h] BYREF
  unsigned __int64 v7; // [rsp+20h] [rbp-158h] BYREF
  __int64 v8; // [rsp+28h] [rbp-150h] BYREF
  __int64 v9; // [rsp+30h] [rbp-148h] BYREF
  __int64 v10; // [rsp+38h] [rbp-140h] BYREF
  const char *v11; // [rsp+40h] [rbp-138h] BYREF
  __int16 v12; // [rsp+60h] [rbp-118h]
  const char *v13; // [rsp+70h] [rbp-108h] BYREF
  __int16 v14; // [rsp+90h] [rbp-E8h]
  const char *v15; // [rsp+A0h] [rbp-D8h] BYREF
  __int16 v16; // [rsp+C0h] [rbp-B8h]
  const char *v17; // [rsp+D0h] [rbp-A8h] BYREF
  __int16 v18; // [rsp+F0h] [rbp-88h]
  const char *v19; // [rsp+100h] [rbp-78h] BYREF
  __int16 v20; // [rsp+120h] [rbp-58h]
  const char *v21; // [rsp+130h] [rbp-48h] BYREF
  __int16 v22; // [rsp+150h] [rbp-28h]

  v1 = sub_2153C00(a1);
  v10 = sub_2124B50(v1);
  if ( (unsigned __int8)sub_2129090(a1, &v5) )
    return 1;
  if ( (unsigned __int8)sub_2153C10(a1, &v10) )
    return 1;
  v12 = 259;
  v11 = "expected SourceField";
  if ( (unsigned __int8)sub_2154400(a1, &v6, &v11) )
    return 1;
  v14 = 259;
  v13 = "File id less than zero";
  if ( (unsigned __int8)sub_2154450(a1, v6 <= 0, v10, &v13) )
    return 1;
  if ( (unsigned __int8)sub_2153C10(a1, &v10) )
    return 1;
  v15 = "expected SourceLineNum";
  v16 = 259;
  if ( (unsigned __int8)sub_2154400(a1, &v7, &v15) )
    return 1;
  v18 = 259;
  v17 = "Line number less than zero";
  if ( (unsigned __int8)sub_2154450(a1, v7 >> 63, v10, &v17) )
    return 1;
  if ( (unsigned __int8)sub_2153C10(a1, &v10) )
    return 1;
  v20 = 259;
  v19 = "expected identifier";
  v3 = sub_2153CB0(a1, &v8);
  if ( (unsigned __int8)sub_2154450(a1, v3, v10, &v19) )
    return 1;
  if ( (unsigned __int8)sub_2153C10(a1, &v10) )
    return 1;
  v21 = "expected identifier";
  v22 = 259;
  v4 = sub_2153CB0(a1, &v9);
  if ( (unsigned __int8)sub_2154450(a1, v4, v10, &v21) )
    return 1;
  result = sub_21544B0(a1);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 24) + 744LL))(
      *(_QWORD *)(a1 + 24),
      (unsigned int)v5,
      (unsigned int)v6,
      (unsigned int)v7,
      v8,
      v9);
    return 0;
  }
  return result;
}
