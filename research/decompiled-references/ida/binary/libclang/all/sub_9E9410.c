__int64 __fastcall sub_9E9410(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx

  v2 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v3 = sub_9E82D0(a1, a2, v2);
  if ( !(_BYTE)v3 )
    return v3;
  if ( *(_DWORD *)(v2 + 48) )
    return 0;
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_8E5480(v2);
  v7 = *(_QWORD *)v2;
  v8 = v6;
  v9 = *(_QWORD *)(v2 + 24);
  if ( !*(_BYTE *)(v8 + 51) || (v12 = *(unsigned int *)(v2 + 32), v10 = v9 + v12 + 72, v12 != v7) )
    v10 = v9 + v7 + 40;
  v11 = sub_A1A4E0(v5, 56);
  sub_A1BFE0(v11, v10);
  return v3;
}

