__int64 sub_338D50()
{
  __int64 module_data; // rbx
  unsigned int v2; // eax
  __int64 v3; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v4[3]; // [rsp+10h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_4DC8D8);
  v3 = *(int *)(module_data + 652);
  v4[0] = *(int *)(module_data + 656);
  if ( (unsigned int)sub_338C80(
                       (__int64)"Hex-Rays Decompiler Options 3\n"
                                "<#Functions bigger than this size will not be decompiled#~M~ax function size to analyze "
                                "in KB:D::12::>\n"
                                "<#Each function argument occupies one stack slot (4 or 8 bytes depending on the architec"
                                "hture)#Max ~n~umber of function arguments  :D::12::>\n",
                       &v3,
                       v4) )
  {
    *(_DWORD *)(module_data + 652) = v3;
    v2 = v4[0];
    *(_DWORD *)(module_data + 656) = v4[0];
    if ( v2 > 0x100 )
    {
      sub_2B11F0((__int64)"MAX_FUNC_ARGS (%d) exceeds limit, decreased to %u", v2, 256);
      *(_DWORD *)(module_data + 656) = 256;
    }
  }
  return 0;
}
