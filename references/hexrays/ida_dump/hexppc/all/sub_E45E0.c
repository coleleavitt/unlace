__int64 __fastcall sub_E45E0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rax
  int v9; // edx
  __int64 v11; // rax
  __int64 result; // rax
  char *v13; // rax
  char *v14; // r15
  __int64 not_tail; // r14
  __int64 v16; // rdx
  char v17; // r12
  int i; // r15d
  _QWORD *v19; // rsi
  const void *v20; // rbp
  size_t v21; // rax
  size_t v22; // rbx
  void *v23; // rdi
  size_t v24; // r12
  __int64 v25; // rax
  __int64 v26[9]; // [rsp+0h] [rbp-48h] BYREF

  v8 = a1[2];
  v9 = *(_DWORD *)(a4 + 4);
  v26[1] = __readfsqword(0x28u);
  v11 = *(_QWORD *)(v8 + 112);
  if ( v9 != *(_DWORD *)(v11 + 80) && v9 != *(_DWORD *)(v11 + 84) )
    return 0;
  v13 = sub_E39A0(*a1, a3, (char *)a4);
  v14 = v13;
  if ( *v13 == 3 )
  {
    v20 = *((const void **)v13 + 1);
    if ( v20 && (v21 = strlen(*((const char **)v13 + 1)), (v22 = v21) != 0) )
    {
      v23 = (void *)*a2;
      v24 = v21 + 1;
      if ( a2[2] < v21 + 1 )
      {
        v25 = qvector_reserve(a2, *a2, v21 + 1, 1);
        *a2 = v25;
        v23 = (void *)v25;
      }
      a2[1] = v24;
      memmove(v23, v20, v22);
      *(_BYTE *)(*a2 + v22) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    return 1;
  }
  else
  {
    if ( !(unsigned __int8)sub_155EE0(v13, a1[2], v26) )
      return 0;
    not_tail = v26[0];
    if ( *(_DWORD *)(a4 + 4) < *((_DWORD *)v14 + 1) )
    {
      not_tail = sub_326890(v26[0], *(unsigned int *)(*(_QWORD *)(a1[2] + 112) + 84LL), 0);
      if ( v26[0] != not_tail )
        return 0;
    }
    if ( (get_flags_ex(not_tail, 4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(not_tail, 4, v16);
    v17 = a5 ^ 1;
    for ( i = 2; ; i = 1 )
    {
      result = sub_25DF70(*(_QWORD *)(a1[2] + 112), a2, not_tail, v26[0] - not_tail, 0, 5);
      if ( (_DWORD)result || v17 )
        break;
      v19 = (_QWORD *)(a4 + 24);
      if ( (get_tinfo_property(*(_QWORD *)(a4 + 24), 2) & 0xF) != 0xA )
        v19 = (_QWORD *)(a1[2] + 200);
      if ( !(unsigned __int8)sub_E4320(v26[0], v19) || i == 1 )
        return 0;
    }
    if ( (unsigned int)(result - 1) > 1 && (_DWORD)result != 4 )
      return 0;
  }
  return result;
}
