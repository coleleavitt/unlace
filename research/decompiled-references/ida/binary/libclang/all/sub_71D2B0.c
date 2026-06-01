unsigned __int64 __fastcall sub_71D2B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  _QWORD *v8; // r15
  _QWORD *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rbx
  char v13; // r14
  __int64 v14; // rbp
  _QWORD *v15; // rbx
  _QWORD *v16; // rdi
  __int64 v17; // rbp
  __int64 v18; // r12
  unsigned __int64 v19; // rdx
  char v20; // r13
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // r13
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // esi
  int v28; // r10d
  _QWORD *v29; // rdi
  unsigned int v30; // r12d
  unsigned int v31; // r9d
  _QWORD *v32; // r8
  _QWORD *v33; // rdx
  unsigned int v34; // esi
  unsigned int v35; // edx
  unsigned int v36; // eax
  __int64 v37; // rdi
  _QWORD *v38; // rax
  __int64 v39; // rbp
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  char v42; // cl
  __int64 v43; // rdi
  int v44; // eax
  int v45; // r8d
  _OWORD *v46; // r11
  unsigned int v47; // edx
  __int64 v48; // rsi
  int v49; // r10d
  _QWORD *v50; // r9
  int v51; // esi
  _OWORD *v52; // r10
  unsigned int v53; // r12d
  int v54; // r9d
  _QWORD *v55; // r8
  __int64 v56; // rdx
  __int64 (__fastcall *v57)(__int64, _QWORD *); // [rsp+0h] [rbp-80h]
  unsigned __int64 v59; // [rsp+10h] [rbp-70h]
  _QWORD *v60; // [rsp+10h] [rbp-70h]
  _QWORD *v61; // [rsp+10h] [rbp-70h]
  __int64 v62; // [rsp+18h] [rbp-68h] BYREF
  _OWORD v63[6]; // [rsp+20h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(a2 + 112);
  v5 = *(_QWORD *)(v4 + 104);
  v57 = (__int64 (__fastcall *)(__int64, _QWORD *))a3;
  v62 = 1;
  v63[0] = _mm_unpacklo_epi64((__m128i)0xFFFFFFFFFFFFF000LL, (__m128i)0xFFFFFFFFFFFFF000LL);
  v63[1] = v63[0];
  v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v5 & 1) != 0 )
  {
LABEL_2:
    v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    v8 = (_QWORD *)v7;
    if ( !v6 )
      goto LABEL_5;
    goto LABEL_3;
  }
  if ( v6 <= 3 )
  {
    v8 = nullptr;
    goto LABEL_5;
  }
  v38 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
  v6 &= 2u;
  v8 = v38;
  if ( !(_DWORD)v6 )
    goto LABEL_5;
  v39 = v38[2275];
  if ( !v39 )
  {
    v6 = v4 & 0xFFFFFFFFFFFFFFFALL;
    v5 = v4 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v4 + 104) = v5;
    goto LABEL_2;
  }
  v40 = v38[274];
  v38[284] += 24LL;
  v41 = (v40 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  a2 = v41 + 24;
  if ( v8[275] >= v41 + 24 && v40 )
  {
    v8[274] = a2;
  }
  else
  {
    a2 = 24;
    v41 = sub_6A76A0((__int64)(v8 + 274), 24, 3);
  }
  *(_QWORD *)v41 = v39;
  *(_DWORD *)(v41 + 8) = 0;
  a3 = v41 | 5;
  v42 = v41 & 0xFE;
  *(_QWORD *)(v41 + 16) = v4;
  v7 = v41 & 0xFFFFFFFFFFFFFFF8LL;
  LOBYTE(v6) = v42 | 4;
  *(_QWORD *)(v4 + 104) = a3;
  v8 = (_QWORD *)v7;
LABEL_3:
  v6 &= 4u;
  if ( (_DWORD)v6 && v7 )
  {
    v43 = *v8;
    v44 = *(_DWORD *)(*v8 + 12LL);
    if ( *((_DWORD *)v8 + 2) != v44 )
    {
      *((_DWORD *)v8 + 2) = v44;
      a2 = v4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 144LL))(v43, v4);
    }
    v8 = (_QWORD *)v8[2];
  }
