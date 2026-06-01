__int64 __fastcall sub_13C7D0(unsigned int a1, int a2, __int64 a3, char a4)
{
  int v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( (a4 & 2) == 0 || (unsigned __int8)sub_13C720(&v5, a1, a2, 0, 0) && get_segm_by_sel() )
    return (unsigned __int8)op_seg();
  else
    return 0;
}

