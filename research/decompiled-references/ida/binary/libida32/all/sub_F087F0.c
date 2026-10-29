void __fastcall sub_F087F0(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // r13
  char *v6; // rsi
  __int64 v7; // rdi
  char *v8; // rax
  unsigned __int64 *v9; // rax

  sub_971800(*(_QWORD *)(a1 + 1096), " <");
  v4 = *(_QWORD *)(a1 + 1096);
  if ( *(_BYTE *)(a1 + 1104) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(*(_QWORD *)(a1 + 1096), 1, 0, 0);
    v5 = *(_QWORD *)(a1 + 1096);
    v6 = sub_BD6210((*(_WORD *)(a2 + 2) >> 3) & 0x7F);
    sub_971800(v5, v6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  }
  else
  {
    v8 = sub_BD6210((*(_WORD *)(a2 + 2) >> 3) & 0x7F);
    sub_971800(v4, v8);
  }
  v7 = *(_QWORD *)(a1 + 1096);
  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_F02F90(v7, a2);
    v7 = *(_QWORD *)(a1 + 1096);
  }
  sub_971800(v7, ">");
  if ( (*(_QWORD *)a2 & 0x8000000LL) != 0 )
  {
    v9 = (unsigned __int64 *)sub_BD6990(a2);
    sub_F074F0(a1, *v9);
  }
}

