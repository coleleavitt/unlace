__int64 __fastcall sub_81EA30(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // esi
  __int64 v9; // rdx

  v4 = sub_81DB90(a2, (_WORD *)a1);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2160) + 1LL) & 8) != 0 )
    return *((unsigned int *)qword_3C95340 + (unsigned __int16)v4);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(unsigned __int8 *)(v6 + 16);
  if ( (unsigned int)(v7 - 25) <= 1 || v5 == *(_QWORD *)(a2 + 18920) )
    return 1;
  if ( (_BYTE)v7 != 13 )
    return *((unsigned int *)qword_3C95340 + (unsigned __int16)v4);
  if ( ((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) != 0x1B2 )
    return *((unsigned int *)qword_3C95340 + (unsigned __int16)v4);
  if ( (v5 & 7) != 0 )
    return *((unsigned int *)qword_3C95340 + (unsigned __int16)v4);
  if ( (v5 & 8) != 0 )
    return *((unsigned int *)qword_3C95340 + (unsigned __int16)v4);
  v9 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v9 & 7) != 0 || (v9 & 8) != 0 )
    return *((unsigned int *)qword_3C95340 + (unsigned __int16)v4);
  else
    return v4 == 0 ? 2 : 4;
}

