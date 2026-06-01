void *__fastcall sub_74F740(_DWORD *a1, const void *a2, unsigned int a3)
{
  bool v3; // sf
  unsigned int v4; // eax
  __int64 v5; // rbx
  _BYTE *v6; // r12
  signed int v7; // edx
  void *result; // rax
  unsigned __int64 v9; // rcx
  void *v10; // rdx
  __int64 v11; // rax

  v3 = dword_2CAA4F0 - 1 < 0;
  v4 = dword_2CAA4F0 - 1;
  *a1 = 0;
  dword_2CAA4F0 = v4;
  if ( v3 )
    __longjmp_chk();
  v5 = 16 * (v4 + 125LL);
  v6 = &byte_2CA2EE0[v5];
  *(_QWORD *)v6 = a2;
  *((_WORD *)v6 + 4) = 0;
  *((_WORD *)v6 + 5) = a3;
  if ( a3 > 8 )
  {
    v3 = (int)(dword_2CAA4F4 - a3) < 0;
    v11 = dword_2CAA4F4 - a3;
    dword_2CAA4F4 -= a3;
    if ( v3 )
      __longjmp_chk();
    result = memmove(&byte_2CA2EE0[v11], a2, a3);
    *(_WORD *)a1 = v5;
    *(_QWORD *)v6 = result;
  }
  else
  {
    v7 = a3 - 1;
    result = (void *)v7;
    v9 = v7 - (unsigned __int64)(unsigned int)v7;
    do
    {
      *((_BYTE *)result + (_QWORD)v6) = *((_BYTE *)result + (_QWORD)a2);
      v10 = result;
      result = (char *)result - 1;
    }
    while ( v10 != (void *)v9 );
    *(_WORD *)a1 = v5;
  }
  return result;
}

