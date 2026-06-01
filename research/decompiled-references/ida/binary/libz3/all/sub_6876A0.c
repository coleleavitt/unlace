__m128i *__fastcall sub_6876A0(__m128i *a1, _QWORD *a2, unsigned int *a3)
{
  __int64 v5; // rbp
  bool (__fastcall *v6)(__int64, __int64); // rax
  _DWORD *v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 *v17; // rcx
  int v18; // edi
  unsigned int v19; // r10d
  __int64 *v20; // rsi
  __int64 v21; // r10
  __int64 *v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  _QWORD v27[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = sub_15D1F10(a3);
  v6 = *(bool (__fastcall **)(__int64, __int64))(*a2 + 56LL);
  if ( v6 == sub_676470 )
  {
    v7 = *(_DWORD **)(v5 + 24);
    if ( !v7 || *v7 != 4 )
      goto LABEL_4;
  }
  else if ( !v6((__int64)a2, v5) )
  {
LABEL_4:
    v8 = a2[1];
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = v8;
    return a1;
  }
  v10 = sub_6870C0(a2, v5);
  v11 = a2[1];
  v12 = v10;
  v13 = *(_QWORD *)(a2[3] + 64LL);
  v14 = sub_67B850((__int64 *)a2[2], a3);
  sub_1374250(v27, v13, v14);
  v15 = v27[0];
  v16 = *(unsigned int *)(v12 + 8);
  v17 = *(__int64 **)v12;
  v18 = *(_DWORD *)(v27[0] + 12LL);
  v19 = v16 - 1;
  v16 *= 16;
  v20 = (__int64 *)(*(_QWORD *)v12 + v16);
  v21 = 16LL * (v18 & v19);
  v22 = (__int64 *)(*(_QWORD *)v12 + v21);
  v23 = v22;
  if ( v21 == v16 )
  {
LABEL_15:
    while ( v22 != v17 )
    {
      v25 = *v17;
      if ( (unsigned __int64)*v17 > 1 )
      {
        if ( *(_DWORD *)(v25 + 12) == v18 && v27[0] == v25 )
        {
          v23 = v17;
          goto LABEL_24;
        }
      }
      else if ( !v25 )
      {
        break;
      }
      v17 += 2;
    }
LABEL_14:
    BUG();
  }
  while ( 1 )
  {
    v24 = *v23;
    if ( (unsigned __int64)*v23 > 1 )
      break;
    if ( !v24 )
      goto LABEL_14;
LABEL_11:
    v23 += 2;
    if ( v20 == v23 )
      goto LABEL_15;
  }
  if ( *(_DWORD *)(v24 + 12) != v18 || v27[0] != v24 )
    goto LABEL_11;
LABEL_24:
  v26 = v23[1];
  *a1 = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v11);
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  sub_675460(v15, v27[1]);
  return a1;
}

