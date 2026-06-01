__int64 __fastcall sub_60EB30(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  unsigned __int64 *v5; // rax
  unsigned __int64 (__fastcall *v6)(__int64, unsigned __int64, int); // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
  if ( v4 == sub_3DB7B0 )
    v5 = a2 + 2;
  else
    v5 = (unsigned __int64 *)v4((__int64)a2);
  if ( a3 >= *v5 && a3 < v5[1] )
  {
    v6 = *(unsigned __int64 (__fastcall **)(__int64, unsigned __int64, int))(*a2 + 40);
    if ( v6 != sub_605810 )
    {
      if ( a3 != v6((__int64)a2, a3, 0) )
        return a1;
      goto LABEL_7;
    }
    if ( a3 < a2[6] )
LABEL_7:
      sub_35A790((char **)a1);
  }
  return a1;
}
