/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0500
// Address: 0x080D0500

//----- (080D0500) --------------------------------------------------------
void *__cdecl sub_80D0500(int errnum)
{
  _DWORD *v1; // esi
  char *v2; // eax
  char *v3; // edi
  size_t v4; // ebp
  void *v6; // eax
  size_t v7; // edx

  v1 = (_DWORD *)sub_80C7B60();
  v2 = strerror(errnum);
  if ( v2 )
  {
    v3 = v2;
    v4 = strlen(v2);
    if ( v4 )
    {
      v6 = (void *)*v1;
      v7 = v4 + 1;
      if ( v1[2] < v4 + 1 )
      {
        v6 = sub_80CF920((int)v1, v6, v4 + 1, 1u);
        v7 = v4 + 1;
        *v1 = v6;
      }
      v1[1] = v7;
      memmove(v6, v3, v4);
      *(_BYTE *)(*v1 + v4) = 0;
      return (void *)*v1;
    }
    else
    {
      v1[1] = 0;
      return (void *)*v1;
    }
  }
  else
  {
    sub_805ED10(v1, "Unknown error, code: 0x%08X", errnum);
    return (void *)*v1;
  }
}
