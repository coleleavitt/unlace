__int64 __fastcall idcv_long(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  const char *v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rax
  _QWORD v12[3]; // [rsp+0h] [rbp-18h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( !a1 )
    return set_qerrno(1531);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        return 0;
      case 3:
        v9 = eetol(v12, a1 + 8, 0);
        switch ( v9 )
        {
          case 1:
            v11 = v12[0];
            *(_BYTE *)a1 = 2;
            *(_QWORD *)(a1 + 8) = v11;
            return 0;
          case 4:
            v10 = 86;
            return set_qerrno(v10);
          case 5:
            v10 = 98;
            return set_qerrno(v10);
        }
        v10 = 97;
        if ( v9 != 2 )
          return 0;
        return set_qerrno(v10);
      case 7:
        v8 = haystack;
        if ( *(_QWORD *)(a1 + 16) )
          v8 = *(const char **)(a1 + 8);
        v12[0] = 0;
        qsscanf((_DWORD)v8, (unsigned int)"%lli", (unsigned int)v12, a4, a5, a6);
        free_idcv(a1);
        *(_QWORD *)(a1 + 8) = v12[0];
        return 0;
      case 9:
        *(_BYTE *)a1 = 2;
        return 0;
      case 0xA:
        if ( deref_idcv(a1, 2) )
          continue;
        return get_qerrno(a1);
      default:
        return set_qerrno(1531);
    }
  }
}
