/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: winerr
// Address: 0x0007EFB4

//----- (0007EFB4) --------------------------------------------------------
void *__fastcall winerr(int a1)
{
  _DWORD *v2; // r4
  char *v3; // r0
  char *v4; // r5
  size_t v5; // r0
  size_t v6; // r6
  unsigned int v7; // r7
  void *v8; // r0

  v2 = sub_75A04();
  v3 = strerror(a1);
  if ( v3 )
  {
    v4 = v3;
    v5 = strlen(v3);
    if ( v5 )
    {
      v6 = v5;
      v7 = v5 + 1;
      if ( v2[2] >= v5 + 1 )
      {
        v8 = (void *)*v2;
      }
      else
      {
        v8 = qvector_reserve((int)v2, (void *)*v2, v7, 1u);
        *v2 = v8;
      }
      v2[1] = v7;
      memmove(v8, v4, v6);
      *(_BYTE *)(*v2 + v6) = 0;
    }
    else
    {
      v2[1] = 0;
    }
  }
  else
  {
    sub_1DA58((int)v2, "Unknown error, code: 0x%08X", a1);
  }
  return (void *)*v2;
}
