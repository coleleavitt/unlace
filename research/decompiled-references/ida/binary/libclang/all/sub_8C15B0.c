unsigned __int64 __fastcall sub_8C15B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v7; // [rsp+18h] [rbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v7 = 0;
  v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 42 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 <= 1
    && (v5 = sub_B0D320(v5)) != 0 )
  {
    while ( (*(_BYTE *)(v5 + 18) & 0x10) != 0 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 42 <= 1 )
          break;
        v5 = sub_B0D320(v5);
        if ( (*(_BYTE *)(v5 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
LABEL_5:
    v4 = *(_QWORD *)(v5 + 32);
  }
  return sub_6DA5F0(a2, v4, &v7);
}

