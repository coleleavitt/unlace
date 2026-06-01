void __fastcall sub_1521C10(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // r12d
  __int64 v7; // r14
  unsigned int *v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // r15d
  bool v11; // al
  __int16 v12; // ax
  __int64 v13; // rdi
  void *v14; // rcx
  __int64 v15; // r8
  char v16; // cl
  void *v17; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+18h] [rbp-A0h]
  _BYTE v19[16]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int8 *v20[17]; // [rsp+30h] [rbp-88h] BYREF

  v6 = *(_DWORD *)a4;
  sub_14634E0(a2, (int *)a4);
  if ( *(_WORD *)(a4 + 16) != 22 || (sub_14634E0(a2, (int *)a4), *(_WORD *)(a4 + 16) != 5) )
  {
    sub_FC70B0((__int64)v20, a2[6], v6, 1854);
    sub_AEA040((__int64)v20);
    return;
  }
  v7 = *(_QWORD *)(a4 + 8);
  v8 = *(unsigned int **)(v7 + 16);
  v9 = *v8;
  switch ( v9 )
  {
    case 6LL:
      if ( v8[4] != 1802398060 || *((_WORD *)v8 + 10) != 29285 )
      {
        if ( v8[4] != 1936029797 )
          goto LABEL_7;
        v10 = 4;
        if ( *((_WORD *)v8 + 10) != 29300 )
          goto LABEL_7;
        goto LABEL_13;
      }
      v16 = 1;
      break;
    case 3LL:
      if ( *((_WORD *)v8 + 8) != 26988 )
        goto LABEL_7;
      v10 = 2;
      if ( *((_BYTE *)v8 + 18) != 98 )
        goto LABEL_7;
      goto LABEL_13;
    case 8LL:
      v10 = 3;
      if ( *((_QWORD *)v8 + 2) != 0x72656C69706D6F63LL )
      {
LABEL_7:
        sub_FC70B0((__int64)v20, a2[6], *(_DWORD *)a4, 1855);
        sub_AEA040((__int64)v20);
        return;
      }
      goto LABEL_13;
    default:
      v16 = 0;
      break;
  }
  if ( v9 != 4 )
  {
    if ( !v16 )
      goto LABEL_7;
    goto LABEL_34;
  }
  if ( v16 )
  {
LABEL_34:
    v10 = 1;
LABEL_13:
    v11 = v10 != 2;
    goto LABEL_14;
  }
  if ( v8[4] != 1919251317 )
    goto LABEL_7;
  v11 = 1;
  v10 = 5;
LABEL_14:
  if ( *(_DWORD *)(a2[8] + 268) == 3 && v11 )
  {
    sub_FC70B0((__int64)v20, a2[6], *(_DWORD *)a4, 2183);
    sub_AEC220(v20, (_BYTE *)(*(_QWORD *)(v7 + 16) + 16LL), **(unsigned int **)(v7 + 16));
    sub_AEA040((__int64)v20);
    return;
  }
  sub_14634E0(a2, (int *)a4);
  v19[0] = 0;
  v17 = v19;
  v12 = *(_WORD *)(a4 + 16);
  v18 = 0;
  if ( v12 != 66 )
    goto LABEL_17;
  sub_14634E0(a2, (int *)a4);
  if ( (unsigned __int8)sub_1464000((__int64)a2, a4, &v17, (__int64)"pragma comment", 1) )
  {
    v12 = *(_WORD *)(a4 + 16);
LABEL_17:
    if ( v12 == 23 && (sub_14634E0(a2, (int *)a4), *(_WORD *)(a4 + 16) == 2) )
    {
      v13 = a2[149];
      v14 = v17;
      v15 = v18;
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64, void *, __int64))(*(_QWORD *)v13 + 120LL))(
          v13,
          v6,
          v7,
          v17,
          v18);
        v14 = v17;
        v15 = v18;
      }
      sub_16685F0(*(_QWORD *)(a1 + 40), v6, v10, v14, v15);
    }
    else
    {
      sub_FC70B0((__int64)v20, a2[6], *(_DWORD *)a4, 1854);
      sub_AEA040((__int64)v20);
    }
  }
  if ( v17 != v19 )
    operator delete(v17);
}
