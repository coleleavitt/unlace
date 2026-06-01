/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48E9C
// Address: 0x00048E9C

//----- (00048E9C) --------------------------------------------------------
_BYTE *__fastcall sub_48E9C(_BYTE *a1, char *s, unsigned __int8 *a3, int a4)
{
  _BYTE *v7; // r4
  size_t v9; // r10
  int v10; // r7
  unsigned __int8 *v11; // r4
  char *v12; // r0
  const char *v13; // r1
  unsigned __int8 *v14; // r0
  char **p_s1; // [sp+4h] [bp-68h] BYREF
  char *s1; // [sp+8h] [bp-64h] BYREF
  size_t v17; // [sp+Ch] [bp-60h]
  int v18; // [sp+10h] [bp-5Ch]
  _BYTE v19[80]; // [sp+14h] [bp-58h] BYREF

  v7 = a1;
  if ( a1 )
  {
    if ( *a1 == 5 )
    {
      s1 = nullptr;
      v17 = 0;
      v18 = 0;
      if ( s )
      {
        v9 = strlen(s);
        s1 = (char *)sub_78018((int)&s1, nullptr, v9 + 1, 1u);
        v17 = v9 + 1;
        memmove(s1, s, v9);
        s1[v9] = 0;
      }
      if ( a4 )
      {
        sub_45A40((int)v19, 0, 1);
        if ( sub_48DE4((int)v19, *((_DWORD *)v7 + 2), (const char **)&s1, a3) )
          v7 = nullptr;
        else
          v7 = (_BYTE *)sub_70B7C();
        sub_46F18((int)v19);
      }
      else
      {
        v10 = *((_DWORD *)v7 + 2);
        v11 = (unsigned __int8 *)sub_4253C(*(_DWORD **)(v10 + 8), (_DWORD *)(v10 + 4), (int)&s1);
        if ( (unsigned __int8 *)(v10 + 4) == v11
          || (!v17 ? (v12 = (char *)&dword_8DB98) : (v12 = s1),
              !*((_DWORD *)v11 + 5) ? (v13 = (const char *)&dword_8DB98) : (v13 = *((const char **)v11 + 4)),
              strcmp(v12, v13) < 0) )
        {
          p_s1 = &s1;
          v11 = (unsigned __int8 *)sub_45908((_DWORD *)v10, (int)v11, (int *)&p_s1);
        }
        sub_45B30(v11 + 32, a3);
        v7 = nullptr;
      }
      if ( s1 )
      {
        v17 = 0;
        sub_77F70(s1);
      }
    }
    else
    {
      return (_BYTE *)sub_70B98(1532);
    }
  }
  else
  {
    v14 = (unsigned __int8 *)sub_3F110(s);
    if ( v14 )
    {
      sub_45B30(v14, a3);
    }
    else
    {
      sub_70C04(0, s);
      return (_BYTE *)sub_70B98(1538);
    }
  }
  return v7;
}
// 8DB98: using guessed type int dword_8DB98;
