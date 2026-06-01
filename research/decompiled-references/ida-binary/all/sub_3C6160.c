__int64 __fastcall sub_3C6160(int a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 result; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d

  v2 = sub_5313F0(a2);
  if ( v2 )
    sub_533460(v2, 1, a1, v3, v4, v5);
  v6 = sub_5313F0(a2);
  if ( v6 )
    sub_533460(v6, 3, a1 + 24, v7, v8, v9);
  result = sub_5313F0(a2);
  if ( result )
    return sub_533460(result, 4, a1 + 48, v11, v12, v13);
  return result;
}
