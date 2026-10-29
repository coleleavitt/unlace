/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: winerr
// Address: 0x000B16F0

//----- (000B16F0) --------------------------------------------------------
void *__cdecl winerr(int errnum)
{
  _DWORD *v1; // esi
  char *v2; // eax
  size_t v3; // eax
  size_t v4; // edi
  void *v5; // eax
  size_t v7; // [esp+4h] [ebp-18h]
  char *v8; // [esp+8h] [ebp-14h]

  v1 = sub_A3930();
  v2 = strerror(errnum);
  if ( v2 )
  {
    v8 = v2;
    v3 = strlen(v2);
    if ( v3 )
    {
      v7 = v3;
      v4 = v3 + 1;
      if ( v1[2] >= v3 + 1 )
      {
        v5 = (void *)*v1;
      }
      else
      {
        v5 = qvector_reserve((int)v1, (void *)*v1, v3 + 1, 1u);
        *v1 = v5;
      }
      v1[1] = v4;
      memmove(v5, v8, v7);
      *(_BYTE *)(*v1 + v7) = 0;
    }
    else
    {
      v1[1] = 0;
    }
  }
  else
  {
    sub_1F400((int)v1, "Unknown error, code: 0x%08X", errnum);
  }
  return (void *)*v1;
}
