__int64 __fastcall sub_8D8640(void **a1, void **a2, int a3)
{
  void *v4; // rdi
  _QWORD *v5; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdx

  switch ( a3 )
  {
    case 1:
      *a1 = *a2;
      break;
    case 2:
      v5 = *a2;
      v6 = (_QWORD *)operator new(0x10u);
      v7 = v5[1];
      *v6 = off_2B15F80;
      *a1 = v6;
      v6[1] = v7;
      break;
    case 3:
      v4 = *a1;
      if ( v4 )
        operator delete(v4, 0x10u);
      break;
    case 0:
      *a1 = nullptr;
      break;
  }
  return 0;
}

