__int64 __fastcall sub_22B7F30(__int64 a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // edx
  __int64 v5; // rdx
  __int64 v7; // rdx
  int v8; // edx
  unsigned __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+8h] [rbp-20h]
  __int128 v11; // [rsp+10h] [rbp-18h] BYREF

  if ( *(_DWORD *)(a1 + 44) == 9 )
    goto LABEL_9;
  if ( a2 != 10 )
  {
    if ( a2 <= 0x18 )
    {
      a2 += 9;
      if ( a3 )
        goto LABEL_5;
LABEL_10:
      LODWORD(v9) = a2;
      goto LABEL_11;
    }
    ++a2;
LABEL_9:
    if ( a3 )
    {
LABEL_5:
      LODWORD(v11) = a2;
      v4 = DWORD1(v11) & 0x80000000 | a3 & 0x7FFFFFFF;
      DWORD1(v11) = v4;
      if ( a4 )
      {
        BYTE7(v11) = HIBYTE(v4) | 0x80;
        *((_QWORD *)&v11 + 1) = a4 & 0x7FFFFFFF | 0x80000000LL;
      }
      else
      {
        HIBYTE(v11) = 0;
        *(_QWORD *)((char *)&v11 + 7) = HIBYTE(v4) | 0x80u;
      }
      goto LABEL_7;
    }
    goto LABEL_10;
  }
  v8 = a3 + 4;
  if ( a4 )
  {
    LODWORD(v11) = v8;
    HIDWORD(v11) = 0;
    *(_QWORD *)((char *)&v11 + 4) = DWORD1(v11) & 0x80000000 | a4 & 0x7FFFFFFF;
    BYTE7(v11) |= 0x80u;
LABEL_7:
    v9 = sub_22B7B00(a1);
    v10 = v5;
    return sub_A09E20((unsigned int *)&v9, (unsigned int *)&v11);
  }
  LODWORD(v9) = v8;
LABEL_11:
  HIDWORD(v9) = 0;
  v10 = 0;
  *(_QWORD *)&v11 = sub_22B7B00(a1);
  *((_QWORD *)&v11 + 1) = v7;
  return sub_A09E20((unsigned int *)&v11, (unsigned int *)&v9);
}
