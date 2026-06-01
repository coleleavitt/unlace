__int64 __fastcall sub_CE160(__int64 a1, __int64 a2, int a3, __int64 *a4, __int64 a5, char a6)
{
  unsigned __int8 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 bpt_kernel_interface; // rax
  __int64 v13; // rax
  unsigned int v14; // r12d
  const char *v15; // rdx

  v9 = sub_CE080(a2);
  v10 = operator new(0x80u);
  *(_QWORD *)(v10 + 8) = 0;
  v11 = v10;
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = 96;
  *(_QWORD *)(v10 + 32) = 0;
  *(_QWORD *)(v10 + 56) = -1;
  *(_QWORD *)(v10 + 64) = 0;
  *(_OWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 80) = -1;
  *(_QWORD *)(v10 + 72) = 0xFFFFFFFFLL;
  *(_QWORD *)(v10 + 88) = 4;
  *(_QWORD *)(v10 + 104) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 96) = 9;
  *(_QWORD *)(v10 + 112) = 0;
  *(_QWORD *)v10 = &off_2303E0;
  *(_DWORD *)(v10 + 120) = a3;
  *(_BYTE *)(v10 + 124) = a6;
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)bpt_kernel_interface + 128LL))(
    bpt_kernel_interface,
    v11 + 24,
    a2,
    v9,
    1);
  *(_DWORD *)(v11 + 96) &= ~1u;
  if ( a5 )
  {
    v13 = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 96LL))(v13, v11 + 24, a5);
  }
  v14 = sub_C8400(a1, v11, a3);
  if ( !v14 )
  {
    v15 = "software";
    if ( v9 )
      v15 = "hardware";
    v11 = 0;
    sub_8F740((__int64)"%a: failed to set temporary %s breakpoint\n", a2, v15);
  }
  if ( a4 )
    *a4 = v11;
  return v14;
}

