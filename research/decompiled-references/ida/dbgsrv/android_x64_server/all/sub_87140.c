/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87140
// Address: 0x0000000000087140

//----- (0000000000087140) ----------------------------------------------------
__int64 __fastcall sub_87140(__int64 a1, __int64 a2, const void *a3)
{
  unsigned int v3; // r14d
  int v5; // eax
  size_t v6; // r15
  char *v7; // rax

  v5 = *(_DWORD *)(a2 + 24);
  LOBYTE(v3) = 1;
  if ( (unsigned __int16)(v5 - 6) >= 3u )
  {
    if ( (unsigned __int16)v5 == 2 )
      return v3;
    if ( (unsigned __int16)v5 != 3 )
    {
      if ( (unsigned __int16)v5 > 0x7Fu )
        return v3;
      return 0;
    }
  }
  if ( !a3 || *(_QWORD *)(a1 + 8) <= (unsigned __int64)a3 )
    return 0;
  *(_QWORD *)(a2 + 8) = 0;
  v6 = *(_QWORD *)(a1 + 8) - (_QWORD)a3;
  if ( *(_QWORD *)(a2 + 16) >= v6 + 1 )
  {
    v7 = *(char **)a2;
  }
  else
  {
    v7 = (char *)qvector_reserve(a2, *(char **)a2, v6 + 1, 1u);
    *(_QWORD *)a2 = v7;
  }
  *(_QWORD *)(a2 + 8) = v6 + 1;
  v7[v6] = 0;
  memmove(*(void **)a2, a3, v6);
  return v3;
}
// 871D0: variable 'v3' is possibly undefined
