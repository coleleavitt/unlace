__int64 __fastcall sub_3C4100(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 segm_base; // rdx
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi

  v2 = (_QWORD *)sub_505D70(a1 + 1624, a2 - 1);
  if ( !v2 || *v2 == a2 )
    return 0;
  segm_base = get_segm_base(v2);
  result = 32;
  v5 = a2 - segm_base;
  v6 = v5;
  if ( !v5 )
    return result;
  if ( (v5 & 1) != 0 )
    return 0;
  LODWORD(result) = 0;
  do
  {
    v6 >>= 1;
    result = (unsigned int)(result + 1);
  }
  while ( (v6 & 1) == 0 );
  return result;
}
