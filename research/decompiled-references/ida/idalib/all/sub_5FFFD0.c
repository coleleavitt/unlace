__int64 __fastcall sub_5FFFD0(int a1)
{
  unsigned int v1; // ebp
  _DWORD *v3; // rcx
  _DWORD *v4; // rax

  v1 = under_debugger;
  if ( under_debugger || !(unsigned __int8)getinf_flag(45, 16) )
    return 1;
  if ( !(_BYTE)byte_2CCBFE0 && __cxa_guard_acquire(&byte_2CCBFE0) )
  {
    qword_2CCBFF0 = 0;
    xmmword_2CCBFF8 = 0;
    __cxa_atexit((void (*)(void *))sub_5FB550, &qword_2CCBFF0, &off_2B25620);
    __cxa_guard_release(&byte_2CCBFE0);
  }
  v3 = (_DWORD *)(qword_2CCBFF0 + 4 * xmmword_2CCBFF8);
  if ( (_DWORD *)qword_2CCBFF0 != v3 )
  {
    v4 = (_DWORD *)qword_2CCBFF0;
    while ( *v4 != a1 )
    {
      if ( v3 == ++v4 )
        goto LABEL_11;
    }
    if ( v3 != v4 )
      return v1;
  }
LABEL_11:
  if ( *((_QWORD *)&xmmword_2CCBFF8 + 1) < (unsigned __int64)(xmmword_2CCBFF8 + 1) )
  {
    qword_2CCBFF0 = qvector_reserve(&qword_2CCBFF0, qword_2CCBFF0, xmmword_2CCBFF8 + 1, 4);
    v3 = (_DWORD *)(qword_2CCBFF0 + 4 * xmmword_2CCBFF8);
  }
  *v3 = a1;
  *(_QWORD *)&xmmword_2CCBFF8 = xmmword_2CCBFF8 + 1;
  qsem_post(qword_2CCC2E0);
  return qsem_wait(qword_2CCC2D8, 0xFFFFFFFFLL);
}
