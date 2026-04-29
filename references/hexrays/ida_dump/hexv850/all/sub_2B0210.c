unsigned __int64 __fastcall sub_2B0210(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  bool (__fastcall *v4)(__int64); // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  _QWORD v8[2]; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a2 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_8;
  v3 = (a2 << 6) + *(_QWORD *)(a1 + 40);
  v4 = **(bool (__fastcall ***)(__int64))v3;
  if ( v4 == sub_2A7E00 )
  {
    if ( *(_QWORD *)(v3 + 8) != *(_QWORD *)(v3 + 48) )
      goto LABEL_4;
LABEL_8:
    sub_2A8AC0();
  }
  if ( !((unsigned __int8 (*)(void))v4)() )
    goto LABEL_8;
LABEL_4:
  switch_dbctx(*(int *)(a1 + 8));
  v5 = *(_QWORD *)(a1 + 40) + (a2 << 6);
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(v5 + 48);
  v8[0] = 0;
  v6 = *(_QWORD *)(v5 + 16);
  if ( v6 )
  {
    *(_QWORD *)(v5 + 24) = 0;
    qfree(v6);
  }
  *(_QWORD *)(v5 + 16) = 0;
  *(_OWORD *)(v5 + 24) = 0;
  copy_tinfo_t(v5 + 40, v8);
  clear_tinfo_t(v8);
  *(_DWORD *)(v5 + 56) = -2;
  return v9 - __readfsqword(0x28u);
}
