__int64 __fastcall sub_CCBE0(__int64 a1, unsigned int a2, int a3, __int64 *a4, __int64 a5, char a6)
{
  unsigned __int8 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 bpt_kernel_interface; // rax
  __int64 v13; // rax
  unsigned int v14; // r12d

  v9 = sub_CCB00(a2);
  v10 = operator new(0x78u);
  *(_QWORD *)(v10 + 8) = 0;
  v11 = v10;
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = 88;
  *(_QWORD *)(v10 + 32) = 0;
  *(_OWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 56) = 0xFFFFFFFFLL;
  *(_QWORD *)(v10 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 72) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 80) = 4;
  *(_QWORD *)(v10 + 96) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 88) = 9;
  *(_QWORD *)(v10 + 104) = 0;
  *(_QWORD *)v10 = &off_22F360;
  *(_DWORD *)(v10 + 112) = a3;
  *(_BYTE *)(v10 + 116) = a6;
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)bpt_kernel_interface + 128LL))(
    bpt_kernel_interface,
    v11 + 24,
    a2,
    v9,
    1);
  *(_DWORD *)(v11 + 88) &= ~1u;
  if ( a5 )
  {
    v13 = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 96LL))(v13, v11 + 24, a5);
  }
  v14 = sub_C6F80(a1, v11, a3);
  if ( !v14 )
  {
    v11 = 0;
    sub_8F660((__int64)"%a: failed to set temporary %s breakpoint\n", 0.0, (const char *)a2);
  }
  if ( a4 )
    *a4 = v11;
  return v14;
}

