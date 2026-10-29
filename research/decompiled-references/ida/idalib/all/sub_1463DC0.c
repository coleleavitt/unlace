__int64 __fastcall sub_1463DC0(__int64 a1, int *a2, __int64 a3)
{
  _QWORD *v3; // r12
  _QWORD *v4; // rbx
  unsigned int v6; // r15d
  unsigned int v7; // eax

  v3 = *(_QWORD **)(a1 + 720);
  v4 = *(_QWORD **)(a1 + 712);
  if ( v4 == v3 )
    return 0;
  v6 = 0;
  do
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v4 + 16LL))(*v4, a1, a3);
    if ( (_BYTE)v7 )
      v6 = v7;
    ++v4;
  }
  while ( v3 != v4 );
  if ( !(_BYTE)v6 || (*(_BYTE *)(a1 + 544) & 1) != 0 )
    return 0;
  else
    sub_14634E0((__int64 *)a1, a2);
  return v6;
}
