/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C8A0
// Address: 0x0003C8A0

//----- (0003C8A0) --------------------------------------------------------
_BYTE *__cdecl sub_3C8A0(int *a1, void **a2, _QWORD *a3, unsigned int a4)
{
  int v4; // eax
  size_t v5; // edi
  int v6; // esi
  void **v7; // ecx
  void *v8; // eax
  void **v10; // esi

  if ( (__int64)*a3 >= 1 && a3[2] )
  {
    if ( a3[2] - 1LL >= (unsigned __int64)a4 )
      return sub_37E10(a1, a2, a4 + *a3);
    sub_1F400((int)a2, "bad offset %08x", a4 + *(_DWORD *)a3);
  }
  else
  {
    v4 = __strlen_chk("{no string table}", 18);
    if ( v4 )
    {
      v5 = v4;
      v6 = v4 + 1;
      v7 = a2;
      if ( (unsigned int)a2[2] >= v4 + 1 )
      {
        v8 = *a2;
      }
      else
      {
        v8 = qvector_reserve((int)a2, *a2, v4 + 1, 1u);
        v7 = a2;
        *a2 = v8;
      }
      v7[1] = (void *)v6;
      v10 = v7;
      memmove(v8, "{no string table}", v5);
      *((_BYTE *)*v10 + v5) = 0;
    }
    else
    {
      a2[1] = nullptr;
    }
  }
  return nullptr;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
