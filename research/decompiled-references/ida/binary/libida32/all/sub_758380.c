__int64 __fastcall sub_758380(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  char *v3; // rbp
  unsigned int v4; // r12d
  unsigned __int64 v5; // rax
  char v6; // edx^3
  unsigned __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v15; // rax
  int v16[2]; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v17[9]; // [rsp+1Eh] [rbp-3Ah] BYREF
  char v18; // [rsp+27h] [rbp-31h]
  int v19[2]; // [rsp+28h] [rbp-30h]

  *(_QWORD *)v16 = a2;
  *(_QWORD *)v19 = __readfsqword(0x28u);
  *(_DWORD *)v17 = -1;
  v17[4] = 0;
  v2 = sub_757F80(a1, (const char **)v16);
  if ( v2 == -1 )
    return (unsigned int)-1;
  v3 = *(char **)v16;
  v4 = v2;
  v5 = sub_756AE0(a1, v2, *(char **)v16);
  *(_WORD *)&v17[5] = v5;
  v17[7] = BYTE2(v5);
  v6 = BYTE3(v5);
  v7 = HIDWORD(v5);
  v18 = v7;
  v17[8] = v6;
  if ( *(_DWORD *)&v17[5] == -1 )
  {
    return (unsigned int)-1;
  }
  else
  {
    *(_DWORD *)v17 = *(_DWORD *)&v17[5];
    v17[4] = v7;
    if ( v4 || (v8 = -1, *v3) )
    {
      v8 = v4;
      if ( (unsigned __int64)v4 < *(_QWORD *)(a1 + 56) )
      {
        v9 = *(_QWORD *)(a1 + 48) + 176LL * v4;
        v10 = *(_QWORD *)(v9 + 32);
        v11 = *(_QWORD *)(v9 + 24);
        v12 = v11 + 5 * v10;
        if ( (*(_BYTE *)(v9 + 164) & 4) != 0 )
        {
          if ( v17[4] )
          {
            v15 = *(_QWORD *)(v9 + 24);
            if ( v10 )
            {
              do
              {
                if ( !*(_BYTE *)(v15 + 4) )
                  break;
                if ( *(_DWORD *)&v17[5] == *(_DWORD *)v15 )
                  break;
                v15 += 5;
              }
              while ( v12 != v15 );
            }
          }
          else
          {
            sub_7534D0(v11, v12, (__int64)v17);
          }
        }
        else if ( v12 != v11 )
        {
          v13 = *(_QWORD *)(v9 + 24);
          do
          {
            if ( *(_DWORD *)&v17[5] == *(_DWORD *)v13 && v17[4] == *(_BYTE *)(v13 + 4) )
              break;
            v13 += 5;
          }
          while ( v12 != v13 );
        }
      }
    }
  }
  return v8;
}

