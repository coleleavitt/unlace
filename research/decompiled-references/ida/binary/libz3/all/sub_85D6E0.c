__int64 __fastcall sub_85D6E0(unsigned int *a1, int *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  char *v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = a1[3];
  v3 = (unsigned int)(a2[22] >> 8);
  if ( (_DWORD)v3 == -1 )
    goto LABEL_7;
  v4 = (char *)(a2 + 22);
  while ( 1 )
  {
    v3 = (unsigned int)*v4;
    if ( (_DWORD)v2 == (_DWORD)v3 )
      break;
    v4 = *((char **)v4 + 1);
    if ( !v4 )
      goto LABEL_7;
  }
  result = (unsigned int)(*(int *)v4 >> 8);
  if ( (_DWORD)result == -1 )
  {
LABEL_7:
    (*(void (__fastcall **)(unsigned int *, int *, __int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, a2, v3, v2);
    result = *(_QWORD *)a2;
    if ( *(_WORD *)(*(_QWORD *)a2 + 4LL) == 2 && *(_DWORD *)(result + 16) == 2 )
      return sub_85D4B0((__int64)a1, (__int64)a2, v6, v7, v8, v9);
  }
  return result;
}

