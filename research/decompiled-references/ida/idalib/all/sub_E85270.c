unsigned int *__fastcall sub_E85270(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 *v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // r14
  __int64 *v17; // rsi
  unsigned int *result; // rax
  _QWORD *v19; // r14
  __int64 v20; // r14
  _QWORD *v21; // rbp
  unsigned int v22; // ebp
  bool v23; // zf
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // esi
  int v28; // edi
  __int64 v29; // r10
  int v30; // edi
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // esi
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v37; // [rsp+8h] [rbp-60h]
  unsigned __int64 v38; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+18h] [rbp-50h] BYREF
  __m128 v40[4]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a2;
  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) == 1
    || (v26 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v26 + 16) == 1)
    && (v6 = sub_F63050(v6, a2, v26, a4)) != 0 )
  {
    v7 = *(_QWORD *)(v6 + 32);
    v8 = sub_A72040(*(_QWORD **)(*(_QWORD *)a1 + 8LL), v7);
    if ( v8 )
      v7 = sub_A71E50(
             *(_QWORD *)(*(_QWORD *)a1 + 8LL),
             *(_QWORD *)(v8 + 32),
             (*(_WORD *)(v8 + 18) >> 6) & 7,
             (*(_BYTE *)(v8 + 18) >> 3) & 7);
    v9 = v7 & 0xFFFFFFFFFFFFFFF0LL;
    v10 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v7) & 7;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) < 5u )
      v5 = a2 | 1;
  }
  else
  {
    v10 = ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7
        | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
  }
  v11 = *(unsigned int *)(a1 + 384);
  v12 = *(_QWORD *)(a1 + 368);
  if ( (_DWORD)v11 )
  {
    v13 = (v11 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
    v14 = (__int64 *)(v12 + 16LL * v13);
    v15 = *v14;
    if ( v10 == *v14 )
    {
LABEL_8:
      sub_E2D6D0(v40, v14, (__int64 *)(16 * v11 + v12), a1 + 368, 1);
      v16 = v40[0].m128_u64[0];
      goto LABEL_9;
    }
    v27 = 1;
    if ( v15 != -4096 )
    {
      do
      {
        v28 = v27 + 1;
        v13 = (v11 - 1) & (v27 + v13);
        v14 = (__int64 *)(v12 + 16LL * v13);
        v29 = *v14;
        if ( v10 == *v14 )
          goto LABEL_8;
        v27 = v28;
      }
      while ( v29 != -4096 );
    }
  }
  sub_E2D6D0(v40, (__int64 *)(v12 + 16LL * (unsigned int)v11), (__int64 *)(v12 + 16LL * (unsigned int)v11), a1 + 368, 1);
  v16 = v40[0].m128_u64[0];
LABEL_9:
  v17 = (__int64 *)(*(_QWORD *)(a1 + 368) + 16LL * *(unsigned int *)(a1 + 384));
  sub_E2D6D0(v40, v17, v17, a1 + 368, 1);
  if ( v40[0].m128_u64[0] != v16 )
    return (unsigned int *)sub_227B910(*(_QWORD *)(a1 + 8), *(unsigned int *)(v16 + 8));
  v19 = *(_QWORD **)(a1 + 8);
  v37 = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 80LL))(v19);
  v20 = v19[4] - v19[2];
  sub_E845E0((__int64 *)a1, v5, a3, 0);
  v21 = *(_QWORD **)(a1 + 8);
  result = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD *))(*v21 + 80LL))(v21);
  if ( (unsigned __int64)result + v21[4] - v21[2] - v20 - v37 > 1 )
  {
    v22 = *(_DWORD *)(a1 + 376);
    if ( v22 <= 9 )
    {
      v38 = v10;
      v23 = (unsigned __int8)sub_E7B360((__int64 *)(a1 + 368), (__int64 *)&v38, &v39) == 0;
      v25 = v39;
      if ( !v23 )
      {
LABEL_15:
        result = (unsigned int *)(v25 + 8);
        *result = v22;
        return result;
      }
      v30 = *(_DWORD *)(a1 + 376);
      v31 = *(unsigned int *)(a1 + 384);
      v40[0].m128_u64[0] = v39;
      v32 = (unsigned int)(v30 + 1);
      v33 = 2 * v31;
      v34 = (unsigned int)(4 * v32);
      if ( (unsigned int)v34 < 3 * (int)v31 )
      {
        if ( (int)v31 - *(_DWORD *)(a1 + 380) - (int)v32 > (unsigned int)v31 >> 3 )
        {
LABEL_25:
          v23 = *(_QWORD *)v25 == -4096;
          *(_DWORD *)(a1 + 376) = v32;
          if ( !v23 )
            --*(_DWORD *)(a1 + 380);
          v35 = v38;
          *(_DWORD *)(v25 + 8) = 0;
          *(_QWORD *)v25 = v35;
          goto LABEL_15;
        }
        v33 = v31;
      }
      sub_E7F500((__int64 *)(a1 + 368), v33, v32, v31, v34, v24);
      sub_E7B360((__int64 *)(a1 + 368), (__int64 *)&v38, v40);
      LODWORD(v32) = *(_DWORD *)(a1 + 376) + 1;
      v25 = v40[0].m128_u64[0];
      goto LABEL_25;
    }
  }
  return result;
}
