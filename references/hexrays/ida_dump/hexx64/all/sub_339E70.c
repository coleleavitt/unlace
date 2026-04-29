__int64 sub_339E70()
{
  __int64 result; // rax

  result = *(_QWORD *)(get_module_data((unsigned int)dword_4EF998) + 840);
  *(_BYTE *)(result + 286) |= 1u;
  return result;
}
