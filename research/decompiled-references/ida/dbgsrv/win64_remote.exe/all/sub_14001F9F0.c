/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F9F0
// Address: 0x000000014001F9F0

//----- (000000014001F9F0) ----------------------------------------------------
__int64 __fastcall sub_14001F9F0(_QWORD *a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const CHAR *v5; // rcx
  char *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  void *v9; // rdx
  __int64 v10; // rdx
  void *v11; // rax

  v4 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v5 = Str1;
  v6 = (char *)Str1;
  if ( a1[6] )
    v6 = (char *)a1[5];
  if ( a1[2] )
    v5 = (const CHAR *)a1[1];
  v7 = sub_140064370(v5, v6);
  if ( v7 )
  {
    v8 = qword_1400CAFB0;
    if ( !qword_1400CAFB0 )
    {
      v9 = qword_1400CAFA8;
      if ( !qword_1400CAFB8 )
      {
        v9 = sub_14005ABE0((__int64)&qword_1400CAFA8, qword_1400CAFA8, 1u, 8u);
        v8 = qword_1400CAFB0;
        qword_1400CAFA8 = v9;
      }
      *((_QWORD *)v9 + v8) = 0;
      v8 = ++qword_1400CAFB0;
    }
    *(_QWORD *)(a2 + 8) = v8;
    v10 = qword_1400CAFB0;
    if ( qword_1400CAFB0 + 1 <= (unsigned __int64)qword_1400CAFB8 )
    {
      v11 = qword_1400CAFA8;
    }
    else
    {
      v11 = sub_14005ABE0((__int64)&qword_1400CAFA8, qword_1400CAFA8, qword_1400CAFB0 + 1, 8u);
      qword_1400CAFA8 = v11;
      v10 = qword_1400CAFB0;
    }
    *((_QWORD *)v11 + v10) = v7;
    ++qword_1400CAFB0;
  }
  sub_14005D6D0(v4);
  return 0;
}
// 1400CAFB0: using guessed type __int64 qword_1400CAFB0;
// 1400CAFB8: using guessed type __int64 qword_1400CAFB8;
