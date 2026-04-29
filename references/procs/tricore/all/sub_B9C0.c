unsigned __int64 __fastcall sub_B9C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi

  result = *(unsigned __int16 *)(a3 + 24);
  if ( (_WORD)result == 88 )
  {
    if ( *(_BYTE *)(a3 + 41) == 1 && *(_WORD *)(a3 + 46) == 26 )
    {
      result = *(_QWORD *)(a3 + 80) & 0xFFFF00000000FF00LL;
      if ( result == 0x1A000000000400LL )
      {
        result = *(_QWORD *)(a1 + 32);
        v6 = *(_QWORD *)(a3 + 96);
        if ( *(_DWORD *)(result + 24) != 8 )
          v6 = (int)v6;
        goto LABEL_14;
      }
    }
  }
  else if ( ((_WORD)result == 180 || (_WORD)result == 5)
         && *(_WORD *)(a3 + 26) == 2
         && *(_BYTE *)(a3 + 33) == 1
         && *(_BYTE *)(a3 + 41) == 1
         && *(_WORD *)(a3 + 46) == 26
         && *(_BYTE *)(a3 + 81) == 5 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = *(_QWORD *)(a3 + 88);
    if ( *(_DWORD *)(v5 + 24) != 8 )
      v6 = (int)v6;
    if ( (_WORD)result == 180 )
      v6 = -v6;
LABEL_14:
    if ( v6 )
      return add_auto_stkpnt(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26), v6);
  }
  return result;
}
