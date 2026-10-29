/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idadir
// Address: 0x00079848

//----- (00079848) --------------------------------------------------------
char *__fastcall idadir(_BYTE *a1)
{
  char *v2; // r4
  ssize_t v3; // r0
  char **v4; // r4
  int v5; // r0
  size_t v6; // r5
  int v7; // r6
  char *v8; // r0
  unsigned __int8 *v10; // [sp+18h] [bp+4h] BYREF
  int v11; // [sp+1Ch] [bp+8h]
  int v12; // [sp+20h] [bp+Ch]
  pthread_mutex_t *mutex; // [sp+24h] [bp+10h] BYREF
  unsigned __int8 *v14[1025]; // [sp+28h] [bp+14h] BYREF

  sub_80634(&mutex);
  v2 = byte_DE50D;
  if ( byte_DE50D[0] )
  {
    if ( !a1 )
      goto LABEL_26;
    goto LABEL_18;
  }
  v11 = 0;
  v10 = nullptr;
  v12 = 0;
  if ( !byte_DE500 )
    goto LABEL_10;
  if ( qgetenv("IDADIR", (int)&v10) )
  {
    qstrncpy((unsigned int)byte_DE50D, v10, 4096);
    goto LABEL_15;
  }
  if ( byte_DE500 && (memset(v14, 0, 16), dladdr(idadir, v14)) )
  {
    qstrncpy((unsigned int)byte_DE50D, v14[0], 4096);
  }
  else
  {
LABEL_10:
    v3 = readlink("/proc/self/exe", byte_DE50D, 0x1000u);
    if ( v3 < 1 || (unsigned int)v3 >= 0x1000 )
    {
      if ( !under_debugger )
        interr(1208);
      __debugbreak();
    }
    byte_DE50D[v3] = 0;
  }
  if ( !qisdir(byte_DE50D) )
    qdirname(byte_DE50D, 0x1000u, byte_DE50D);
LABEL_15:
  if ( v10 )
  {
    v11 = 0;
    qfree(v10);
    v12 = 0;
    v10 = nullptr;
  }
  if ( a1 )
  {
LABEL_18:
    if ( *a1 )
    {
      qmakepath((char *)v14, 4096, byte_DE50D);
      v4 = (char **)sub_759F0();
      v5 = _strlen_chk(v14, 4096);
      v6 = v5;
      if ( v5 )
      {
        v7 = v5 + 1;
        if ( (unsigned int)v4[2] >= v5 + 1 )
        {
          v8 = *v4;
        }
        else
        {
          v8 = (char *)qvector_reserve((int)v4, *v4, v5 + 1, 1u);
          *v4 = v8;
        }
        v4[1] = (char *)v7;
        memmove(v8, v14, v6);
        (*v4)[v6] = 0;
      }
      else
      {
        v4[1] = nullptr;
      }
      v2 = *v4;
    }
  }
LABEL_26:
  qmutex_unlock(mutex);
  return v2;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// 19694: using guessed type int __fastcall dladdr(_DWORD, _DWORD);
// DE500: using guessed type char byte_DE500;
// E0550: using guessed type char under_debugger;
