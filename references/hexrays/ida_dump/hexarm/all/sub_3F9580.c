__int64 __fastcall sub_3F9580(__int64 a1, int a2, int a3, double a4)
{
  __int64 v5; // rbx
  __int16 v6; // r15
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // al
  unsigned __int64 dtype_size; // r12
  int v10; // r12d
  unsigned __int8 v11; // al
  __int64 v12; // rax
  int v13; // r14d
  int v14; // eax
  int v15; // ebp
  int v16; // ebx
  int v17; // r14d
  int v18; // r13d
  int v19; // r12d
  int v20; // r15d
  int v21; // r8d
  int v22; // ecx
  int v24; // [rsp+Ch] [rbp-4Ch]
  unsigned __int8 v25; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v26; // [rsp+10h] [rbp-48h]
  unsigned __int8 v27; // [rsp+10h] [rbp-48h]
  unsigned __int8 v28; // [rsp+18h] [rbp-40h]

  v5 = a1;
  v6 = *(_WORD *)(a1 + 48);
  v24 = sub_3EE210(a1, a1 + 104, a4);
  v28 = sub_3EE470(a1, a1 + 104, 0, a4);
  v7 = sub_3EE470(v5, v5 + 64, 0, a4);
  v8 = sub_3EE110(a1, a1 + 104, a4);
  dtype_size = get_dtype_size(v8);
  v26 = dtype_size / (unsigned int)sub_3EE210(a1, a1 + 104, a4);
  v10 = v26;
  v11 = sub_3EE110(a1, a1 + 104, a4);
  v12 = get_dtype_size(v11);
  if ( ((v6 - 754) & 0xFFFD) == 0 )
  {
    if ( v12 == 16 )
    {
      a3 += 8;
      v10 = (int)v26 / 2;
      goto LABEL_4;
    }
LABEL_10:
    if ( !under_debugger )
      sub_3835A0(0xCBF3u, a1 + 104, a4);
    BUG();
  }
  if ( v12 != 8 )
    goto LABEL_10;
LABEL_4:
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
  if ( v10 > 0 )
  {
    v14 = v24;
    v27 = v7;
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
    v16 = a3;
    v17 = v10;
    v25 = (unsigned __int16)(v6 - 755) <= 1u;
    v18 = 0;
    v19 = 2 * v14;
    v20 = v14;
    do
    {
      v21 = v15;
      v22 = v16;
      ++v18;
      v16 += v20;
      v15 += v19;
      sub_3F8F20(a1, v28, v27, v22, v21, v25);
    }
    while ( v17 != v18 );
    v5 = a1;
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
  }
  return sub_3F6E70(v5, 4u, 8u, v13, 0x3BEA45E214ADDC55LL, a2, a4, 0, 1);
}
