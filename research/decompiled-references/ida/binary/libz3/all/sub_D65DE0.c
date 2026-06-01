__int64 __fastcall sub_D65DE0(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char v6; // r13
  int v7; // r12d
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // r12d
  void *v12; // r14
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  unsigned __int16 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+8h] [rbp-80h]
  _QWORD *v23; // [rsp+10h] [rbp-78h]
  __int64 v24; // [rsp+10h] [rbp-78h]
  __int64 v25; // [rsp+18h] [rbp-70h]
  void *v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  __int64 v28; // [rsp+38h] [rbp-50h]
  _QWORD v29[9]; // [rsp+40h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a3 + 3);
  v7 = *(_DWORD *)a3 >> 15;
  v21 = *(_WORD *)a3 & 0x7FFF;
  if ( (unsigned __int8)sub_181BDE0(a1[55] + 24LL, a3) )
    return sub_D5B8E0((__int64)a1, a2, a4);
  if ( (unsigned __int8)sub_181BE30(a1[55] + 24LL, a3) )
  {
    if ( *(char *)(a3 + 3) < 0 )
      return sub_D5B6C0((__int64)a1, a2, a4);
    else
      return sub_D5B4A0((__int64)a1, a2, a4);
  }
  else
  {
    v23 = a1 + 29;
    v25 = a1[1];
    v9 = sub_D81BF0(a1 + 29, (unsigned __int64)v6 >> 63, 1);
    v10 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    v27 = 0;
    v28 = 0;
    v11 = (unsigned __int16)v7 - 1;
    v29[0] = 1;
    v12 = qword_1C7F2C0;
    v29[1] = 0;
    if ( (*(_BYTE *)(a3 + 12) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v27, a3 + 8);
    else
      LODWORD(v27) = *(_DWORD *)(a3 + 8);
    sub_182CBA0(v12, v29);
    BYTE4(v29[0]) &= ~1u;
    LODWORD(v29[0]) = 1;
    v13 = sub_1674520(v23, &v27, v11);
    v14 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    v26 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v27);
    sub_182CBA0(v26, v29);
    v15 = sub_D81BF0(v23, *(_QWORD *)(a3 + 24), v21);
    v16 = v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v27 = 0;
    v28 = v25;
    sub_D65A70(a1, v15, &v27);
    v17 = v27;
    v22 = v28;
    result = sub_15E1BF0(a1[54]);
    if ( result )
      ++*(_DWORD *)(result + 8);
    v18 = *a4;
    if ( *a4 )
    {
      v19 = a4[1];
      v20 = (*(_DWORD *)(v18 + 8))-- == 1;
      if ( v20 )
      {
        v24 = result;
        sub_15D7BC0(v19, v18);
        result = v24;
      }
    }
    *a4 = result;
    if ( v17 )
    {
      v20 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v20 )
        result = sub_15D7BC0(v22, v17);
    }
    if ( v16 )
    {
      v20 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( v20 )
        result = sub_15D7BC0(v25, v16);
    }
    if ( v14 )
    {
      v20 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v20 )
        result = sub_15D7BC0(v25, v14);
    }
    if ( v10 )
    {
      v20 = (*(_DWORD *)(v10 + 8))-- == 1;
      if ( v20 )
        return sub_15D7BC0(v25, v10);
    }
  }
  return result;
}

