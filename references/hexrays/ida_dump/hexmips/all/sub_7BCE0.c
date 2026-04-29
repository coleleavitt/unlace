unsigned __int64 __fastcall sub_7BCE0(__int64 *a1, unsigned int **a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int *v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *((unsigned int *)a2 + 2);
  v10[0] = __readfsqword(0x28u);
  v3 = pack_dd(&v9, v10, v2);
  sub_7B560(a1, (__int64)&v9, v3 - (_QWORD)&v9);
  v4 = *a2;
  v5 = (__int64)&(*a2)[(_QWORD)a2[1]];
  if ( (unsigned int *)v5 != *a2 )
  {
    do
    {
      v6 = *v4++;
      v7 = pack_dd(&v9, v10, v6);
      sub_7B560(a1, (__int64)&v9, v7 - (_QWORD)&v9);
    }
    while ( (unsigned int *)v5 != v4 );
  }
  return v10[0] - __readfsqword(0x28u);
}
