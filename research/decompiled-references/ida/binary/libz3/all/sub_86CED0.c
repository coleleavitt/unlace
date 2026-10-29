unsigned __int64 __fastcall sub_86CED0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v4; // rcx
  char *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 result; // rax
  unsigned int v8; // r13d
  __int64 v9; // rax

  v2 = (_QWORD *)(a1 - 48);
  if ( *(_DWORD *)(a1 + 56) )
  {
    do
      (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)(a1 - 48) + 512LL))(v2);
    while ( (*(_DWORD *)(a1 + 56))-- != 1 );
  }
  v4 = *(unsigned int *)(a1 - 36);
  v5 = (char *)(a2 + 88);
  v6 = (unsigned int)(*(int *)(a2 + 88) >> 8);
  if ( (_DWORD)v6 == -1 )
    goto LABEL_9;
  while ( 1 )
  {
    v6 = (unsigned int)*v5;
    if ( (_DWORD)v6 == (_DWORD)v4 )
      break;
    v5 = *((char **)v5 + 1);
    if ( !v5 )
      goto LABEL_9;
  }
  result = (unsigned int)(*(int *)v5 >> 8);
  if ( (_DWORD)result == -1 )
  {
LABEL_9:
    v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*(_QWORD *)(a1 - 48) + 528LL))(v2, a2, v6, v4);
    v9 = sub_15D1F10(*(_QWORD *)a2);
    result = sub_1673B10(a1 + 80, v9);
    if ( (_BYTE)result )
      return sub_86BD80(v2, v8);
  }
  return result;
}

