/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417DB0
// Address: 0x0000000000417DB0

//----- (0000000000417DB0) ----------------------------------------------------
__int64 __fastcall sub_417DB0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  char v5; // al
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // rdx
  char *v14; // rax
  char *v15; // rsi
  __int64 v16; // rdi
  char *v17; // rax
  char *v19; // rax
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+8h] [rbp-50h]
  unsigned __int64 v22[9]; // [rsp+10h] [rbp-48h] BYREF

  v22[1] = __readfsqword(0x28u);
  if ( a4 > 8 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1797);
    goto LABEL_17;
  }
  v5 = *(_BYTE *)(a2 + 13);
  switch ( v5 )
  {
    case 2:
      v11 = 4;
      break;
    case 7:
      v11 = 8;
      break;
    case 1:
      v11 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        sub_481AC0(1798);
LABEL_17:
      BUG();
  }
  v12 = *(_QWORD *)(a1 + 24);
  v22[0] = a5;
  v13 = v12;
  if ( a5 != -1 )
  {
    v20 = v11;
    v14 = sub_417B50((char **)(a1 + 40), v22);
    v11 = v20;
    *(_QWORD *)v14 = v12;
    v13 = *(_QWORD *)(a1 + 24);
  }
  v15 = *(char **)(a1 + 16);
  v16 = v13 + 1;
  if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v13 + 1) )
  {
    v21 = v11;
    v19 = (char *)sub_481540(a1 + 16, v15, v13 + 1, 0x28u);
    v13 = *(_QWORD *)(a1 + 24);
    v11 = v21;
    *(_QWORD *)(a1 + 16) = v19;
    v15 = v19;
    v16 = v13 + 1;
  }
  *(_QWORD *)(a1 + 24) = v16;
  v17 = &v15[40 * v13];
  *(_DWORD *)v17 = 0;
  *((_QWORD *)v17 + 1) = a5;
  *((_QWORD *)v17 + 2) = a3;
  *((_QWORD *)v17 + 3) = a4;
  *((_QWORD *)v17 + 4) = v11;
  sub_411320(
    *(char ***)(a1 + 8),
    *(const void **)a2,
    *(_DWORD *)(a2 + 8),
    *(_BYTE *)(a2 + 13),
    *(_BYTE *)(a2 + 12),
    *(char **)(a2 + 16),
    *(_QWORD *)(a2 + 24));
  return v12;
}
// 4C94E1: using guessed type char byte_4C94E1;
