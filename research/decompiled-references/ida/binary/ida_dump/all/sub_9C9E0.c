_BOOL8 __fastcall sub_9C9E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // eax
  int v6; // ebp
  __int64 v7; // rdx
  _DWORD *v8; // rax
  _DWORD *v9; // rdx
  int v10; // r8d
  int v11; // ecx
  bool v12; // al

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v4 = *(_DWORD *)(v3 + 88);
  if ( *(_DWORD *)(a2 + 68) >= v4 && (*(_DWORD *)(a2 + 68) != v4 || !(unsigned __int8)sub_11CBB0(v3, 14)) )
    return 0;
  v6 = 2 * (*(_DWORD *)a2 != 13) - 1;
  if ( *(_BYTE *)(a2 + 32) == 4 )
  {
    v9 = *(_DWORD **)(a2 + 40);
    if ( (unsigned int)(*v9 - 12) <= 1
      && sub_9C2E0(
           a1,
           (_QWORD *)a2,
           (__int64)(v9 + 8),
           (__int64)(v9 + 12),
           2 * (unsigned int)(*v9 == 12) - 1,
           a2 + 48,
           2 * (unsigned int)(*(_DWORD *)a2 != 13) - 1) )
    {
      return 1;
    }
  }
  v7 = a2 + 32;
  if ( *(_BYTE *)(a2 + 48) != 4 )
    return sub_9C2E0(a1, (_QWORD *)a2, v7, a2 + 48, v6, 0, 0);
  v8 = *(_DWORD **)(a2 + 56);
  v7 = a2 + 32;
  if ( (unsigned int)(*v8 - 12) > 1 )
    return sub_9C2E0(a1, (_QWORD *)a2, v7, a2 + 48, v6, 0, 0);
  v10 = 1;
  v11 = 2 * (*v8 == 12) - 1;
  if ( v6 == -1 )
  {
    v11 = 1 - 2 * (*v8 == 12);
    v10 = -1;
  }
  v12 = sub_9C2E0(a1, (_QWORD *)a2, a2 + 32, (__int64)(v8 + 8), v10, (__int64)(v8 + 12), v11);
  v7 = a2 + 32;
  return v12 || sub_9C2E0(a1, (_QWORD *)a2, v7, a2 + 48, v6, 0, 0);
}
