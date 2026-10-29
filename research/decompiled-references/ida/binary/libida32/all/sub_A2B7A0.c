__int64 __fastcall sub_A2B7A0(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)a1 & 3LL;
  if ( v1 == 2 || v1 == 3 )
    return 0;
  else
    return *(unsigned int *)(a1 + 12);
}

