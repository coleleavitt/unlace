__int64 __fastcall idcv_int64(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  const char *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdi
  _QWORD v13[3]; // [rsp+0h] [rbp-18h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( !a1 )
    return set_qerrno(1531, a2);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        v10 = *(int *)(a1 + 8);
        *(_BYTE *)a1 = 9;
        *(_QWORD *)(a1 + 8) = v10;
        return 0;
      case 3:
        v11 = eetol64(v13, a1 + 8, 0);
        switch ( v11 )
        {
          case 1:
            goto LABEL_7;
          case 4:
            v12 = 86;
            break;
          case 5:
            v12 = 98;
            break;
          default:
            v12 = 97;
            if ( v11 != 2 )
              return 0;
            break;
        }
        result = set_qerrno(v12, a1 + 8);
        break;
      case 7:
        v8 = haystack;
        if ( *(_QWORD *)(a1 + 16) )
          v8 = *(const char **)(a1 + 8);
        qsscanf((int)v8, (int)"%lli", (int)v13, a4, a5, a6, 0);
        free_idcv(a1);
LABEL_7:
        v9 = v13[0];
        *(_BYTE *)a1 = 9;
        *(_QWORD *)(a1 + 8) = v9;
        return 0;
      case 9:
        return 0;
      case 0xA:
        a2 = 2;
        if ( deref_idcv(a1, 2) )
          continue;
        return get_qerrno(a1);
      default:
        return set_qerrno(1531, a2);
    }
    return result;
  }
}

