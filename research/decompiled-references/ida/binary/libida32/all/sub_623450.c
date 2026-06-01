unsigned __int64 __fastcall sub_623450(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7)
{
  __int64 v10; // rbp
  _QWORD *v11; // r12
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned int v14; // r15d
  unsigned int *v15; // r12
  unsigned int v17; // [rsp+Ch] [rbp-6Ch]
  __int64 v18; // [rsp+18h] [rbp-60h] BYREF
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h]
  int v21[2]; // [rsp+38h] [rbp-40h]

  *(_QWORD *)v21 = __readfsqword(0x28u);
  if ( a2 < (unsigned int)getinf(21) )
    setinf(21, a2);
  if ( a3 > (unsigned int)getinf(22) )
    setinf(22, a3);
  LODWORD(v18) = a2;
  v10 = a3 - a2;
  if ( a4 < 0 )
    a4 = 0;
  if ( v10 > a4 )
    LODWORD(v10) = a4;
  v11 = *(_QWORD **)(*(_QWORD *)a1 + 1480LL);
  v12 = a2 + v10;
  HIDWORD(v18) = v12;
  v13 = sub_3BB410((__int64)v11, &v18, 0, 0);
  if ( v13 )
    goto LABEL_17;
  v17 = a2;
  if ( (sub_3B9AA0((__int64)v11, a2, 4) & 0x600) == 0x200 )
    v17 = sub_3BD5D0((__int64)v11, a2);
  v14 = sub_3BCF60((__int64)v11, v12);
  sub_3CD500(v11, v17, v14, 0);
  if ( v14 < a3 )
  {
    v19 = __PAIR64__(a3, v14);
    v13 = sub_3BB410((__int64)v11, &v19, 1, 0);
    if ( v13 )
LABEL_17:
      sub_383F40(v13, &byte_22CD811);
  }
  if ( a5 != -1 )
  {
    v15 = (unsigned int *)(v11 + 334);
    v19 = __PAIR64__(v12, a2);
    v20 = a5;
    sub_4EE3F0((__int64)v15, (unsigned int *)&v19, a6, a7);
    sub_4ED600(v15);
  }
  return *(_QWORD *)v21 - __readfsqword(0x28u);
}

