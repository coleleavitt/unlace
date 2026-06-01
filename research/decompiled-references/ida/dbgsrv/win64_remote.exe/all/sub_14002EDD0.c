/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002EDD0
// Address: 0x000000014002EDD0

//----- (000000014002EDD0) ----------------------------------------------------
__int64 __fastcall sub_14002EDD0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned __int8 v3; // bl
  unsigned __int64 v4; // rsi
  _QWORD *v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned __int64 i; // r8

  v2 = (struct _RTL_CRITICAL_SECTION *)qword_1400CB020;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CB020);
  v3 = 0;
  v4 = 0;
  if ( qword_1400CB030 )
  {
    v5 = qword_1400CB028;
    while ( *((_QWORD *)qword_1400CB028 + v4) != a1 )
    {
      if ( ++v4 >= qword_1400CB030 )
        goto LABEL_18;
    }
    if ( v4 < qword_1400CB030 )
    {
      if ( v4 == qword_1400CB040 )
      {
        v6 = (struct _RTL_CRITICAL_SECTION *)qword_1400CB020;
        sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CB020);
        for ( i = 0; i < qword_1400CB030; ++i )
        {
          if ( *((__int64 **)qword_1400CB028 + i) == qword_1400C6AF0 )
            break;
        }
        if ( i != qword_1400CB030 && qword_1400CB040 != i )
          qword_1400CB040 = i;
        sub_14005D6D0(v6);
        v5 = qword_1400CB028;
      }
      if ( *(_DWORD *)(a1 + 12) && !byte_1400CB600 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(1442);
      }
      v5[v4] = 0;
      v3 = 1;
    }
  }
LABEL_18:
  sub_14005D6D0(v2);
  return v3;
}
// 140001790: using guessed type __int64 __fastcall guard_check_icall_nop();
// 1400C6AF0: using guessed type __int64 qword_1400C6AF0[2];
// 1400CB030: using guessed type __int64 qword_1400CB030;
// 1400CB040: using guessed type __int64 qword_1400CB040;
// 1400CB600: using guessed type char byte_1400CB600;
// 1400CB61C: using guessed type char byte_1400CB61C;
