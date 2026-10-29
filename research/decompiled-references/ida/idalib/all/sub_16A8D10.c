char __fastcall sub_16A8D10(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  int v9; // ebx

  v3 = *(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL];
  LODWORD(v4) = 0;
  if ( (v3 & 8) != 0 )
    v4 = *(__int64 *)((char *)&qword_18 + (v3 & 0xFFFFFFFFFFFFFFF0LL));
  LODWORD(v5) = 0;
  v6 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v7 = v4 | ((unsigned __int8)*a1 | (unsigned __int8)v3) & 7;
  if ( (v6 & 8) != 0 )
    v5 = *(__int64 *)((char *)&qword_18 + (v6 & 0xFFFFFFFFFFFFFFF0LL));
  v8 = (unsigned int)v5 >> 9;
  v9 = v7 >> 9;
  if ( v8 == v9 || sub_F56A30(v9, v8, a3) )
    return 1;
  else
    return sub_F56A30(v8, v9, a3);
}
