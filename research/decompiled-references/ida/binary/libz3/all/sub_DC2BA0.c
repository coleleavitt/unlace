__int64 __fastcall sub_DC2BA0(_QWORD *a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r14
  __int64 *v4; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  _QWORD *v8; // r15
  __int64 *v9; // rbp
  void *v10; // rdi
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rax
  void *v14; // rbp
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  _QWORD *v18; // rdi
  void *v19; // [rsp+8h] [rbp-70h]
  __int64 v20; // [rsp+18h] [rbp-60h] BYREF
  int v21; // [rsp+20h] [rbp-58h] BYREF
  char v22; // [rsp+24h] [rbp-54h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+30h] [rbp-48h] BYREF
  char v25; // [rsp+34h] [rbp-44h]
  __int64 v26; // [rsp+38h] [rbp-40h]

  v2 = a2;
  v4 = sub_DC2710(a1);
  v8 = (_QWORD *)a1[210];
  v9 = v4;
  if ( !v8 )
  {
    v16 = sub_186B270(0x10u);
    v17 = *a1;
    v8 = (_QWORD *)v16;
    sub_DFBCB0(*a1);
    sub_16669D0(v8, *(_QWORD *)(v17 + 296));
    v18 = (_QWORD *)a1[210];
    if ( v8 != v18 )
    {
      if ( v18 )
        sub_186B220(v18);
      a1[210] = v8;
    }
  }
  if ( a2 )
    v2 = *(_BYTE *)(*a1 + 272LL) ^ 1;
  v22 &= 0xFCu;
  v25 &= 0xFCu;
  v21 = 0;
  v10 = qword_1C7F2C0;
  v23 = 0;
  v24 = 1;
  v26 = 0;
  if ( (*((_BYTE *)a1 + 60) & 1) != 0 )
  {
    v19 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v21, a1 + 7);
    v10 = v19;
  }
  else
  {
    v21 = *((_DWORD *)a1 + 14);
  }
  if ( (*((_BYTE *)a1 + 76) & 1) != 0 )
  {
    sub_182C690(v10, &v24, a1 + 9);
    v12 = v8[1];
    if ( v12 )
      goto LABEL_8;
  }
  else
  {
    v11 = *((_DWORD *)a1 + 18);
    v12 = v8[1];
    v25 &= ~1u;
    v24 = v11;
    if ( v12 )
      goto LABEL_8;
  }
  sub_16669E0(v8);
  v12 = v8[1];
LABEL_8:
  v13 = sub_166A700(v12, (unsigned int)&v21, v2, v5, v6, v7);
  v20 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  sub_DBF5A0(v9 + 1, &v20);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v21);
  result = sub_182CBA0(v14, &v24);
  if ( *((_DWORD *)a1 + 356) != 9 )
    return sub_DC0980(a1);
  return result;
}

