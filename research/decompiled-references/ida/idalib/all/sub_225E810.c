void __fastcall sub_225E810(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx

  a1[2] = &off_2BEBA18;
  v2 = (volatile signed __int32 *)a1[14];
  if ( v2 )
    sub_4343A0(v2);
  v3 = (_QWORD *)a1[8];
  if ( v3 != a1 + 10 )
    operator delete(v3);
  v4 = (_QWORD *)a1[3];
  v5 = a1 + 5;
  *(v5 - 3) = &unk_2C75FE0;
  if ( v4 != v5 )
    operator delete(v4);
}
