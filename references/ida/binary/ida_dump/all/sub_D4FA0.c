__int64 __fastcall sub_D4FA0(_DWORD *a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned int v4; // ebp
  int v7; // ebx
  __int64 v8; // rax

  v4 = 1;
  if ( *a1 != 1 && a3[1] )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v7;
      v4 &= sub_D4BC0((__int64)a1, a2, (_DWORD *)(*(_QWORD *)(a2 + 432) + 104LL * *(int *)(*a3 + 4 * v8)), a4);
      v8 = v7;
    }
    while ( (unsigned __int64)v7 < a3[1] );
  }
  return v4;
}
