__int64 __fastcall sub_AFD5E0(__int64 a1, int a2)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rsi
  int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // ecx
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r9
  __int64 *v14; // r8
  int v15; // esi
  unsigned int v16; // r10d
  __int64 v17; // r9
  __int64 *v18; // rcx
  __int64 v19; // r10
  __int64 *v20; // rdi
  __int64 *i; // rax
  __int64 v22; // rdx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdi
  bool v30; // zf
  __int64 v31; // rdx
  _QWORD *v32; // rsi
  __int64 v33; // rdi
  unsigned int v34; // edx
  int v35; // eax
  unsigned int v36; // eax
  __m128i *v37; // rax
  __m128i *v38; // rcx
  __m128i *v39; // rdx
  __int64 v40; // rdx
  const __m128i *v41; // rax
  unsigned int v42; // r11d
  __m128i *v43; // r9
  __int64 v44; // r10
  __m128i *v45; // r8
  __int64 v46; // rdx
  __m128i *v47; // rsi
  __m128i *v48; // rdx
  __m128i *v49; // [rsp+0h] [rbp-68h]
  unsigned int v50; // [rsp+Ch] [rbp-5Ch]

  v4 = *(_QWORD *)(a1 + 104);
  if ( !v4 )
    return sub_8E36D0((_QWORD *)(a1 + 880));
  v5 = *(_DWORD *)(v4 - 4);
  if ( !a2 || !v5 )
    return sub_8E36D0((_QWORD *)(a1 + 880));
  v6 = *(_QWORD *)(a1 + 112);
  v7 = v6 ? *(_DWORD *)(v6 - 4) : 0;
  v8 = *(_DWORD *)(v6 + 4LL * (unsigned int)(v7 - a2));
  v9 = v5 - 1;
  if ( v8 >= v5 )
    return sub_8E36D0((_QWORD *)(a1 + 880));
  v10 = 8LL * v9;
  v11 = 8 * (v9 - (unsigned __int64)(v9 - v8));
  while ( 2 )
  {
    v12 = *(_QWORD *)(v4 + v10);
    v13 = *(unsigned int *)(a1 + 928);
    v14 = *(__int64 **)(a1 + 920);
    v15 = *(_DWORD *)(v12 + 12);
    v16 = v13 - 1;
    v17 = 16 * v13;
    v18 = &v14[(unsigned __int64)v17 / 8];
    v19 = 16LL * (v15 & v16);
    v20 = &v14[(unsigned __int64)v19 / 8];
    if ( v19 != v17 )
    {
      for ( i = &v14[(unsigned __int64)v19 / 8]; v18 != i; i += 2 )
      {
        v22 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v22 + 12) == v15 && v12 == v22 )
          {
            v26 = i[1];
            goto LABEL_26;
          }
        }
        else if ( !v22 )
        {
          goto LABEL_15;
        }
      }
    }
    if ( v14 == v20 )
LABEL_15:
      BUG();
    v24 = *(__int64 **)(a1 + 920);
    while ( 1 )
    {
      v25 = *v24;
      if ( (unsigned __int64)*v24 > 1 )
        break;
      if ( !v25 )
        goto LABEL_15;
LABEL_21:
      v24 += 2;
      if ( v20 == v24 )
        goto LABEL_15;
    }
    if ( *(_DWORD *)(v25 + 12) != v15 || v12 != v25 )
      goto LABEL_21;
    v26 = v24[1];
    if ( v19 == v17 )
      goto LABEL_38;
LABEL_26:
    v27 = &v14[(unsigned __int64)v19 / 8];
    while ( 2 )
    {
      v28 = *v27;
      if ( (unsigned __int64)*v27 <= 1 )
      {
        if ( !v28 )
          goto LABEL_32;
LABEL_29:
        v27 += 2;
        if ( v27 == v18 )
        {
          if ( v14 == v20 )
            goto LABEL_32;
LABEL_38:
          v27 = *(__int64 **)(a1 + 920);
          while ( 1 )
          {
            v31 = *v27;
            if ( (unsigned __int64)*v27 > 1 )
            {
              if ( *(_DWORD *)(v31 + 12) == v15 && v12 == v31 )
                goto LABEL_47;
            }
            else if ( !v31 )
            {
              goto LABEL_32;
            }
            v27 += 2;
            if ( v27 == v20 )
              goto LABEL_32;
          }
        }
        continue;
      }
      break;
    }
    if ( *(_DWORD *)(v28 + 12) != v15 || v12 != v28 )
      goto LABEL_29;
