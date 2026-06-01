unsigned __int64 __fastcall sub_718CB0(__int64 a1, void *a2, const void *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // cl
  __int64 v11; // r12
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax
  char v21; // [rsp+Fh] [rbp-49h]
  unsigned __int64 v22; // [rsp+10h] [rbp-48h]
  void *v23; // [rsp+18h] [rbp-40h] BYREF

  v23 = a2;
  v8 = sub_B03A00(&v23, 1);
  v10 = 0;
  if ( v8 )
    v10 = sub_7D2DD0(v8, 1, v9, 0);
  v11 = 24 * a4;
  if ( (a5 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
  {
    v12 = sub_718AD0(a1, v23, a3, a4);
    goto LABEL_15;
  }
  v12 = *(_QWORD *)&byte_8[a5 & 0xFFFFFFFFFFFFFFF0LL] | a5 & 7;
  if ( !v10 )
  {
LABEL_15:
    v10 = 0;
    goto LABEL_6;
  }
  v11 += 8;
LABEL_6:
  v13 = *(_QWORD *)(a1 + 2192);
  v14 = v11 + 48;
  *(_QWORD *)(a1 + 2272) += v11 + 48;
  v15 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v14 + v15 && v13 )
  {
    *(_QWORD *)(a1 + 2192) = v14 + v15;
    v16 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v22 = v12;
    v21 = v10;
    v20 = sub_6A76A0(a1 + 2192, v14, 4);
    v12 = v22;
    v10 = v21;
    v16 = v20;
    v15 = v20;
  }
  v17 = 0;
  if ( v10 )
    v17 = a5;
  sub_B153F0(v16, v23, a3, a4, v12, v17);
  v18 = *(unsigned int *)(a1 + 16);
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v18 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v18 + 1, 8);
    v18 = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v18) = v15;
  ++*(_DWORD *)(a1 + 16);
  return v16 & 0xFFFFFFFFFFFFFFF0LL;
}

