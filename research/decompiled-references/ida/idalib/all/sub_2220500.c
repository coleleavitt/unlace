_QWORD *__fastcall sub_2220500(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    v5 = operator new(0x18u);
    *(_DWORD *)(v5 + 8) = a2;
    *(_QWORD *)(v5 + 16) = a3;
    *(_QWORD *)v5 = off_2BEAD68;
    *a1 = v5;
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}
