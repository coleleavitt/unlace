__int64 sub_3325F0()
{
  __int64 result; // rax

  result = *(_QWORD *)(get_module_data((unsigned int)dword_4BB8D8) + 840);
  *(_BYTE *)(result + 286) |= 1u;
  return result;
}
