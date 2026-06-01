void __fastcall sub_49FB30(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp

  if ( *(_DWORD *)(a1 + 2376) == 2 )
    v2 = *(_QWORD *)(a1 + 2384);
  else
    v2 = *(_QWORD *)(a1 + 2472);
  if ( v2 )
  {
    v3 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 24LL))();
    if ( *(_QWORD *)(a1 + 2472) == v2 || *(_QWORD *)(a1 + 2384) == v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 192LL))(v2, v3);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
}
