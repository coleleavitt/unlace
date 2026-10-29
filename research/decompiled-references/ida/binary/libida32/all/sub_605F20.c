__int64 __fastcall sub_605F20(__int64 a1)
{
  __int64 v1; // rax
  int v2; // esi
  _QWORD *v3; // rbp
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v9; // [rsp+0h] [rbp-28h] BYREF
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 20);
  v11 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(v1 + 1480);
  v9 = sub_3B9110(v3, v2);
  sub_419CD0((unsigned int *)&v9, *(unsigned int **)(a1 + 88), *(_DWORD *)(a1 + 96));
  v4 = sub_3B90A0(v3, v9);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(unsigned int *)(a1 + 16);
  *(_DWORD *)(a1 + 20) = v4;
  v7 = *(_QWORD *)(v5 + 1480);
  v10 = v4;
  sub_79B440(v7 + 2240, v5, v6, &v10, 4, 65);
  return 0;
}

