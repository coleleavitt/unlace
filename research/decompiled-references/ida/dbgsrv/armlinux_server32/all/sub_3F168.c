/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F168
// Address: 0x0003F168

//----- (0003F168) --------------------------------------------------------
bool __fastcall sub_3F168(int a1, unsigned __int8 *a2, char *a3)
{
  int v4; // r3
  int v5; // r4
  const char *v7; // r0
  unsigned __int8 *v8; // r0
  size_t v9; // r7
  void *v10; // r0
  char *v11; // [sp+4h] [bp-18h]
  void *src; // [sp+8h] [bp-14h] BYREF
  size_t v13; // [sp+Ch] [bp-10h]
  int v14; // [sp+10h] [bp-Ch]

  if ( !a2 )
    return sub_49534((unsigned __int8 *)a1, (int)a2, a3, 0) == 0;
  v4 = *a2;
  if ( v4 == 7 )
  {
    if ( *((_DWORD *)a2 + 3) )
      v7 = *((const char **)a2 + 2);
    else
      v7 = (const char *)&dword_8DB98;
    v11 = a3;
    v8 = (unsigned __int8 *)sub_3F110(v7);
    a2 = v8;
    if ( !v8 )
    {
      v5 = 0;
      sub_70B98(1532);
      return v5;
    }
    a3 = v11;
    if ( *v8 != 5 )
      return sub_49534((unsigned __int8 *)a1, (int)a2, a3, 0) == 0;
  }
  else if ( v4 != 5 )
  {
    return sub_49534((unsigned __int8 *)a1, (int)a2, a3, 0) == 0;
  }
  if ( a3 && *a3 )
    return sub_49534((unsigned __int8 *)a1, (int)a2, a3, 0) == 0;
  src = nullptr;
  v13 = 0;
  v14 = 0;
  v5 = 0;
  if ( !sub_428BC((int)&src, (int)a2) )
  {
    sub_45758((unsigned __int8 *)a1);
    v9 = v13;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_BYTE *)a1 = 7;
    v5 = 1;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v9 )
    {
      v10 = sub_77FEC(v9);
      *(_DWORD *)(a1 + 8) = v10;
      *(_DWORD *)(a1 + 16) = v9;
      v5 = 1;
      memcpy(v10, src, v9);
      *(_DWORD *)(a1 + 12) = v9;
    }
  }
  if ( src )
  {
    v13 = 0;
    sub_77F70(src);
  }
  return v5;
}
// 8DB98: using guessed type int dword_8DB98;
