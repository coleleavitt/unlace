void __fastcall sub_2A4CE0(__int64 *a1, __int64 a2)
{
  int v3; // eax
  bool v4; // zf
  unsigned int v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // r12d
  __int64 tinfo_size; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx

  if ( (*(_BYTE *)(a2 + 56) & 4) == 0 )
  {
    v3 = sub_251380(*(_DWORD *)(a2 + 8));
    if ( v3 )
    {
      v4 = v3 == 1;
      v5 = *(_DWORD *)(a2 + 8);
      v6 = *(_QWORD *)(a2 + 24);
      v7 = v4 + 1;
      if ( v5 > 0xA )
      {
        if ( v5 - 32 > 1 )
          goto LABEL_5;
      }
      else if ( v5 <= 8 )
      {
LABEL_5:
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v6 + 48), 0);
        v9 = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 48LL), 0);
        sub_2A4B00(a1, *(_QWORD *)(a2 + 24), v7, v9);
        v6 = *(_QWORD *)(a2 + 32);
        v10 = tinfo_size;
LABEL_6:
        sub_2A4B00(a1, v6, v7, v10);
        return;
      }
      v10 = 1;
      goto LABEL_6;
    }
  }
}
