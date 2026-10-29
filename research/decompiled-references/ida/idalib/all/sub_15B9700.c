__int64 *__fastcall sub_15B9700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rax
  char v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  _QWORD *v16; // rbp
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // [rsp+8h] [rbp-30h]
  _QWORD v39[4]; // [rsp+18h] [rbp-20h] BYREF

  v7 = *(_QWORD **)(a1 + 24);
  if ( !v7 )
  {
    sub_15B91E0((__int64 **)a1);
    v7 = *(_QWORD **)(a1 + 24);
  }
  v8 = *(__int64 (**)(void))(*v7 + 72LL);
  if ( (char *)v8 == (char *)sub_9A8F10 )
    v9 = sub_B7F5F0(v7, v39, (__int64)sub_9A8F10, a4, a5, a6);
  else
    v9 = v8();
  v12 = *(__int64 **)a1;
  if ( !v9 )
  {
    v13 = *v12;
    v14 = *(unsigned int *)(a1 + 112);
    v15 = *(_QWORD **)(a1 + 104);
    v16 = *(_QWORD **)(v13 + 248);
    if ( *(_QWORD *)(a1 + 16) != v16[2329] && ((*(_WORD *)v15[v14 - 1] + 509) & 0x1FFu) <= 0x7E )
    {
      v35 = v15[v14 - 1];
      --*(_DWORD *)(a1 + 112);
      v36 = sub_EEF0A0(v16, 0, v35, 0, v10, v11);
      v37 = *(unsigned int *)(a1 + 112);
      if ( v37 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 116) )
      {
        v38 = v36;
        sub_2237220(a1 + 104, a1 + 120, v37 + 1, 8);
        v37 = *(unsigned int *)(a1 + 112);
        v36 = v38;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v37) = v36;
      v15 = *(_QWORD **)(a1 + 104);
      v14 = (unsigned int)(*(_DWORD *)(a1 + 112) + 1);
      *(_DWORD *)(a1 + 112) = v14;
    }
    v17 = *(_QWORD *)(a1 + 24);
    v18 = sub_EEF560(v16, v15, v14, 0, 0, 0);
    sub_B74930(v17, v18);
    v23 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( v23 )
      v23 += 64;
    sub_B90130(*(_QWORD *)(a1 + 24), v23, v19, v20, v21, v22);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + 29LL) &= 0x9Fu;
    v24 = *(_QWORD *)(a1 + 24);
    v25 = sub_B32450((__int64)v16, 0, 3);
    sub_B8CC60(v24, v25, v26, v27, v28, v29);
    sub_B94AD0((__m128i *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 64LL), *(_QWORD *)(a1 + 24), v30, v31, v32, v33);
    return *(__int64 **)a1;
  }
  return v12;
}
