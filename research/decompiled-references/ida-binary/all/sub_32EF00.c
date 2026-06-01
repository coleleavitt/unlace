__int64 __fastcall sub_32EF00(_QWORD *a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rsi
  unsigned int offset_expr; // r12d
  int v10; // [rsp+8h] [rbp-168h] BYREF
  _QWORD v11[34]; // [rsp+10h] [rbp-160h] BYREF
  char v12; // [rsp+120h] [rbp-50h]
  int v13; // [rsp+124h] [rbp-4Ch]
  int v14; // [rsp+128h] [rbp-48h]
  __int64 v15; // [rsp+130h] [rbp-40h]
  unsigned __int64 v16; // [rsp+140h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v10 = 0;
  v12 = 5;
  v13 = 0;
  v14 = 0;
  memset(v11, 0, sizeof(v11));
  LODWORD(v11[3]) = a3;
  v7 = *(_QWORD *)(a2 + 16);
  v11[1] = a5;
  v15 = 0x55555505500000LL;
  v11[0] = -1;
  offset_expr = get_offset_expr(a1, v7, a4, v11, *(char *)(a2 + 40LL * (int)a4 + 42) + v7, qword_8CEC00, 4);
  if ( offset_expr && (unsigned __int8)print_operand(a1, *(_QWORD *)(a2 + 16), a4, 4, &v10) && a1[1] > 1u )
    tag_remove(a1, *a1, 0);
  return offset_expr;
}
