__int64 __fastcall sub_81E630(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // ebx
  __int64 result; // rax
  __int16 v8; // r13
  __int16 v9; // ax

  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) != 13 || ((*(_WORD *)(v4 + 18) >> 3) & 0x1FF) != 0x1B2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v5 + 16) != 13 || ((*(_WORD *)(v5 + 18) >> 3) & 0x1FF) != 0x1B2 )
    {
      v6 = sub_81DB90(a1, (_WORD *)a2);
      result = sub_81DB90(a1, (_WORD *)a3);
      if ( v6 == (_DWORD)result )
        return result;
      return 11;
    }
  }
  v8 = *(_WORD *)sub_80F310(a2);
  v9 = *(_WORD *)sub_80F310(a3) & 0x1FF;
  if ( (v8 & 0x1FF) == 0x62 )
  {
    if ( v9 != 98 )
    {
      a2 = a3;
      return sub_81DB90(a1, (_WORD *)a2);
    }
  }
  else if ( v9 == 98 )
  {
    return sub_81DB90(a1, (_WORD *)a2);
  }
  return 11;
}

