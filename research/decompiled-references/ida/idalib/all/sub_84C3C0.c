unsigned __int64 __fastcall sub_84C3C0(__int64 a1, int a2, __int64 (__fastcall **a3)(_QWORD, _QWORD))
{
  _QWORD *v3; // rbp
  unsigned int v5; // ecx
  int v6; // edi
  void *v7; // rcx
  _UNKNOWN **v8; // rax

  v3 = (_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 8) = 0xA000003FF000004LL;
  *(_QWORD *)a1 = &unk_2BFB228;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = "Choose the device name";
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_OWORD *)(a1 + 16) = -1;
  *(_OWORD *)(a1 + 56) = 0;
  do
  {
    *v3 = 0;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v3 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v5 = *(_DWORD *)(a1 + 12);
  if ( ((v5 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449);
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((v5 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v5 & 0xFE07FFFF;
  }
  v6 = 2;
  v7 = &unk_23BDD30;
  v8 = &off_2B3CE90;
  if ( !a3 )
  {
    v6 = 1;
    v7 = &unk_23BDD38;
    v8 = &off_2B3CEA0;
  }
  *(_DWORD *)(a1 + 48) = v6;
  *(_QWORD *)a1 = &off_2B3CDB0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_BYTE *)(a1 + 264) = a3 != nullptr;
  *(_BYTE *)(a1 + 265) = 0;
  *(_QWORD *)(a1 + 56) = v7;
  *(_QWORD *)(a1 + 64) = v8;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  sub_84B7B0(a1, a2, a3);
  return sub_84A290(a1);
}
