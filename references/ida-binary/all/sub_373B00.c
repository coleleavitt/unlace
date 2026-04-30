__int64 __fastcall sub_373B00(__int64 a1, double a2)
{
  __int64 (__fastcall *v2)(__int64, int); // rax
  char v3; // dl
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-430h] BYREF
  _BYTE v6[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v7; // [rsp+418h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v2 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 296LL);
  if ( v2 != proxim_graph_t__::vfunc_37 )
    v2(a1, 0);
  qsnprintf(v6, 1024, "%s 0x%a", "$ proximity last node", a2);
  netnode_check(&v5, v6, 0, 0);
  v3 = netnode_exist(&v5);
  result = 0;
  if ( v3 )
    return netnode_altval(v5, 0, 65);
  return result;
}
