__int64 __fastcall sub_8F8DD0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rdx

  v2 = 1;
  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return v2;
  v4 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a2;
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
  v2 = sub_9E4580(a1 + 384, v4, v5, 0);
  if ( !(_BYTE)v2 )
    return v2;
  if ( !*(_DWORD *)(v5 + 48) )
  {
    v6 = *(_QWORD *)(a1 + 568);
    v7 = (__int64 *)sub_8F8D80((__int64 *)v5);
    v8 = sub_A1A4E0(v6, 24);
    v9 = *v7;
    v10 = v8;
    if ( v9 == sub_2575D20(v6, 24, v11) )
      sub_257CF50(v10, v7);
    else
      sub_25768A0(v10, v7);
    return v2;
  }
  return 0;
}

