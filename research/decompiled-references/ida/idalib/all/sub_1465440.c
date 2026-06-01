__int64 __fastcall sub_1465440(__int64 a1, __m128i *a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rax
  bool v6; // zf
  void *v7; // rax
  __int16 v8; // ax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  _BYTE *v11; // rdi
  char v12; // al
  __int64 v13; // r12
  __int64 v14; // r11
  unsigned int *v15; // r14
  unsigned int *v16; // r12
  size_t v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned int *v20; // rax
  size_t v21; // r8
  _BYTE *v22; // rcx
  unsigned __int64 v23; // r9
  _BYTE *v24; // rdi
  _BYTE *v25; // rsi
  size_t v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v33; // r8
  __int64 v34; // rdi
  void *v35; // rdx
  size_t v36; // rax
  unsigned __int64 v37; // rax
  _BYTE *v38; // rsi
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdi
  unsigned int v42; // esi
  __int64 v43; // rcx
  __m128i *v44; // rdi
  __int64 v46; // rax
  char *v47; // rax
  __int64 v48; // rdi
  __int64 (*v49)(); // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  int *v53; // rsi
  char *v54; // rax
  int v55; // ebp
  size_t v56; // rax
  unsigned int v57; // eax
  __int64 v58; // rdx
  char *v59; // rax
  __int64 v60; // rax
  int v61; // eax
  unsigned __int64 v62; // rcx
  __int64 v63; // r14
  unsigned __int32 v64; // eax
  __int64 v65; // rdx
  _QWORD *v66; // rcx
  __int64 v67; // r12
  _QWORD *v68; // rax
  _QWORD *v69; // rdx
  unsigned __int64 v70; // [rsp+0h] [rbp-3B8h]
  unsigned __int64 v71; // [rsp+0h] [rbp-3B8h]
  unsigned __int64 v72; // [rsp+0h] [rbp-3B8h]
  __int64 v73; // [rsp+0h] [rbp-3B8h]
  __int64 v74; // [rsp+0h] [rbp-3B8h]
  __int64 v75; // [rsp+0h] [rbp-3B8h]
  int v76; // [rsp+Ch] [rbp-3ACh]
  __int64 v77; // [rsp+18h] [rbp-3A0h] BYREF
  _BYTE v78[72]; // [rsp+20h] [rbp-398h] BYREF
  void *ptr; // [rsp+70h] [rbp-348h] BYREF
  size_t v80; // [rsp+78h] [rbp-340h]
  __m128i v81; // [rsp+80h] [rbp-338h] BYREF
  __int64 v82; // [rsp+90h] [rbp-328h]

  v5 = *(_QWORD *)(a1 + 1112);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 192) == 0;
    v7 = sub_1436070;
    if ( v6 )
      v7 = sub_1436060;
    *(_QWORD *)(a1 + 1152) = v7;
  }
  else if ( *(_QWORD *)(a1 + 1144) )
  {
    *(_QWORD *)(a1 + 1152) = sub_1436090;
  }
  else
  {
    *(_QWORD *)(a1 + 1152) = sub_1418450;
  }
  if ( !*(_DWORD *)(a1 + 792) && (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 21LL) & 4) != 0 )
  {
    if ( (unsigned __int8)sub_1464550(a1, (__int64)a2, 1u) )
      return 1;
    v8 = a2[1].m128i_i16[0];
    if ( v8 == 62 )
    {
      if ( (unsigned int)(*(_DWORD *)(a1 + 896) - 4) <= 1 )
      {
        v35 = *(void **)(a1 + 904);
        v36 = *(_QWORD *)(a1 + 912);
        v78[0] = 58;
        ptr = v35;
        v80 = v36;
        v37 = sub_2246AB0(&ptr, v78, 1, 0);
        v38 = ptr;
        if ( v37 == -1 )
        {
          v37 = v80;
        }
        else if ( v80 <= v37 )
        {
          v37 = v80;
        }
        if ( ptr )
        {
          ptr = &v81;
          sub_145B9F0(&ptr, v38, (__int64)&v38[v37]);
        }
        else
        {
          v81.m128i_i8[0] = 0;
          ptr = &v81;
          v80 = 0;
        }
        sub_9EE7C0(&ptr, ":");
        v39 = sub_6F3470(a1 + 552, ptr, v80);
        v40 = *(unsigned int *)(a1 + 792);
        v41 = *(unsigned int *)(a1 + 796);
        v42 = a2->m128i_i32[0];
        if ( v40 >= v41 )
        {
          if ( v41 < v40 + 1 )
          {
            v75 = v39;
            sub_2237220(a1 + 784, a1 + 800, v40 + 1, 16);
            v40 = *(unsigned int *)(a1 + 792);
            v39 = v75;
          }
          v69 = (_QWORD *)(16 * v40 + *(_QWORD *)(a1 + 784));
          *v69 = v42;
          v69[1] = v39;
          ++*(_DWORD *)(a1 + 792);
        }
        else
        {
          v43 = *(_QWORD *)(a1 + 784) + 16 * v40;
          *(_DWORD *)v43 = v42;
          *(_QWORD *)(v43 + 8) = v39;
          ++*(_DWORD *)(a1 + 792);
        }
        v44 = (__m128i *)ptr;
        *(_QWORD *)(a1 + 1152) = sub_1436080;
        if ( v44 != &v81 )
          operator delete(v44);
        return 1;
      }
      v77 = a1;
      v80 = 0x2000000000LL;
      ptr = &v81;
LABEL_53:
      LODWORD(v9) = *(_DWORD *)(a1 + 792);
      goto LABEL_11;
    }
  }
  else
  {
    sub_14634E0((__int64 *)a1, a2->m128i_i32);
    v8 = a2[1].m128i_i16[0];
  }
  v77 = a1;
  v80 = 0x2000000000LL;
  ptr = &v81;
  if ( v8 == 16 )
  {
    v51 = a2[1].m128i_i64[0];
    v81 = _mm_loadu_si128(a2);
    v82 = v51;
    LODWORD(v80) = 1;
    sub_14643E0((__int64 *)a1, (__int64)&ptr);
    v52 = (unsigned int)v80;
    v53 = (int *)ptr;
    v54 = (char *)ptr + 24 * (unsigned int)v80 - 24;
    if ( *((_WORD *)v54 + 8) != 63 )
    {
LABEL_85:
      v2 = 0;
      sub_145B930(&v77, v53, v52);
      goto LABEL_50;
    }
    v55 = *(_DWORD *)v54;
    if ( *(int *)v54 < 0 )
    {
      sub_FC70B0((__int64)v78, *(_QWORD *)(a1 + 48), v55, 1043);
      sub_AEA040((__int64)v78);
    }
    *(_QWORD *)&v78[4] = 0;
    *(_QWORD *)&v78[12] = 0xAC00000000LL;
    *(_DWORD *)v78 = *(_DWORD *)(a1 + 780);
    v56 = j__strlen("import");
    *(_QWORD *)&v78[8] = sub_6F3470(a1 + 552, "import", v56);
    *(_DWORD *)&v78[4] = 6;
    v57 = sub_14271E0(a1, 0, (unsigned int *)v78, (unsigned int *)ptr, v55, 0, 0, 0);
    if ( v57 > 4 )
    {
      if ( v57 == 5 )
      {
        v2 = 1;
        a2[1].m128i_i16[0] = 1;
        *(_QWORD *)(*(_QWORD *)(a1 + 1112) + 152LL) = *(_QWORD *)(*(_QWORD *)(a1 + 1112) + 120LL);
        sub_145B930(&v77, ptr, (unsigned int)v80);
        goto LABEL_50;
      }
    }
    else
    {
      if ( v57 >= 2 )
      {
        v53 = (int *)ptr;
        goto LABEL_83;
      }
      if ( v57 == 1 )
      {
        v73 = v58;
        sub_145D720((__int64)&ptr);
        v53 = (int *)ptr;
        v58 = v73;
        v59 = (char *)ptr + 24 * (unsigned int)v80 - 24;
        *(_QWORD *)v59 = 0;
        *((_DWORD *)v59 + 4) = 0;
        *((_QWORD *)v59 + 1) = 0;
        v60 = (__int64)&v53[6 * (unsigned int)v80 - 6];
        *(_DWORD *)v60 = v55;
        *(_WORD *)(v60 + 16) = 457;
        v53[6 * (unsigned int)v80 - 5] = v55;
        *(_QWORD *)&v53[6 * (unsigned int)v80 - 4] = v73;
LABEL_83:
        v61 = *v53;
        *((_QWORD *)v53 + 1) = v58;
        *((_WORD *)v53 + 8) = 459;
        v53[1] = v61;
LABEL_84:
        v52 = (unsigned int)v80;
        goto LABEL_85;
      }
    }
    v53 = (int *)ptr;
    goto LABEL_84;
  }
  v2 = *(unsigned __int8 *)(a1 + 936);
  if ( !(_BYTE)v2 )
  {
    if ( v8 == 26 )
    {
      *(_BYTE *)(a1 + 936) = 1;
      *(_QWORD *)(a1 + 1152) = sub_1436080;
      return 1;
    }
    goto LABEL_53;
  }
  v9 = *(unsigned int *)(a1 + 792);
  if ( v8 == 5 )
  {
    v62 = *(unsigned int *)(a1 + 796);
    v63 = a2->m128i_i64[1];
    v64 = a2->m128i_i32[0];
    if ( v9 >= v62 )
    {
      v67 = v64;
      if ( v62 < v9 + 1 )
      {
        sub_2237220(a1 + 784, a1 + 800, v9 + 1, 16);
        v9 = *(unsigned int *)(a1 + 792);
      }
      v68 = (_QWORD *)(16 * v9 + *(_QWORD *)(a1 + 784));
      *v68 = v67;
      v68[1] = v63;
      ++*(_DWORD *)(a1 + 792);
    }
    else
    {
      v65 = *(_QWORD *)(a1 + 784) + 16 * v9;
      *(_DWORD *)v65 = v64;
      *(_QWORD *)(v65 + 8) = v63;
      ++*(_DWORD *)(a1 + 792);
    }
    *(_BYTE *)(a1 + 936) = 0;
    *(_QWORD *)(a1 + 1152) = sub_1436080;
    goto LABEL_50;
  }
