__int64 __fastcall sub_B27BE0(__int64 a1, int *a2)
{
  int v2; // eax
  void *v4; // rbp
  __int64 v6; // rsi
  void *v7; // r12
  int v8; // eax
  int *v9; // rdx
  char v10; // al
  char v11; // al
  int v12; // eax

  if ( *(_DWORD *)a1 == 1 )
  {
    v2 = *a2;
    if ( *a2 == 1 )
    {
      v6 = a1 + 8;
      v7 = qword_1C7F2C0;
      v8 = a2[2];
      if ( v8 )
      {
        v9 = a2 + 2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          if ( (*(_BYTE *)(a1 + 28) & 1) != 0 || *(_DWORD *)(a1 + 24) != 1 || (a2[7] & 1) != 0 || a2[6] != 1 )
          {
            sub_1851D20(qword_1C7F2C0, v6, v9, a1 + 8);
          }
          else
          {
            sub_1831A80(qword_1C7F2C0, v6, v9, a1 + 8);
            sub_182CBA0(v7, a1 + 24);
            *(_BYTE *)(a1 + 28) &= ~1u;
            *(_DWORD *)(a1 + 24) = 1;
          }
        }
        else
        {
          if ( (a2[3] & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, v6, v9);
          }
          else
          {
            *(_BYTE *)(a1 + 12) &= ~1u;
            *(_DWORD *)(a1 + 8) = v8;
          }
          if ( (a2[7] & 1) != 0 )
          {
            sub_182C690(v7, a1 + 24, a2 + 6);
          }
          else
          {
            v12 = a2[6];
            *(_BYTE *)(a1 + 28) &= ~1u;
            *(_DWORD *)(a1 + 24) = v12;
          }
        }
      }
      else
      {
        v10 = *(_BYTE *)(a1 + 12);
        if ( (v10 & 1) != 0 )
          sub_182C690(qword_1C7F2C0, v6, a1 + 8);
        else
          *(_BYTE *)(a1 + 12) = v10 & 0xFE;
        v11 = *(_BYTE *)(a1 + 28);
        if ( (v11 & 1) != 0 )
          sub_182C690(v7, a1 + 24, a1 + 24);
        else
          *(_BYTE *)(a1 + 28) = v11 & 0xFE;
      }
    }
    else
    {
      if ( v2 == 2 )
      {
        *(_DWORD *)a1 = 2;
      }
      else
      {
        if ( v2 )
        {
          sub_1872CE0("");
          sub_1873130(114, 48);
        }
        *(_DWORD *)a1 = 0;
      }
      v4 = qword_1C7F2C0;
      sub_182CEF0(qword_1C7F2C0, a1 + 8);
      sub_182CBA0(v4, a1 + 24);
      *(_BYTE *)(a1 + 28) &= ~1u;
      *(_DWORD *)(a1 + 24) = 1;
    }
  }
  return a1;
}

