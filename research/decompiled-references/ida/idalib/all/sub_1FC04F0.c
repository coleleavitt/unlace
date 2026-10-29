unsigned __int64 __fastcall sub_1FC04F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 *v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 result; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r12
  __int64 *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  int v37; // esi
  _BOOL8 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rbp
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 *v51; // r13
  __int64 *v52; // rbp
  __int64 v53; // rsi
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // r13
  int *v57; // rbp
  int v58; // esi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 *v63; // rbp
  __int64 *v64; // r12
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rbp
  __int64 v68; // r12
  __int64 *v69; // r14
  __int64 v70; // r9
  _QWORD *v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // rcx
  bool v76; // zf
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // r13
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84[2]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD *v85; // [rsp+18h] [rbp-50h] BYREF
  __m128 v86[4]; // [rsp+20h] [rbp-48h] BYREF

  v84[0] = a2;
  v7 = (__int64 *)(a2 + 88);
  if ( !a2 )
    v7 = nullptr;
  sub_1FB79C0((__int64 *)a1, v7, a3, a4, a5, a6);
  sub_1FBC160(a1, v84[0]);
  sub_1F85840(
    *(_QWORD *)(a1 + 16),
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(v84[0] + 104) & 0xFFFFFFFFFFFFFFF0LL,
    *(_QWORD **)(a1 + 24),
    v8,
    v9);
  v10 = *(_QWORD *)(v84[0] + 112);
  if ( v10 )
  {
    v11 = (__int64 *)(v10 + 16);
    sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(v10 + 8));
    v12 = v10 + 8LL * *(unsigned int *)(v10 + 8) + 16;
    if ( v10 + 16 != v12 )
    {
      do
      {
        v13 = *v11++;
        sub_1F92A90(*(_QWORD *)(a1 + 16), v13, *(_QWORD *)(a1 + 24));
      }
      while ( (__int64 *)v12 != v11 );
    }
    sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)v10, *(_QWORD *)(a1 + 24));
    sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(v10 + 4), *(_QWORD *)(a1 + 24));
  }
  else
  {
    sub_1FB1190(*(_QWORD *)(a1 + 24));
  }
  v18 = *(_QWORD *)(v84[0] + 120);
  if ( !v18 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(v84[0] + 96) + 88LL), *(_QWORD *)(v84[0] + 96), v14, v15, v16, v17);
    v18 = *(_QWORD *)(v84[0] + 120);
  }
  v19 = 0;
  v20 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v20 )
    v19 = *v20;
  sub_9B9C90(*(_QWORD *)(a1 + 24), v84[0] == v19);
  v25 = *(_QWORD *)(v84[0] + 120);
  if ( !v25 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(v84[0] + 96) + 88LL), *(_QWORD *)(v84[0] + 96), v21, v22, v23, v24);
    v25 = *(_QWORD *)(v84[0] + 120);
  }
  result = v25 & 0xFFFFFFFFFFFFFFF8LL;
  if ( result && v84[0] == *(_QWORD *)result )
  {
    v27 = *(_QWORD *)(v84[0] + 120);
    v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
    v29 = v27 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v27 )
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(v84[0] + 96) + 88LL), *(_QWORD *)(v84[0] + 96), 0, v22, v23, v24);
      v28 = *(_QWORD *)(v84[0] + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    if ( v28 )
    {
      if ( (*(_BYTE *)(v28 + 72) & 1) != 0 )
      {
        sub_BA8900(v84[0]);
        v28 = *(_QWORD *)(v84[0] + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v30 = *(__int64 **)(v28 + 8);
    }
    else
    {
      v30 = nullptr;
    }
    sub_1F9A760((__int64 *)(a1 + 8), v30, v27, v22, v23, v24);
    v35 = *(_QWORD *)(v84[0] + 120);
    if ( !v35 )
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(v84[0] + 96) + 88LL), *(_QWORD *)(v84[0] + 96), v31, v32, v33, v34);
      v35 = *(_QWORD *)(v84[0] + 120);
    }
    v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v36 )
      v37 = *(_DWORD *)(v36 + 80);
    else
      v37 = *(_DWORD *)(v84[0] + 24);
    sub_1F6F570(*(_QWORD **)(a1 + 16), v37, *(_QWORD *)(a1 + 24));
    v38 = (*(_BYTE *)(v29 + 72) & 4) != 0;
    sub_9B9C90(*(_QWORD *)(a1 + 24), v38);
    v43 = sub_BAC410(v84[0], v38, v39, v40, v41, v42);
    sub_9B9C90(*(_QWORD *)(a1 + 24), v43);
    sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(v29 + 24));
    v48 = v84[0];
    v49 = *(_QWORD *)(v84[0] + 120);
    if ( v49 )
    {
      v50 = v49 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v50 )
        goto LABEL_37;
    }
    else
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(v84[0] + 96) + 88LL), *(_QWORD *)(v84[0] + 96), v44, v45, v46, v47);
      v44 = *(_QWORD *)(v84[0] + 120);
      v50 = v44 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v44 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        if ( v44 )
        {
LABEL_36:
          v48 = v84[0];
LABEL_37:
          v54 = *(_QWORD *)(v48 + 120);
          if ( v54 )
          {
            v55 = v54 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v55 )
              goto LABEL_46;
          }
          else
          {
            sub_A794E0((__int64 *)(*(_QWORD *)(v48 + 96) + 88LL), *(_QWORD *)(v48 + 96), v44, v45, v46, v47);
            v83 = *(_QWORD *)(v48 + 120);
            v55 = v83 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v83 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            {
              if ( v83 )
                goto LABEL_46;
              v56 = 0;
              goto LABEL_68;
            }
          }
          if ( (*(_BYTE *)(v55 + 72) & 1) == 0 )
          {
            v56 = *(_QWORD *)(v55 + 32) + 4LL * *(unsigned int *)(v55 + 24);
            goto LABEL_41;
          }
          sub_BA8900(v48);
          v83 = *(_QWORD *)(v48 + 120);
          v55 = v83 & 0xFFFFFFFFFFFFFFF8LL;
          v80 = *(_QWORD *)((v83 & 0xFFFFFFFFFFFFFFF8LL) + 32);
          v56 = v80 + 4LL * *(unsigned int *)((v83 & 0xFFFFFFFFFFFFFFF8LL) + 24);
          if ( v83 )
          {
LABEL_69:
            if ( !v55 )
            {
              v57 = nullptr;
LABEL_44:
              while ( (int *)v56 != v57 )
              {
                v58 = *v57++;
                sub_1F6F570(*(_QWORD **)(a1 + 16), v58, *(_QWORD *)(a1 + 24));
              }
LABEL_46:
              sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(v29 + 48));
              v63 = *(__int64 **)(v29 + 40);
              v64 = &v63[*(unsigned int *)(v29 + 48)];
              while ( v63 != v64 )
              {
                v65 = *v63++;
                sub_1F92A90(*(_QWORD *)(a1 + 16), v65, *(_QWORD *)(a1 + 24));
              }
              v66 = *(_QWORD *)(v84[0] + 120);
              if ( !v66 )
              {
                sub_A794E0((__int64 *)(*(_QWORD *)(v84[0] + 96) + 88LL), *(_QWORD *)(v84[0] + 96), v59, v60, v61, v62);
                v66 = *(_QWORD *)(v84[0] + 120);
              }
              result = v66 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !result )
                goto LABEL_15;
              if ( (*(_BYTE *)(result + 72) & 1) != 0 )
              {
                sub_BA8900(v84[0]);
                result = *(_QWORD *)(v84[0] + 120) & 0xFFFFFFFFFFFFFFF8LL;
              }
              v67 = *(_QWORD *)(result + 56);
              if ( !v67 )
                goto LABEL_15;
              v68 = *(_QWORD *)a1;
              v69 = (__int64 *)(*(_QWORD *)a1 + 2840LL);
              if ( (unsigned __int8)sub_1F7E4A0(v69, v84, &v85) )
              {
                sub_1F8CDC0(
                  v86,
                  v85,
                  (_QWORD *)(*(_QWORD *)(v68 + 2840) + 8LL * *(unsigned int *)(v68 + 2856)),
                  (__int64)v69,
                  1);
                do
                {
LABEL_62:
                  result = sub_1F92240(*(_QWORD *)a1, v67);
                  v67 = *(_QWORD *)(v67 + 128);
                }
                while ( v67 );
                goto LABEL_15;
              }
              v71 = v85;
              v72 = (unsigned int)(*(_DWORD *)(v68 + 2848) + 1);
              v73 = *(unsigned int *)(v68 + 2856);
              v86[0].m128_u64[0] = (unsigned __int64)v85;
              v74 = (unsigned int)(4 * v72);
              if ( (unsigned int)v74 >= 3 * (int)v73 )
              {
                sub_1FAB910((__int64)v69, 2 * v73, v72, (unsigned int)(2 * v73), v74, v70);
              }
              else
              {
                v75 = (unsigned int)(v73 - *(_DWORD *)(v68 + 2852) - v72);
                if ( (unsigned int)v75 > (unsigned int)v73 >> 3 )
                {
LABEL_57:
                  v76 = *v71 == -4096;
                  *(_DWORD *)(v68 + 2848) = v72;
                  if ( !v76 )
                    --*(_DWORD *)(v68 + 2852);
                  *v71 = v84[0];
                  v77 = *(_QWORD *)(v68 + 2840);
                  v85 = v71;
                  sub_1F8CDC0(v86, v71, (_QWORD *)(v77 + 8 * v73), (__int64)v69, 1);
                  v78 = *(unsigned int *)(v68 + 2872);
                  v79 = v84[0];
                  if ( v78 + 1 > (unsigned __int64)*(unsigned int *)(v68 + 2876) )
                  {
                    sub_2237220(v68 + 2864, v68 + 2880, v78 + 1, 8);
                    v78 = *(unsigned int *)(v68 + 2872);
                  }
                  *(_QWORD *)(*(_QWORD *)(v68 + 2864) + 8 * v78) = v79;
                  ++*(_DWORD *)(v68 + 2872);
                  goto LABEL_62;
                }
                sub_1FAB910((__int64)v69, v73, v72, v75, v74, v70);
              }
              sub_1F7E4A0(v69, v84, v86);
              v71 = (_QWORD *)v86[0].m128_u64[0];
              v73 = *(unsigned int *)(v68 + 2856);
              LODWORD(v72) = *(_DWORD *)(v68 + 2848) + 1;
              goto LABEL_57;
            }
