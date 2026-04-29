__int64 __fastcall sub_10A50(_QWORD *a1, unsigned __int16 a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 module_data; // rax
  char v6; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  if ( !a2 || a2 == *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33153) )
    return sub_108B0(a1, a2);
  if ( (unsigned int)a2 >= *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33153) )
    return sub_10000(a1, a2, 0);
  v6 = 0;
  v3 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33157);
  v4 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33157);
  module_data = get_module_data((unsigned int)dword_2D4F4);
  if ( (unsigned __int8)sub_10290(a1, v4 + *(unsigned int *)(module_data + 33153), 0, v3, a2, &v6) )
    return 0;
  if ( !v6 )
    return sub_10000(a1, a2, 0);
  return 1;
}
