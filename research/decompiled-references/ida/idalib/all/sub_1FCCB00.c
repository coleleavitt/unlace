__int64 __fastcall sub_1FCCB00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rax
  int v9; // esi

  sub_1FCC960((__int64 *)a1, a2, a3, a4, a5, a6);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_WORD *)a2 & 0x200) != 0);
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 24));
  result = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x200LL) != 0 )
  {
    sub_183F100(a1 + 32, *(_QWORD *)(a2 + 8LL * ((result & 0x200) != 0) + 24));
    v8 = *(_QWORD *)a2;
    v9 = 0;
    if ( (*(_QWORD *)a2 & 0x200LL) != 0 )
      v9 = *(_DWORD *)(a2 + 8LL * (((v8 & 0x200) != 0) + 2) + 24);
    result = sub_1F6F570(*(_QWORD **)(a1 + 16), v9, *(_QWORD *)(a1 + 24));
  }
  *(_DWORD *)(a1 + 224) = 152;
  return result;
}
