/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002ECC0
// Address: 0x000000014002ECC0

//----- (000000014002ECC0) ----------------------------------------------------
__int64 __fastcall sub_14002ECC0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // r8
  void *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax

  if ( a1 && !*(_DWORD *)(a1 + 12) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)qword_1400CB020;
    sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CB020);
    v3 = qword_1400CB030;
    v4 = qword_1400CB028;
    v5 = 0;
    if ( (int)qword_1400CB030 <= 0 )
    {
LABEL_9:
      if ( v5 == (int)qword_1400CB030 )
      {
        if ( qword_1400CB030 + 1 > (unsigned __int64)qword_1400CB038 )
        {
          v4 = sub_14005ABE0((__int64)&qword_1400CB028, qword_1400CB028, qword_1400CB030 + 1, 8u);
          qword_1400CB028 = v4;
          v3 = qword_1400CB030;
        }
        qword_1400CB030 = v3 + 1;
        *((_QWORD *)v4 + v3) = a1;
        goto LABEL_15;
      }
    }
    else
    {
      v6 = 0;
      do
      {
        if ( *((_QWORD *)qword_1400CB028 + v6) == a1 )
        {
          v5 = -1;
          goto LABEL_15;
        }
        ++v6;
      }
      while ( v6 < (int)qword_1400CB030 );
      while ( *((_QWORD *)qword_1400CB028 + v5) )
      {
        if ( ++v5 >= (int)qword_1400CB030 )
          goto LABEL_9;
      }
    }
    *((_QWORD *)qword_1400CB028 + v5) = a1;
LABEL_15:
    sub_14005D6D0(v2);
    return v5;
  }
  return -1;
}
// 140001790: using guessed type __int64 __fastcall guard_check_icall_nop();
// 1400CB030: using guessed type __int64 qword_1400CB030;
// 1400CB038: using guessed type __int64 qword_1400CB038;
