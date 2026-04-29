unsigned __int64 __fastcall sub_79210(__int64 *a1, unsigned int **a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int *v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *((unsigned int *)a2 + 2);
  v11[0] = __readfsqword(0x28u);
  v3 = pack_dd(&v10, v11, v2);
  sub_79160(a1, (__int64)&v10, v3 - (_QWORD)&v10);
  v4 = *a2;
  v5 = (__int64)&(*a2)[2 * (_QWORD)a2[1]];
  if ( (unsigned int *)v5 != *a2 )
  {
    do
    {
      v6 = *v4;
      v4 += 2;
      v7 = pack_dd(&v10, v11, v6);
      sub_79160(a1, (__int64)&v10, v7 - (_QWORD)&v10);
      v8 = pack_dd(&v10, v11, *(v4 - 1));
      sub_79160(a1, (__int64)&v10, v8 - (_QWORD)&v10);
    }
    while ( (unsigned int *)v5 != v4 );
  }
  return v11[0] - __readfsqword(0x28u);
}
