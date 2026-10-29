__int64 __fastcall sub_ECA400(_QWORD *a1)
{
  __int64 v1; // rax

  if ( (*a1 & 0x400LL) != 0 && (v1 = a1[((*a1 & 0x200) != 0) + 3]) != 0 )
    return *(_QWORD *)(v1 + 8);
  else
    return 0;
}

