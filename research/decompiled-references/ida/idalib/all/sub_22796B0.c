__int64 __fastcall sub_22796B0(__int64 a1, char *a2, char a3, _BYTE *a4, _QWORD *a5)
{
  __int64 v6; // rbp
  __int64 v7; // r15
  const __m128i *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __m128i *v15; // rax
  __m128i *v16; // rdx
  size_t v17; // r14
  unsigned int v18; // eax
  unsigned int v19; // r11d
  __int64 *v20; // r10
  void *v21; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // r11d
  __int64 *v26; // r10
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rax
  const char *v30; // rax
  bool v31; // zf
  char v32; // dl
  const __m128i **v33; // rax
  unsigned __int64 v34; // r14
  __int64 v35; // rdi
  unsigned int v38; // [rsp+10h] [rbp-B8h]
  __int64 *v39; // [rsp+18h] [rbp-B0h]
  __int64 v40; // [rsp+20h] [rbp-A8h]
  void *v41; // [rsp+28h] [rbp-A0h]
  _QWORD v42[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v43; // [rsp+50h] [rbp-78h]
  void *v44[2]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v45[2]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v46; // [rsp+80h] [rbp-48h]

  v6 = a1;
  v7 = *(_QWORD *)(a1 + 672);
  if ( !v7 )
  {
    if ( a3 )
      goto LABEL_21;
    goto LABEL_18;
  }
  v9 = *(const __m128i **)v7;
  v10 = *(_DWORD *)(*(_QWORD *)v7 + 32LL);
  if ( v10 != 4 )
  {
    if ( v10 || a3 )
    {
      a1 = *(_QWORD *)(a1 + 80);
      v44[0] = "not a mapping";
      v46 = 259;
LABEL_20:
      sub_226EEF0((__int64 ***)a1, v9, (__int64)v44, 0);
LABEL_21:
      v23 = std::_V2::generic_category((std::_V2 *)a1);
      *(_DWORD *)(v6 + 96) = 22;
      *(_QWORD *)(v6 + 104) = v23;
      return 0;
    }
LABEL_18:
    *a4 = 1;
    return 0;
  }
  v11 = -1;
  v44[0] = v45;
  if ( a2 )
    v11 = (__int64)&a2[strlen(a2)];
  sub_2276EC0(v44, a2, v11);
  v12 = *(unsigned int *)(v7 + 40);
  v13 = v12 + 1;
  if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 44) )
  {
    v34 = *(_QWORD *)(v7 + 32);
    v35 = v7 + 32;
    if ( v34 > (unsigned __int64)v44 || (unsigned __int64)v44 >= v34 + 32 * v12 )
    {
      sub_A8C1F0(v35, v13);
      v14 = *(_QWORD *)(v7 + 32);
      v12 = *(unsigned int *)(v7 + 40);
      v15 = (__m128i *)v44;
    }
    else
    {
      sub_A8C1F0(v35, v13);
      v14 = *(_QWORD *)(v7 + 32);
      v12 = *(unsigned int *)(v7 + 40);
      v15 = (__m128i *)((char *)v44 + v14 - v34);
    }
  }
  else
  {
    v14 = *(_QWORD *)(v7 + 32);
    v15 = (__m128i *)v44;
  }
  v16 = (__m128i *)(v14 + 32 * v12);
  v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
  if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
  {
    v16[1] = _mm_loadu_si128(v15 + 1);
  }
  else
  {
    v16->m128i_i64[0] = v15->m128i_i64[0];
    v16[1].m128i_i64[0] = v15[1].m128i_i64[0];
  }
  v16->m128i_i64[1] = v15->m128i_i64[1];
  v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
  v15->m128i_i64[1] = 0;
  v15[1].m128i_i8[0] = 0;
  ++*(_DWORD *)(v7 + 40);
  if ( v44[0] != v45 )
    operator delete(v44[0]);
  v17 = 0;
  if ( a2 )
    v17 = strlen(a2);
  v18 = sub_2244B30((__int64)a2, v17);
  v19 = sub_2244CB0(v7 + 8, a2, v17, v18);
  v20 = (__int64 *)(*(_QWORD *)(v7 + 8) + 8LL * v19);
  if ( *v20 )
  {
    if ( *v20 != -8 )
    {
      sub_2279100((__int64 **)v44, v20, 0);
      v21 = v44[0];
      goto LABEL_26;
    }
    --*(_DWORD *)(v7 + 24);
  }
  v39 = v20;
  v38 = v19;
  v24 = sub_22300B0(v17 + 33, 8);
  v25 = v38;
  v26 = v39;
  v27 = v24;
  if ( v17 )
  {
    v40 = v24;
    memcpy((void *)(v24 + 32), a2, v17);
    v27 = v40;
    v26 = v39;
    v25 = v38;
  }
  *(_BYTE *)(v27 + v17 + 32) = 0;
  *(_QWORD *)v27 = v17;
  *(_OWORD *)(v27 + 8) = 0;
  *(_QWORD *)(v27 + 24) = 0;
  *v26 = v27;
  ++*(_DWORD *)(v7 + 20);
  v28 = sub_22450D0(v7 + 8, v25);
  sub_2279100((__int64 **)v44, (__int64 *)(*(_QWORD *)(v7 + 8) + 8LL * v28), 0);
  v21 = v44[0];
LABEL_26:
  v29 = *(_QWORD *)(*(_QWORD *)v21 + 8LL);
  if ( !v29 )
  {
    if ( a3 )
    {
      v30 = "missing required key '";
      v31 = *a2 == 0;
      v42[0] = "missing required key '";
      if ( v31 )
      {
        v43 = 259;
        v32 = 3;
        v41 = (void *)v42[1];
      }
      else
      {
        v42[2] = a2;
        v32 = 2;
        v43 = 771;
        v30 = (const char *)v42;
      }
      v44[0] = (void *)v30;
      LOBYTE(v46) = v32;
      a1 = *(_QWORD *)(v6 + 80);
      v44[1] = v41;
      v45[0] = "'";
      v33 = *(const __m128i ***)(v6 + 672);
      HIBYTE(v46) = 3;
      v9 = *v33;
      goto LABEL_20;
    }
    goto LABEL_18;
  }
  *a5 = *(_QWORD *)(v6 + 672);
  *(_QWORD *)(v6 + 672) = v29;
  return 1;
}
