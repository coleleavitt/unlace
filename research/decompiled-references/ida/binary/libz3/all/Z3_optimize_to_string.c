__int64 __fastcall Z3_optimize_to_string(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // rbx
  void *v5[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+10h] [rbp-48h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_2A0950(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  sub_2FAF40(v5, *(_QWORD *)(a2 + 24));
  v3 = sub_24ED70((_QWORD *)a1, (__int64)v5);
  if ( v5[0] != &v6 )
    operator delete(v5[0], v6 + 1);
  if ( v2 )
    byte_1C7EBA0 = 1;
  return v3;
}

