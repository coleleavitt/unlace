/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A4C0
// Address: 0x000000014005A4C0

//----- (000000014005A4C0) ----------------------------------------------------
char __fastcall sub_14005A4C0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // r8

  v2 = (struct _RTL_CRITICAL_SECTION *)qword_1400CB5F8;
  if ( !qword_1400CB5F8 )
  {
    v2 = sub_14005D640();
    qword_1400CB5F8 = (__int64)v2;
    if ( !v2 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(547);
    }
  }
  sub_14005D6B0(v2);
  v3 = qword_1400CB5F0;
  if ( !qword_1400CB5F0 )
  {
    v3 = sub_14005AAA0(24);
    if ( v3 )
    {
      *v3 = 0;
      v3[1] = 0;
      v3[2] = 0;
    }
    else
    {
      v3 = nullptr;
    }
    qword_1400CB5F0 = v3;
  }
  v4 = (_QWORD *)*v3;
  v5 = (_QWORD *)*v3;
  v6 = v3[1];
  v7 = *v3 + 8 * v6;
  if ( *v3 == v7 )
  {
LABEL_11:
    v8 = v6 + 1;
    if ( v8 > v3[2] )
    {
      v4 = sub_14005ABE0((__int64)v3, v4, v8, 8u);
      *v3 = v4;
    }
    v4[v3[1]++] = a1;
  }
  else
  {
    while ( a1 != *v5 )
    {
      if ( ++v5 == (_QWORD *)v7 )
        goto LABEL_11;
    }
  }
  return sub_14005D6D0(v2);
}
// 1400CB5F8: using guessed type __int64 qword_1400CB5F8;
// 1400CB61C: using guessed type char byte_1400CB61C;
