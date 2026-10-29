__int64 __fastcall sub_74E660(unsigned __int16 *a1, int a2)
{
  char *v2; // rdx
  __int64 result; // rax

  v2 = (char *)&unk_2CA2EE0 + *a1;
  result = (unsigned int)*((unsigned __int16 *)v2 + 5) - a2;
  *((_WORD *)v2 + 5) -= a2;
  if ( (__int16)result <= 0 )
    sub_74E2D0(a1);
  return result;
}

