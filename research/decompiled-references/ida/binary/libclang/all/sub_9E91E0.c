__int64 __fastcall sub_9E91E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx

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
  if ( !*(_BYTE *)(v8 + 51) || (v16 = *(unsigned int *)(v2 + 32), v10 = (__int64 *)(v9 + v16 + 72), v16 != v7) )
    v10 = (__int64 *)(v9 + v7 + 40);
  v11 = v5;
  v12 = sub_A1A4E0(v5, 24);
  v13 = *v10;
  v14 = v12;
  if ( v13 == sub_2575D20(v11, 24, v15) )
  {
    sub_257CF50(v14, v10);
    return v3;
  }
  sub_25768A0(v14, v10);
  return v3;
}

