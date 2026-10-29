_QWORD *__fastcall sub_BB2220(__int64 a1, unsigned int *a2, int a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax

  v4 = sub_180C100(*(_QWORD *)(a1 + 120), 32);
  *(_QWORD *)v4 = 0x80000000LL;
  *(_DWORD *)(v4 + 24) = a3;
  *(_OWORD *)(v4 + 8) = 0;
  if ( a2 && a2 != (unsigned int *)v4 )
  {
    v5 = (_QWORD *)sub_180C100(*(_QWORD *)(a1 + 120), 24);
    *a2 = (*a2 + 1) & 0x3FFFFFFF | *a2 & 0xC0000000;
    *(_DWORD *)v4 = (*(_DWORD *)v4 + 1) & 0x3FFFFFFF | *(_DWORD *)v4 & 0xC0000000;
    *v5 = 0;
    v5[1] = a2;
    v5[2] = v4;
    return v5;
  }
  return (_QWORD *)v4;
}

