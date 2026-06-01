__int64 __fastcall sub_A945A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v8; // edi
  __int64 *v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r12
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // r12
  int v16; // esi
  int v17; // r11d
  __int64 v18; // r8
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // r15
  const char *v22; // r14
  size_t v23; // r12
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  unsigned int v34; // esi
  __int64 v35; // r8
  unsigned int v36; // edx
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  unsigned int v40; // r9d
  __int64 *v41; // r8
  _QWORD *v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // eax
  size_t v45; // rdx
  _BYTE *v46; // rax
  int v47; // r11d
  __int64 *v48; // r10
  int v49; // edx
  bool v50; // zf
  __int64 v51; // rax
  unsigned int v52; // [rsp+4h] [rbp-64h]
  __int64 *v53; // [rsp+8h] [rbp-60h]
  _QWORD *v54; // [rsp+10h] [rbp-58h]
  __int64 v55; // [rsp+18h] [rbp-50h] BYREF
  __m128 v56[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a1;
  v55 = a2;
  v4 = *(unsigned int *)(v3 + 1848);
  v5 = v3 + 1832;
  v6 = *(_QWORD *)(v3 + 1832);
  if ( (_DWORD)v4 )
  {
    v8 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v9 = (__int64 *)(v6 + 16LL * v8);
    v10 = *v9;
    if ( a2 == *v9 )
    {
LABEL_3:
      sub_A851E0(v56, v9, (_QWORD *)(16 * v4 + v6), v5, 1);
      v11 = v56[0].m128_u64[0];
      goto LABEL_4;
    }
    v16 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v17 = v16 + 1;
        v8 = (v4 - 1) & (v16 + v8);
        v9 = (__int64 *)(v6 + 16LL * v8);
        v18 = *v9;
        if ( a2 == *v9 )
          goto LABEL_3;
        v16 = v17;
      }
      while ( v18 != -4096 );
    }
  }
  sub_A851E0(v56, (_QWORD *)(v6 + 16LL * (unsigned int)v4), (_QWORD *)(v6 + 16LL * (unsigned int)v4), v5, 1);
  v11 = v56[0].m128_u64[0];
LABEL_4:
  v12 = (_QWORD *)(*a1 + 1832);
  v13 = (_QWORD *)(*v12 + 16LL * *(unsigned int *)(*a1 + 1848));
  sub_A851E0(v56, v13, v13, (__int64)v12, 1);
  if ( v56[0].m128_u64[0] == v11 )
  {
    v19 = *a1;
    v20 = *(_DWORD *)(v55 + 36);
    v21 = *a1 + 1808;
    if ( ((v20 - 6) & 0xFFFFFFFD) != 0 )
    {
      if ( (unsigned int)(v20 - 4) <= 1 )
      {
        v45 = *(_QWORD *)(v55 + 8);
        v22 = *(const char **)v55;
        v23 = -1;
        if ( v45 )
        {
          v46 = memchr(*(const void **)v55, 58, v45);
          if ( v46 )
            v23 = v46 - v22;
        }
      }
      else if ( v20 == 7 )
      {
        v51 = sub_FEEE40(v55);
        v22 = *(const char **)v51;
        v23 = *(_QWORD *)(v51 + 8);
      }
      else
      {
        v22 = *(const char **)v55;
        v23 = *(_QWORD *)(v55 + 8);
      }
    }
    else
    {
      v22 = "<global>";
      v23 = j__strlen("<global>");
    }
    v24 = sub_2244B30(v22, v23);
    v25 = (unsigned int)sub_2244CB0(v21, v22, v23, v24);
    v27 = (__int64 *)(*(_QWORD *)(v19 + 1808) + 8 * v25);
    if ( *v27 )
    {
      if ( *v27 != -8 )
      {
        sub_A8BB70((__int64 **)v56, v27, 0);
        v32 = v56[0].m128_u64[0];
        goto LABEL_16;
      }
      --*(_DWORD *)(v19 + 1824);
    }
    v53 = v27;
    v52 = v25;
    v39 = sub_22300B0(v23 + 17, 8, v25, v26, v27, v25);
    v40 = v52;
    v41 = v53;
    v42 = (_QWORD *)v39;
    if ( v23 )
    {
      v54 = (_QWORD *)v39;
      memcpy((void *)(v39 + 16), v22, v23);
      v42 = v54;
      v41 = v53;
      v40 = v52;
    }
    v43 = v55;
    *((_BYTE *)v42 + v23 + 16) = 0;
    *v42 = v23;
    v42[1] = v43;
    *v41 = (__int64)v42;
    ++*(_DWORD *)(v19 + 1820);
    v44 = sub_22450D0(v21, v40);
    sub_A8BB70((__int64 **)v56, (__int64 *)(*(_QWORD *)(v19 + 1808) + 8LL * v44), 0);
    v32 = v56[0].m128_u64[0];
LABEL_16:
    v33 = *a1;
    v34 = *(_DWORD *)(v33 + 1848);
    v14 = *(_QWORD *)(*(_QWORD *)v32 + 8LL);
    if ( v34 )
    {
      v29 = v55;
      v31 = v34 - 1;
      v35 = *(_QWORD *)(v33 + 1832);
      v36 = v31 & (((unsigned int)v55 >> 9) ^ ((unsigned int)v55 >> 4));
      v37 = (__int64 *)(v35 + 16LL * v36);
      v38 = *v37;
      if ( *v37 == v55 )
      {
LABEL_18:
        v37[1] = v14;
        return v14;
      }
      v47 = 1;
      v48 = nullptr;
      if ( v38 != -4096 )
      {
        while ( 1 )
        {
          if ( !v48 && v38 == -8192 )
            v48 = v37;
          v36 = v31 & (v47 + v36);
          v37 = (__int64 *)(v35 + 16LL * v36);
          v38 = *v37;
          if ( v55 == *v37 )
            goto LABEL_18;
          if ( v38 == -4096 )
          {
            if ( v48 )
              v37 = v48;
            break;
          }
          ++v47;
        }
      }
      v49 = *(_DWORD *)(v33 + 1840);
      v56[0].m128_u64[0] = (unsigned __int64)v37;
      v28 = (unsigned int)(v49 + 1);
      v30 = (unsigned int)(4 * v28);
      if ( (unsigned int)v30 < 3 * v34 )
      {
        v30 = v34 >> 3;
        if ( v34 - *(_DWORD *)(v33 + 1844) - (unsigned int)v28 > (unsigned int)v30 )
        {
LABEL_33:
          v50 = *v37 == -4096;
          *(_DWORD *)(v33 + 1840) = v28;
          if ( !v50 )
            --*(_DWORD *)(v33 + 1844);
          *v37 = v29;
          v37[1] = 0;
          goto LABEL_18;
        }
LABEL_38:
        sub_A94390(v33 + 1832, v34, v28, v29, v30, v31);
        sub_A6E410((__int64 *)(v33 + 1832), &v55, v56);
        v29 = v55;
        LODWORD(v28) = *(_DWORD *)(v33 + 1840) + 1;
        v37 = (__int64 *)v56[0].m128_u64[0];
        goto LABEL_33;
      }
    }
    else
    {
      v56[0].m128_u64[0] = 0;
    }
    v34 *= 2;
    goto LABEL_38;
  }
  return *(_QWORD *)(v11 + 8);
}
