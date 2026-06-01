__int64 __fastcall sub_16C3F70(int **a1)
{
  int *v1; // rbp
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r12d
  __int64 v11; // r13
  int *v12; // rbp
  __int64 v13; // rax
  int v14; // r12d
  __int64 v15; // r12
  int *v16; // rcx
  int v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 *v24; // r14
  unsigned __int64 v25; // rsi
  __int64 v26; // [rsp+8h] [rbp-C0h]
  __int64 v27; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v28[2]; // [rsp+18h] [rbp-B0h] BYREF
  char v29; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+88h] [rbp-40h]

  v1 = a1[1];
  v2 = **a1;
  if ( v2 == 3 )
  {
    v9 = (unsigned int)v1[6];
    v10 = v1[274] & 0x7FFFFFFF;
    if ( v9 + 1 > (unsigned __int64)(unsigned int)v1[7] )
    {
      sub_2237220(v1 + 4, v1 + 8, v9 + 1, 4);
      v9 = (unsigned int)v1[6];
    }
    *(_DWORD *)(*((_QWORD *)v1 + 2) + 4 * v9) = v10;
    v11 = (unsigned int)v1[6];
    v1[6] = v11 + 1;
    v12 = a1[1];
    v13 = (unsigned int)v12[6];
    v14 = v12[274] & 0x7FFFFFFF;
    if ( v13 + 1 > (unsigned __int64)(unsigned int)v12[7] )
    {
      sub_2237220(v12 + 4, v12 + 8, v13 + 1, 4);
      v13 = (unsigned int)v12[6];
    }
    *(_DWORD *)(*((_QWORD *)v12 + 2) + 4 * v13) = v14;
    v15 = (unsigned int)v12[6];
    v16 = a1[1];
    v12[6] = v15 + 1;
    v17 = v16[274];
    v18 = *(_QWORD *)a1[2];
    v26 = (unsigned int)(*(_DWORD *)(v18 + 16) - 1);
    v19 = 8 * (((*(_BYTE *)(v18 + 2) & 8) != 0) + 1LL);
    v20 = *(_QWORD *)(v18 + v19 + 32);
    v21 = (unsigned __int64 *)(v18 + v19 + 40);
    v16[274] = v11;
    v22 = (__int64)a1[1];
    v28[0] = &v29;
    v28[1] = 0x400000000LL;
    v23 = *(_QWORD *)(v22 + 1104);
    v27 = v22;
    v30 = v23;
    *(_QWORD *)(v22 + 1104) = v28;
    sub_16C1900((__int64)a1[1], v20);
    sub_16BB4C0(&v27);
    v24 = &v21[v26];
    a1[1][274] = v15;
    while ( v24 != v21 )
    {
      v25 = *v21++;
      sub_16C1900((__int64)a1[1], v25);
    }
    a1[1][274] = v17;
    result = *((_QWORD *)a1[1] + 2);
    *(_BYTE *)(result + 4 * v11 + 3) |= 0x80u;
    *(_BYTE *)(result + 4 * v15 + 3) |= 0x80u;
  }
  else
  {
    v3 = *(_QWORD *)a1[2];
    v4 = 8 * (((*(_BYTE *)(v3 + 2) & 8) != 0) + 1LL);
    v5 = *(_QWORD *)(v3 + v4 + 32);
    v6 = *(_QWORD *)(v3 + v4 + 40);
    if ( v2 == 2 )
    {
      v8 = v5;
      v5 = v6;
      v6 = v8;
    }
    return sub_16C30B0((__int64)a1[1], v5, v6);
  }
  return result;
}
