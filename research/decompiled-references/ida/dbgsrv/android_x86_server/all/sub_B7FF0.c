/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B7FF0
// Address: 0x000B7FF0

//----- (000B7FF0) --------------------------------------------------------
int __fastcall sub_B7FF0(int a1, int a2)
{
  int v3; // eax
  size_t v4; // edi
  int v5; // ecx
  void *v6; // eax

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 == -1 )
  {
    v3 = __strlen_chk("BADADDR", 8);
    v4 = v3;
    if ( v3 )
    {
      v5 = v3 + 1;
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v3 + 1) )
      {
        v6 = *(void **)a1;
      }
      else
      {
        v6 = qvector_reserve(a1, *(void **)a1, v3 + 1, 1u);
        *(_DWORD *)a1 = v6;
        v5 = v4 + 1;
      }
      *(_DWORD *)(a1 + 4) = v5;
      memmove(v6, "BADADDR", v4);
      *(_BYTE *)(*(_DWORD *)a1 + v4) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 4) = 0;
    }
  }
  else
  {
    sub_1F400(a1, "%a", a2);
  }
  return a1;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
