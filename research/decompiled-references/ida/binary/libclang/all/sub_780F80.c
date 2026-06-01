__int64 __fastcall sub_780F80(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 152);
  if ( v1 && (*(_QWORD *)(a1 + 152) & 6LL) == 4 && (v3 = v1 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return *(_QWORD *)(v3 + 24);
  else
    return 0;
}

