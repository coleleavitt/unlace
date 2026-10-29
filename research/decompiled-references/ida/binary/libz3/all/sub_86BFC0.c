__int64 __fastcall sub_86BFC0(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  char *v4; // rax
  unsigned int v5; // r12d
  __int64 v7; // rax

  v2 = a1[3];
  v3 = (unsigned int)(*(int *)(a2 + 88) >> 8);
  if ( (_DWORD)v3 != -1 )
  {
    v4 = (char *)(a2 + 88);
    while ( 1 )
    {
      v3 = (unsigned int)*v4;
      if ( (_DWORD)v2 == (_DWORD)v3 )
        break;
      v4 = *((char **)v4 + 1);
      if ( !v4 )
        goto LABEL_7;
    }
    v5 = *(int *)v4 >> 8;
    if ( v5 != -1 )
      return v5;
  }
LABEL_7:
  v5 = (*(__int64 (__fastcall **)(unsigned int *, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, a2, v3, v2);
  v7 = sub_15D1F10(*(_QWORD *)a2);
  if ( !(unsigned __int8)sub_1673B10(a1 + 32, v7) )
    return v5;
  sub_86BD80(a1, v5);
  return v5;
}

