/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idadir
// Address: 0x000A9CB0

//----- (000A9CB0) --------------------------------------------------------
char *__cdecl idadir(_BYTE *a1)
{
  ssize_t v1; // eax
  char *v2; // esi
  char **v3; // esi
  int v4; // eax
  size_t v5; // edi
  int v6; // ecx
  char *v7; // eax
  int v9; // [esp+18h] [ebp-1034h] BYREF
  int v10; // [esp+1Ch] [ebp-1030h]
  int v11; // [esp+20h] [ebp-102Ch]
  pthread_mutex_t *v12; // [esp+28h] [ebp-1024h] BYREF
  int src[1026]; // [esp+30h] [ebp-101Ch] BYREF
  unsigned int v14; // [esp+1038h] [ebp-14h]

  v14 = __readgsdword(0x14u);
  sub_B3B30(&v12);
  if ( byte_13C309[0] )
    goto LABEL_15;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( !(_BYTE)dword_13C2FC )
    goto LABEL_8;
  if ( !(unsigned __int8)qgetenv("IDADIR", (int)&v9) )
  {
    if ( (_BYTE)dword_13C2FC )
    {
      *(_OWORD *)src = 0;
      if ( dladdr(idadir, src) )
      {
        qstrncpy((unsigned int)byte_13C309, src[0], 4096);
LABEL_11:
        if ( !qisdir(byte_13C309) )
          qdirname(byte_13C309, 0x1000u, byte_13C309);
        goto LABEL_13;
      }
    }
LABEL_8:
    v1 = readlink("/proc/self/exe", byte_13C309, 0x1000u);
    if ( v1 <= 0 || (unsigned int)v1 >= 0x1000 )
    {
      if ( !(_BYTE)under_debugger )
        interr(1208);
      BUG();
    }
    byte_13C309[v1] = 0;
    goto LABEL_11;
  }
  qstrncpy((unsigned int)byte_13C309, v9, 4096);
LABEL_13:
  if ( v9 )
  {
    v10 = 0;
    qfree((void *)v9);
    v9 = 0;
    v11 = 0;
  }
LABEL_15:
  v2 = byte_13C309;
  if ( a1 && *a1 )
  {
    qmakepath((char *)src, 4096, byte_13C309, (int)a1);
    v3 = (char **)sub_A3900();
    v4 = __strlen_chk(src, 4096);
    v5 = v4;
    if ( v4 )
    {
      v6 = v4 + 1;
      if ( (unsigned int)v3[2] >= v4 + 1 )
      {
        v7 = *v3;
      }
      else
      {
        v7 = (char *)qvector_reserve((int)v3, *v3, v4 + 1, 1u);
        *v3 = v7;
        v6 = v5 + 1;
      }
      v3[1] = (char *)v6;
      memmove(v7, src, v5);
      (*v3)[v5] = 0;
    }
    else
    {
      v3[1] = nullptr;
    }
    v2 = *v3;
  }
  qmutex_unlock(v12);
  return v2;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 17F30: using guessed type int __cdecl dladdr(_DWORD, _DWORD);
// 13C2FC: using guessed type int dword_13C2FC;
// 13E34C: using guessed type int under_debugger;
