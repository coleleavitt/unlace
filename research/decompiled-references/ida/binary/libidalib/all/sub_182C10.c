__int64 __fastcall sub_182C10(__int64 **a1, unsigned __int8 *a2, signed __int64 a3, char a4, size_t a5)
{
  __int64 *v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // r13d
  __int64 *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r13d
  __int64 *v17; // r8
  size_t v18; // r9
  unsigned __int64 v19; // rdx
  size_t v20; // r8
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

  v8 = a1[2];
  v9 = (__int64)a1[1];
  if ( a1[3] < (__int64 *)((char *)v8 + 1) )
  {
    v24 = qvector_reserve();
    v8 = a1[2];
    a1[1] = (__int64 *)v24;
    v9 = v24;
  }
  v10 = v9 + 24LL * (_QWORD)v8;
  *(_QWORD *)(v10 + 16) = 0;
  *(_OWORD *)v10 = 0;
  v11 = *a1;
  a1[2] = (__int64 *)((char *)a1[2] + 1);
  v12 = v11[20];
  if ( v11[19] == v12 )
  {
    v13 = *((_DWORD *)v11 + 44);
    *((_DWORD *)v11 + 44) = v13 + 1;
  }
  else
  {
    v13 = *(_DWORD *)(v12 - 4);
    v11[20] = v12 - 4;
  }
  sub_182810((__int64)(*a1 + 6), v13, a3, a2, a5);
  *(_DWORD *)v10 = v13;
  *(_QWORD *)(v10 + 16) = sub_180460(a2, a3);
  v14 = *a1;
  v15 = (*a1)[40];
  if ( v15 == (*a1)[39] )
  {
    v16 = *((_DWORD *)v14 + 84);
    *((_DWORD *)v14 + 84) = v16 + 1;
  }
  else
  {
    v16 = *(_DWORD *)(v15 - 4);
    v14[40] = v15 - 4;
  }
  v17 = *a1;
  v18 = a3 + 1;
  v19 = (*a1)[59];
  if ( v19 < a3 + 1 )
  {
    v26 = a3 + 2;
    if ( v19 < a3 + 2 )
    {
      v27 = v17[58];
      if ( v17[60] < v26 )
      {
        v31 = *a1;
        v28 = qvector_reserve();
        v17 = v31;
        v18 = a3 + 1;
        v26 = a3 + 2;
        v27 = v28;
        v31[58] = v28;
        v19 = v31[59];
      }
      v32 = v18;
      v30 = v17;
      v29 = v26;
      memset((void *)(v27 + v19), 0, v26 - v19);
      v17 = v30;
      v18 = v32;
      v30[59] = v29;
    }
    else if ( v19 != a3 + 2 )
    {
      v17[59] = v26;
    }
    *(_BYTE *)(v17[58] + a3 + 1) = 0;
    v17 = *a1;
  }
  memmove((void *)v17[58], a2, v18);
  qstrlwr();
  sub_182810((__int64)(*a1 + 26), v16, a3, (_BYTE *)(*a1)[58], v20);
  *(_DWORD *)(v10 + 4) = v16;
  *(_BYTE *)(v10 + 9) = a4;
  v21 = a1[5];
  v22 = (__int64)a1[4];
  if ( a1[6] < (__int64 *)((char *)v21 + 1) )
  {
    v25 = qvector_reserve();
    a1[4] = (__int64 *)v25;
    v22 = v25;
    v21 = a1[5];
  }
  result = v22 + 16LL * (_QWORD)v21;
  *(_DWORD *)(result + 8) = 0;
  a1[5] = (__int64 *)((char *)a1[5] + 1);
  return result;
}

