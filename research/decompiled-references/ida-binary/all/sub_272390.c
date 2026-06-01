void __fastcall sub_272390(int a1, _QWORD *a2, __int64 a3, __int64 a4, bool *a5)
{
  bool v5; // al
  char *v6; // rax
  _QWORD *v7; // rdx

  switch ( a1 )
  {
    case 1:
      v6 = (char *)a2[2];
      v7 = (_QWORD *)(a2[3] + a3);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        v6 = *(char **)&v6[*v7 - 1];
      ((void (__fastcall *)(_QWORD *, _QWORD))v6)(v7, **(unsigned int **)(a4 + 8));
      break;
    case 2:
      v5 = 0;
      if ( *(_QWORD *)a4 == a2[2] )
        v5 = *(_QWORD *)a4 == 0 || a2[3] == *(_QWORD *)(a4 + 8);
      *a5 = v5;
      break;
    case 0:
      if ( a2 )
        operator delete(a2, 0x20u);
      break;
  }
}
