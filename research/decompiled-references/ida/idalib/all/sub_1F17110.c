__int64 __fastcall sub_1F17110(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v7; // r8
  _QWORD *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r13
  int v24; // r14d
  int v25; // r13d
  __int64 v26; // rax
  _QWORD *v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r14
  void *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // r13
  __int64 v37; // rax
  unsigned __int8 v38; // r12
  __int64 v39; // rax
  _QWORD *v40; // r12
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int8 v43; // bl
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r9
  int v48; // edi
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // rcx
  int v55; // esi
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rsi
  int v59; // eax
  __int64 *v60; // rdx
  __int64 *v61; // rsi
  __int64 v62; // [rsp+0h] [rbp-178h]
  __int64 *v63; // [rsp+0h] [rbp-178h]
  __int64 v64; // [rsp+0h] [rbp-178h]
  _QWORD *v65; // [rsp+8h] [rbp-170h]
  char v66; // [rsp+18h] [rbp-160h] BYREF
  _QWORD *v67; // [rsp+20h] [rbp-158h] BYREF
  __int64 v68; // [rsp+28h] [rbp-150h]
  _QWORD v69[8]; // [rsp+30h] [rbp-148h] BYREF
  __m128i ptr; // [rsp+70h] [rbp-108h] BYREF
  _BYTE v71[248]; // [rsp+80h] [rbp-F8h] BYREF

  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD **)a1;
  v9 = *(unsigned int *)(a1 + 24);
  v10 = (unsigned int)(v9 + 1);
  v11 = *(unsigned int *)(v7 + 8 * v9);
  *(_DWORD *)(a1 + 24) = v10;
  switch ( v11 )
  {
    case 0LL:
      v22 = sub_1EE1670(a1);
      sub_F22AA0((unsigned __int64 *)&ptr, v22);
      return ptr.m128i_i64[0];
    case 1LL:
      v23 = *(_QWORD *)(v7 + 8 * v10);
      *(_DWORD *)(a1 + 24) = v9 + 2;
      v67 = v69;
      v24 = v23;
      v68 = 0x800000000LL;
      if ( (unsigned int)v23 > 8uLL )
      {
        sub_2237220(&v67, v69, (unsigned int)v23, 8);
        if ( !(_DWORD)v23 )
          goto LABEL_11;
      }
      else if ( !(_DWORD)v23 )
      {
        ptr.m128i_i64[1] = 0x800000000LL;
        ptr.m128i_i64[0] = (__int64)v71;
        v60 = (__int64 *)v71;
        v61 = (__int64 *)v71;
        goto LABEL_18;
      }
      v25 = 0;
      do
      {
        ++v25;
        v26 = sub_1EE1670(a1);
        sub_AEA1A0((__int64)&v67, v26);
      }
      while ( v24 != v25 );
LABEL_11:
      v27 = v67;
      ptr.m128i_i64[1] = 0x800000000LL;
      a6 = (__int64 *)&v66;
      a4 = 8;
      v7 = (__int64)&v67[(unsigned int)v68];
      ptr.m128i_i64[0] = (__int64)v71;
      v28 = 0;
      if ( (_QWORD *)v7 != v67 )
      {
        while ( 1 )
        {
          v29 = *v27 | 3LL;
          *a6 = v29;
          v30 = v29;
          if ( v28 + 1 <= a4 )
          {
            ++v27;
            *(_QWORD *)(ptr.m128i_i64[0] + 8 * v28) = v29;
            v28 = (unsigned int)++ptr.m128i_i32[2];
            if ( (_QWORD *)v7 == v27 )
              goto LABEL_17;
          }
          else
          {
            v65 = (_QWORD *)v7;
            v63 = a6;
            ++v27;
            sub_2237220(&ptr, v71, v28 + 1, 8);
            v7 = (__int64)v65;
            a6 = v63;
            *(_QWORD *)(ptr.m128i_i64[0] + 8LL * ptr.m128i_u32[2]) = v30;
            v28 = (unsigned int)++ptr.m128i_i32[2];
            if ( v65 == v27 )
            {
LABEL_17:
              v61 = (__int64 *)ptr.m128i_i64[0];
              v60 = (__int64 *)(ptr.m128i_i64[0] + 8 * v28);
              goto LABEL_18;
            }
          }
          a4 = ptr.m128i_u32[3];
        }
      }
      v60 = (__int64 *)v71;
      v61 = (__int64 *)v71;
LABEL_18:
      result = sub_A81E80(v8, v61, v60, a4, v7, (__int64)a6);
      if ( (_BYTE *)ptr.m128i_i64[0] != v71 )
      {
        v64 = result;
        free((void *)ptr.m128i_i64[0]);
        result = v64;
      }
      v21 = v67;
      if ( v67 != v69 )
        goto LABEL_5;
      return result;
    case 2LL:
      v31 = sub_1F16D80(a1);
      return sub_A81B40(v8, (__int64)v31, v32, v33, v34, v35);
    case 3LL:
      v36 = sub_1F16FA0(a1, a2, v9, a4, v7, (__int64)a6);
      v37 = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v37 + 1;
      v38 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v37) != 0;
      v39 = sub_1F17110(a1);
      return sub_A80CA0((__int64)v8, (__int64)v36, v38, v39);
    case 4LL:
      v40 = sub_1F16FA0(a1, a2, v9, a4, v7, (__int64)a6);
      v41 = sub_1EE3540(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 16), (_QWORD *)(a1 + 32), (_DWORD *)(a1 + 24));
      if ( v41 )
      {
        v42 = *(unsigned int *)(a1 + 24);
        *(_DWORD *)(a1 + 24) = v42 + 1;
        v43 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v42) != 0;
        sub_F228E0(&v67, v41);
      }
      else
      {
        v56 = *(unsigned int *)(a1 + 24);
        v57 = *(_QWORD *)(a1 + 32);
        v58 = *(_QWORD *)(v57 + 8 * v56);
        v59 = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 24) = v56 + 2;
        v43 = *(_QWORD *)(v57 + 8LL * (unsigned int)(v59 + 1)) != 0;
        sub_F228F0(&v67, v58);
      }
      sub_F22FF0((unsigned __int64 *)&ptr, (__int64)v40, (unsigned __int64)v67, v43);
      return sub_A80B60((__int64)v8, &ptr);
    case 5LL:
      v44 = sub_1F17110(a1);
      v45 = sub_1EE1670(a1);
      v46 = *(unsigned int *)(a1 + 24);
      v47 = *(_QWORD *)(a1 + 32);
      v48 = *(_DWORD *)(a1 + 24);
      v49 = *(_QWORD *)(v47 + 8 * v46);
      v50 = *(_QWORD *)(v47 + 8LL * (unsigned int)(v46 + 1));
      *(_DWORD *)(a1 + 24) = v48 + 3;
      return sub_A81190((__int64)v8, v44, v45, v49, v50, *(_QWORD *)(v47 + 8LL * (unsigned int)(v48 + 2)) != 0);
    case 6LL:
      sub_1F0B900((__int64)&ptr, a1);
      v51 = sub_1EE1670(a1);
      v52 = *(unsigned int *)(a1 + 24);
      v53 = *(_QWORD *)(a1 + 32);
      v54 = *(_QWORD *)(v53 + 8 * v52);
      v55 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v52 + 2;
      return sub_A80A10((__int64)v8, (__int64)&ptr, v51, v54, *(_QWORD *)(v53 + 8LL * (unsigned int)(v55 + 1)) != 0);
    case 7LL:
      v12 = sub_1EE1670(a1);
      sub_F22B10((unsigned __int64 *)&ptr, v12);
      return ptr.m128i_i64[0];
    case 8LL:
      v14 = sub_1F17110(a1);
      v15 = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v15 + 1;
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v15);
      ptr.m128i_i64[0] = (__int64)v71;
      ptr.m128i_i64[1] = 0x800000000LL;
      LODWORD(v67) = v16;
      v68 = sub_1F0BD10(a1, (unsigned int *)&ptr);
      v69[0] = v17;
      result = sub_A808D0((__int64)v8, v14, v17, v18, v19, v20, v16, v68, v17);
      v21 = (void *)ptr.m128i_i64[0];
      if ( (_BYTE *)ptr.m128i_i64[0] != v71 )
      {
LABEL_5:
        v62 = result;
        free(v21);
        return v62;
      }
      return result;
  }
}
