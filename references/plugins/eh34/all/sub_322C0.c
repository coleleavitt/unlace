__int64 __fastcall sub_322C0(__int64 *a1, int a2)
{
  int v2; // eax
  _QWORD *v3; // r9
  __int64 v5; // [rsp+8h] [rbp-8h]

  v2 = sub_32240(a1, a2);
  if ( v2 != -1 )
    return *(_QWORD *)(*v3 + ((__int64)v2 << 6) + 8);
  BYTE4(v5) = 0;
  return v5;
}
