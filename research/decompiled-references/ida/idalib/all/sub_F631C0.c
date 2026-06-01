_QWORD *__fastcall sub_F631C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax

  v6 = a1;
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 16) - 47 <= 1 )
    return sub_F60E90(*(_QWORD **)(v6 + 24), a2, a3, a4, a5, a6);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(unsigned __int8 *)(v8 + 16);
  if ( (unsigned int)(v9 - 47) <= 1 )
  {
    v10 = sub_F62E70(a1);
    if ( v10 )
    {
      v6 = v10;
      return sub_F60E90(*(_QWORD **)(v6 + 24), a2, a3, a4, a5, a6);
    }
    v11 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v8 = *(_QWORD *)v11;
    v9 = *(unsigned __int8 *)(*(_QWORD *)v11 + 16LL);
  }
  if ( (_BYTE)v9 == 29 )
    return sub_F60E90(*(_QWORD **)(v8 + 24), a2, v8, v9, a5, a6);
  else
    return nullptr;
}