LABEL_5:
  v9 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v8[2] & 4) != 0 )
    v9 = (_QWORD *)*v9;
  v10 = sub_79C2A0(v9, a2, a3, v6);
  result = sub_7A0650(v10, v8[5]);
  v12 = result;
  if ( result )
  {
    v13 = 1;
    while ( 1 )
    {
      v14 = v12;
      v15 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      v16 = v15;
      v17 = (v14 >> 2) & 1;
      if ( (_DWORD)v17 )
      {
        v16 = nullptr;
        if ( v15 )
          v16 = (_QWORD *)*v15;
      }
      v18 = *(_QWORD *)(sub_7984D0(v16) + 112);
      v19 = *(_QWORD *)(v18 + 104);
      result = v19 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v19 & 1) != 0 )
        goto LABEL_13;
      if ( result > 3 )
        break;
LABEL_45:
      v20 = v13 & 1;
LABEL_16:
      if ( (_BYTE)v17 )
      {
        if ( v15 )
        {
          v12 = v15[1];
          if ( v12 )
            continue;
        }
      }
      if ( !v20 )
        return operator delete();
      return result;
    }
    v22 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v19 & 2) == 0 )
    {
LABEL_31:
      v20 = v13 & 1;
      result = *(_QWORD *)&byte_8[v8[6] & 0xFFFFFFFFFFFFFFF0LL] | v8[6] & 7LL;
      if ( (*(_QWORD *)&byte_8[v22[6] & 0xFFFFFFFFFFFFFFF0LL] | v22[6] & 7LL) != result )
        goto LABEL_16;
      if ( v20 )
      {
        v27 = 3;
        result = (unsigned __int64)v63;
      }
      else
      {
        v34 = DWORD2(v63[0]);
        if ( !DWORD2(v63[0]) )
          goto LABEL_67;
        result = *(_QWORD *)&v63[0];
        v27 = DWORD2(v63[0]) - 1;
      }
      v28 = 1;
      v29 = nullptr;
      v30 = ((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4);
      v31 = v27 & v30;
      v32 = (_QWORD *)(result + 8LL * (v27 & v30));
      v33 = (_QWORD *)*v32;
      if ( (_QWORD *)*v32 == v22 )
        goto LABEL_16;
      while ( v33 != (_QWORD *)-4096LL )
      {
        if ( v33 == (_QWORD *)-8192LL && !v29 )
          v29 = v32;
        v31 = v27 & (v28 + v31);
        v32 = (_QWORD *)(result + 8LL * v31);
        v33 = (_QWORD *)*v32;
        if ( (_QWORD *)*v32 == v22 )
          goto LABEL_16;
        ++v28;
      }
      if ( !v29 )
        v29 = v32;
      if ( v20 )
      {
        v35 = 12;
        v34 = 4;
      }
      else
      {
        v34 = DWORD2(v63[0]);
        v35 = 3 * DWORD2(v63[0]);
      }
      v36 = ((unsigned int)v62 >> 1) + 1;
      if ( 4 * v36 < v35 )
      {
        if ( v34 >> 3 >= v34 - HIDWORD(v62) - v36 )
        {
          v61 = v22;
          sub_71CE00((__int64)&v62, v34);
          v22 = v61;
          if ( (v62 & 1) != 0 )
          {
            v51 = 3;
            v52 = v63;
          }
          else
          {
            v52 = *(_OWORD **)&v63[0];
            if ( !DWORD2(v63[0]) )
LABEL_102:
              BUG();
            v51 = DWORD2(v63[0]) - 1;
          }
          v53 = v51 & v30;
          v54 = 1;
          v55 = nullptr;
          v29 = (_QWORD *)v52 + v53;
          v56 = *v29;
          v36 = ((unsigned int)v62 >> 1) + 1;
          if ( v61 != (_QWORD *)*v29 )
          {
            while ( v56 != -4096 )
            {
              if ( v56 == -8192 && !v55 )
                v55 = v29;
              v53 = v51 & (v54 + v53);
              v29 = (_QWORD *)v52 + v53;
              v56 = *v29;
              if ( (_QWORD *)*v29 == v61 )
                goto LABEL_42;
              ++v54;
            }
            if ( v55 )
              v29 = v55;
          }
        }
        goto LABEL_42;
      }
LABEL_67:
      v60 = v22;
      sub_71CE00((__int64)&v62, 2 * v34);
      v22 = v60;
      if ( (v62 & 1) != 0 )
      {
        v45 = 3;
        v46 = v63;
      }
      else
      {
        v46 = *(_OWORD **)&v63[0];
        if ( !DWORD2(v63[0]) )
          goto LABEL_102;
        v45 = DWORD2(v63[0]) - 1;
      }
      v47 = v45 & (((unsigned int)v60 >> 9) ^ ((unsigned int)v60 >> 4));
      v29 = (_QWORD *)v46 + v47;
      v48 = *v29;
      v36 = ((unsigned int)v62 >> 1) + 1;
      if ( (_QWORD *)*v29 != v60 )
      {
        v49 = 1;
        v50 = nullptr;
        while ( v48 != -4096 )
        {
          if ( v48 == -8192 && !v50 )
            v50 = v29;
          v47 = v45 & (v49 + v47);
          v29 = (_QWORD *)v46 + v47;
          v48 = *v29;
          if ( (_QWORD *)*v29 == v60 )
            goto LABEL_42;
          ++v49;
        }
        if ( v50 )
          v29 = v50;
      }
LABEL_42:
      LODWORD(v62) = (2 * v36) | v62 & 1;
      if ( *v29 != -4096 )
        --HIDWORD(v62);
      *v29 = v22;
      result = v57(a4, v22);
      v13 = v62;
      goto LABEL_45;
    }
    v23 = v22[2275];
    if ( v23 )
    {
      v24 = v22[274];
      v22[284] += 24LL;
      v25 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v22[275] >= v25 + 24 && v24 )
        v22[274] = v25 + 24;
      else
        v25 = sub_6A76A0((__int64)(v22 + 274), 24, 3);
      *(_QWORD *)v25 = v23;
      *(_DWORD *)(v25 + 8) = 0;
      v26 = v25 | 5;
      v20 = v13 & 1;
      *(_QWORD *)(v25 + 16) = v18;
      *(_QWORD *)(v18 + 104) = v25 | 5;
      result = v25 & 0xFFFFFFFFFFFFFFFALL | 4;
      v21 = v26 & 0xFFFFFFFFFFFFFFF8LL;
      v22 = (_QWORD *)v21;
      if ( (result & 4) == 0 )
      {
LABEL_30:
        if ( !v22 )
          goto LABEL_16;
        goto LABEL_31;
      }
    }
    else
    {
      result = v18 & 0xFFFFFFFFFFFFFFFALL;
      v19 = v18 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v18 + 104) = v19;
LABEL_13:
      v20 = v13 & 1;
      if ( !result )
        goto LABEL_16;
      v21 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      v22 = (_QWORD *)v21;
      if ( (result & 4) == 0 )
        goto LABEL_30;
    }
    if ( !v21 )
      goto LABEL_16;
    v37 = *(_QWORD *)v21;
    result = *(unsigned int *)(*(_QWORD *)v21 + 12LL);
    if ( *(_DWORD *)(v21 + 8) != (_DWORD)result )
    {
      *(_DWORD *)(v21 + 8) = result;
      v59 = v21;
      result = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD *))(*(_QWORD *)v37 + 144LL))(
                 v37,
                 v18,
                 v21,
                 v22);
      v21 = v59;
    }
    v22 = *(_QWORD **)(v21 + 16);
    if ( !v22 )
      goto LABEL_16;
    goto LABEL_31;
  }
  return result;
}

