/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004AB00
// Address: 0x000000010004AB00

//----- (000000010004AB00) ----------------------------------------------------
__int64 __fastcall sub_10004AB00(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  char v7[8]; // [rsp+0h] [rbp-30h] BYREF
  __int64 v8; // [rsp+8h] [rbp-28h]

  sub_10004A750(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7[0] = 1;
        v8 = 0;
        v3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 496) + 24LL);
        if ( v3 != 37 )
          break;
        sub_10004A750(a1, (__int64)v7, 1);
        if ( !v8 )
LABEL_23:
          longjmp((int *)(a1 + 344), 86);
        if ( *(_BYTE *)a2 || v7[0] == 1 )
        {
          v5 = *(_QWORD *)(a2 + 8);
          if ( !((v8 | (unsigned __int64)v5) >> 32) )
            goto LABEL_21;
          *(_QWORD *)(a2 + 8) %= (unsigned __int64)v8;
        }
        else
        {
          v5 = *(_QWORD *)(a2 + 8);
          if ( (v8 | (unsigned __int64)v5) >> 32 )
            *(_QWORD *)(a2 + 8) = v5 % v8;
          else
LABEL_21:
            *(_QWORD *)(a2 + 8) = (unsigned int)v5 % (unsigned int)v8;
        }
      }
      if ( v3 != 47 )
        break;
      sub_10004A750(a1, (__int64)v7, 1);
      if ( !v8 )
        goto LABEL_23;
      if ( *(_BYTE *)a2 || v7[0] == 1 )
      {
        v4 = *(_QWORD *)(a2 + 8);
        if ( !((v8 | v4) >> 32) )
          goto LABEL_2;
        *(_QWORD *)(a2 + 8) = v4 / v8;
      }
      else
      {
        v4 = *(_QWORD *)(a2 + 8);
        if ( (v8 | v4) >> 32 )
          *(_QWORD *)(a2 + 8) = (__int64)v4 / v8;
        else
LABEL_2:
          *(_QWORD *)(a2 + 8) = (unsigned int)v4 / (unsigned int)v8;
      }
    }
    if ( v3 != 42 )
      return __stack_chk_guard;
    sub_10004A750(a1, (__int64)v7, 1);
    *(_QWORD *)(a2 + 8) *= v8;
  }
}
