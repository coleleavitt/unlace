bool __fastcall sub_A23A0(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rax
  int *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rbx
  unsigned __int8 v9; // r13
  __int64 bpt_kernel_interface; // rax

  if ( (*(_BYTE *)(a1 + 153) & 8) != 0 )
  {
    v3 = qword_2509F0;
    if ( qword_2509F0 )
    {
      v4 = &dword_2509E8;
      do
      {
        while ( 1 )
        {
          v5 = v3[2];
          v6 = v3[3];
          if ( *((_DWORD *)v3 + 8) >= a2 )
            break;
          v3 = (_QWORD *)v3[3];
          if ( !v6 )
            goto LABEL_7;
        }
        v4 = (int *)v3;
        v3 = (_QWORD *)v3[2];
      }
      while ( v5 );
LABEL_7:
      if ( v4 != &dword_2509E8 && a2 >= v4[8] )
        return 0;
    }
  }
  v8 = operator new(0x70u);
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = 88;
  *(_QWORD *)(v8 + 32) = 0;
  *(_OWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 56) = 0xFFFFFFFFLL;
  *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 72) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 80) = 4;
  *(_QWORD *)(v8 + 96) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 88) = 9;
  *(_QWORD *)(v8 + 104) = 0;
  *(_QWORD *)v8 = off_22E758;
  *(_QWORD *)(a1 + 144) = v8;
  v9 = sub_CCB00(a2);
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)bpt_kernel_interface + 128LL))(
    bpt_kernel_interface,
    v8 + 24,
    a2,
    v9,
    1);
  *(_DWORD *)(v8 + 88) &= ~1u;
  *(_DWORD *)(v8 + 92) |= 4u;
  return (int)sub_C6F80(a1, v8, 0) > 0;
}

