__int64 __fastcall sub_48B940(__int64 a1, int *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  unsigned __int64 *v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v4 == sub_3DB7B0 )
    v5 = (unsigned __int64 *)(a2 + 4);
  else
    v5 = (unsigned __int64 *)v4((__int64)a2);
  if ( a3 < *v5
    || a3 >= v5[1]
    || a3 != (*(__int64 (__fastcall **)(int *, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, a3, 0) )
  {
    return a1;
  }
  v7 = switch_dbctx(a2[2]);
  v8 = sub_50F370(v7);
  sub_480420(*(_QWORD **)v8, *(_QWORD *)v8 + 16LL * *(_QWORD *)(v8 + 8), a3);
  sub_35A790((char **)a1);
  return a1;
}
