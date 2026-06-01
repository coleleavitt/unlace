unsigned __int64 __fastcall sub_787B90(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 96);
  if ( (v1 & 1) != 0 || (v1 & 2) != 0 )
    return 0;
  else
    return sub_6E77B0((unsigned __int64 *)(a1 + 96), a1);
}

