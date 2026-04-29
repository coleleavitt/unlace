unsigned __int64 __fastcall sub_7A350(__int64 a1, __int64 *a2)
{
  unsigned int **v2; // r14
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned int *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int **i; // [rsp+8h] [rbp-50h]
  char v10[8]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v11[8]; // [rsp+18h] [rbp-40h] BYREF

  v11[0] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 144) != *(_QWORD *)(a1 + 80) )
  {
    if ( !under_debugger )
      sub_37B760(52193);
    BUG();
  }
  sub_792E0(a2, *(_DWORD *)(a1 + 144));
  v2 = *(unsigned int ***)(a1 + 72);
  for ( i = &v2[3 * *(_QWORD *)(a1 + 80)]; i != v2; v2 += 3 )
  {
    v3 = pack_dd(v10, v11, *((unsigned int *)v2 + 2));
    sub_79160(a2, (__int64)v10, v3 - (_QWORD)v10);
    v4 = (__int64)&(*v2)[(_QWORD)v2[1]];
    if ( (unsigned int *)v4 != *v2 )
    {
      v5 = *v2;
      do
      {
        v6 = *v5++;
        v7 = pack_dd(v10, v11, v6);
        sub_79160(a2, (__int64)v10, v7 - (_QWORD)v10);
      }
      while ( (unsigned int *)v4 != v5 );
    }
  }
  return v11[0] - __readfsqword(0x28u);
}
