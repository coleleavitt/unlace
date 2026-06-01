__int64 __fastcall sub_1DB81F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r12

  v4 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v4 = *(_QWORD *)v4;
  v5 = (*(_BYTE *)(v4 + 8) & 0x7Fu) - 34;
  if ( (unsigned int)v5 > 5 || v4 == 72 )
    return a1;
  v6 = (unsigned __int8)(*(_WORD *)(a1 + 98) >> 4);
  if ( (_DWORD)v6 == 255 )
    v6 = (unsigned int)sub_B74880(a1);
  if ( (unsigned int)sub_B76070(v4 - 72, a2, v5, a4) > (unsigned int)v6
    && a1 == *(_QWORD *)(*(_QWORD *)(v4 + 48) + 8 * v6) )
  {
    return *(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v4 - 72) + 32LL))(v4 - 72)
                                 + 120)
                     + 8 * v6);
  }
  else
  {
    return a1;
  }
}
