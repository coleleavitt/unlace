__int64 __fastcall sub_C0EE30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // esi

  v7 = sub_C0DE90(a2, a1, a3, a4, a5);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 1LL) & 8) != 0 )
    return dword_23E84A0[(unsigned __int16)v7];
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(unsigned __int8 *)(v9 + 16);
  if ( (unsigned int)(v10 - 25) <= 1 || v8 == *(_QWORD *)(a2 + 19080) )
    return 1;
  if ( (_BYTE)v10 != 13
    || ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) != 0x1B3
    || *(_QWORD *)(a1 + 8) & 7LL | (*(__int64 *)(a1 + 8) >> 3) & 1
    || *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 7LL
     | (*(__int64 *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1 )
  {
    return dword_23E84A0[(unsigned __int16)v7];
  }
  else
  {
    return v7 == 0 ? 2 : 4;
  }
}
