/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457CC8
// Address: 0x0000000000457CC8

//----- (0000000000457CC8) ----------------------------------------------------
__int64 __fastcall sub_457CC8(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // x0
  int v6; // w0
  __int64 v7; // x2
  __int64 v8; // x0
  char v10[8]; // [xsp+38h] [xbp-18h] BYREF
  __int64 v11; // [xsp+40h] [xbp-10h]
  __int64 v12; // [xsp+48h] [xbp-8h]

  sub_457BA0(a1, a2, a3);
LABEL_2:
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 672);
    v10[0] = 1;
    v11 = 0;
    v6 = *(unsigned __int16 *)(v5 + 24);
    if ( v6 != 42 )
      break;
LABEL_9:
    sub_457BA0(a1, (__int64)v10, 1);
    *(_QWORD *)(a2 + 8) *= v11;
  }
  while ( 1 )
  {
    if ( v6 == 47 )
    {
      sub_457BA0(a1, (__int64)v10, 1);
      if ( !v11 )
LABEL_17:
        __longjmp_chk(a1 + 360, 86);
      if ( *(_BYTE *)a2 || v10[0] )
        *(_QWORD *)(a2 + 8) /= (unsigned __int64)v11;
      else
        *(__int64 *)(a2 + 8) /= v11;
      goto LABEL_2;
    }
    if ( v6 != 37 )
      return v12 ^ _stack_chk_guard;
    sub_457BA0(a1, (__int64)v10, 1);
    if ( !v11 )
      goto LABEL_17;
    v7 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)a2 || v10[0] )
    {
      *(_QWORD *)(a2 + 8) = v7 % (unsigned __int64)v11;
      goto LABEL_2;
    }
    *(_QWORD *)(a2 + 8) = v7 % v11;
    v10[0] = 1;
    v8 = *(_QWORD *)(a1 + 672);
    v11 = 0;
    v6 = *(unsigned __int16 *)(v8 + 24);
    if ( v6 == 42 )
      goto LABEL_9;
  }
}
// 406560: using guessed type void __fastcall __noreturn __longjmp_chk(_QWORD, _QWORD);
