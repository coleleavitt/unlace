__int64 __fastcall sub_2C2450(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rax

  v1 = sub_26B5C0(a1, 1);
  v2 = sub_26B5C0(a1, 0);
  v3 = Z3_app_to_ast(v2, v1);
  return sub_26B3D0(a1, v3);
}

