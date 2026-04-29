__int64 sub_335BF0()
{
  __int64 result; // rax

  result = *(_QWORD *)(get_module_data((unsigned int)dword_4DC8D8) + 840);
  *(_BYTE *)(result + 286) |= 1u;
  return result;
}
