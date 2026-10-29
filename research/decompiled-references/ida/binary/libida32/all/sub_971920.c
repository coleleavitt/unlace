__int64 __fastcall sub_971920(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned int v7; // r13d
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-30h]

  v11 = a2;
  if ( a3 )
  {
    if ( a2 > 0x40 )
    {
      sub_21E1730(&v10, -1, 1);
      a2 = v11;
    }
    else
    {
      v4 = 0xFFFFFFFFFFFFFFFFLL >> -(char)a2;
      if ( !a2 )
        v4 = 0;
      v10 = v4;
    }
  }
  else
  {
    v7 = a2 - 1;
    v8 = ~(1LL << ((unsigned __int8)a2 - 1));
    if ( a2 > 0x40 )
    {
      sub_21E1730(&v10, -1, 1);
      a2 = v11;
      if ( v11 > 0x40 )
      {
        *(_QWORD *)(v10 + 8LL * (v7 >> 6)) &= v8;
        goto LABEL_6;
      }
    }
    else
    {
      v9 = 0xFFFFFFFFFFFFFFFFLL >> -(char)a2;
      if ( !a2 )
        v9 = 0;
      v10 = v9;
    }
    v10 &= v8;
  }
LABEL_6:
  v5 = v10;
  *(_BYTE *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = v5;
  return a1;
}

