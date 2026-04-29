char *__fastcall sub_1AB220(__int64 a1, unsigned int a2)
{
  __int64 module_data; // rax
  __int64 v3; // rcx
  int v4; // edx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  char *result; // rax

  module_data = get_module_data((unsigned int)dword_4DC8D8);
  v3 = *(_QWORD *)(module_data + 1024);
  v4 = *(_DWORD *)(v3 + 384) + 1;
  v5 = (_QWORD *)(v3 + 24LL * *(int *)(v3 + 384) + 144);
  *(_DWORD *)(v3 + 384) = v4;
  if ( v4 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  v5[1] = 0;
  v6 = sub_3356F0();
  sub_1C4700(v6, v5, a1, a2);
  result = "?";
  if ( v5[1] > 1u )
    return (char *)*v5;
  return result;
}
