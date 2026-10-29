__int64 __fastcall sub_C57430(__int64 *a1, __int64 a2, _WORD *a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned int v7; // r13d
  unsigned __int64 v8; // rcx
  int v9; // r12d
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 272);
  v8 = *(unsigned int *)(v6 + 148);
  v9 = *(_DWORD *)(v6 + 160) + 1;
  v10 = *(unsigned int *)(v6 + 144);
  *(_DWORD *)(v6 + 160) = v9;
  if ( v10 + 1 > v8 )
  {
    v18 = a4;
    sub_2237220(v6 + 136, v6 + 152, v10 + 1, 4);
    v10 = *(unsigned int *)(v6 + 144);
    a4 = v18;
  }
  *(_DWORD *)(*(_QWORD *)(v6 + 136) + 4 * v10) = v9;
  ++*(_DWORD *)(v6 + 144);
  v11 = *(_DWORD *)(a2 + 48);
  if ( !v11 )
  {
    v17 = sub_EEB7E0(a3);
    sub_E33C80(a2, v17, 2484, 0);
    if ( v7 == -1 )
      goto LABEL_8;
    goto LABEL_13;
  }
  *(_DWORD *)(a2 + 48) = v11 - 1;
  v12 = sub_C509B0(a1, a2, a3, a4);
  v11 = v12;
  if ( v12 && v12 != 5 )
  {
    if ( !(unsigned __int8)sub_C54F60(a2, (__m128i *)((char *)&dword_0 + 1), v7, v13, v14) )
    {
      v11 = 0;
      goto LABEL_8;
    }
    v7 = -1;
  }
  v16 = v11;
  if ( ((1LL << v11) & 0x23) == 0 )
    v11 = (((1LL << v11) & 0x10) == 0) + 2;
  if ( v7 != -1 )
LABEL_13:
    sub_C54F60(a2, nullptr, v7, v16, v14);
LABEL_8:
  --*(_DWORD *)(*(_QWORD *)(a2 + 32) + 144LL);
  return v11;
}
