__int64 __fastcall sub_4DC0B0(__int64 **a1, unsigned __int8 *a2, signed __int64 a3, char a4)
{
  __int64 *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // r13d
  __int64 *v18; // r8
  size_t v19; // r9
  unsigned __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // rsi
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r10
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 *v30; // [rsp+10h] [rbp-48h]
  __int64 *v31; // [rsp+10h] [rbp-48h]
  size_t v32; // [rsp+18h] [rbp-40h]

  v7 = a1[2];
  v8 = (__int64)a1[1];
  if ( a1[3] < (__int64 *)((char *)v7 + 1) )
  {
    v24 = qvector_reserve(a1 + 1, v8, (char *)v7 + 1, 24);
    v7 = a1[2];
    a1[1] = (__int64 *)v24;
    v8 = v24;
  }
  v9 = v8 + 24LL * (_QWORD)v7;
  *(_QWORD *)(v9 + 16) = 0;
  *(_OWORD *)v9 = 0;
  v10 = *a1;
  a1[2] = (__int64 *)((char *)a1[2] + 1);
  v11 = v10[20];
  if ( v10[19] == v11 )
  {
    v12 = *((_DWORD *)v10 + 44);
    *((_DWORD *)v10 + 44) = v12 + 1;
  }
  else
  {
    v12 = *(_DWORD *)(v11 - 4);
    v10[20] = v11 - 4;
  }
  sub_4DBCB0((__int64)(*a1 + 6), v12, a3, a2);
  *(_DWORD *)v9 = v12;
  *(_QWORD *)(v9 + 16) = sub_4D8F60(a2, a3, v13, v14, 0.0);
  v15 = *a1;
  v16 = (*a1)[40];
  if ( v16 == (*a1)[39] )
  {
    v17 = *((_DWORD *)v15 + 84);
    *((_DWORD *)v15 + 84) = v17 + 1;
  }
  else
  {
    v17 = *(_DWORD *)(v16 - 4);
    v15[40] = v16 - 4;
  }
  v18 = *a1;
  v19 = a3 + 1;
  v20 = (*a1)[59];
  if ( v20 < a3 + 1 )
  {
    v26 = a3 + 2;
    if ( v20 < a3 + 2 )
    {
      v27 = v18[58];
      if ( v18[60] < v26 )
      {
        v31 = *a1;
        v28 = qvector_reserve(v18 + 58, v27, a3 + 2, 1);
        v18 = v31;
        v19 = a3 + 1;
        v26 = a3 + 2;
        v27 = v28;
        v31[58] = v28;
        v20 = v31[59];
      }
      v32 = v19;
      v30 = v18;
      v29 = v26;
      memset((void *)(v27 + v20), 0, v26 - v20);
      v18 = v30;
      v19 = v32;
      v30[59] = v29;
    }
    else if ( v20 != a3 + 2 )
    {
      v18[59] = v26;
    }
    *(_BYTE *)(v18[58] + a3 + 1) = 0;
    v18 = *a1;
  }
  memmove((void *)v18[58], a2, v19);
  qstrlwr((*a1)[58]);
  sub_4DBCB0((__int64)(*a1 + 26), v17, a3, (_BYTE *)(*a1)[58]);
  *(_DWORD *)(v9 + 4) = v17;
  *(_BYTE *)(v9 + 9) = a4;
  v21 = a1[5];
  v22 = (__int64)a1[4];
  if ( a1[6] < (__int64 *)((char *)v21 + 1) )
  {
    v25 = qvector_reserve(a1 + 4, v22, (char *)v21 + 1, 16);
    a1[4] = (__int64 *)v25;
    v22 = v25;
    v21 = a1[5];
  }
  result = v22 + 16LL * (_QWORD)v21;
  *(_DWORD *)(result + 8) = 0;
  a1[5] = (__int64 *)((char *)a1[5] + 1);
  return result;
}
