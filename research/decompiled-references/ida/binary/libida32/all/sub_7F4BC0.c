__int64 __fastcall sub_7F4BC0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // r15d
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int8 *v10; // rdx
  int v11; // eax
  int v12; // r14d
  int v13; // eax
  int v14; // r14d
  int v15; // r13d
  int v16; // r12d
  int v17; // ebp
  int v18; // ebx
  int v19; // r11d
  int v20; // r10d
  int v21; // r9d
  int v22; // r8d
  int v23; // edi
  int v24; // esi
  int v25; // ecx
  unsigned int v26; // edi
  unsigned int v28; // edi
  __int64 v29; // r8
  unsigned __int8 *v30; // rdx
  unsigned __int8 *v31; // rax
  int v32; // r9d
  int v33; // [rsp+0h] [rbp-68h]
  int v34; // [rsp+4h] [rbp-64h]
  unsigned __int8 *v35; // [rsp+8h] [rbp-60h]
  int v36; // [rsp+10h] [rbp-58h]
  unsigned int v37; // [rsp+18h] [rbp-50h]
  int v38; // [rsp+1Ch] [rbp-4Ch]
  __int64 v39; // [rsp+20h] [rbp-48h]
  __int64 v40; // [rsp+28h] [rbp-40h]
  unsigned __int64 v41; // [rsp+30h] [rbp-38h]

  if ( !a2 )
    return 1;
  v3 = 1;
  v5 = a2;
  v37 = 0;
  do
  {
    v6 = 5552;
    v7 = v5;
    if ( v5 <= 0x15B0 )
      v6 = v5;
    v8 = v6;
    v6 = (unsigned int)v6;
    v5 -= v8;
    if ( v7 <= 0xF )
      goto LABEL_11;
    v9 = (unsigned int)v6 >> 4;
    v36 = v8;
    v10 = (unsigned __int8 *)a1;
    v40 = a1;
    v38 = v9 - 1;
    v35 = (unsigned __int8 *)(a1 + 16 * v9);
    v39 = (unsigned int)(v9 - 1);
    v41 = v5;
    do
    {
      v11 = *v10;
      v12 = v10[1];
      v10 += 16;
      v13 = v3 + v11;
      v14 = v13 + v12;
      v15 = v14 + *(v10 - 14);
      v16 = v15 + *(v10 - 13);
      v17 = v16 + *(v10 - 12);
      v33 = *(v10 - 11) + v17;
      v34 = *(v10 - 10) + v33;
      v18 = v34 + *(v10 - 9);
      v19 = v18 + *(v10 - 8);
      v20 = v19 + *(v10 - 7);
      v21 = v20 + *(v10 - 6);
      v22 = v21 + *(v10 - 5);
      v23 = v22 + *(v10 - 4);
      v24 = v23 + *(v10 - 3);
      v25 = v24 + *(v10 - 2);
      v3 = v25 + *(v10 - 1);
      v37 += v3 + v25 + v24 + v23 + v22 + v21 + v20 + v19 + v18 + v34 + v33 + v17 + v16 + v15 + v14 + v13;
    }
    while ( v10 != v35 );
    v5 = v41;
    v6 = (unsigned int)(-16 * v38 + v36 - 16);
    a1 = v40 + 16 * v39 + 16;
    if ( -16 * v38 + v36 != 16 )
    {
LABEL_11:
      v28 = v37;
      v29 = (unsigned int)(v6 - 1);
      v30 = (unsigned __int8 *)(a1 + v6);
      v31 = (unsigned __int8 *)a1;
      do
      {
        v32 = *v31++;
        v3 += v32;
        v28 += v3;
      }
      while ( v31 != v30 );
      v37 = v28;
      a1 += v29 + 1;
    }
    v3 %= 0xFFF1u;
    v26 = v37 % 0xFFF1;
    v37 %= 0xFFF1u;
  }
  while ( v5 );
  return v3 | (v26 << 16);
}

