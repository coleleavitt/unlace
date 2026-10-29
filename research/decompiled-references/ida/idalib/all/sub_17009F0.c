void __fastcall sub_17009F0(_QWORD *a1)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi

  v2 = (_QWORD *)a1[6];
  v3 = (_QWORD *)a1[5];
  *a1 = &off_2C4EFD0;
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v4 = (_QWORD *)v3[3];
        if ( v4 == v3 + 5 )
          break;
        operator delete(v4);
        v3 += 8;
        if ( v2 == v3 )
          goto LABEL_4;
      }
      v3 += 8;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = (_QWORD *)a1[5];
  }
  if ( v3 )
    operator delete(v3);
  nullsub_1203(a1);
  operator delete(a1, 0x40u);
}
