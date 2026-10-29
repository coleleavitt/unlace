__int64 __fastcall sub_C703D0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 && (v1 & 4) == 0 && (v2 = v1 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return *(_QWORD *)v2;
  else
    return 0;
}

