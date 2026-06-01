/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54C94
// Address: 0x00054C94

//----- (00054C94) --------------------------------------------------------
void *__fastcall sub_54C94(void *result, char *s)
{
  int v2; // r5
  size_t v4; // r6
  unsigned int v5; // r7
  void *v6; // r0

  v2 = (int)result;
  if ( s && (result = (void *)strlen(s), (v4 = (size_t)result) != 0) )
  {
    v5 = (unsigned int)result + 1;
    v6 = *(void **)(v2 + 148);
    if ( v5 > *(_DWORD *)(v2 + 156) )
    {
      v6 = sub_77EB0(v2 + 148, *(void **)(v2 + 148), v5, 1u);
      *(_DWORD *)(v2 + 148) = v6;
    }
    *(_DWORD *)(v2 + 152) = v5;
    result = memmove(v6, s, v4);
    *(_BYTE *)(*(_DWORD *)(v2 + 148) + v4) = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 152) = 0;
  }
  return result;
}
