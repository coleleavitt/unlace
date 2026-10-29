__int64 __fastcall sub_19C40B0(unsigned __int8 **a1)
{
  unsigned int v1; // ebp
  unsigned __int8 *v2; // rax
  __int64 v4; // rax

  v1 = **a1;
  if ( (_BYTE)v1 )
    return 0;
  v2 = a1[1];
  if ( (*(_BYTE *)(*(_QWORD *)v2 + 1LL) & 6) != 0 )
    return v1;
  v4 = sub_1A0BEA0(a1[2], *(_QWORD *)v2);
  if ( v4 == 1 )
    return 1;
  *(_QWORD *)a1[1] = v4 & 0xFFFFFFFFFFFFFFFELL;
  return v1;
}
