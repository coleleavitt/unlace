__int64 __fastcall sub_69AB60(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int tinfo_tid; // eax
  __int64 v5; // rax
  unsigned int v6; // edx
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  v8[0] = 0;
  v8[0] = get_tinfo_property(*(_QWORD *)(a3 + 64), 289);
  tinfo_tid = get_tinfo_tid(v8, 0);
  sub_3FEBE0(a1, a2, tinfo_tid);
  clear_tinfo_t(v8);
  v5 = 2304;
  v6 = -1;
  if ( _bittest64(&v5, *(_QWORD *)(a3 + 72) & 0xFLL) )
    v6 = sub_69AA70(*(_QWORD **)(qword_2CA1698 + 1480), 0, *(_DWORD *)(a3 + 84));
  return sub_3FEBE0(a1, a2, v6);
}

