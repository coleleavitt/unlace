__int64 __fastcall sub_CF9E10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // eax

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v5 = sub_DA8220(a1, a2, v4);
  if ( (_BYTE)v5 )
  {
    if ( !*(_DWORD *)(v4 + 24) && *(_QWORD *)(v4 + 32) && *(_DWORD *)(v4 + 40) )
    {
      sub_E00FC0(v4);
      sub_DFFFB0(v4);
    }
    v6 = sub_CDA870(v4);
    if ( v6 )
    {
      v7 = sub_B54430(v6);
      if ( v7 <= 0x3F )
        v3 &= ~(-1LL << v7);
    }
    *(_QWORD *)sub_CE9E90(v4) = v3;
  }
  return v5;
}

