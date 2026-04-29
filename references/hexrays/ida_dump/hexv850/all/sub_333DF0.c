__int64 sub_333DF0()
{
  __int64 result; // rax

  result = *(_QWORD *)(get_module_data((unsigned int)dword_4C2AB8) + 840);
  *(_BYTE *)(result + 286) |= 1u;
  return result;
}
