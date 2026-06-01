__int64 __fastcall sub_C7030(__int64 a1, int a2)
{
  __int64 v2; // r12
  __int64 bpt_kernel_interface; // rax
  _DWORD *v4; // rax
  _DWORD *v5; // rdx
  int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 224);
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    bpt_kernel_interface = get_bpt_kernel_interface();
    v4 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)bpt_kernel_interface + 104LL))(
                     bpt_kernel_interface,
                     v2 + 24,
                     &v7);
    if ( v7 > 0 )
      break;
LABEL_7:
    v2 = *(_QWORD *)(v2 + 8);
    if ( !v2 )
      return 0;
  }
  v5 = &v4[v7];
  while ( *v4 != a2 )
  {
    if ( v5 == ++v4 )
      goto LABEL_7;
  }
  return v2;
}

