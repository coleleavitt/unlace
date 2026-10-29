unsigned __int64 __fastcall sub_6B3060(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  v3 = *(_QWORD *)(v2 + 8);
  if ( (v3 & 7) != 0 || (v3 & 8) != 0 )
    return sub_B0CF30(*a1, a2) & 0xFFFFFFFFFFFFFFF0LL;
  else
    return v2 & 0xFFFFFFFFFFFFFFF0LL;
}

