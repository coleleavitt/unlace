__int64 __fastcall sub_CEF910(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rdi

  v5 = *a1;
  v6 = *a1 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v5 & 2) != 0 )
    return sub_C00A40(v6, a2, a3, a4, a5);
  else
    return *(unsigned int *)(v6 + 24);
}
