_QWORD *__fastcall sub_5309C0(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD **v4; // rax
  bool *v5; // r9
  _QWORD *v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned int *v13; // rax
  unsigned int v14; // eax
  _QWORD *v15; // rax
  int v16; // eax
  unsigned int v17; // r12d
  _QWORD *v18; // rbx
  _BYTE *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rsi
  int *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r12
  unsigned int v25; // r14d
  unsigned __int64 v26; // r15
  char v27; // al
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // al
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  char v37; // al
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // r15
  unsigned __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rax
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // [rsp+0h] [rbp-A8h]
  int v50[2]; // [rsp+8h] [rbp-A0h]
  int v51; // [rsp+10h] [rbp-98h]
  int v52; // [rsp+14h] [rbp-94h]
  __int64 v53; // [rsp+18h] [rbp-90h]
  __int64 *v54; // [rsp+20h] [rbp-88h]
  int v55; // [rsp+28h] [rbp-80h]
  int v56; // [rsp+2Ch] [rbp-7Ch]
  __int64 v57; // [rsp+30h] [rbp-78h]
  __int64 v58; // [rsp+38h] [rbp-70h]
  int v59[4]; // [rsp+40h] [rbp-68h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v61; // [rsp+58h] [rbp-50h]
  unsigned __int64 v62; // [rsp+68h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return nullptr;
  v4 = sub_52EA70((__int64)a1, a2);
  if ( v4 != (_QWORD **)(a1[1] + 8LL * a1[2]) && (v6 = *v4, a2 == **v4) )
  {
    if ( v5 )
      *v5 = v6 != nullptr;
    if ( v6 )
      return v6;
  }
  else if ( v5 )
  {
    *v5 = 0;
  }
  v7 = *a1;
  ptr = nullptr;
  v61 = 0;
  v54 = *(__int64 **)(v7 + 1672);
  v8 = sub_3BDD60(v54, a2);
  v9 = *a1;
  *(_QWORD *)v59 = v8;
  if ( sub_7BEED0(v59, v9, &ptr, 1, 0, 77) <= 0 )
  {
    v6 = nullptr;
  }
  else
  {
    v10 = *a1;
    *(__m128i *)v59 = _mm_unpacklo_epi64(
                        (__m128i)(unsigned __int64)ptr,
                        (__m128i)(unsigned __int64)((unsigned __int64)ptr + v61));
    v53 = sub_634EF0(v10);
    v56 = dword_2CCC3C8 & 0x20;
    if ( (dword_2CCC3C8 & 0x20) == 0 )
    {
      if ( (dword_2CCC3C8 & 0x400) != 0 )
        v52 = 0;
      else
        v52 = unpack_dd(v59);
      v11 = unpack_dd(v59);
      v51 = v11;
      v57 = 0;
      if ( !v11 )
        goto LABEL_11;
      v21 = 32;
      v22 = (int *)v11;
      v58 = v11;
      v57 = qcalloc(v11, 32);
      if ( !v57 )
        sub_3BC000((int)"get_struct");
      *(_QWORD *)v50 = 0;
      v24 = v57;
      v25 = 0;
      v26 = 0;
      while ( 1 )
      {
        v32 = *(_QWORD *)v50;
        v55 = v25;
        *(_QWORD *)v50 = *(_QWORD *)v59;
        if ( *(_QWORD *)v59 == v32 )
        {
          sub_84F5B0(
            "incorrect structure definition\n",
            v49,
            v59[0],
            v51,
            v53,
            (int)v54,
            v25,
            v57,
            v58,
            v59[0],
            v59[2],
            (__int64)ptr);
LABEL_71:
          if ( (dword_2CCC3C8 & 0x400) == 0 || (v43 = v57 + 32LL * v25 - 32, v57 + 32LL * v25 == 32) )
          {
LABEL_54:
            v51 = v25;
            goto LABEL_11;
          }
          goto LABEL_73;
        }
        v33 = is_cvt64(v22, v21, v23);
        v34 = *(_QWORD *)&v59[2];
        if ( v33 )
        {
          v42 = unpack_dd(v59);
          v36 = -1;
          v35 = (unsigned int)(v53 + v42);
          if ( v35 == 0xFFFFFFFFLL )
            v35 = -1;
        }
        else
        {
          v35 = v53 + unpack_dq(v59);
        }
        *(_QWORD *)v24 = v35;
        if ( (v52 & 2) == 0 )
          break;
        v27 = is_cvt64(v59, v34, v36);
        v28 = *(_QWORD *)&v59[2];
        if ( v27 )
        {
          v29 = (unsigned int)unpack_dd(v59);
          v30 = -1;
          if ( (unsigned int)v29 == 0xFFFFFFFFLL )
            v29 = -1;
        }
        else
        {
          v29 = unpack_dq(v59);
        }
        *(_QWORD *)(v24 + 8) = v29;
        if ( (unsigned __int8)is_cvt64(v59, v28, v30) )
        {
          v31 = (unsigned int)unpack_dd(v59);
          if ( (unsigned int)v31 == 0xFFFFFFFFLL )
            v31 = -1;
        }
        else
        {
          v31 = unpack_dq(v59);
        }
        *(_QWORD *)(v24 + 16) = v31;
LABEL_41:
        v22 = v59;
        *(_DWORD *)(v24 + 24) = (unsigned int)unpack_dd(v59) << 8;
        v21 = *(_QWORD *)&v59[2];
        *(_DWORD *)(v24 + 28) = unpack_dd(v59);
        ++v25;
        v24 += 32;
        if ( v51 == v25 )
        {
          if ( (dword_2CCC3C8 & 0x400) == 0 )
            goto LABEL_11;
          v43 = v57 + 32 * v58 - 32;
          v55 = v51;
LABEL_73:
          v44 = 0;
          if ( (*(_BYTE *)(v43 + 28) & 2) == 0 )
            v44 = *(_QWORD *)(v43 + 8);
          if ( *(_QWORD *)(v43 + 16) == v44
            || (int)sub_3CAAA0(v54, *(__int64 **)v43, *(unsigned int *)(v43 + 24), nullptr, nullptr) > 0 )
          {
            v52 |= 1u;
            v51 = v55;
          }
          else
          {
            v51 = v55;
          }
LABEL_11:
          if ( *(_QWORD *)v59 < *(_QWORD *)&v59[2] && (v16 = unpack_dd(v59), v17 = v16 - 1, v16) )
          {
LABEL_27:
            v6 = sub_52FFA0(a1, a2);
            *((_DWORD *)v6 + 2) = v51;
            v6[2] = v57;
            *((_DWORD *)v6 + 7) = v52;
            if ( v17
              && (v18 = *(_QWORD **)(*a1 + 1672LL), v17 < (unsigned int)sub_64E0C0(v18, v18[1]))
              && (v19 = (_BYTE *)sub_64DFD0(v18, v18[1], v17, 0)) != nullptr
              && *v19
              && (v20 = (_QWORD *)sub_5303A0(*(_QWORD **)(**(_QWORD **)(*v18 + 1872LL) + 1808LL), (__int64)v19)) != nullptr
              && a2 == *v20 )
            {
              v56 = v17;
            }
            else
            {
              v56 = 0;
            }
          }
          else
          {
            v6 = sub_52FFA0(a1, a2);
            *((_DWORD *)v6 + 2) = v51;
            v6[2] = v57;
            *((_DWORD *)v6 + 7) = v52;
          }
          goto LABEL_13;
        }
      }
      v37 = is_cvt64(v59, v34, v36);
      v38 = *(_QWORD *)&v59[2];
      if ( v37 )
      {
        v40 = (unsigned int)unpack_dd(v59) + (unsigned int)v26;
        if ( (unsigned int)v40 == 0xFFFFFFFFLL )
          v40 = -1;
      }
      else
      {
        v40 = unpack_dq(v59) + v26;
      }
      *(_QWORD *)(v24 + 8) = v40;
      if ( (unsigned __int8)is_cvt64(v59, v38, v39) )
      {
        v26 = (unsigned int)unpack_dd(v59) + (unsigned int)v40;
        if ( (unsigned int)v26 == 0xFFFFFFFFLL )
        {
          *(_QWORD *)(v24 + 16) = -1;
          v41 = *(_QWORD *)(v24 + 8);
          v26 = -1;
          goto LABEL_51;
        }
      }
      else
      {
        v26 = unpack_dq(v59) + v40;
      }
      v41 = *(_QWORD *)(v24 + 8);
      *(_QWORD *)(v24 + 16) = v26;
      if ( v26 < v41 )
        goto LABEL_71;
LABEL_51:
      if ( (int)v25 > 0 && v41 < *(_QWORD *)(v24 - 16) )
      {
        if ( (dword_2CCC3C8 & 0x400) == 0 )
          goto LABEL_54;
        v43 = v57 + 32LL * v25 - 32;
        goto LABEL_73;
      }
      goto LABEL_41;
    }
    v13 = *(unsigned int **)v59;
    if ( *(_QWORD *)&v59[2] >= (unsigned __int64)(*(_QWORD *)v59 + 4LL) )
    {
      *(_QWORD *)v59 += 4LL;
      v14 = *v13;
      v51 = v14;
      if ( v14 )
      {
        v45 = v14;
        v57 = qcalloc(v14, 32);
        if ( !v57 )
          sub_3BC000((int)"get_struct");
        v46 = v57;
        v47 = *(_QWORD **)v59;
        do
        {
          v48 = *v47;
          v46 += 32;
          v47 += 3;
          *(_QWORD *)(v46 - 32) = v48;
          *(_QWORD *)(v46 - 24) = *((unsigned int *)v47 - 4);
          *(_QWORD *)(v46 - 16) = *((unsigned int *)v47 - 3);
          *(_DWORD *)(v46 - 8) = *((_DWORD *)v47 - 2);
          *(_DWORD *)(v46 - 4) = *((_DWORD *)v47 - 1);
        }
        while ( v46 != v57 + 32 * v45 );
        v52 = 0;
        v17 = 0;
        goto LABEL_27;
      }
    }
    v15 = sub_52FFA0(a1, a2);
    *((_DWORD *)v15 + 2) = 0;
    v6 = v15;
    v15[2] = 0;
    *((_DWORD *)v15 + 7) = 0;
    v56 = 0;
LABEL_13:
    *((_DWORD *)v6 + 8) = v56;
    sub_52E840(v54, (__int64)v6);
  }
  if ( ptr )
  {
    *(_QWORD *)&v61 = 0;
    qfree(ptr);
  }
  return v6;
}
