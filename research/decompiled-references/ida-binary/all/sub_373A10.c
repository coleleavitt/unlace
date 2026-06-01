unsigned __int64 __fastcall sub_373A10(__int64 a1, int a2, double a3)
{
  __int64 (__fastcall *v3)(__int64, int); // rax
  __int64 v5; // [rsp+0h] [rbp-438h] BYREF
  __int64 v6; // [rsp+8h] [rbp-430h] BYREF
  _BYTE v7[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v8; // [rsp+418h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 296LL);
  if ( v3 != proxim_graph_t__::vfunc_37 )
    v3(a1, 0);
  qsnprintf(v7, 1024, "%s 0x%a", "$ proximity last node", a3);
  v5 = -1;
  netnode_check(&v5, v7, 0, 1);
  v6 = a2;
  netnode_supset(v5, 0, &v6, 8, 65);
  return v8 - __readfsqword(0x28u);
}
