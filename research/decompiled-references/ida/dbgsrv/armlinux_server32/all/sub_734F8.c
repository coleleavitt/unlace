/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_734F8
// Address: 0x000734F8

//----- (000734F8) --------------------------------------------------------
void sub_734F8(char **a1, char a2, unsigned __int8 *a3, ...)
{
  size_t v5; // r8
  _BYTE *v6; // r0
  char *v7; // r8
  char *v8; // r9
  int v9; // r4
  int *v10; // r1
  char *v11; // r5
  const char *v12; // r6
  const char *v13; // r1
  void *v14; // r3
  void *v15; // r4
  char *v16; // r3
  _BYTE *ptr; // [sp+4h] [bp-1028h]
  _BYTE *ptra; // [sp+4h] [bp-1028h]
  size_t v19; // [sp+8h] [bp-1024h]
  _BYTE *v20; // [sp+18h] [bp-1014h] BYREF
  size_t v21; // [sp+1Ch] [bp-1010h]
  int v22; // [sp+20h] [bp-100Ch]
  char v23[4]; // [sp+24h] [bp-1008h] BYREF
  va_list varg_r3; // [sp+1054h] [bp+28h] BYREF

  va_start(varg_r3, a3);
  sub_76A70(v23, 4096, a3, (int)varg_r3);
  if ( (a2 & 4) == 0 || sub_775B0((int)v23) )
  {
    v21 = 0;
    v20 = nullptr;
    v22 = 0;
    v5 = strlen(v23);
    v6 = sub_78018((int)&v20, nullptr, v5 + 1, 1u);
    v21 = v5 + 1;
    v20 = v6;
    memmove(v6, v23, v5);
    v20[v5] = 0;
    v7 = a1[1];
    v8 = *a1;
    v9 = (int)&(*a1)[12 * (_DWORD)v7];
    if ( *a1 == (char *)v9 )
    {
      v19 = v21;
LABEL_14:
      v15 = (void *)v19;
      if ( v19 )
      {
        v15 = sub_77FEC(v19);
        memcpy(v15, v20, v19);
        v7 = a1[1];
        v8 = *a1;
      }
      if ( v7 + 1 > a1[2] )
      {
        v8 = (char *)sub_78018((int)a1, v8, (unsigned int)(v7 + 1), 0xCu);
        v7 = a1[1];
        *a1 = v8;
      }
      v16 = &v8[12 * (_DWORD)v7];
      *(_DWORD *)v16 = v15;
      *((_DWORD *)v16 + 1) = v19;
      *((_DWORD *)v16 + 2) = v19;
      ptra = v20;
      ++a1[1];
      v14 = ptra;
      if ( ptra )
        goto LABEL_12;
    }
    else
    {
      v10 = (int *)v20;
      ptr = v20;
      v19 = v21;
      v11 = *a1;
      if ( !v21 )
        v10 = &dword_8DB98;
      v12 = (const char *)v10;
      while ( 1 )
      {
        v13 = (const char *)&dword_8DB98;
        if ( *((_DWORD *)v11 + 1) )
          v13 = *(const char **)v11;
        if ( !strcmp(v12, v13) )
          break;
        v11 += 12;
        if ( (char *)v9 == v11 )
          goto LABEL_14;
      }
      v14 = ptr;
      if ( ptr )
      {
LABEL_12:
        v21 = 0;
        sub_77F70(v14);
      }
    }
  }
}
// 8DB98: using guessed type int dword_8DB98;
