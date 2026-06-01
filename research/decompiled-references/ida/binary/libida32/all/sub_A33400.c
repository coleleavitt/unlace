__int64 __fastcall sub_A33400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx

  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v5 + 16) != 14 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v6 + 16) != 14 )
        return dword_23BABA0[(unsigned __int16)(((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) - 480)];
      v5 = sub_F3F310(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, v6, a4, a5);
      if ( !v5 )
        break;
    }
    a1 = *(_QWORD *)(v5 + 32);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  return dword_23BABA0[(unsigned __int16)(((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) - 480)];
}

