__int64 __fastcall sub_120B0(__int64 a1, const char *a2, const char *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v11; // [rsp+8h] [rbp-40h]

  v11 = *(_QWORD *)(a1 + 33101);
  v6 = netnode_altval(v11, 0, 65);
  if ( !v6 )
LABEL_11:
    sub_E6A0();
  v7 = v6;
  v8 = 0;
  while ( 1 )
  {
    v9 = netnode_supstr(v11, v8, a2, 1024, 83);
    if ( v9 <= 0 )
      goto LABEL_11;
    if ( !a3 )
    {
      qfwrite(*(_QWORD *)(a1 + 33312), a2, v9);
      if ( (unsigned int)qfputc(10, *(_QWORD *)(a1 + 33312)) == -1 )
        return 0xFFFFFFFFLL;
      goto LABEL_5;
    }
    if ( !a4 )
      break;
    if ( (unsigned __int8)sub_88B0(a4, 0, (__int64)"%s%s", a3, a2) )
      return 0xFFFFFFFFLL;
LABEL_5:
    if ( v7 <= ++v8 )
      return (unsigned int)v8;
  }
  if ( under_debugger )
    BUG();
  interr(10264, v8);
  return sub_121C0();
}