LABEL_41:
            if ( (*(_BYTE *)(v55 + 72) & 1) != 0 )
            {
              sub_BA8900(v48);
              v55 = *(_QWORD *)(v48 + 120) & 0xFFFFFFFFFFFFFFF8LL;
            }
            v57 = *(int **)(v55 + 32);
            goto LABEL_44;
          }
LABEL_68:
          sub_A794E0((__int64 *)(*(_QWORD *)(v48 + 96) + 88LL), *(_QWORD *)(v48 + 96), v83, v80, v81, v82);
          v55 = *(_QWORD *)(v48 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_69;
        }
        v51 = nullptr;
        goto LABEL_74;
      }
    }
    if ( (*(_BYTE *)(v50 + 72) & 1) == 0 )
    {
      v45 = *(unsigned int *)(v50 + 24);
      v44 = *(_QWORD *)(v50 + 16);
      v51 = (__int64 *)(v44 + 8 * v45);
      goto LABEL_31;
    }
    sub_BA8900(v84[0]);
    v44 = *(_QWORD *)(v84[0] + 120);
    v50 = v44 & 0xFFFFFFFFFFFFFFF8LL;
    v45 = *(_QWORD *)((v44 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v51 = (__int64 *)(v45 + 8LL * *(unsigned int *)((v44 & 0xFFFFFFFFFFFFFFF8LL) + 24));
    if ( v44 )
    {
LABEL_75:
      if ( !v50 )
      {
        v52 = nullptr;
LABEL_34:
        while ( v51 != v52 )
        {
          v53 = *v52++;
          sub_1F92A90(*(_QWORD *)(a1 + 16), v53, *(_QWORD *)(a1 + 24));
        }
        goto LABEL_36;
      }
LABEL_31:
      if ( (*(_BYTE *)(v50 + 72) & 1) != 0 )
      {
        sub_BA8900(v84[0]);
        v50 = *(_QWORD *)(v84[0] + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v52 = *(__int64 **)(v50 + 16);
      goto LABEL_34;
    }
LABEL_74:
    sub_A794E0((__int64 *)(*(_QWORD *)(v84[0] + 96) + 88LL), *(_QWORD *)(v84[0] + 96), v44, v45, v46, v47);
    v50 = *(_QWORD *)(v84[0] + 120) & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_75;
  }
LABEL_15:
  *(_DWORD *)(a1 + 224) = 58;
  return result;
}
