__int64 __fastcall sub_599E0(unsigned int *a1)
{
  char v2; // al
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rsi
  char v9; // al
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax

  v2 = getinf() & 0xF;
  if ( v2 != 1 && (v2 || (unsigned int)getinf() != 11) && ((getinf() & 0xF) != 6 || (unsigned __int8)getinf_flag()) )
  {
    v3 = *((_QWORD *)a1 + 1);
    *a1 = 1;
    if ( !v3 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v9 = getinf_flag();
  v10 = *((_QWORD *)a1 + 1);
  if ( v9 )
  {
    *a1 = 1;
    if ( !v10 )
      goto LABEL_6;
LABEL_5:
    *((_QWORD *)a1 + 2) = 0;
    qfree();
    *((_QWORD *)a1 + 1) = 0;
    *((_QWORD *)a1 + 3) = 0;
    goto LABEL_6;
  }
  *a1 = 1;
  if ( v10 )
  {
    *((_QWORD *)a1 + 2) = 0;
    qfree();
    *((_QWORD *)a1 + 1) = 0;
    v11 = 0;
    *((_QWORD *)a1 + 3) = 0;
  }
  else
  {
    v11 = *((_QWORD *)a1 + 3);
  }
  v12 = *((_QWORD *)a1 + 2);
  v13 = 0;
  if ( v11 < v12 + 1 )
  {
    v13 = qvector_reserve();
    v12 = *((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 1) = v13;
  }
  *(_DWORD *)(v13 + 4 * v12) = 1;
  ++*((_QWORD *)a1 + 2);
LABEL_6:
  if ( *((_QWORD *)a1 + 4) )
  {
    *((_QWORD *)a1 + 5) = 0;
    qfree();
    *((_QWORD *)a1 + 4) = 0;
    *((_QWORD *)a1 + 6) = 0;
  }
  v4 = *((_QWORD *)a1 + 2);
  v5 = *a1;
  a1[1] = v4;
  v6 = v4;
  if ( (unsigned int)v5 <= 6 )
  {
    v7 = 84;
    if ( _bittest64(&v7, v5) )
    {
      v6 = a1[10] + v4;
      a1[1] = v6;
    }
  }
  return v6;
}
