__int64 __fastcall sub_1D41560(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_1D41150((__int64)a1, *(_QWORD *)(a2 + 24));
  if ( v2 )
    return sub_18C3650(*a1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v2);
  else
    return 1;
}
