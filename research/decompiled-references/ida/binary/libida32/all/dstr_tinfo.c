_BYTE *__fastcall dstr_tinfo(int a1)
{
  __int64 v1; // r12
  int v2; // eax
  _QWORD *v3; // rbx
  __int64 *v5; // rax
  _BYTE *v6; // rax

  if ( !(_BYTE)byte_2CA2400 && __cxa_guard_acquire(&byte_2CA2400) )
  {
    v5 = qword_2CA2420;
    do
    {
      *v5 = 0;
      v5 += 3;
      *((_OWORD *)v5 - 1) = 0;
    }
    while ( &qword_2CA2480 != v5 );
    __cxa_atexit(sub_640840, nullptr, &off_2AFC540);
    __cxa_guard_release(&byte_2CA2400);
  }
  v1 = (unsigned int)dword_2CA23FC;
  if ( (unsigned int)dword_2CA23FC > 3 )
  {
    v3 = qword_2CA2420;
    v2 = 1;
    v1 = 0;
  }
  else
  {
    v2 = dword_2CA23FC + 1;
    v3 = &qword_2CA2420[3 * (unsigned int)dword_2CA23FC];
  }
  dword_2CA23FC = v2;
  if ( (unsigned __int8)print_tinfo((int)v3, 0, 0, 0, 256, a1, 0, 0) )
    return (_BYTE *)*v3;
  if ( v3[2] <= 1u )
    qword_2CA2420[3 * v1] = qvector_reserve(v3, qword_2CA2420[3 * v1], 2, 1);
  v6 = (_BYTE *)*v3;
  v3[1] = 2;
  *v6 = 63;
  *(_BYTE *)(*v3 + 1LL) = 0;
  return (_BYTE *)*v3;
}

