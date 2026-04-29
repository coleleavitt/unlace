const char *__fastcall sub_1A8390(__int64 a1)
{
  __int64 module_data; // rax
  __int64 v2; // rcx
  int v3; // edx
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  const char *v7; // rdx

  module_data = get_module_data((unsigned int)dword_4BB8D8);
  v2 = *(_QWORD *)(module_data + 1024);
  v3 = *(_DWORD *)(v2 + 384) + 1;
  v4 = (_QWORD *)(v2 + 24LL * *(int *)(v2 + 384) + 144);
  *(_DWORD *)(v2 + 384) = v3;
  if ( v3 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  v4[1] = 0;
  v5 = *(_QWORD *)(module_data + 1352);
  if ( *(int *)(a1 + 8) > 69 )
    sub_262320(a1, v4, v5);
  else
    sub_260C60(a1, v4, v5);
  v6 = v4[1];
  if ( v6 > 1 )
  {
    tag_remove(v4, *v4, 0);
    v6 = v4[1];
  }
  v7 = s1;
  if ( v6 )
    return (const char *)*v4;
  return v7;
}
