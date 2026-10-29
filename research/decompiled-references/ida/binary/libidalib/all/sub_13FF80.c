__int64 __fastcall sub_13FF80(__int64 a1)
{
  unsigned __int8 *v2; // rbp
  __int64 v3; // rdi
  bool (__fastcall *v4)(__int64, unsigned __int8); // rax

  v2 = *(unsigned __int8 **)(a1 + 88);
  *(_QWORD *)a1 = &off_232AB8;
  if ( v2 )
  {
    v3 = *(_QWORD *)v2 + 136LL;
    v4 = *(bool (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v3 + 128LL);
    if ( v4 == sub_13FF00 )
      dword_251288 = v2[8];
    else
      v4(v3, v2[8]);
    operator delete(v2, 0x10u);
  }
  if ( *(_DWORD *)(a1 + 96) != -1 )
    set_ida_state();
  sub_F27B0((int *)(a1 + 100));
  return sub_19F5C0(a1);
}

