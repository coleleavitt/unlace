_QWORD *__fastcall sub_1528200(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  _DWORD *v4; // rax
  __int64 v5; // rsi
  _DWORD *v6; // rdx

  v3 = -1;
  if ( a2 <= 0x555555555555555LL )
    v3 = 24 * a2;
  v4 = (_DWORD *)operator new[](v3);
  v5 = a2 - 1;
  if ( v5 >= 0 )
  {
    v6 = v4;
    do
    {
      --v5;
      *v6 = 0;
      v6[1] = 0;
      v6 += 6;
      *((_QWORD *)v6 - 2) = 0;
      *((_WORD *)v6 - 4) = 0;
      *((_WORD *)v6 - 3) = 0;
    }
    while ( v5 != -1 );
  }
  *a1 = v4;
  return a1;
}
