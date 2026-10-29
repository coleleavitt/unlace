__int64 __fastcall sub_BEAD00(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  _WORD *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8

  v6 = a2;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) == 13 && ((*(_WORD *)(v7 + 18) >> 3) & 0x1FF) == 0x1B3
    || (v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v8 + 16) == 13)
    && ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v9 = (_WORD *)sub_BD7DA0(a2);
    v12 = *(unsigned __int16 *)sub_BD7DA0(a3);
    LOWORD(v12) = v12 & 0x1FF;
    if ( (*v9 & 0x1FF) == 0x61 )
    {
      if ( (_WORD)v12 != 97 && a3 )
      {
        v6 = a3;
        return sub_BEA150(a1, v6, v12, v10, v11);
      }
    }
    else if ( (_WORD)v12 == 97 )
    {
      return sub_BEA150(a1, v6, v12, v10, v11);
    }
    return 11;
  }
  v14 = sub_BEA150(a1, a2, a3, a4, a5);
  if ( (unsigned int)sub_BEA150(a1, a3, v15, v16, v17) != v14 )
    return 11;
  return v14;
}

