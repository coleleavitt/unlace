__int64 __fastcall sub_9B8B30(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // r13
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v12; // rax

  if ( !a3 )
    return sub_9B87D0(a1, 0, (__int64)a2, 0);
  v3 = *(_DWORD *)(a3 + 48);
  v4 = *(_QWORD *)(a3 + 16);
  if ( v3 == *a2 )
    return sub_9B87D0(a1, *(_QWORD *)(a3 + 8), (__int64)a2, *(_QWORD *)(a3 + 16));
  v6 = a3 + 48;
  if ( v3 > *a2 )
  {
    v12 = sub_9B8B30(a1, a2, *(_QWORD *)(a3 + 8));
    v10 = v4;
    v9 = v6;
    v8 = v12;
  }
  else
  {
    v7 = sub_9B8B30(a1, a2, *(_QWORD *)(a3 + 16));
    v8 = *(_QWORD *)(a3 + 8);
    v9 = v6;
    v10 = v7;
  }
  return sub_9B8960(a1, v8, v9, v10);
}
