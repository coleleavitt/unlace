unsigned __int64 __fastcall sub_12EEA40(
        unsigned __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  int v8; // eax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned __int64 v12; // rax

  if ( (*(_BYTE *)(a3 + 4) & 0x10) != 0 )
    sub_145CD30(a2, a3);
  if ( (*(_BYTE *)(a3 + 3) & 2) != 0 )
  {
    v7 = a2[7];
    if ( (*(_BYTE *)(v7 + 21) & 2) != 0 )
    {
      v8 = *(_DWORD *)(a2[213] + 48LL);
      if ( v8 )
        goto LABEL_6;
    }
    else
    {
      v10 = 0;
      if ( *(char *)(v7 + 22) >= 0 )
        return v10;
      v8 = *(_DWORD *)(a2[213] + 48LL);
      if ( v8 )
      {
LABEL_6:
        v9 = *a1 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !*a1 || (*a1 & 4) == 0 || (v10 = *a1 & 0xFFFFFFFFFFFFFFF8LL, !v9) )
        {
          v11 = a2[16];
          a2[26] += 32LL;
          v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          if ( a2[17] >= v12 + 32 && v11 )
          {
            a2[16] = v12 + 32;
            v10 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v10 = sub_986170((__int64)(a2 + 16), 32, 32, 4, a5, a6);
            v12 = v10 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)(v10 + 8) = 0;
          *(_DWORD *)(v10 + 16) = 0;
          *(_QWORD *)(v10 + 24) = 0;
          *(_QWORD *)v10 = v9;
          *(_BYTE *)(v10 + 20) = 0;
          *a1 = v12 | 4;
          v8 = *(_DWORD *)(a2[213] + 48LL);
        }
        if ( *(_DWORD *)(v10 + 16) != v8 )
          sub_14476F0(a2, a3, v10);
        return v10;
      }
    }
  }
  return 0;
}
