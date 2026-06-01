unsigned int *__fastcall sub_4EE820(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int **v4; // rax
  _QWORD *v5; // rdi
  unsigned int *v6; // rax
  unsigned int *v8; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    return nullptr;
  v4 = (unsigned int **)sub_4EF930(v3, a2);
  v5 = *(_QWORD **)(a1 + 24);
  if ( v4 == (unsigned int **)(*v5 + 16LL * v5[1]) )
    return nullptr;
  v6 = *v4;
  if ( (unsigned int)a2 < *v6 || (unsigned int)a2 >= v6[1] )
    return nullptr;
  v8 = v6;
  sub_4EE680((__int64)(v5 + 8), a1, v6);
  return v8;
}

