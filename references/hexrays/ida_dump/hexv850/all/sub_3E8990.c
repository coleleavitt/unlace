void __fastcall sub_3E8990(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int16 v11; // ax
  unsigned int v12; // esi
  __int64 v13; // [rsp+8h] [rbp-50h]
  unsigned int v14; // [rsp+14h] [rbp-44h]

  if ( *(_BYTE *)(a1 + 65) != 5 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEE9u, a2, a3);
LABEL_20:
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 72);
  if ( (unsigned int)v3 > 7 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEEAu, a2, a3);
    goto LABEL_20;
  }
  v4 = *(_QWORD *)(a1 + 832);
  v14 = 1 << v3;
  v5 = *(_QWORD *)(v4 + 584);
  if ( !v5
    || (v6 = (int)a2,
        v7 = *(int *)(*(_QWORD *)(v4 + 576) + 4 * v5 - 4),
        *(_QWORD *)(v4 + 584) = v5 - 1,
        sub_3E8420(
          a1,
          2u,
          1,
          *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
          (int)a2,
          v7,
          *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL)),
        v8 = *(_QWORD *)(a1 + 832),
        a2 = v13,
        (v9 = *(_QWORD *)(v8 + 584)) == 0) )
  {
    sub_3E4140(a3, a1, a2);
  }
  v10 = *(int *)(*(_QWORD *)(v8 + 576) + 4 * v9 - 4);
  *(_QWORD *)(v8 + 584) = v9 - 1;
  sub_1D14D0(a1, 3u, 1, v14, 0x3BEA45E214ADDC55LL, v10, 0);
  sub_3E8420(a1, 0x14u, 1, v7, v10, v10, 0);
  sub_3E8420(a1, 0x21u, 1, v10, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), 1, 0);
  v11 = *(_WORD *)(a1 + 48);
  if ( v11 == 51 )
  {
    sub_1D14D0(a1, 3u, 1, (int)~v14, 0x3BEA45E214ADDC55LL, v10, 0);
    sub_3E8420(a1, 0x14u, 1, v7, v10, v7, 0);
    v11 = *(_WORD *)(a1 + 48);
  }
  else if ( v11 == 21 || v11 == 31 )
  {
    sub_1D14D0(a1, 3u, 1, v14, 0x3BEA45E214ADDC55LL, v10, 0);
    v12 = 21;
    if ( *(_WORD *)(a1 + 48) == 21 )
      v12 = 19;
    sub_3E8420(a1, v12, 1, v7, v10, v7, 0);
    v11 = *(_WORD *)(a1 + 48);
  }
  if ( v11 != 4 )
    sub_3E8420(a1, 1u, 1, v7, *(int *)(*(_QWORD *)(a1 + 832) + 64LL), v6, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
  sub_3E62F0(*(_QWORD *)(a1 + 832), v10);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v7);
}
