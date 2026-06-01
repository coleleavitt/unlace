__int64 __fastcall sub_99CE40(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 *v20; // rbp
  __int64 *v21; // r15
  __int64 v22; // rdi
  unsigned int v23; // edx
  __int64 *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rax
  int v27; // esi
  bool v28; // zf
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r12
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 *v37; // rax
  unsigned __int64 v38; // rbp
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 *v43; // rsi
  __int64 v44; // r9
  int v45; // r11d
  __int64 *v46; // r13
  int v47; // eax
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // r13
  int v51; // r11d
  int v52; // edx
  __int64 v53; // [rsp+0h] [rbp-68h]
  __int64 *v54; // [rsp+0h] [rbp-68h]
  __int64 v55; // [rsp+18h] [rbp-50h] BYREF
  __m128 v56[4]; // [rsp+20h] [rbp-48h] BYREF

  v7 = a2;
  v8 = a1;
  v9 = *(_QWORD *)(a2 + 24);
  v10 = *(_DWORD *)(a1 + 200);
  v55 = v9;
  if ( v10 )
  {
    v41 = *(unsigned int *)(a1 + 208);
    v42 = a1 + 192;
    if ( (_DWORD)v41 )
    {
      a5 = *(_QWORD *)(a1 + 192);
      LODWORD(a1) = (v41 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
      v43 = (__int64 *)(a5 + 8LL * (unsigned int)a1);
      v44 = *v43;
      if ( v9 == *v43 )
      {
LABEL_47:
        sub_99CB70(v56, v43, (_QWORD *)(a5 + 8 * v41), v42, 1);
        goto LABEL_33;
      }
      v45 = 1;
      v46 = nullptr;
      if ( v44 != -4096 )
      {
        while ( 1 )
        {
          if ( !v46 && v44 == -8192 )
            v46 = v43;
          a1 = ((_DWORD)v41 - 1) & (unsigned int)(a1 + v45);
          v43 = (__int64 *)(a5 + 8 * a1);
          v44 = *v43;
          if ( v9 == *v43 )
            goto LABEL_47;
          if ( v44 == -4096 )
          {
            if ( v46 )
              v43 = v46;
            break;
          }
          ++v45;
        }
      }
      v47 = v10 + 1;
      v56[0].m128_u64[0] = (unsigned __int64)v43;
      a6 = (unsigned int)(4 * v47);
      if ( (unsigned int)a6 < 3 * (int)v41 )
      {
        v48 = (unsigned int)v41 >> 3;
        if ( (int)v41 - *(_DWORD *)(v8 + 204) - v47 > (unsigned int)v48 )
        {
LABEL_59:
          v28 = *v43 == -4096;
          *(_DWORD *)(v8 + 200) = v47;
          if ( !v28 )
            --*(_DWORD *)(v8 + 204);
          *v43 = v9;
          sub_99CB70(v56, v43, (_QWORD *)(a5 + 8 * v41), v42, 1);
          v49 = *(unsigned int *)(v8 + 224);
          v50 = v55;
          if ( v49 + 1 > (unsigned __int64)*(unsigned int *)(v8 + 228) )
          {
            sub_2237220(v8 + 216, v8 + 232, v49 + 1, 8);
            v49 = *(unsigned int *)(v8 + 224);
          }
          *(_QWORD *)(*(_QWORD *)(v8 + 216) + 8 * v49) = v50;
          ++*(_DWORD *)(v8 + 224);
          goto LABEL_33;
        }
        v54 = (__int64 *)v42;
        sub_99CBE0(v42, v41, v41, v42, a5, v48);
LABEL_71:
        sub_99C2A0(v54, &v55, v56);
        v9 = v55;
        a5 = *(_QWORD *)(v8 + 192);
        v41 = *(unsigned int *)(v8 + 208);
        v47 = *(_DWORD *)(v8 + 200) + 1;
        v43 = (__int64 *)v56[0].m128_u64[0];
        v42 = (__int64)v54;
        goto LABEL_59;
      }
    }
    else
    {
      v56[0].m128_u64[0] = 0;
    }
    v54 = (__int64 *)v42;
    sub_99CBE0(v42, 2 * v41, v41, v42, a5, a6);
    goto LABEL_71;
  }
  v11 = *(unsigned int *)(a1 + 224);
  v12 = *(_QWORD **)(a1 + 216);
  v13 = &v12[v11];
  v14 = (8 * v11) >> 3;
  v15 = (8 * v11) >> 5;
  if ( !v15 )
  {
    v16 = v12;
    goto LABEL_15;
  }
  if ( v9 == *v12 )
  {
    v16 = v12;
    goto LABEL_32;
  }
  v16 = v12 + 1;
  if ( v9 != v12[1] )
  {
    v16 = v12 + 2;
    if ( v9 != v12[2] )
    {
      v16 = v12 + 3;
      v15 = (__int64)&v12[4 * v15];
      if ( v9 != v12[3] )
      {
        while ( 1 )
        {
          v16 = v12 + 4;
          if ( (_QWORD *)v15 == v12 + 4 )
            break;
          if ( v9 == v12[4] )
            goto LABEL_32;
          if ( v9 == v12[5] )
          {
            v16 = v12 + 5;
            goto LABEL_32;
          }
          if ( v9 == v12[6] )
          {
            v16 = v12 + 6;
            goto LABEL_32;
          }
          if ( v9 == v12[7] )
          {
            v16 = v12 + 7;
            goto LABEL_32;
          }
          v12 += 4;
        }
        v14 = v13 - v16;
LABEL_15:
        if ( v14 != 2 )
        {
          if ( v14 != 3 )
          {
            if ( v14 != 1 )
              goto LABEL_18;
            goto LABEL_54;
          }
          if ( v9 == *v16 )
            goto LABEL_32;
          ++v16;
        }
        if ( v9 == *v16 )
          goto LABEL_32;
        ++v16;
LABEL_54:
        if ( v9 != *v16 )
          goto LABEL_18;
      }
    }
  }
LABEL_32:
  if ( v13 != v16 )
    goto LABEL_33;
LABEL_18:
  v17 = v11 + 1;
  if ( v17 > *(unsigned int *)(v8 + 228) )
  {
    sub_2237220(v8 + 216, v8 + 232, v17, 8);
    v17 = *(unsigned int *)(v8 + 224);
    v13 = (__int64 *)(*(_QWORD *)(v8 + 216) + 8 * v17);
  }
  *v13 = v9;
  v18 = (unsigned int)(*(_DWORD *)(v8 + 224) + 1);
  *(_DWORD *)(v8 + 224) = v18;
  if ( (unsigned int)v18 > 8 )
  {
    v19 = *(_QWORD *)(v8 + 216);
    v53 = v7;
    v20 = (__int64 *)v19;
    v21 = (__int64 *)(v19 + 8 * v18);
    while ( 1 )
    {
      v26 = *(unsigned int *)(v8 + 208);
      if ( !(_DWORD)v26 )
        break;
      v15 = *v20;
      v22 = *(_QWORD *)(v8 + 192);
      v23 = (v26 - 1) & (((unsigned int)*v20 >> 9) ^ ((unsigned int)*v20 >> 4));
      v24 = (__int64 *)(v22 + 8LL * v23);
      v25 = *v24;
      if ( *v20 != *v24 )
      {
        v51 = 1;
        v19 = 0;
        if ( v25 != -4096 )
        {
          while ( 1 )
          {
            if ( !v19 && v25 == -8192 )
              v19 = (__int64)v24;
            v23 = (v26 - 1) & (v51 + v23);
            v24 = (__int64 *)(v22 + 8LL * v23);
            v25 = *v24;
            if ( v15 == *v24 )
              goto LABEL_23;
            if ( v25 == -4096 )
            {
              if ( v19 )
                v24 = (__int64 *)v19;
              break;
            }
            ++v51;
          }
        }
        v52 = *(_DWORD *)(v8 + 200);
        v14 = (unsigned int)(3 * v26);
        v56[0].m128_u64[0] = (unsigned __int64)v24;
        v17 = (unsigned int)(v52 + 1);
        if ( 4 * (int)v17 < (unsigned int)v14 )
        {
          v14 = (unsigned int)(v26 - *(_DWORD *)(v8 + 204) - v17);
          if ( (unsigned int)v14 <= (unsigned int)v26 >> 3 )
          {
            v27 = v26;
LABEL_27:
            sub_99CBE0(v8 + 192, v27, v17, v15, v14, v19);
            sub_99C2A0((__int64 *)(v8 + 192), v20, v56);
            v15 = *v20;
            v22 = *(_QWORD *)(v8 + 192);
            v26 = *(unsigned int *)(v8 + 208);
            v24 = (__int64 *)v56[0].m128_u64[0];
            LODWORD(v17) = *(_DWORD *)(v8 + 200) + 1;
          }
          v28 = *v24 == -4096;
          *(_DWORD *)(v8 + 200) = v17;
          if ( !v28 )
            --*(_DWORD *)(v8 + 204);
          *v24 = v15;
          goto LABEL_23;
        }
LABEL_26:
        v27 = 2 * v26;
        goto LABEL_27;
      }
LABEL_23:
      sub_99CB70(v56, v24, (_QWORD *)(v22 + 8 * v26), v8 + 192, 1);
      if ( v21 == ++v20 )
      {
        v7 = v53;
        goto LABEL_33;
      }
    }
    v56[0].m128_u64[0] = 0;
    goto LABEL_26;
  }
LABEL_33:
  if ( (unsigned __int8)sub_99C080((_QWORD *)v8, (_WORD *)v7) || a3 == 1 )
  {
    v33 = *(_QWORD *)(v8 + 16);
    if ( !v33 )
    {
      v33 = sub_999AE0(v8, v7, v29, v30, v31, v32);
      *(_QWORD *)(v8 + 16) = v33;
    }
    if ( (unsigned __int8)sub_99C080((_QWORD *)v8, (_WORD *)v7) )
    {
      v40 = *(_QWORD *)(v8 + 352);
      if ( v40 )
        *(_QWORD *)(v40 + 8) = v33;
    }
    v37 = *(unsigned __int64 **)(v33 + 8);
    v38 = v7 & 0xFFFFFFFFFFFFFFFCLL | 2;
    if ( (unsigned __int64)v37 >= *(_QWORD *)(v33 + 16) )
    {
      sub_999590((const __m128i **)v33, (_QWORD *)(*(_QWORD *)(v8 + 8) + 32LL), 1u, v34, v35, v36);
      v37 = *(unsigned __int64 **)(v33 + 8);
    }
    *v37 = v38;
    v37[1] = 1;
    *(_QWORD *)(v33 + 8) += 16LL;
  }
  return *(_QWORD *)(v8 + 16);
}
