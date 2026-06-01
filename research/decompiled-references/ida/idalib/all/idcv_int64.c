__int64 __fastcall idcv_int64(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  const char *v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdi
  _QWORD v12[3]; // [rsp+0h] [rbp-18h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( !a1 )
    return set_qerrno(1531);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        *(_BYTE *)a1 = 9;
        return 0;
      case 3:
        v10 = eetol64(v12, a1 + 8, 0);
        switch ( v10 )
        {
          case 1:
            goto LABEL_7;
          case 4:
            v11 = 86;
            break;
          case 5:
            v11 = 98;
            break;
          default:
            v11 = 97;
            if ( v10 != 2 )
              return 0;
            break;
        }
        result = set_qerrno(v11);
        break;
      case 7:
        v8 = haystack;
        if ( *(_QWORD *)(a1 + 16) )
          v8 = *(const char **)(a1 + 8);
        v12[0] = 0;
        qsscanf((_DWORD)v8, (unsigned int)"%lli", (unsigned int)v12, a4, a5, a6);
        free_idcv(a1);
LABEL_7:
        v9 = v12[0];
        *(_BYTE *)a1 = 9;
        *(_QWORD *)(a1 + 8) = v9;
        return 0;
      case 9:
        return 0;
      case 0xA:
        if ( deref_idcv(a1, 2) )
          continue;
        return get_qerrno(a1);
      default:
        return set_qerrno(1531);
    }
    return result;
  }
}
