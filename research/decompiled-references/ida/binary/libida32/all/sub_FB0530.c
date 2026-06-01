unsigned __int64 __fastcall sub_FB0530(__int64 a1, const void *a2, size_t a3, char a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  char v6; // dl
  char *v7; // r9
  _WORD *v8; // r8
  __int64 v9; // r10
  char v10; // [rsp+Ch] [rbp-Ch] BYREF

  v10 = a4;
  result = sub_FB01C0(a2, a3);
  if ( BYTE4(result) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = v10;
    v7 = &v10;
    v8 = &unk_2B23900;
    *(_BYTE *)(v5 + 4LL * (int)result) = v10 & 7 | *(_BYTE *)(v5 + 4LL * (int)result) & 0xF8;
    result = word_23F3A00[*((unsigned __int16 *)&unk_2B23900 + 12 * (int)result + 2)];
    if ( (_WORD)result != 0xFFFF )
    {
      while ( 1 )
      {
        *(_BYTE *)(v5 + 4 * result) = v6 & 7 | *(_BYTE *)(v5 + 4 * result) & 0xF8;
        sub_FAEFE0(v8[12 * result + 2], a1, v7);
        result = *(__int16 *)(v9 + 2);
        if ( (_WORD)result == 0xFFFF )
          break;
        v6 = v10;
        v5 = *(_QWORD *)(a1 + 16);
      }
    }
  }
  return result;
}

