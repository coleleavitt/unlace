void __fastcall sub_225E870(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi

  *a1 = &off_2BEBA18;
  v2 = (volatile signed __int32 *)a1[12];
  if ( v2 )
    sub_4343A0(v2);
  v3 = (_QWORD *)a1[6];
  if ( v3 != a1 + 8 )
    operator delete(v3);
  v4 = (_QWORD *)a1[1];
  *a1 = &unk_2C75FE0;
  if ( v4 != a1 + 3 )
    operator delete(v4);
  operator delete(a1, 0x68u);
}
