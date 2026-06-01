unsigned __int64 __fastcall sub_49E200(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = v4 + 1;
  if ( *(_DWORD *)(a1 + 2376) == 2 )
  {
    v7 = *(_QWORD *)(a1 + 2384);
    if ( v5 >= v6 )
      goto LABEL_3;
LABEL_5:
    v9 = qvector_reserve(a2, v3, v4 + 1, 8);
    *a2 = v9;
    v3 = v9;
    v4 = a2[1];
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(a1 + 2472);
  if ( v5 < v6 )
    goto LABEL_5;
LABEL_3:
  *(_QWORD *)(v3 + 8 * v4) = v7;
  ++a2[1];
  return v10 - __readfsqword(0x28u);
}
