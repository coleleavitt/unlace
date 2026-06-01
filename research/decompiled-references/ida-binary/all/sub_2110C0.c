bool __fastcall sub_2110C0(__int64 a1, int *a2)
{
  int *v2; // rbp
  int *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rbx
  unsigned __int8 v8; // r13
  __int64 bpt_kernel_interface; // rax

  v2 = a2;
  if ( (*(_BYTE *)(a1 + 153) & 8) != 0 )
  {
    v3 = (int *)qword_8CB5F0;
    if ( qword_8CB5F0 )
    {
      a2 = &dword_8CB5E8;
      do
      {
        while ( 1 )
        {
          v4 = *((_QWORD *)v3 + 2);
          v5 = *((_QWORD *)v3 + 3);
          if ( *((_QWORD *)v3 + 4) >= (unsigned __int64)v2 )
            break;
          v3 = *((int **)v3 + 3);
          if ( !v5 )
            goto LABEL_7;
        }
        a2 = v3;
        v3 = *((int **)v3 + 2);
      }
      while ( v4 );
LABEL_7:
      if ( a2 != &dword_8CB5E8 && (unsigned __int64)v2 >= *((_QWORD *)a2 + 4) )
        return 0;
    }
  }
  v7 = operator new(0x78u);
  *(_QWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 24) = 96;
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 56) = -1;
  *(_QWORD *)(v7 + 64) = 0;
  *(_OWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 80) = -1;
  *(_QWORD *)(v7 + 72) = 0xFFFFFFFFLL;
  *(_QWORD *)(v7 + 88) = 4;
  *(_QWORD *)(v7 + 104) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 96) = 9;
  *(_QWORD *)(v7 + 112) = 0;
  *(_QWORD *)v7 = thread_t::set_trace_bpt;
  *(_QWORD *)(a1 + 144) = v7;
  v8 = sub_23D800(v2);
  bpt_kernel_interface = get_bpt_kernel_interface(v2, a2);
  (*(void (__fastcall **)(__int64, __int64, int *, _QWORD, __int64))(*(_QWORD *)bpt_kernel_interface + 128LL))(
    bpt_kernel_interface,
    v7 + 24,
    v2,
    v8,
    1);
  *(_DWORD *)(v7 + 96) &= ~1u;
  *(_DWORD *)(v7 + 100) |= 4u;
  return (int)sub_236A00(a1, v7, 0) > 0;
}
