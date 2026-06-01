__int64 __fastcall sub_149ED70(__int64 *a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rbp
  __int64 v5; // rdi
  _DWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v12; // rdi
  __int64 v13; // rdi
  int v14; // [rsp+4h] [rbp-24h] BYREF
  _QWORD v15[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = 0;
  v4 = *a1;
  if ( *(_WORD *)(*a1 + 32) == 27 )
  {
    v12 = *(__int64 **)(v4 + 8);
    *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
    sub_14634E0(v12, (int *)(v4 + 16));
    v2 = *(_DWORD *)(v4 + 40);
    v4 = *a1;
  }
  v5 = *(_QWORD *)(v4 + 96);
  v6 = (_DWORD *)a1[1];
  v15[0] = 0;
  v7 = sub_17D7F00(
         v5,
         *(_QWORD *)(v5 + 608),
         *v6,
         a2,
         a1[2],
         0,
         *(_QWORD *)a1[3],
         *(_QWORD *)(a1[3] + 8),
         (__int64)v15,
         v2);
  v8 = v7;
  if ( !*(_BYTE *)(a2 + 656) )
  {
    sub_1818070(*(_QWORD *)(a2 + 296), *(_QWORD *)(a2 + 648), v7);
    *(_BYTE *)(a2 + 656) = 1;
    if ( v8 )
      goto LABEL_5;
LABEL_9:
    v13 = *a1;
    v14 = 1638463;
    sub_15680D0(v13, &v14, 2, 0);
    return 1;
  }
  if ( !v7 )
    goto LABEL_9;
LABEL_5:
  v9 = a1[4];
  v10 = *(unsigned int *)(v9 + 8);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
  {
    sub_2237220(v9, v9 + 16, v10 + 1, 8);
    v10 = *(unsigned int *)(v9 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v9 + 8 * v10) = v8;
  ++*(_DWORD *)(v9 + 8);
  return 0;
}
