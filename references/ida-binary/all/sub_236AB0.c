__int64 __fastcall sub_236AB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 bpt_kernel_interface; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  int v8; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 248);
  if ( !v2 )
    return 0;
  v3 = a2;
  while ( 1 )
  {
    bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
    a2 = v2 + 24;
    a1 = bpt_kernel_interface;
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)bpt_kernel_interface + 104LL))(
                     bpt_kernel_interface,
                     v2 + 24,
                     &v8);
    if ( v8 > 0 )
      break;
LABEL_8:
    v2 = *(_QWORD *)(v2 + 8);
    if ( !v2 )
      return 0;
  }
  v6 = &v5[v8];
  while ( *v5 != v3 )
  {
    if ( ++v5 == v6 )
      goto LABEL_8;
  }
  return v2;
}
