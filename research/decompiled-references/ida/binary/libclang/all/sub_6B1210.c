__int64 __fastcall sub_6B1210(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  char v6; // al
  unsigned __int8 v7; // al
  _DWORD *v8; // rsi
  int v9; // eax
  int v10; // eax
  void *v11; // rdx
  char v12; // cl
  void *v13[2]; // [rsp+0h] [rbp-58h]
  void *v14; // [rsp+20h] [rbp-38h] BYREF
  void *v15; // [rsp+28h] [rbp-30h] BYREF
  int v16; // [rsp+30h] [rbp-28h]

  if ( a3 )
  {
    v4 = *(_QWORD *)(a3 + 40);
    *(_OWORD *)v13 = 0;
    if ( v4 )
    {
      sub_865140(&v14, v4, *a2, 0);
      if ( (_BYTE)v16 )
      {
        LODWORD(v13[1]) = (_DWORD)v15;
        v13[0] = v14;
        v10 = (int)v15;
        LOBYTE(v14) = 1;
        v16 = (int)v15;
        if ( (unsigned int)v15 > 0x40 )
        {
          sub_2585B30(&v15);
          v12 = (char)v14;
          v10 = v16;
          v11 = v15;
        }
        else
        {
          v11 = v13[0];
          v12 = 1;
        }
        *(_DWORD *)(a1 + 16) = v10;
        v6 = 1;
        *(_BYTE *)a1 = v12;
        *(_QWORD *)(a1 + 8) = v11;
      }
      else
      {
        *(_BYTE *)a1 = 0;
        v6 = 0;
        *(_DWORD *)(a1 + 16) = 1;
        *(_QWORD *)(a1 + 8) = 0;
      }
      if ( v6 && LODWORD(v13[1]) > 0x40 )
      {
        if ( v13[0] )
          operator delete[](v13[0]);
      }
      return a1;
    }
LABEL_5:
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 8) = 0;
    return a1;
  }
  if ( !a4 )
    goto LABEL_5;
  v7 = *(_BYTE *)(a4 + 19);
  v8 = *(_DWORD **)(a4 + 40);
  if ( (v7 & 2) != 0 )
  {
    v9 = v8[2];
    LODWORD(v15) = v9;
    if ( (unsigned int)v9 > 0x40 )
    {
      sub_2585B30(&v14);
      v9 = (int)v15;
      v8 = v14;
    }
    else
    {
      v8 = *(_DWORD **)v8;
    }
  }
  else
  {
    v9 = 8 * ((v7 >> 2) & 0x1F);
    LODWORD(v15) = v9;
    if ( v9 > 64 )
    {
      sub_2585A50(&v14, v8, 0);
      v9 = (int)v15;
      v8 = v14;
    }
  }
  *(_DWORD *)(a1 + 16) = v9;
  *(_BYTE *)a1 = 1;
  *(_QWORD *)(a1 + 8) = v8;
  return a1;
}

