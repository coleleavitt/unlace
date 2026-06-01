__int64 __fastcall sub_9C6190(__int64 *a1, _QWORD **a2, __int64 a3)
{
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // rsi
  char v8; // al
  unsigned int v9; // edx
  __int64 v10; // r12
  unsigned int v11; // ebp
  unsigned __int64 v12; // rax

  v5 = *a1;
  v6 = sub_B4F350(**a2);
  v7 = *(unsigned int *)(a3 + 28);
  v8 = sub_1000980(v5, v7, v6);
  v9 = 0;
  if ( !v8 )
  {
    v10 = *a1;
    v11 = *(_DWORD *)(a3 + 24);
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)**a2 + 16LL))(**a2, v7, 0);
    return (unsigned int)sub_1000980(v10, HIDWORD(v12), v11) ^ 1;
  }
  return v9;
}

