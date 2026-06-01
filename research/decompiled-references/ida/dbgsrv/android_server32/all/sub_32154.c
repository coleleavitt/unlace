/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32154
// Address: 0x00032154

//----- (00032154) --------------------------------------------------------
int __fastcall sub_32154(int a1, void **a2, __int64 *a3, unsigned int a4)
{
  int v5; // r1
  int v6; // r3
  unsigned int v7; // r4
  unsigned int v8; // r2
  int v10; // r0
  size_t v11; // r5
  unsigned int v12; // r6
  void *v13; // r0

  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  if ( *a3 >= 1 && (v7 = *((_DWORD *)a3 + 4), v8 = *((_DWORD *)a3 + 5), v7 | v8) )
  {
    if ( __PAIR64__(v8, v7) - 1 >= a4 )
    {
      return sub_2F228(a1, a2, v5 + a4, __CFADD__(v5, a4) + v6);
    }
    else
    {
      sub_1DA58((int)a2, "bad offset %08x", v5 + a4);
      return 0;
    }
  }
  else
  {
    v10 = _strlen_chk("{no string table}", 18);
    if ( v10 )
    {
      v11 = v10;
      v12 = v10 + 1;
      if ( (unsigned int)a2[2] >= v10 + 1 )
      {
        v13 = *a2;
      }
      else
      {
        v13 = qvector_reserve((int)a2, *a2, v12, 1u);
        *a2 = v13;
      }
      a2[1] = (void *)v12;
      memmove(v13, "{no string table}", v11);
      *((_BYTE *)*a2 + v11) = 0;
      return 0;
    }
    else
    {
      a2[1] = nullptr;
      return 0;
    }
  }
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
