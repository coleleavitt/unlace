__int64 __fastcall sub_10E20(_QWORD *a1, unsigned __int8 a2)
{
  int v3; // r12d
  __int64 module_data; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 result; // rax

  v3 = (unsigned __int16)getinf(42);
  module_data = get_module_data((unsigned int)dword_2D4F4);
  v5 = (unsigned int)dword_2D4F4;
  *(_DWORD *)(module_data + 160) = v3;
  v6 = get_module_data(v5);
  v7 = (unsigned int)dword_2D4F4;
  *(_DWORD *)(v6 + 156) = 1984;
  v8 = get_module_data(v7);
  v9 = (unsigned int)dword_2D4F4;
  *(_BYTE *)(v8 + 154) = 1;
  a1[4] = 0;
  v10 = *(unsigned int *)(get_module_data(v9) + 156);
  if ( a1[5] < v10 )
    a1[3] = qvector_reserve(a1 + 3, a1[3], v10, 1);
  v11 = get_module_data((unsigned int)dword_2D4F4);
  v12 = (unsigned int)dword_2D4F4;
  *(_DWORD *)(v11 + 164) = a2;
  result = get_module_data(v12);
  *(_QWORD *)(result + 176) = 0;
  return result;
}
