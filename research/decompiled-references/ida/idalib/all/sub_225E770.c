void __fastcall sub_225E770(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  a1[2] = &off_2BEB838;
  v2 = (volatile signed __int32 *)a1[9];
  if ( v2 )
    sub_4343A0(v2);
  v3 = (_QWORD *)a1[3];
  v4 = a1 + 5;
  *(v4 - 3) = &unk_2C75FE0;
  if ( v3 != v4 )
    operator delete(v3);
}
