__int64 __fastcall sub_5043F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  unsigned __int64 *v5; // rax
  unsigned __int64 (__fastcall *v6)(__int64, unsigned __int64, int); // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  switch_dbctx(*(int *)(a2 + 8));
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v4 == sub_3D58E0 )
    v5 = (unsigned __int64 *)(a2 + 16);
  else
    v5 = (unsigned __int64 *)v4(a2);
  if ( a3 >= *v5 && a3 < v5[1] )
  {
    v6 = *(unsigned __int64 (__fastcall **)(__int64, unsigned __int64, int))(*(_QWORD *)a2 + 40LL);
    if ( v6 != sub_4FC7D0 )
    {
      if ( a3 != v6(a2, a3, 0) )
        return a1;
      goto LABEL_7;
    }
    if ( a3 < *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8LL) )
LABEL_7:
      sub_3573A0((char **)a1);
  }
  return a1;
}

