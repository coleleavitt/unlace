__int64 __fastcall sub_331DB0(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v4; // rcx
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = a4 & 2;
  v6[1] = __readfsqword(0x28u);
  if ( !(_DWORD)v4 || (unsigned __int8)sub_331AD0(v6, a1, a2, 0, 0) && get_segm_by_sel(v6[0]) )
    return (unsigned __int8)op_seg(a1, a2, a3, v4);
  else
    return 0;
}
