__int64 sub_334BE0()
{
  __int64 result; // rax

  result = *(_QWORD *)(get_module_data((unsigned int)dword_4C1BB8) + 840);
  *(_BYTE *)(result + 286) |= 1u;
  return result;
}
