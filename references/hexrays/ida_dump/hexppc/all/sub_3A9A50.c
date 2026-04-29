__int64 __fastcall sub_3A9A50(__int64 *a1, __int64 a2, int a3)
{
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  _QWORD v10[11]; // [rsp+0h] [rbp-58h] BYREF

  v10[3] = __readfsqword(0x28u);
  if ( !(unsigned __int8)xrefblk_t_first_to(v10, a2, 10) )
    return 0;
  v4 = 0;
  do
  {
    if ( (~((unsigned __int16)get_flags_ex(v10[0], 4) >> 8) & 6) == 0 )
    {
      if ( a1 )
      {
        v5 = a1[1];
        v6 = v10[0];
        v7 = *a1;
        if ( a1[2] < (unsigned __int64)(v5 + 1) )
        {
          v8 = qvector_reserve(a1, v7, v5 + 1, 8);
          *a1 = v8;
          v7 = v8;
          v5 = a1[1];
        }
        *(_QWORD *)(v7 + 8 * v5) = v6;
        ++a1[1];
      }
      if ( ++v4 >= a3 )
      {
        if ( a3 )
          break;
      }
    }
  }
  while ( (unsigned __int8)xrefblk_t_next_to(v10) );
  return v4;
}
