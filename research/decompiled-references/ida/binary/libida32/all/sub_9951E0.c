__int64 __fastcall sub_9951E0(_QWORD *a1, __int32 *a2, __int64 a3)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // r13
  __int32 *v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int32 *v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v12; // rax

  if ( !a3 )
    return sub_994E90(a1, 0, a2, 0);
  v3 = *(_DWORD *)(a3 + 44);
  v4 = *(_QWORD *)(a3 + 16);
  if ( v3 == *a2 )
    return sub_994E90(a1, *(_QWORD *)(a3 + 8), a2, *(_QWORD *)(a3 + 16));
  v6 = (__int32 *)(a3 + 44);
  if ( v3 > *a2 )
  {
    v12 = sub_9951E0(a1, a2, *(_QWORD *)(a3 + 8));
    v10 = v4;
    v9 = v6;
    v8 = v12;
  }
  else
  {
    v7 = sub_9951E0(a1, a2, *(_QWORD *)(a3 + 16));
    v8 = *(_QWORD *)(a3 + 8);
    v9 = v6;
    v10 = v7;
  }
  return sub_995010(a1, v8, v9, v10);
}

