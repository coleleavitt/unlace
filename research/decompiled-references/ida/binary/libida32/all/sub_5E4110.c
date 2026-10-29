__int64 __fastcall sub_5E4110(int a1)
{
  unsigned int v1; // ebp
  _DWORD *v3; // rcx
  _DWORD *v4; // rax

  v1 = under_debugger;
  if ( under_debugger || !(unsigned __int8)getinf_flag(45, 16) )
    return 1;
  if ( !(_BYTE)byte_2CA20E0 && __cxa_guard_acquire(&byte_2CA20E0) )
  {
    qword_2CA20F0 = 0;
    xmmword_2CA20F8 = 0;
    __cxa_atexit((void (*)(void *))sub_5DF690, &qword_2CA20F0, &off_2AFC540);
    __cxa_guard_release(&byte_2CA20E0);
  }
  v3 = (_DWORD *)(qword_2CA20F0 + 4 * xmmword_2CA20F8);
  if ( (_DWORD *)qword_2CA20F0 != v3 )
  {
    v4 = (_DWORD *)qword_2CA20F0;
    while ( *v4 != a1 )
    {
      if ( v3 == ++v4 )
        goto LABEL_11;
    }
    if ( v3 != v4 )
      return v1;
  }
LABEL_11:
  if ( *((_QWORD *)&xmmword_2CA20F8 + 1) < (unsigned __int64)(xmmword_2CA20F8 + 1) )
  {
    qword_2CA20F0 = qvector_reserve(&qword_2CA20F0, qword_2CA20F0, xmmword_2CA20F8 + 1, 4);
    v3 = (_DWORD *)(qword_2CA20F0 + 4 * xmmword_2CA20F8);
  }
  *v3 = a1;
  *(_QWORD *)&xmmword_2CA20F8 = xmmword_2CA20F8 + 1;
  qsem_post(qword_2CA23E0);
  return qsem_wait(qword_2CA23D8, 0xFFFFFFFFLL);
}

