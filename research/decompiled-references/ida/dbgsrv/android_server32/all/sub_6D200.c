/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D200
// Address: 0x0006D200

//----- (0006D200) --------------------------------------------------------
int __fastcall sub_6D200(_BYTE *a1, int a2, const char *a3, int a4)
{
  int v7; // r0
  int v8; // r5
  char *v9; // r6
  size_t v10; // r0
  void *v11; // r0
  int v12; // r4
  char *s; // [sp+8h] [bp-1Ch] BYREF
  int v15; // [sp+Ch] [bp-18h]
  int v16; // [sp+10h] [bp-14h]
  void *v17[3]; // [sp+14h] [bp-10h] BYREF

  if ( a1[36] )
  {
    if ( !under_debugger )
      interr(1621);
    __debugbreak();
  }
  v7 = 54;
  if ( a2 <= 0 )
    v7 = 52;
  v8 = 53;
  if ( a2 )
    v8 = v7;
  sub_6DA58((int)v17, v8);
  v15 = 0;
  s = nullptr;
  v16 = 0;
  sub_26F18((int)&s, a3, a4);
  if ( !v15 )
  {
    v9 = &byte_B3CBE;
    if ( &byte_B3CBE )
      goto LABEL_11;
    goto LABEL_10;
  }
  v9 = s;
  if ( !s )
LABEL_10:
    v9 = &byte_A0742;
LABEL_11:
  v10 = strlen(v9);
  ((void (__fastcall *)(void **, char *, size_t))loc_30B84)(v17, v9, v10 + 1);
  v11 = (void *)(*(int (__fastcall **)(_BYTE *, int, void **))(*(_DWORD *)a1 + 8))(a1, v8, v17);
  qfree(v11);
  if ( v8 == 52 )
    exit(1);
  v12 = v15 - 1;
  if ( !v15 )
    v12 = 0;
  if ( s )
  {
    v15 = 0;
    qfree(s);
    v16 = 0;
    s = nullptr;
  }
  if ( v17[0] )
  {
    v17[1] = nullptr;
    qfree(v17[0]);
    v17[2] = nullptr;
    v17[0] = nullptr;
  }
  return v12;
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
