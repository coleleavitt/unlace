__int64 __fastcall sub_1B04020(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_1B03C10((__int64)a1, *(_QWORD *)(a2 + 24));
  if ( v2 )
    return sub_18C3650(*a1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v2);
  else
    return 1;
}
