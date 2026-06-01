__int64 __fastcall sub_589500(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned __int64 v8; // rcx

  v8 = a2 + a4;
  if ( *(_QWORD *)(a1 + 8) < v8 )
    *(_QWORD *)(a1 + 8) = v8;
  patch_bytes(a2, a3, a4);
  return 1;
}
