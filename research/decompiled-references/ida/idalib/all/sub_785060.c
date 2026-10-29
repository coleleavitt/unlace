__int64 __fastcall sub_785060(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rsi
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rax

  v1 = *(__int64 **)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -85;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < (unsigned __int64)(v2 + 1) )
  {
    v10 = qvector_reserve(v1, v3, v2 + 1, 1);
    *v1 = v10;
    v3 = v10;
    v2 = v1[1];
  }
  *(_BYTE *)(v3 + v2) = -85;
  ++v1[1];
  v4 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v4;
  sub_7847B0(a1, 0);
  sub_7847B0(a1, 0);
  v5 = *(_QWORD *)(a1 + 232);
  v6 = *(unsigned int *)(*(_QWORD *)(a1 + 224) + 4 * v5 - 4);
  if ( v5 )
    *(_QWORD *)(a1 + 232) = v5 - 1;
  sub_78C6A0(*(_QWORD *)(a1 + 200), v6, (unsigned int)(*(_DWORD *)(a1 + 208) - 4 - v6));
  v7 = *(_QWORD *)(a1 + 232);
  v8 = *(_QWORD *)(a1 + 224);
  if ( *(_QWORD *)(a1 + 240) < (unsigned __int64)(v7 + 1) )
  {
    v11 = qvector_reserve(a1 + 224, v8, v7 + 1, 4);
    *(_QWORD *)(a1 + 224) = v11;
    v8 = v11;
    v7 = *(_QWORD *)(a1 + 232);
  }
  *(_DWORD *)(v8 + 4 * v7) = v4;
  ++*(_QWORD *)(a1 + 232);
  return 0;
}
