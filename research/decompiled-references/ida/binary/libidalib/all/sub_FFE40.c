__int64 __fastcall sub_FFE40(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v6; // ebx
  _QWORD v8[145]; // [rsp+0h] [rbp-488h] BYREF

  v8[141] = __readfsqword(0x28u);
  sub_169130((unsigned int)v8, a1, 0, a4, a5, a6);
  if ( (unsigned __int8)getinf_flag() )
    v6 = hexplace_t__ea2str();
  else
    v6 = 0;
  sub_16D3C0(v8);
  return v6;
}

