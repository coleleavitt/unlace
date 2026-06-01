/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AAA20
// Address: 0x000AAA20

//----- (000AAA20) --------------------------------------------------------
unsigned int sub_AAA20(int *a1, char a2, const char *a3, ...)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  const char *v6; // eax
  const char *v8; // [esp+18h] [ebp-1034h]
  int v9; // [esp+1Ch] [ebp-1030h]
  int v10; // [esp+20h] [ebp-102Ch]
  int v11; // [esp+28h] [ebp-1024h] BYREF
  int v12; // [esp+2Ch] [ebp-1020h]
  int v13; // [esp+30h] [ebp-101Ch]
  va_list v14; // [esp+34h] [ebp-1018h]
  char file[4096]; // [esp+38h] [ebp-1014h] BYREF
  unsigned int v16; // [esp+1038h] [ebp-14h]
  va_list va; // [esp+1060h] [ebp+14h] BYREF

  va_start(va, a3);
  v16 = __readgsdword(0x14u);
  va_copy(v14, va);
  vqmakepath(file, 4096, a3, (const char **)va);
  if ( (a2 & 4) == 0 || qisdir(file) )
  {
    sub_1B530((int)&v11, file);
    v3 = 12 * a1[1];
    v4 = *a1;
    v5 = *a1;
    if ( v3 )
    {
      v8 = byte_EF875;
      if ( v12 )
        v8 = (const char *)v11;
      v9 = 12 * a1[1];
      v10 = *a1;
      v5 = *a1;
      while ( 1 )
      {
        v6 = byte_EF875;
        if ( *(_DWORD *)(v5 + 4) )
          v6 = *(const char **)v5;
        if ( !strcmp(v8, v6) )
          break;
        v5 += 12;
        v3 -= 12;
        if ( !v3 )
          goto LABEL_14;
      }
      v4 = v10;
      v3 = v9;
    }
    if ( v5 == v3 + v4 )
LABEL_14:
      sub_2AC80((int)a1, (int)&v11);
    if ( v11 )
    {
      v12 = 0;
      qfree((void *)v11);
      v11 = 0;
      v13 = 0;
    }
  }
  return __readgsdword(0x14u);
}
