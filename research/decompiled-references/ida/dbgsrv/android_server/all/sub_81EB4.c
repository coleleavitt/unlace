/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81EB4
// Address: 0x0000000000081EB4

//----- (0000000000081EB4) ----------------------------------------------------
__int64 __fastcall sub_81EB4(__int64 a1, __int64 a2, const void *a3)
{
  unsigned int v3; // w8
  __int64 v6; // x8
  size_t v7; // x21
  unsigned __int64 v8; // x22
  _BYTE *v9; // x0

  v3 = *(unsigned __int16 *)(a2 + 24);
  if ( v3 - 6 < 3 )
  {
LABEL_4:
    if ( a3 && *(_QWORD *)(a1 + 8) > (unsigned __int64)a3 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v6 = *(_QWORD *)(a1 + 8);
      v7 = v6 - (_QWORD)a3;
      v8 = v6 - (_QWORD)a3 + 1;
      if ( *(_QWORD *)(a2 + 16) >= v8 )
      {
        v9 = *(_BYTE **)a2;
      }
      else
      {
        v9 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v6 - (_QWORD)a3 + 1, 1u);
        *(_QWORD *)a2 = v9;
      }
      *(_QWORD *)(a2 + 8) = v8;
      v9[v7] = 0;
      memmove(*(void **)a2, a3, v7);
      return 1;
    }
    return 0;
  }
  if ( v3 != 2 )
  {
    if ( v3 == 3 )
      goto LABEL_4;
    if ( v3 <= 0x7F )
      return 0;
  }
  return 1;
}
