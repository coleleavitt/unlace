void __fastcall sub_272490(int a1, _QWORD *a2, __int64 a3, _QWORD *a4, bool *a5)
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
      ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v6)(v7, a4[1], a4[2]);
      break;
    case 2:
      v5 = 0;
      if ( *a4 == a2[2] )
        v5 = *a4 == 0 || a2[3] == a4[1];
      *a5 = v5;
      break;
    case 0:
      if ( a2 )
        operator delete(a2, 0x20u);
      break;
  }
}
