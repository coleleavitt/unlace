__int64 __fastcall sub_730710(__int64 a1, FILE *a2, __off64_t a3, unsigned int a4)
{
  if ( a4 > 2 )
    return -1;
  else
    return -(__int64)(fseeko64(a2, a3, dword_23924C0[a4]) != 0);
}

