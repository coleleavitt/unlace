__int64 __fastcall sub_DFC980(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rax

  while ( 1 )
  {
    v2 = a2;
    v3 = a1[4];
    if ( !v3 || (unsigned int)(*(_DWORD *)(v3 + 8) - 1) <= 1 )
      break;
    v4 = *(_QWORD *)(v3 + 16);
    if ( (v4 & 4) != 0 )
      BUG();
    if ( (*(_BYTE *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 29) & 2) == 0 || !a1[1] )
      break;
    a2 = a1[17];
    a1 = (_QWORD *)a1[1];
  }
  return sub_E0E3F0(a1[2] + 16LL, v3, v2);
}

