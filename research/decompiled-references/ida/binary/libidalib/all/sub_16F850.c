unsigned __int64 __fastcall sub_16F850(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  if ( (unsigned __int64)*(unsigned int *)(a1 + 12) < *(_QWORD *)(a3 + 8) )
  {
    getinf_flag();
    get_nice_colored_name();
    sub_94440(a2);
  }
  return v4 - __readfsqword(0x28u);
}

