int __fastcall sub_62F220(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, const char *a5)
{
  unsigned int v7; // ebx
  int result; // eax

  v7 = a4;
  if ( a4 == -1 )
    v7 = 0;
  sub_396090(0x48u, a2, v7, a5);
  if ( (a3 & 4) == 0 )
    sub_514A50(0, (a3 >> 1) & 1, v7);
  result = a2 - 1;
  if ( (unsigned int)(a2 - 1) <= 2 )
    return sub_5FE6F0(*(_QWORD *)(a1 + 1480), v7, a5, (_DWORD)a2 == 2);
  return result;
}