LABEL_47:
    v32 = v27 + 2;
    v33 = *(unsigned int *)(a1 + 932);
    if ( v27 + 2 == v18 )
      v32 = *(_QWORD **)(a1 + 920);
    v34 = v33 - 1;
    if ( *v32 )
    {
      *v27 = 1;
      v35 = *(_DWORD *)(a1 + 936);
      *(_DWORD *)(a1 + 932) = v34;
      v36 = v35 + 1;
      if ( v34 < 0x40 )
        v34 = 64;
      *(_DWORD *)(a1 + 936) = v36;
      if ( v34 < v36 && !(unsigned __int8)sub_186AF10(v33) )
      {
        v50 = *(_DWORD *)(a1 + 928);
        v37 = (__m128i *)sub_186B270(16LL * v50);
        v38 = v37;
        v39 = &v37[v50];
        if ( v50 )
        {
          if ( ((16 * (_BYTE)v50) & 0x10) == 0 || (*v37 = 0, ++v37, v39 != v37) )
          {
            do
            {
              *v37 = 0;
              v37 += 2;
              v37[-1] = 0;
            }
            while ( v39 != v37 );
          }
        }
        v40 = *(unsigned int *)(a1 + 928);
        v41 = *(const __m128i **)(a1 + 920);
        v42 = v40 - 1;
        v40 *= 16;
        v43 = (__m128i *)((char *)v41 + v40);
        v44 = v40;
        v45 = (__m128i *)((char *)v38 + v40);
        if ( v41 != (const __m128i *)&v41->m128i_i8[v40] )
        {
          do
          {
            if ( v41->m128i_i64[0] > 1uLL )
            {
              v46 = 16LL * (*(_DWORD *)(v41->m128i_i64[0] + 12) & v42);
              v47 = &v38[(unsigned __int64)v46 / 0x10];
              if ( v44 == v46 )
              {
LABEL_71:
                if ( v38 == v47 )
                {
LABEL_80:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v48 = v38;
                while ( v48->m128i_i64[0] )
                {
                  if ( v47 == ++v48 )
                    goto LABEL_80;
                }
              }
              else
              {
                v48 = &v38[(unsigned __int64)v46 / 0x10];
                while ( v48->m128i_i64[0] )
                {
                  if ( v45 == ++v48 )
                    goto LABEL_71;
                }
              }
              *v48 = _mm_loadu_si128(v41);
            }
            ++v41;
          }
          while ( v43 != v41 );
          v43 = *(__m128i **)(a1 + 920);
        }
        if ( v43 )
        {
          v49 = v38;
          sub_186B220(v43);
          v38 = v49;
        }
        *(_QWORD *)(a1 + 920) = v38;
        *(_DWORD *)(a1 + 936) = 0;
      }
    }
    else
    {
      *v27 = 0;
      *(_DWORD *)(a1 + 932) = v34;
    }
LABEL_32:
    v29 = *(_QWORD *)(a1 + 8);
    if ( v26 && (v30 = *(_DWORD *)(v26 + 8) == 1, --*(_DWORD *)(v26 + 8), v30) )
    {
      sub_15D7BC0(v29, v26);
      v29 = *(_QWORD *)(a1 + 8);
      v30 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( v30 )
        goto LABEL_46;
    }
    else
    {
      v30 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( !v30 )
        goto LABEL_35;
LABEL_46:
      sub_15D7BC0(v29, v12);
    }
LABEL_35:
    if ( v11 != v10 )
    {
      v4 = *(_QWORD *)(a1 + 104);
      v10 -= 8;
      continue;
    }
    return sub_8E36D0((_QWORD *)(a1 + 880));
  }
}

