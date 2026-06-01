__int64 __fastcall sub_1B04360(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_1B04070((__int64)a1, *(_QWORD *)(a2 + 8));
  if ( v2 )
    return sub_1C36B30(*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 16), v2);
  else
    return 1;
}
