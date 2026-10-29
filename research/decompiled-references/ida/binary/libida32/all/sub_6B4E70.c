unsigned __int64 __fastcall sub_6B4E70(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  v2 = *(_QWORD *)(v1 + 8);
  if ( (v2 & 7) != 0 || (v2 & 8) != 0 )
    return sub_F411C0(*a1) & 0xFFFFFFFFFFFFFFF0LL;
  else
    return v1 & 0xFFFFFFFFFFFFFFF0LL;
}

