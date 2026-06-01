unsigned __int64 __fastcall sub_1EAA6E0(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(sub_B8C1B0(a1) + 16);
  if ( (v1 & 4) != 0 )
    return *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    return v1 & 0xFFFFFFFFFFFFFFF8LL;
}
