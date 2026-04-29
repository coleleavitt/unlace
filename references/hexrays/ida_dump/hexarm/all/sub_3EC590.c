unsigned __int64 __fastcall sub_3EC590(_QWORD *a1, __int64 a2, double a3)
{
  int custom_refinfo; // eax
  char v4; // r13
  __int64 v5; // rax
  char v6; // r13
  __int64 v7; // rsi
  int v8; // eax
  char v9; // r13
  __int64 v10; // rax
  char v11; // r13
  __int64 v12; // rsi
  int v13; // eax
  char v14; // r12
  __int64 v15; // rax
  char v16; // r12
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  custom_refinfo = find_custom_refinfo("PAGE");
  if ( custom_refinfo == -1 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCCD5u, a2, a3);
LABEL_17:
    BUG();
  }
  v4 = custom_refinfo;
  v5 = a1[39];
  v6 = v4 | 0x40;
  v7 = a1[38];
  if ( a1[40] < (unsigned __int64)(v5 + 1) )
  {
    v19 = qvector_reserve(a1 + 38, v7, v5 + 1, 1);
    a1[38] = v19;
    v7 = v19;
    v5 = a1[39];
  }
  *(_BYTE *)(v7 + v5) = v6;
  ++a1[39];
  v8 = find_custom_refinfo("HI12");
  if ( v8 == -1 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCCD6u, v7, a3);
    goto LABEL_17;
  }
  v9 = v8;
  v10 = a1[39];
  v11 = v9 | 0x40;
  v12 = a1[38];
  if ( a1[40] < (unsigned __int64)(v10 + 1) )
  {
    v20 = qvector_reserve(a1 + 38, v12, v10 + 1, 1);
    a1[38] = v20;
    v12 = v20;
    v10 = a1[39];
  }
  *(_BYTE *)(v12 + v10) = v11;
  ++a1[39];
  v13 = find_custom_refinfo("PAGEOFF");
  if ( v13 == -1 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCE2Eu, v12, a3);
    goto LABEL_17;
  }
  v14 = v13;
  v15 = a1[42];
  v16 = v14 | 0x40;
  v17 = a1[41];
  if ( a1[43] < (unsigned __int64)(v15 + 1) )
  {
    v21 = qvector_reserve(a1 + 41, v17, v15 + 1, 1);
    a1[41] = v21;
    v17 = v21;
    v15 = a1[42];
  }
  *(_BYTE *)(v17 + v15) = v16;
  ++a1[42];
  return v22 - __readfsqword(0x28u);
}
