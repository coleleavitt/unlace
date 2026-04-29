__int64 __fastcall sub_1D0E0(__int64 a1)
{
  __int64 result; // rax
  __int16 v2; // dx

  result = 0;
  if ( *(_WORD *)(a1 + 40) == 44 && *(_BYTE *)(a1 + 57) == 4 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 72);
    v2 = *(_WORD *)(a1 + 62);
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v2;
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 2;
    return 1;
  }
  return result;
}
