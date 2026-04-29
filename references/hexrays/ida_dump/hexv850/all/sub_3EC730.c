void __fastcall sub_3EC730(__int64 a1, int a2, int a3, double a4)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v7; // rax
  int v8; // edx
  int v9; // esi
  __int64 v10; // rcx
  int v11; // r12d
  __int64 v12; // rsi
  int v13; // edx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // edx
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v4 = a2;
  v5 = a3;
  v7 = *(_QWORD *)(a1 + 832);
  v8 = *(unsigned __int16 *)(a1 + 842);
  v9 = *(_DWORD *)(v7 + 84);
  v10 = *(int *)(v7 + 64);
  v11 = *(_DWORD *)(a1 + 844) & 6;
  if ( (unsigned __int16)(*(_WORD *)(a1 + 48) - 207) <= 1u )
  {
    if ( v11 == 4 )
    {
      sub_3E8420(a1, 1u, v8, v4, v10, v5, v9);
      v14 = v19;
    }
    else
    {
      v14 = 2;
      sub_3E8420(a1, 2u, v8, v10, v4, v5, *(_DWORD *)(v7 + 84));
    }
    v15 = *(_QWORD *)(a1 + 832);
    v16 = *(_QWORD *)(v15 + 584);
    if ( !v16 )
      sub_3E4140(a4, a1, v14);
    v17 = *(int *)(*(_QWORD *)(v15 + 576) + 4 * v16 - 4);
    *(_QWORD *)(v15 + 584) = v16 - 1;
    v21 = v17;
    v20 = v17;
    sub_1D14D0(
      a1,
      3u,
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
      *(int *)(*(_QWORD *)(a1 + 832) + 80LL),
      0x3BEA45E214ADDC55LL,
      v17,
      v11 == 4);
    v18 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
    if ( v11 == 4 )
    {
      sub_3E8420(a1, 0xCu, v18, v5, v20, v20, 0);
      sub_3E8420(
        a1,
        1u,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) + (int)v4,
        *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
        v20,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
    }
    else
    {
      sub_3E8420(a1, 0xCu, v18, v4, v20, v20, 0);
      sub_3E8420(
        a1,
        2u,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
        *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
        v20,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) + a3,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
    }
    sub_3E62F0(*(_QWORD *)(a1 + 832), v21);
  }
  else if ( v11 == 4 )
  {
    sub_3E8420(a1, 1u, v8, v4, v10, v5, v9);
  }
  else
  {
    sub_3E8420(a1, 2u, v8, v10, v4, v5, v9);
    v12 = *(unsigned __int16 *)(a1 + 842);
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
    if ( (int)v12 < v13 )
      sub_3EC660(a1, v12, v13, v5, v5, (~*(_BYTE *)(a1 + 844) & 6) != 0, a4);
  }
}
