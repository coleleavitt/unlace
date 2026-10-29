void __fastcall sub_B32D0(__int64 a1, unsigned int *a2, __m128 a3)
{
  int v3; // r13d
  unsigned int v4; // r15d
  __int64 v5; // r14
  char v6; // al
  __int64 v7; // rax

  if ( qword_2524A8 == *(_QWORD *)(a1 + 80) )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v3 = 4;
      v4 = 1;
      sub_D0E60(*a2);
      v5 = *((_QWORD *)a2 + 15) + 16LL * *((_QWORD *)a2 + 16) - 16;
      v6 = *((_BYTE *)a2 + 153) | *(_BYTE *)(v5 + 8);
      *((_BYTE *)a2 + 153) = v6;
      while ( 1 )
      {
        sub_A2380(a2, v4, (v4 & v6) == 0 ? -1 : 1, 0);
        if ( !--v3 )
          break;
        v6 = *((_BYTE *)a2 + 153);
        v4 *= 2;
      }
      *((_BYTE *)a2 + 152) = *(_BYTE *)(v5 + 9);
      v7 = *((_QWORD *)a2 + 16);
      if ( v7 )
        *((_QWORD *)a2 + 16) = v7 - 1;
      sub_B2E00((__int64)a2, (__int64)&qword_2524A0, 1, a3);
    }
    sub_C83A0(a1, a2);
  }
}

