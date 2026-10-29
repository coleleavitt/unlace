__int64 __fastcall sub_40CE50(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  double v12; // [rsp+0h] [rbp-18h]

  if ( a3 == 1 )
  {
    v5 = *(_DWORD *)(a2 + 424);
    if ( (v5 & 0x40) != 0 )
    {
      v6 = *(_QWORD *)(a2 + 432);
    }
    else
    {
      *(_DWORD *)(a2 + 424) = v5 | 0x40;
      v9 = sub_4AD120();
      v10 = (unsigned int)j__pthread_self() << 12;
      v6 = (v9 + v10) & 0x7FFFFFFF;
      if ( ((v9 + v10) & 0x7FFFFFFF) == 0 || v6 == 0x7FFFFFFF )
        v6 ^= 0x75BD924uLL;
    }
    v7 = 16807 * (v6 % 127773) - 2836 * (v6 / 127773);
    v11 = v7 + (v7 < 0 ? 0x7FFFFFFFuLL : 0);
    *(_QWORD *)(a2 + 432) = v11;
    v12 = (double)(int)v11 * 4.656612875245797e-10;
    v8 = sub_496740();
    *(_DWORD *)v8 = 0;
    *(_QWORD *)(v8 + 8) = 0;
    *(double *)(v8 + 32) = v12;
    *(_QWORD *)(v8 + 24) = &off_656120;
    sub_48AFD0(a2, v8);
    return 0;
  }
  else
  {
    sub_409E40(a2, 1, a3, a4);
    return 1;
  }
}

