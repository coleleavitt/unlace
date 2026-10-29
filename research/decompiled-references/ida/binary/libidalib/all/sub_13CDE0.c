__int64 __fastcall sub_13CDE0(__int64 a1, int a2, __int64 a3, char a4)
{
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( (a4 & 2) == 0 || (unsigned __int8)sub_13CD20(v5, a1, a2, 0, 0) && get_segm_by_sel() )
    return (unsigned __int8)op_seg();
  else
    return 0;
}

