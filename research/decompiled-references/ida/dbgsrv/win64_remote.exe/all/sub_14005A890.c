/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A890
// Address: 0x000000014005A890

//----- (000000014005A890) ----------------------------------------------------
unsigned __int64 __fastcall sub_14005A890(DWORD dwMessageId)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  void *v8; // rcx
  WCHAR Buffer[1024]; // [rsp+40h] [rbp-828h] BYREF

  v2 = (unsigned __int64 *)sub_140063CE0();
  if ( !FormatMessageW(0x1200u, nullptr, dwMessageId, 0x400u, Buffer, 0x400u, nullptr) )
  {
    sub_140002FB0((__int64)v2, "Unknown error, code: 0x%08X", dwMessageId);
    return *v2;
  }
  sub_140061D80((__int64)v2, Buffer, -1);
  sub_140008250((__int64)v2, "\r", (const char *)&word_1400929C4);
  sub_140008250((__int64)v2, "\n", (const char *)&word_1400929C4);
  v3 = v2[1];
  if ( v3 <= 1 )
    return *v2;
  v4 = *v2;
  v5 = v3 + *v2 - 1;
  if ( v5 > *v2 )
  {
    do
    {
      v6 = v5 - 1;
      if ( *(char *)(v5 - 1) < 0 )
        break;
      if ( !isspace(*(unsigned __int8 *)(v5 - 1)) )
        break;
      --v5;
    }
    while ( v6 > v4 );
  }
  v7 = v5 - v4;
  if ( v7 )
  {
    sub_140002EF0((__int64)v2, v7 + 1);
    *(_BYTE *)(v7 + *v2) = 0;
    return *v2;
  }
  v8 = (void *)*v2;
  if ( *v2 )
  {
    v2[1] = 0;
    j_free(v8);
    *v2 = 0;
    v2[2] = 0;
  }
  return 0;
}
// 1400929C4: using guessed type __int16 word_1400929C4;
