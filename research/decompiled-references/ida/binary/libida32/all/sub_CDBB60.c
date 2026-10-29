__int64 __fastcall sub_CDBB60(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rax

  v3 = 1;
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return v3;
  v6 = *(_QWORD *)(a1 + 1232);
  v8 = a1 + 384;
  *(_QWORD *)(v8 + 856) = *a3;
  v3 = sub_DA7230(v8, v6);
  if ( !(_BYTE)v3 )
    return v3;
  v9 = sub_D8B950(a1 + 432, a2, *(unsigned int *)(*(_QWORD *)(a1 + 568) + 32LL), 0);
  v10 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
  sub_DFF430(v10, v9);
  return v3;
}

