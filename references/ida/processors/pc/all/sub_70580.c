__int64 __fastcall sub_70580(__int64 a1, __int64 *a2, __int64 a3, double a4, double a5)
{
  unsigned __int64 *v5; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // r14
  __int64 *next_fchunk; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-40h]

  v5 = *(unsigned __int64 **)a3;
  result = 16LL * *(_QWORD *)(a3 + 8);
  if ( result )
  {
    do
    {
      v8 = *v5;
      if ( (unsigned __int8)sub_70350(a1) )
      {
        sub_69520(v8, a2);
        next_fchunk = (__int64 *)get_next_fchunk();
        if ( next_fchunk )
        {
          while ( *next_fchunk < v5[1] && *v5 < next_fchunk[1] )
          {
            v10 = *next_fchunk;
            if ( sub_701C0(a1, a2, *next_fchunk, 0, 0) )
            {
              set_abits();
              sub_69520(v10, a2);
            }
            else if ( v10 >= *v5 && v10 < v5[1] )
            {
              break;
            }
            next_fchunk = (__int64 *)get_next_fchunk();
            if ( !next_fchunk )
              break;
          }
        }
        append_func_tail();
        if ( (debug & 8) != 0 )
          sub_224B0((__int64)" adding %a-%a to function... %d\n", a4, a5, v8);
      }
      v5 += 2;
      result = *(_QWORD *)a3 + 16LL * *(_QWORD *)(a3 + 8);
    }
    while ( v5 != (unsigned __int64 *)result );
  }
  return result;
}
