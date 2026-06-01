__int64 __fastcall sub_A47D30(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  void *v5; // rdi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  void *v11; // rdi
  int v12; // eax
  int v13; // eax
  void *v14; // rbx
  __int64 v15; // rbx
  __int64 result; // rax
  int *v17; // r12
  void *v18; // rbp
  __int64 v19; // rsi
  void *v20; // [rsp+0h] [rbp-2F8h]
  void *v21; // [rsp+0h] [rbp-2F8h]
  __int64 v22; // [rsp+8h] [rbp-2F0h]
  _QWORD v23[2]; // [rsp+10h] [rbp-2E8h] BYREF
  _QWORD v24[2]; // [rsp+20h] [rbp-2D8h] BYREF
  int v25[2]; // [rsp+30h] [rbp-2C8h] BYREF
  int v26[2]; // [rsp+38h] [rbp-2C0h]
  int v27[174]; // [rsp+40h] [rbp-2B8h] BYREF

  *(_QWORD *)v25 = v27;
  *(_QWORD *)v26 = 0x1000000000LL;
  sub_99B560((__int64)a1, a2, 1, (char **)v25);
  sub_A088E0((__int64)a1, a2, v26[0], *(__int64 *)v25);
  v3 = *(unsigned int *)(a1[71] + 24LL * a2 + 12);
  *(_BYTE *)(a1[74] + 4 * v3 + 3) = *(_BYTE *)(a1[74] + 4 * v3 + 3) & 0xCF | 0x10;
  v23[0] = 0;
  v23[1] = 0;
  v24[0] = 1;
  v24[1] = 0;
  if ( !sub_9AA040((__int64)a1, v3, (__int64)v23) )
    goto LABEL_6;
  v4 = a1[75] + 32 * v3;
  v5 = qword_1C7F2C0;
  if ( (v23[0] & 0x100000000LL) != 0 )
  {
    v22 = a1[75] + 32 * v3;
    v21 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v4, v23);
    v4 = v22;
    v5 = v21;
    if ( (v24[0] & 0x100000000LL) == 0 )
      goto LABEL_4;
LABEL_20:
    sub_182C690(v5, v4 + 16, v24);
    goto LABEL_5;
  }
  v6 = v23[0];
  *(_BYTE *)(v4 + 4) &= ~1u;
  *(_DWORD *)v4 = v6;
  if ( (v24[0] & 0x100000000LL) != 0 )
    goto LABEL_20;
LABEL_4:
  v7 = v24[0];
  *(_BYTE *)(v4 + 20) &= ~1u;
  *(_DWORD *)(v4 + 16) = v7;
LABEL_5:
  sub_9D7B70((__int64)a1, v3);
LABEL_6:
  v8 = sub_999840((__int64)a1, v3);
  v9 = a1[75] + 32 * v3;
  v10 = v8;
  v11 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v8 + 4) & 1) != 0 )
  {
    v20 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v9, v8);
    v11 = v20;
  }
  else
  {
    v12 = *(_DWORD *)v8;
    *(_BYTE *)(v9 + 4) &= ~1u;
    *(_DWORD *)v9 = v12;
  }
  if ( (*(_BYTE *)(v10 + 20) & 1) != 0 )
  {
    sub_182C690(v11, v9 + 16, v10 + 16);
  }
  else
  {
    v13 = *(_DWORD *)(v10 + 16);
    *(_BYTE *)(v9 + 20) &= ~1u;
    *(_DWORD *)(v9 + 16) = v13;
  }
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v23);
  sub_182CBA0(v14, v24);
  v15 = *(_QWORD *)v25;
  result = 5LL * (unsigned int)v26[0];
  v17 = (int *)(*(_QWORD *)v25 + 40LL * (unsigned int)v26[0]);
  if ( *(int **)v25 != v17 )
  {
    do
    {
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v15);
      v19 = v15 + 16;
      v15 += 40;
      result = sub_182CBA0(v18, v19);
    }
    while ( v17 != (int *)v15 );
    v17 = *(int **)v25;
  }
  if ( v17 != v27 )
  {
    if ( v17 )
      return sub_186B220(v17);
  }
  return result;
}

