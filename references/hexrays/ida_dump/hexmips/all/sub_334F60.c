__int64 sub_334F60()
{
  __int64 result; // rax

  result = *(_QWORD *)(get_module_data((unsigned int)dword_4CF8F8) + 840);
  *(_BYTE *)(result + 286) |= 1u;
  return result;
}
