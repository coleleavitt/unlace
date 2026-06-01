/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D6AE0
// Address: 0x000D6AE0

//----- (000D6AE0) --------------------------------------------------------
int __fastcall sub_D6AE0(int a1)
{
  char *v2; // eax
  bool v3; // cf
  const char *v4; // edi
  char *v5; // ecx
  char *v6; // ecx
  int result; // eax
  _DWORD *v8; // edi
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // edx
  char *v12; // [esp+10h] [ebp-1Ch]
  char *v13; // [esp+14h] [ebp-18h]
  const char *v14; // [esp+18h] [ebp-14h]

  v2 = *(char **)a1;
  v3 = (unsigned int)(*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) < 2;
  v4 = nullptr;
  v5 = nullptr;
  if ( !v3 )
  {
    v4 = nullptr;
    v5 = nullptr;
    if ( *v2 == 84 )
    {
      if ( v2[1] == 115 )
      {
        *(_DWORD *)a1 = v2 + 2;
        v5 = "";
        v4 = "struct";
      }
      else
      {
        v4 = nullptr;
        v5 = nullptr;
        if ( *v2 == 84 )
        {
          if ( v2[1] == 117 )
          {
            *(_DWORD *)a1 = v2 + 2;
            v5 = "";
            v4 = "union";
          }
          else
          {
            v4 = nullptr;
            v5 = nullptr;
            if ( *v2 == 84 )
            {
              v4 = nullptr;
              v5 = nullptr;
              if ( v2[1] == 101 )
              {
                *(_DWORD *)a1 = v2 + 2;
                v5 = "";
                v4 = "enum";
              }
            }
          }
        }
      }
    }
  }
  v12 = v5;
  v6 = sub_C49E0((char **)a1, 0);
  result = 0;
  if ( v6 )
  {
    if ( v4 == v12 )
    {
      return (int)v6;
    }
    else
    {
      v13 = v6;
      v14 = v4;
      v8 = *(_DWORD **)(a1 + 4464);
      v9 = v8[1];
      if ( (unsigned int)(v9 + 32) < 0xFF8 )
      {
        v11 = v8 + 1;
      }
      else
      {
        v10 = operator new[](0x1000u);
        *v10 = v8;
        v10[1] = 0;
        *(_DWORD *)(a1 + 4464) = v10;
        v9 = 0;
        v11 = v10 + 1;
        v8 = v10;
      }
      *v11 = v9 + 32;
      *(_DWORD *)((char *)v8 + v9 + 12) = 16843014;
      *(_DWORD *)((char *)v8 + v9 + 8) = off_13AA1C;
      *(_DWORD *)((char *)v8 + v9 + 16) = v14;
      *(_DWORD *)((char *)v8 + v9 + 20) = v12;
      *(_DWORD *)((char *)v8 + v9 + 24) = v13;
      return (int)v8 + v9 + 8;
    }
  }
  return result;
}
// 13AA1C: using guessed type int (*off_13AA1C[3])();
