unsigned __int64 __fastcall sub_53E260(char *a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  const char *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  const char *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const char *v13; // r8

  v2 = sub_53DC50((__int64)a1, "Default:Edit");
  sub_478D00(a1 + 192, v2, a2, v3, v4, v5);
  v6 = sub_53DC50((__int64)a1, "Default:Search");
  sub_478D00(a1 + 224, v6, a2, v7, v8, v9);
  v10 = sub_53DC50((__int64)a1, "Default:Jump");
  return sub_478D00(a1 + 256, v10, a2, v11, v12, v13);
}
