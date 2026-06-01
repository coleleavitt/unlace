__int64 __fastcall sub_413EA0(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v4; // r15
  char v5; // r13
  _BYTE *v7; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx

  v4 = 0xFF00000000000000LL;
  v5 = 56;
  v7 = (_BYTE *)a2;
  if ( (unsigned __int8)is_cvt64(a1, a2, a3) )
  {
    v4 = 4278190080LL;
    v5 = 24;
  }
  if ( a4 )
  {
    a2 = *a4;
    v9 = sub_3BDD60(a1, *a4);
  }
  else
  {
    a1 = (_QWORD *)*a1;
    v9 = sub_634EF0(a1);
  }
  v10 = v4 & (a3 - v9);
  if ( v7 )
  {
    v9 = v10 >> v5;
    *v7 = v10 >> v5;
  }
  v11 = a3 - v10;
  if ( (unsigned __int8)is_cvt64(a1, a2, v9) )
    return (unsigned int)v11;
  return v11;
}
