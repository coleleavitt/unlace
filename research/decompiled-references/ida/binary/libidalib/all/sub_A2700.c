bool __fastcall sub_A2700(__int64 a1, unsigned __int64 a2)
{
  int *v3; // rax
  int *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rbx
  unsigned __int8 v9; // r13
  __int64 bpt_kernel_interface; // rax

  if ( (*(_BYTE *)(a1 + 153) & 8) != 0 )
  {
    v3 = (int *)qword_251A70;
    if ( qword_251A70 )
    {
      v4 = &dword_251A68;
      do
      {
        while ( 1 )
        {
          v5 = *((_QWORD *)v3 + 2);
          v6 = *((_QWORD *)v3 + 3);
          if ( *((_QWORD *)v3 + 4) >= a2 )
            break;
          v3 = *((int **)v3 + 3);
          if ( !v6 )
            goto LABEL_7;
        }
        v4 = v3;
        v3 = *((int **)v3 + 2);
      }
      while ( v5 );
LABEL_7:
      if ( v4 != &dword_251A68 && a2 >= *((_QWORD *)v4 + 4) )
        return 0;
    }
  }
  v8 = operator new(0x78u);
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = 96;
  *(_QWORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 56) = -1;
  *(_QWORD *)(v8 + 64) = 0;
  *(_OWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 80) = -1;
  *(_QWORD *)(v8 + 72) = 0xFFFFFFFFLL;
  *(_QWORD *)(v8 + 88) = 4;
  *(_QWORD *)(v8 + 104) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 96) = 9;
  *(_QWORD *)(v8 + 112) = 0;
  *(_QWORD *)v8 = off_22F7D8;
  *(_QWORD *)(a1 + 144) = v8;
  v9 = sub_CE080(a2);
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD, __int64))(*(_QWORD *)bpt_kernel_interface + 128LL))(
    bpt_kernel_interface,
    v8 + 24,
    a2,
    v9,
    1);
  *(_DWORD *)(v8 + 96) &= ~1u;
  *(_DWORD *)(v8 + 100) |= 4u;
  return (int)sub_C8400(a1, v8, 0) > 0;
}

