__int64 __fastcall sub_803C90(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 376);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 328LL))(v2, a2, 0, 0);
  return a2;
}

