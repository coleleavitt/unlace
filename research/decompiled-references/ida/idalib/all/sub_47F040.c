__int64 __fastcall sub_47F040(_QWORD **a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // r13
  unsigned __int64 i; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx

  v3 = (unsigned __int64 *)(16 * a3 + *a1[5]);
  for ( i = *v3; ; i = v7 )
  {
    v5 = ((__int64 (__fastcall *)(_QWORD **, unsigned __int64))(*a1)[21])(a1, i);
    v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a2 + 168LL))(a2, i);
    if ( v6 | v5
      && (!v5
       || !v6
       || *(_QWORD *)v5 != *(_QWORD *)v6
       || *(_QWORD *)(v5 + 8) != *(_QWORD *)(v6 + 8)
       || !((unsigned __int8 (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[23])(a1, v5, a2)) )
    {
      return 1;
    }
    v7 = ((__int64 (__fastcall *)(_QWORD **, unsigned __int64))(*a1)[22])(a1, i);
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a2 + 176LL))(a2, i);
    v9 = v8;
    if ( v7 <= v8 )
      v9 = v7;
    if ( v9 >= v3[1] )
      break;
    if ( v7 != v8 )
      return 1;
  }
  return 0;
}
