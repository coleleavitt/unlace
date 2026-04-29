__int64 __fastcall sub_135C40(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  __int64 v5; // r10
  _QWORD *v6; // rdx
  _QWORD *v7; // r9
  int v8; // eax
  int v9; // r10d
  _QWORD *v10; // r11
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  _QWORD v16[7]; // [rsp+0h] [rbp-38h] BYREF

  v16[3] = __readfsqword(0x28u);
  if ( a3 && !sub_11A640(a2) && !sub_11A690(a2) && *(_DWORD *)(a1[188] + 92LL) != a2 )
  {
    if ( !under_debugger )
      sub_37EA20(50421);
    BUG();
  }
  v4 = *(_QWORD *)(a1[187] + 8LL);
  if ( *(_QWORD *)(v4 + 120) == a2 )
  {
    if ( (unsigned __int8)getinf() )
      LODWORD(v5) = (unsigned __int8)getinf();
    else
      v5 = *(_QWORD *)(v4 + 120);
  }
  else
  {
    LODWORD(v5) = a2;
  }
  v6 = (_QWORD *)a1[145];
  v7 = &v6[2 * a1[146]];
  if ( v6 == v7 )
    return 0xFFFFFFFFLL;
  v8 = v5 - 1;
  v9 = -(int)v5;
  v10 = &v6[2 * a1[146]];
  do
  {
    v11 = *v6 + v6[1];
    v12 = v9 & (*v6 + v8);
    if ( v11 >= a2 + v12 )
    {
      if ( *v6 == v12 || a2 + v12 == v11 )
        goto LABEL_12;
      v10 = v6;
    }
    v6 += 2;
  }
  while ( v7 != v6 );
  v6 = v10;
LABEL_12:
  if ( v6 == v7 )
    return 0xFFFFFFFFLL;
  v13 = *v6 + v8;
  v16[1] = a2;
  v14 = v9 & v13;
  v16[0] = v9 & v13;
  sub_314680(a1 + 145, v16);
  return v14;
}
