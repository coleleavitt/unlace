void __fastcall sub_B2CD0(__int64 a1, unsigned int *a2, double a3)
{
  int v3; // r13d
  unsigned int v4; // r15d
  __int64 v5; // r14
  char v6; // al
  __int64 v7; // rax

  if ( (_DWORD)qword_251328 == *(_DWORD *)(a1 + 76) )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v3 = 4;
      v4 = 1;
      sub_CF8A0(*a2);
      v5 = *((_QWORD *)a2 + 15) + 8LL * *((_QWORD *)a2 + 16) - 8;
      v6 = *((_BYTE *)a2 + 153) | *(_BYTE *)(v5 + 4);
      *((_BYTE *)a2 + 153) = v6;
      while ( 1 )
      {
        sub_A2020(a2, v4, (v4 & v6) == 0 ? -1 : 1, 0);
        if ( !--v3 )
          break;
        v6 = *((_BYTE *)a2 + 153);
        v4 *= 2;
      }
      *((_BYTE *)a2 + 152) = *(_BYTE *)(v5 + 5);
      v7 = *((_QWORD *)a2 + 16);
      if ( v7 )
        *((_QWORD *)a2 + 16) = v7 - 1;
      sub_B2820((__int64)a2, (__int64)&qword_251320, 1, a3);
    }
    sub_C6F20(a1, a2);
  }
}

