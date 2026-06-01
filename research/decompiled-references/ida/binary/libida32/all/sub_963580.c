__int64 __fastcall sub_963580(_QWORD *a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v12; // rdx

  v6 = *(_QWORD *)(a2 + 48);
  v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 43 <= 1
    || (v12 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v12 <= 1)
    && (v7 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v12, a4, a5)) != 0 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v7 + 32);
      if ( (*(_BYTE *)(v7 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v8 = v6 & 0xFFFFFFFFFFFFFFF0LL;
        v7 = *(_QWORD *)v8;
        v9 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v8 + 16LL) - 43;
        if ( (unsigned int)v9 <= 1 )
          break;
        v10 = sub_F3F310(v7, a2, v9, a4, a5);
        v6 = *(_QWORD *)(v10 + 32);
        if ( (*(_BYTE *)(v10 + 18) & 0x10) == 0 )
          return sub_BE53F0(*a1, 0, 0, 0, a2, a3, 0, v6, 1, 0, 0, 0);
      }
    }
  }
  return sub_BE53F0(*a1, 0, 0, 0, a2, a3, 0, v6, 1, 0, 0, 0);
}

