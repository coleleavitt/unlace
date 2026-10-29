/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmake_full_path
// Address: 0x00000000000BC738

//----- (00000000000BC738) ----------------------------------------------------
__int64 __fastcall qmake_full_path(unsigned __int64 a1, __int64 a2, char *name)
{
  char *v6; // x22
  int v7; // w8
  const char *v9; // x0
  char *v10; // x0
  size_t v11; // x1
  char resolved[4096]; // [xsp+8h] [xbp-1048h] BYREF
  __int64 v13; // [xsp+1008h] [xbp-48h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = realpath(name, resolved);
  if ( v6 )
    goto LABEL_7;
  v7 = (unsigned __int8)*name;
  if ( v7 == 47 || v7 == 92 )
  {
    v6 = name;
LABEL_7:
    qustrncpy(a1, (__int64)v6, a2);
    return a1;
  }
  if ( getcwd(resolved, 0x1000u) )
  {
    v6 = resolved;
    qmakepath((size_t)resolved, 0x1000u, resolved, name, 0);
    goto LABEL_7;
  }
  v9 = (const char *)qerrstr(0xFFFFFFFFLL);
  sub_3B1DC("getcwd: %s", v9);
  return sanitize_file_name(v10, v11);
}
// BC81D: variable 'v10' is possibly undefined
// BC81D: variable 'v11' is possibly undefined
