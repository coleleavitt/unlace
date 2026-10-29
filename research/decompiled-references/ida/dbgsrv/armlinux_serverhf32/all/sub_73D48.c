/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73D48
// Address: 0x00073D48

//----- (00073D48) --------------------------------------------------------
int *sub_73D48()
{
  size_t v1; // r5
  void *v2; // r6
  int v3; // r3
  char *v4; // r1
  int v5; // r3
  char *v6; // r1
  int v7; // r3
  pthread_mutex_t *v8; // [sp+4h] [bp-18h] BYREF
  void *src; // [sp+8h] [bp-14h] BYREF
  void *v10; // [sp+Ch] [bp-10h]
  int v11; // [sp+10h] [bp-Ch]

  sub_7A110(&v8);
  if ( dword_D3BE0 )
    goto LABEL_7;
  src = nullptr;
  v10 = nullptr;
  v11 = 0;
  if ( sub_7A72C("IDAUSR", (int)&src) )
    sub_73BE0((const char *)&dword_D3BDC, (char *)src);
  if ( !dword_D3BE0 )
  {
    if ( sub_73A40((int)&src) )
    {
      v1 = (size_t)v10;
      v2 = v10;
      if ( v10 )
      {
        v2 = sub_77E84((signed int)v10);
        memcpy(v2, src, v1);
      }
      v3 = dword_D3BE0;
      v4 = (char *)dword_D3BDC;
      if ( dword_D3BE0 + 1 > (unsigned int)dword_D3BE4 )
      {
        v4 = (char *)sub_77EB0((int)&dword_D3BDC, (void *)dword_D3BDC, dword_D3BE0 + 1, 0xCu);
        v3 = dword_D3BE0;
        dword_D3BDC = (int)v4;
      }
      v5 = 12 * v3;
      *(_DWORD *)&v4[v5] = v2;
      v6 = &v4[v5];
      *((_DWORD *)v6 + 1) = v1;
      v7 = dword_D3BE0;
      *((_DWORD *)v6 + 2) = v1;
      dword_D3BE0 = v7 + 1;
      if ( v7 != -1 )
        goto LABEL_5;
    }
    else if ( dword_D3BE0 )
    {
      goto LABEL_5;
    }
    sub_16FE4(
      "IDA could not find a valid user directory.\n"
      "Please make sure that the HOME or IDAUSR environment variables are set.\n");
  }
LABEL_5:
  if ( src )
  {
    v10 = nullptr;
    sub_77E08(src);
  }
LABEL_7:
  sub_7A128(v8);
  return &dword_D3BDC;
}
// D3BDC: using guessed type int dword_D3BDC;
// D3BE0: using guessed type int dword_D3BE0;
// D3BE4: using guessed type int dword_D3BE4;
