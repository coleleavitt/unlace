__int64 __fastcall sub_1120E0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int128 v4; // rax
  __int64 v6; // r13
  int v7; // ecx
  __int128 v9; // rax
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r15
  int v15; // edx
  int v16; // r9d
  unsigned __int64 v17; // rdi
  int v18; // eax
  int v19; // r9d
  int v20; // ebx
  int v22; // ebp
  int v23; // r15d

  *((_QWORD *)&v4 + 1) = a3;
  *(_QWORD *)&v4 = 256;
  v6 = *((_QWORD *)&v4 + 1);
  v7 = *(_DWORD *)(a1 + 120);
  if ( v7 == 8 )
    *(_QWORD *)&v4 = 16;
  if ( __PAIR128__(*((unsigned __int64 *)&v4 + 1), a2) >= (unsigned __int64)v4 )
  {
    *(_QWORD *)&v4 = a2;
    v9 = v4 + 0xFFFFFFFFFFFFFFFFLL;
    if ( v6 & --*((_QWORD *)&v9 + 1) | a2 & (unsigned __int64)v9 )
    {
      v10 = *(_DWORD *)(a1 + 128) + v7;
      if ( (unsigned __int64)v10 <= 0x7F )
        v9 += __PAIR128__((unsigned __int64)((v10 & 0x40) != 0) << v10, (unsigned __int64)((v10 & 0x40) == 0) << v10);
      v11 = 8;
      v12 = __udivti3(v9, *((_QWORD *)&v9 + 1), a2, v6);
      if ( *(int *)(a1 + 36) <= 4 )
        v11 = 4;
      v13 = sub_325910(v12, v11, 0);
      *(_QWORD *)(a1 + 112) = v13;
      v14 = v13;
      if ( v13 > 1 )
      {
        v15 = *(_DWORD *)(a1 + 120);
        v16 = *(_DWORD *)(a1 + 128);
        v17 = v13;
        while ( 1 )
        {
          v20 = v15 - (*(_DWORD *)(a1 + 124) + *(unsigned __int8 *)(a1 + 133));
          if ( (unsigned __int8)sub_111C10(v17, v20, v15, a2, v6, v16) )
          {
LABEL_15:
            *(_QWORD *)(a1 + 112) <<= *(_DWORD *)(a1 + 124);
            return 1;
          }
          v18 = *(_DWORD *)(a1 + 120);
          if ( v18 > 31 )
            break;
          v19 = *(_DWORD *)(a1 + 128);
          if ( v18 > v19 )
            return 0;
          v16 = v19 - v18;
          v15 = 2 * v18;
          v17 = *(_QWORD *)(a1 + 112);
          *(_DWORD *)(a1 + 128) = v16;
          *(_DWORD *)(a1 + 120) = 2 * v18;
        }
        if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * v14, 1) <= 0x1999999999999999uLL || a4 )
        {
          v22 = 8 * *(_DWORD *)(a1 + 36) - *(unsigned __int8 *)(a1 + 133);
          while ( 1 )
          {
            v23 = v20--;
            if ( v22 > v20 )
              break;
            if ( (unsigned __int8)sub_111C10(
                                    *(_QWORD *)(a1 + 112),
                                    v20,
                                    *(_DWORD *)(a1 + 120),
                                    a2,
                                    v6,
                                    *(_DWORD *)(a1 + 128)) )
            {
              if ( *(_DWORD *)(a1 + 120) == v23 )
                *(_BYTE *)(a1 + 133) = 1;
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
  return 0;
}
