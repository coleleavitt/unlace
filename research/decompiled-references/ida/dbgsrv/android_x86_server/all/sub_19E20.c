/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19E20
// Address: 0x00019E20

//----- (00019E20) --------------------------------------------------------
int __cdecl sub_19E20(int a1, int a2, char *buf, size_t n)
{
  int v4; // ecx
  ssize_t v5; // esi
  FILE *v6; // eax
  FILE *v7; // edi
  unsigned __int8 v8; // al
  ssize_t v9; // eax
  FILE *v10; // eax
  FILE *v11; // edi
  char *v12; // ecx
  int v13; // esi
  char *v14; // eax
  int v15; // esi
  int v17; // [esp+8h] [ebp-1034h]
  char *v18; // [esp+18h] [ebp-1024h] BYREF
  int v19; // [esp+1Ch] [ebp-1020h]
  int v20; // [esp+20h] [ebp-101Ch]
  int v21; // [esp+24h] [ebp-1018h] BYREF
  char path[4096]; // [esp+28h] [ebp-1014h] BYREF
  unsigned int v23; // [esp+1028h] [ebp-14h]

  v23 = __readgsdword(0x14u);
  v17 = a2;
  qsnprintf(path, 4096, "/proc/%u/exe", a2);
  v5 = readlink(path, buf, n - 1);
  if ( v5 > 0
    || (v6 = qfopen(path, (int)"r")) != nullptr
    && (v7 = v6, v5 = qfread(v6, buf, n), qfclose(v7), v5 >= 2)
    && v5 < n
    && *buf == 47 )
  {
    buf[v5] = 0;
    LOBYTE(v4) = 1;
  }
  else
  {
    *buf = 0;
    v18 = nullptr;
    v19 = 0;
    v20 = 0;
    while ( 1 )
    {
      v8 = sub_1A0A0(&v21, (int)&v18, v17);
      if ( (v21 == 1) | v8 ^ 1 )
      {
        *buf = 0;
        v4 = 0;
        goto LABEL_22;
      }
      v17 = v21;
      qsnprintf(path, 4096, "/proc/%u/exe", v21);
      v9 = readlink(path, buf, n - 1);
      if ( v9 > 0 )
        break;
      v10 = qfopen(path, (int)"r");
      v11 = v10;
      v12 = buf;
      if ( v10 )
      {
        v13 = qfread(v10, buf, n);
        qfclose(v11);
        v12 = buf;
        if ( v13 >= 2 && v13 < n && *buf == 47 )
          goto LABEL_18;
      }
      *v12 = 0;
    }
    v13 = v9;
    v12 = buf;
LABEL_18:
    v12[v13] = 0;
    if ( v19 )
      v14 = v18;
    else
      v14 = byte_EF875;
    memcpy(v12, v14, n);
    LOBYTE(v4) = 1;
LABEL_22:
    if ( v18 )
    {
      v15 = v4;
      v19 = 0;
      qfree(v18);
      v18 = nullptr;
      v20 = 0;
      return v15;
    }
  }
  return v4;
}
// 1A00D: variable 'v4' is possibly undefined
