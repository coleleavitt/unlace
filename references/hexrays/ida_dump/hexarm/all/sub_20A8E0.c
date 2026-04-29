__int64 __fastcall sub_20A8E0(__int64 a1, unsigned __int64 a2)
{
  _QWORD **v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi

  v3 = *(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL);
  if ( v3 )
  {
    v4 = sub_1FC0D0(v3, a2);
  }
  else
  {
    if ( *(_BYTE *)a2 != 9 )
      return 0;
    v4 = *(__int64 **)(a2 + 8);
  }
  if ( v4 )
  {
    v5 = *v4;
    v6 = *((int *)v4 + 4);
    if ( *(_QWORD *)(v5 + 440) < v6 )
      sub_20A860();
    v7 = *(_QWORD *)(v5 + 432) + 104 * v6;
    if ( v7 && !(unsigned int)sub_330B00(v7, a1 + 48) )
      ++*(_DWORD *)(a1 + 108);
  }
  return 0;
}
