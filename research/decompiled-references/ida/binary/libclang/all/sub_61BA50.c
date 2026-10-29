__int64 __fastcall sub_61BA50(__m128i *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __m128i v5; // xmm1
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  _DWORD *v26; // rdx
  _QWORD *v27; // rdx
  __int64 v28; // r13
  __int64 v29; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // rdi
  int v32; // eax
  _QWORD *v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rdi
  int v42; // eax
  __m128i v43; // [rsp+30h] [rbp-48h] BYREF
  __m128i v44[3]; // [rsp+40h] [rbp-38h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(a2 + 120);
  if ( (v4 & 4) != 0 )
  {
    v5 = _mm_loadu_si128((const __m128i *)(v4 & 0xFFFFFFFFFFFFFFF8LL));
    a2 = v5.m128i_i64[0];
    if ( v5.m128i_i64[0] )
    {
      if ( (unsigned __int8)sub_61B740(a1->m128i_i64, v5.m128i_u64[0], v5.m128i_u64[1]) )
        return 1;
    }
  }
  if ( (*(_BYTE *)(v2 + 74) & 1) != 0 )
  {
    v6 = *(_QWORD *)(v2 + 104);
    v7 = *(_QWORD *)(v6 + 96);
    v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v7 & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_7;
    }
    else
    {
      if ( v8 <= 3 || (v7 & 2) == 0 )
        goto LABEL_7;
      v27 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
      v28 = v27[2275];
      if ( !v28 )
      {
        *(_QWORD *)(v6 + 96) = v6 & 0xFFFFFFFFFFFFFFFALL | 1;
        goto LABEL_7;
      }
      v29 = v27[274];
      v27[284] += 24LL;
      v8 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      a2 = v8 + 24;
      if ( v27[275] >= v8 + 24 && v29 )
      {
        v27[274] = a2;
      }
      else
      {
        a2 = 24;
        v8 = sub_5F8390((__int64)(v27 + 274), 24, 3);
      }
      *(_QWORD *)v8 = v28;
      v7 = v8 | 5;
      *(_DWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = v6;
      *(_QWORD *)(v6 + 96) = v8 | 5;
      LOBYTE(v8) = v8 & 0xFA | 4;
    }
    if ( (v8 & 4) != 0 )
    {
      v30 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v30 )
      {
        v31 = *(_QWORD *)v30;
        v32 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
        if ( v30[2] != v32 )
        {
          v30[2] = v32;
          a2 = v6;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 144LL))(v31, v6);
        }
      }
    }
LABEL_7:
    v9 = *(_QWORD *)(v2 + 128);
    if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
      v10 = sub_7A2E20(v9, a2);
    else
      v10 = *(_QWORD *)(v9 + 24);
    v11 = *(_QWORD *)(v2 + 104);
    v12 = *(_QWORD *)(v11 + 96);
    v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v12 & 1) != 0 )
    {
      if ( v13 )
        goto LABEL_22;
    }
    else
    {
      if ( v13 > 3 )
      {
        if ( (v12 & 2) == 0 )
        {
          v14 = *(_QWORD *)(v2 + 128);
          v15 = v10 + 24LL * *(unsigned int *)(v14 + 16);
          goto LABEL_13;
        }
        v33 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
        v34 = v33[2275];
        if ( !v34 )
        {
          *(_QWORD *)(v11 + 96) = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
          v11 = *(_QWORD *)(v2 + 104);
          goto LABEL_25;
        }
        v35 = v33[274];
        v33[284] += 24LL;
        v13 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        a2 = v13 + 24;
        if ( v33[275] >= v13 + 24 && v35 )
        {
          v33[274] = a2;
        }
        else
        {
          a2 = 24;
          v13 = sub_5F8390((__int64)(v33 + 274), 24, 3);
        }
        *(_QWORD *)v13 = v34;
        *(_DWORD *)(v13 + 8) = 0;
        v12 = v13 | 5;
        *(_QWORD *)(v13 + 16) = v11;
        *(_QWORD *)(v11 + 96) = v13 | 5;
        LOBYTE(v13) = v13 & 0xFA | 4;
LABEL_22:
        if ( (v13 & 4) != 0 )
        {
          v22 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v22 )
          {
            v41 = *(_QWORD *)v22;
            v42 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
            if ( v22[2] != v42 )
            {
              v22[2] = v42;
              a2 = v11;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 144LL))(v41, v11);
            }
          }
        }
        v11 = *(_QWORD *)(v2 + 104);
LABEL_25:
        v23 = *(_QWORD *)(v2 + 128);
        v24 = *(_QWORD *)(v11 + 96);
        v14 = v23;
        v15 = v10 + 24LL * *(unsigned int *)(v23 + 16);
        v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v24 & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_48;
        }
        else
        {
          if ( v25 <= 3 )
            goto LABEL_48;
          if ( (v24 & 2) == 0 )
            goto LABEL_13;
          v36 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
          v37 = v36[2275];
          if ( !v37 )
          {
            *(_QWORD *)(v11 + 96) = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
            v23 = *(_QWORD *)(v2 + 128);
            goto LABEL_48;
          }
          v38 = v36[274];
          v36[284] += 24LL;
          v25 = (v38 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          a2 = v25 + 24;
          if ( v36[275] >= v25 + 24 && v38 )
          {
            v36[274] = a2;
          }
          else
          {
            a2 = 24;
            v25 = sub_5F8390((__int64)(v36 + 274), 24, 3);
          }
          *(_QWORD *)v25 = v37;
          *(_DWORD *)(v25 + 8) = 0;
          v24 = v25 | 5;
          *(_QWORD *)(v25 + 16) = v11;
          *(_QWORD *)(v11 + 96) = v25 | 5;
          LOBYTE(v25) = v25 & 0xFA | 4;
        }
        if ( (v25 & 4) != 0 )
        {
          v26 = (_DWORD *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v26 )
          {
            v39 = *(_QWORD *)v26;
            v40 = *(_DWORD *)(*(_QWORD *)v26 + 12LL);
            if ( v26[2] != v40 )
            {
              v26[2] = v40;
              a2 = v11;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 144LL))(v39, v11);
            }
          }
          v14 = *(_QWORD *)(v2 + 128);
LABEL_13:
          if ( (*(_BYTE *)(v14 + 24) & 1) == 0 )
          {
LABEL_14:
            v16 = *(_QWORD *)(v14 + 24);
LABEL_15:
            if ( v15 == v16 )
              return sub_618190(a1, v2 + 64);
            while ( 1 )
            {
              sub_639E80(&v43, v16, a1->m128i_i64[0]);
              if ( (unsigned __int8)sub_619180(
                                      (__int64)a1,
                                      v16,
                                      v17,
                                      v18,
                                      v19,
                                      v20,
                                      (__int128)_mm_load_si128(&v43),
                                      (__int128)_mm_load_si128(v44)) )
                break;
              v16 += 24;
              if ( v15 == v16 )
                return sub_618190(a1, v2 + 64);
            }
            return 1;
          }
LABEL_49:
          v16 = sub_7A2E20(v14, a2);
          goto LABEL_15;
        }
        v23 = *(_QWORD *)(v2 + 128);
LABEL_48:
        v14 = v23;
        if ( (*(_BYTE *)(v23 + 24) & 1) == 0 )
          goto LABEL_14;
        goto LABEL_49;
      }
      if ( v13 )
        goto LABEL_25;
    }
    v23 = *(_QWORD *)(v2 + 128);
    v15 = v10 + 24LL * *(unsigned int *)(v23 + 16);
    goto LABEL_48;
  }
  return sub_618190(a1, v2 + 64);
}

