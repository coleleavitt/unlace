unsigned __int64 __fastcall sub_F685C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // al
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+8h] [rbp-10h] BYREF

  v6 = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(unsigned __int8 *)(v7 + 16);
  v9 = (unsigned int)(v8 - 42);
  if ( (unsigned __int8)(v8 - 42) <= 2u )
  {
    v14[0] = sub_F68450(v6, a2, v8, v9, a5);
    return sub_F685C0(v14);
  }
  if ( (_BYTE)v8 == 48 || (_BYTE)v8 == 47 )
  {
    v12 = sub_F60E90(*(_QWORD **)(v7 + 24), a2, v8, v9, a5, a6);
LABEL_11:
    if ( v12 )
    {
      v13 = v12[5];
      if ( (v13 & 7) == 0 )
        return v13 & 0xFFFFFFFFFFFFFFF8LL;
    }
    return 0;
  }
  v10 = *(_BYTE *)(v6 + 16);
  if ( v10 == 53 )
  {
    v12 = *(_QWORD **)(v6 + 32);
    goto LABEL_11;
  }
  if ( (unsigned __int8)(v8 - 2) > 4u )
    return 0;
  if ( (unsigned __int8)(v10 - 2) > 4u )
    v6 = sub_F62E70(v6);
  v14[0] = *(_QWORD *)(v6 + 32);
  return sub_F685C0(v14);
}