LABEL_11:
  LOBYTE(v2) = (_DWORD)v9 == 0 || v8 == 1;
  if ( (_BYTE)v2 )
    return 1;
  v76 = a2->m128i_i32[0];
  if ( v8 == 63 )
  {
LABEL_13:
    v10 = *(_QWORD *)(a1 + 56);
    v78[16] = 0;
    *(_QWORD *)&v78[8] = 0;
    v11 = &v78[16];
    *(_QWORD *)v78 = &v78[16];
    v12 = *(_BYTE *)(v10 + 21);
    if ( (v12 & 4) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 784);
      v14 = 16LL * *(unsigned int *)(a1 + 792);
      v15 = (unsigned int *)(v13 + v14);
      if ( v13 != v13 + v14 )
      {
        v16 = (unsigned int *)(v13 + 16);
        v17 = 0;
        while ( 1 )
        {
          if ( v17 )
          {
            if ( v11[v17 - 1] != 58 )
            {
              if ( v17 == 0x7FFFFFFFFFFFFFFFLL )
                goto LABEL_112;
              v18 = v17 + 1;
              if ( v11 == &v78[16] )
                v19 = 15;
              else
                v19 = *(_QWORD *)&v78[16];
              if ( v18 > v19 )
              {
                sub_998B30((__int64)v78, v17, 0, ".", 1u);
                v18 = v17 + 1;
              }
              else
              {
                v11[v17] = 46;
              }
              *(_QWORD *)&v78[8] = v18;
              *(_BYTE *)(*(_QWORD *)v78 + v18) = 0;
              v17 = *(_QWORD *)&v78[8];
            }
            v20 = *(unsigned int **)(*((_QWORD *)v16 - 1) + 16LL);
            v21 = *v20;
            v22 = v20 + 4;
            if ( v21 > 0x7FFFFFFFFFFFFFFFLL - v17 )
LABEL_112:
              std::__throw_length_error("basic_string::append");
            v11 = *(_BYTE **)v78;
            v23 = v17 + v21;
            if ( *(_BYTE **)v78 != &v78[16] )
            {
LABEL_25:
              if ( v23 > *(_QWORD *)&v78[16] )
                goto LABEL_34;
              goto LABEL_26;
            }
          }
          else
          {
            v20 = *(unsigned int **)(*((_QWORD *)v16 - 1) + 16LL);
            v21 = *v20;
            v22 = v20 + 4;
            v23 = v21;
            if ( v11 != &v78[16] )
              goto LABEL_25;
          }
          if ( v23 > 0xF )
          {
LABEL_34:
            v71 = v23;
            sub_998B30((__int64)v78, v17, 0, v22, v21);
            *(_QWORD *)&v78[8] = v71;
            *(_BYTE *)(*(_QWORD *)v78 + v71) = 0;
            if ( v15 == v16 )
              goto LABEL_35;
            goto LABEL_30;
          }
LABEL_26:
          if ( v21 )
          {
            v24 = &v11[v17];
            if ( v21 == 1 )
            {
              *v24 = *((_BYTE *)v20 + 16);
              v11 = *(_BYTE **)v78;
            }
            else
            {
              v70 = v23;
              memcpy(v24, v22, v21);
              v11 = *(_BYTE **)v78;
              v23 = v70;
            }
          }
          *(_QWORD *)&v78[8] = v23;
          v11[v23] = 0;
          if ( v15 == v16 )
          {
LABEL_35:
            v25 = *(_BYTE **)v78;
            v26 = *(_QWORD *)&v78[8];
            v15 = *(unsigned int **)(a1 + 784);
            goto LABEL_36;
          }
LABEL_30:
          v17 = *(_QWORD *)&v78[8];
          v11 = *(_BYTE **)v78;
          v16 += 4;
        }
      }
      v26 = 0;
      v25 = &v78[16];
LABEL_36:
      v27 = *v15;
      *(_DWORD *)(a1 + 792) = 0;
      v28 = sub_6F3470(a1 + 552, v25, v26);
      v29 = *(unsigned int *)(a1 + 792);
      v30 = *(unsigned int *)(a1 + 796);
      if ( v29 >= v30 )
      {
        if ( v30 < v29 + 1 )
        {
          v74 = v28;
          sub_2237220(a1 + 784, a1 + 800, v29 + 1, 16);
          v29 = *(unsigned int *)(a1 + 792);
          v28 = v74;
        }
        v66 = (_QWORD *)(*(_QWORD *)(a1 + 784) + 16 * v29);
        *v66 = v27;
        v66[1] = v28;
        ++*(_DWORD *)(a1 + 792);
      }
      else
      {
        v31 = *(_QWORD *)(a1 + 784) + 16 * v29;
        *(_DWORD *)v31 = v27;
        *(_QWORD *)(v31 + 8) = v28;
        ++*(_DWORD *)(a1 + 792);
      }
      v12 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + 21LL);
    }
    if ( (v12 & 2) == 0
      || (v32 = *(unsigned int *)(a1 + 792), (_DWORD)v32) && (v12 & 4) != 0 && !*(_BYTE *)(a1 + 860)
      || (v48 = *(_QWORD *)(a1 + 112), v49 = *(__int64 (**)())(*(_QWORD *)v48 + 16LL), v49 == sub_12DAB10)
      || (v50 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD))v49)(
                  v48,
                  *(unsigned int *)(a1 + 780),
                  *(_QWORD *)(a1 + 784),
                  v32,
                  0,
                  0)
              & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v33 = 0;
    }
    else
    {
      v72 = v50;
      sub_1464EA0(a1, v50, v76, 1);
      v33 = v72;
    }
    v34 = *(_QWORD *)(a1 + 1192);
    if ( v34 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned __int64))(*(_QWORD *)v34 + 88LL))(
        v34,
        *(unsigned int *)(a1 + 780),
        *(_QWORD *)(a1 + 784),
        *(unsigned int *)(a1 + 792),
        v33);
    if ( (_DWORD)v80 )
      sub_145B930(&v77, ptr, (unsigned int)v80);
    else
      v2 = 1;
    if ( *(_BYTE **)v78 != &v78[16] )
      operator delete(*(void **)v78);
    goto LABEL_50;
  }
  v46 = a2[1].m128i_i64[0];
  v81 = _mm_loadu_si128(a2);
  v82 = v46;
  LODWORD(v80) = 1;
  sub_14643E0((__int64 *)a1, (__int64)&ptr);
  v47 = (char *)ptr + 24 * (unsigned int)v80 - 24;
  if ( *((_WORD *)v47 + 8) == 63 )
  {
    v76 = *(_DWORD *)v47;
    goto LABEL_13;
  }
  sub_145B930(&v77, ptr, (unsigned int)v80);
LABEL_50:
  if ( ptr != &v81 )
    free(ptr);
  return v2;
}
