__int64 *__fastcall sub_1215B30(__int64 *a1, __int64 **a2)
{
  __int64 *result; // rax
  __int64 *v3; // rbp
  __int64 v5; // r12
  __m128i *v6; // rbx
  char v7; // al
  char *v8; // r13
  int v9; // r11d
  int v10; // r10d
  char *v11; // rcx
  void *v12; // r8
  __m128i *v13; // rdi
  void *v14; // rax
  char *v15; // rdx
  void *v16; // rdx
  char *v17; // rdx
  void *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // r12
  __m128i *i; // rbp
  __int64 v24; // rcx
  __int64 v25; // rdx
  __m128i *v26; // rsi
  __m128i *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __m128i *v30; // rsi
  __m128i *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __m128i *v34; // rsi
  __m128i *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rdx
  __m128i *v38; // r13
  __m128i *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  __m128i *v42; // rsi
  size_t v43; // rdx
  size_t v44; // rdx
  size_t v45; // rdx
  size_t v46; // rdx
  size_t v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  size_t v53; // r9
  size_t v54; // rdx
  signed __int64 v55; // rax
  void *v56; // [rsp+8h] [rbp-120h]
  int v57; // [rsp+14h] [rbp-114h]
  int v59; // [rsp+20h] [rbp-108h]
  void *v60; // [rsp+20h] [rbp-108h]
  size_t v61; // [rsp+28h] [rbp-100h]
  void *v62; // [rsp+30h] [rbp-F8h]
  int v63; // [rsp+38h] [rbp-F0h]
  int v64; // [rsp+3Ch] [rbp-ECh]
  void *v65[2]; // [rsp+40h] [rbp-E8h] BYREF
  __m128i v66; // [rsp+50h] [rbp-D8h] BYREF
  int v67; // [rsp+60h] [rbp-C8h]
  int v68; // [rsp+64h] [rbp-C4h]
  int v69; // [rsp+68h] [rbp-C0h]
  void *v70[2]; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v71; // [rsp+80h] [rbp-A8h] BYREF
  void *v72[2]; // [rsp+90h] [rbp-98h] BYREF
  __m128i v73; // [rsp+A0h] [rbp-88h] BYREF
  void *v74[2]; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v75; // [rsp+C0h] [rbp-68h] BYREF
  void *v76[2]; // [rsp+D0h] [rbp-58h] BYREF
  _OWORD v77[4]; // [rsp+E0h] [rbp-48h] BYREF

  result = *a2;
  if ( (__int64 *)*a1 != *a2 )
  {
    v3 = (__int64 *)(*a1 - 176);
    if ( result != v3 )
    {
      do
      {
        v5 = *a1;
        v6 = (__m128i *)(v3 - 22);
        v7 = sub_1213FB0(
               (__int64)(v3 - 22),
               *(_DWORD *)(*a1 - 144),
               *(_DWORD *)(*a1 - 140),
               *(_DWORD *)(*a1 - 136),
               *(const void **)(*a1 - 64),
               *(_QWORD *)(*a1 - 56));
        v8 = (char *)*(v3 - 8);
        v9 = *((_DWORD *)v3 - 36);
        v10 = *((_DWORD *)v3 - 35);
        v56 = (void *)*(v3 - 7);
        v57 = *((_DWORD *)v3 - 34);
        if ( v7 )
        {
          v11 = (char *)*(v3 - 4);
          v12 = (void *)*(v3 - 3);
        }
        else
        {
          v63 = *((_DWORD *)v3 - 35);
          v59 = *((_DWORD *)v3 - 36);
          if ( (unsigned __int8)sub_1213FB0(v5 - 176, v9, v10, *((_DWORD *)v3 - 34), v8, (size_t)v56) )
            goto LABEL_93;
          v12 = (void *)v6[9].m128i_i64[1];
          v53 = *(_QWORD *)(v5 - 24);
          v11 = (char *)v6[9].m128i_i64[0];
          v9 = v59;
          v54 = v53;
          v10 = v63;
          if ( (unsigned __int64)v12 <= v53 )
            v54 = v6[9].m128i_u64[1];
          if ( v54 )
          {
            v64 = v59;
            v62 = (void *)v6[9].m128i_i64[1];
            v61 = *(_QWORD *)(v5 - 24);
            v60 = (void *)v6[9].m128i_i64[0];
            LODWORD(v55) = memcmp(v60, *(const void **)(v5 - 32), v54);
            v11 = (char *)v60;
            v10 = v63;
            v53 = v61;
            v12 = v62;
            v9 = v64;
            if ( (_DWORD)v55 )
              goto LABEL_92;
          }
          v55 = (signed __int64)v12 - v53;
          if ( (__int64)((__int64)v12 - v53) > 0x7FFFFFFF )
          {
LABEL_93:
            v65[0] = v3;
            sub_1215290((__int64 *)v65);
            goto LABEL_85;
          }
          if ( v55 >= (__int64)0xFFFFFFFF80000000LL )
          {
LABEL_92:
            if ( (int)v55 >= 0 )
              goto LABEL_93;
          }
        }
        v13 = v6 + 1;
        v65[0] = &v66;
        if ( (__m128i *)v6->m128i_i64[0] == &v6[1] )
        {
          v66 = _mm_loadu_si128(v6 + 1);
        }
        else
        {
          v65[0] = (void *)v6->m128i_i64[0];
          v66.m128i_i64[0] = v6[1].m128i_i64[0];
        }
        v14 = (void *)v6->m128i_i64[1];
        v15 = (char *)v6[3].m128i_i64[0];
        v6->m128i_i64[0] = (__int64)v13;
        v6->m128i_i64[1] = 0;
        v65[1] = v14;
        v6[1].m128i_i8[0] = 0;
        v69 = v57;
        v70[0] = &v71;
        v67 = v9;
        v68 = v10;
        if ( v15 == (char *)&v6[4] )
        {
          v71 = _mm_loadu_si128(v6 + 4);
        }
        else
        {
          v70[0] = v15;
          v71.m128i_i64[0] = v6[4].m128i_i64[0];
        }
        v16 = (void *)v6[3].m128i_i64[1];
        v6[3].m128i_i64[0] = (__int64)v6[4].m128i_i64;
        v72[0] = &v73;
        v70[1] = v16;
        v17 = (char *)v6[5].m128i_i64[0];
        v6[3].m128i_i64[1] = 0;
        v6[4].m128i_i8[0] = 0;
        if ( &v6[6] == (__m128i *)v17 )
        {
          v73 = _mm_loadu_si128(v6 + 6);
        }
        else
        {
          v72[0] = v17;
          v73.m128i_i64[0] = v6[6].m128i_i64[0];
        }
        v18 = (void *)v6[5].m128i_i64[1];
        v6[5].m128i_i64[0] = (__int64)v6[6].m128i_i64;
        v74[0] = &v75;
        v72[1] = v18;
        v6[5].m128i_i64[1] = 0;
        v6[6].m128i_i8[0] = 0;
        if ( v8 == (char *)&v6[8] )
        {
          v75 = _mm_loadu_si128(v6 + 8);
        }
        else
        {
          v19 = v6[8].m128i_i64[0];
          v74[0] = v8;
          v75.m128i_i64[0] = v19;
        }
        v6[7].m128i_i64[0] = (__int64)v6[8].m128i_i64;
        v76[0] = v77;
        v74[1] = v56;
        v6[7].m128i_i64[1] = 0;
        v6[8].m128i_i8[0] = 0;
        if ( v11 == (char *)&v6[10] )
        {
          v77[0] = _mm_loadu_si128(v6 + 10);
        }
        else
        {
          v20 = v6[10].m128i_i64[0];
          v76[0] = v11;
          *(_QWORD *)&v77[0] = v20;
        }
        v6[10].m128i_i8[0] = 0;
        v21 = *a1;
        v6[9].m128i_i64[0] = (__int64)v6[10].m128i_i64;
        v76[1] = v12;
        v6[9].m128i_i64[1] = 0;
        v22 = 0x2E8BA2E8BA2E8BA3LL * ((v21 - (__int64)v3) >> 4);
        if ( v21 - (__int64)v3 > 0 )
        {
          for ( i = v6 + 21; ; v13 = (__m128i *)i[-21].m128i_i64[0] )
          {
            v42 = (__m128i *)i[-10].m128i_i64[0];
            if ( v42 == &i[-9] )
            {
              v43 = i[-10].m128i_u64[1];
              if ( v43 )
              {
                if ( v43 == 1 )
                  v13->m128i_i8[0] = i[-9].m128i_i8[0];
                else
                  memcpy(v13, v42, v43);
                v43 = i[-10].m128i_u64[1];
                v13 = (__m128i *)i[-21].m128i_i64[0];
              }
              i[-21].m128i_i64[1] = v43;
              v13->m128i_i8[v43] = 0;
              v13 = (__m128i *)i[-10].m128i_i64[0];
            }
            else
            {
              if ( v13 == &i[-20] )
              {
                v50 = i[-10].m128i_i64[1];
                i[-21].m128i_i64[0] = (__int64)v42;
                i[-21].m128i_i64[1] = v50;
                i[-20].m128i_i64[0] = i[-9].m128i_i64[0];
              }
              else
              {
                v24 = i[-10].m128i_i64[1];
                v25 = i[-20].m128i_i64[0];
                i[-21].m128i_i64[0] = (__int64)v42;
                i[-21].m128i_i64[1] = v24;
                i[-20].m128i_i64[0] = i[-9].m128i_i64[0];
                if ( v13 )
                {
                  i[-10].m128i_i64[0] = (__int64)v13;
                  i[-9].m128i_i64[0] = v25;
                  goto LABEL_20;
                }
              }
              i[-10].m128i_i64[0] = (__int64)i[-9].m128i_i64;
              v13 = i - 9;
            }
LABEL_20:
            i[-10].m128i_i64[1] = 0;
            v13->m128i_i8[0] = 0;
            v26 = (__m128i *)i[-7].m128i_i64[0];
            v27 = (__m128i *)i[-18].m128i_i64[0];
            i[-19].m128i_i32[0] = i[-8].m128i_i32[0];
            i[-19].m128i_i32[1] = i[-8].m128i_i32[1];
            i[-19].m128i_i32[2] = i[-8].m128i_i32[2];
            if ( v26 == &i[-6] )
            {
              v47 = i[-7].m128i_u64[1];
              if ( v47 )
              {
                if ( v47 == 1 )
                  v27->m128i_i8[0] = i[-6].m128i_i8[0];
                else
                  memcpy(v27, v26, v47);
                v47 = i[-7].m128i_u64[1];
                v27 = (__m128i *)i[-18].m128i_i64[0];
              }
              i[-18].m128i_i64[1] = v47;
              v27->m128i_i8[v47] = 0;
              v27 = (__m128i *)i[-7].m128i_i64[0];
            }
            else
            {
              if ( v27 == &i[-17] )
              {
                v49 = i[-7].m128i_i64[1];
                i[-18].m128i_i64[0] = (__int64)v26;
                i[-18].m128i_i64[1] = v49;
                i[-17].m128i_i64[0] = i[-6].m128i_i64[0];
              }
              else
              {
                v28 = i[-7].m128i_i64[1];
                v29 = i[-17].m128i_i64[0];
                i[-18].m128i_i64[0] = (__int64)v26;
                i[-18].m128i_i64[1] = v28;
                i[-17].m128i_i64[0] = i[-6].m128i_i64[0];
                if ( v27 )
                {
                  i[-7].m128i_i64[0] = (__int64)v27;
                  i[-6].m128i_i64[0] = v29;
                  goto LABEL_24;
                }
              }
              i[-7].m128i_i64[0] = (__int64)i[-6].m128i_i64;
              v27 = i - 6;
            }
LABEL_24:
            i[-7].m128i_i64[1] = 0;
            v27->m128i_i8[0] = 0;
            v30 = (__m128i *)i[-5].m128i_i64[0];
            v31 = (__m128i *)i[-16].m128i_i64[0];
            if ( v30 == &i[-4] )
            {
              v46 = i[-5].m128i_u64[1];
              if ( v46 )
              {
                if ( v46 == 1 )
                  v31->m128i_i8[0] = i[-4].m128i_i8[0];
                else
                  memcpy(v31, v30, v46);
                v46 = i[-5].m128i_u64[1];
                v31 = (__m128i *)i[-16].m128i_i64[0];
              }
              i[-16].m128i_i64[1] = v46;
              v31->m128i_i8[v46] = 0;
              v31 = (__m128i *)i[-5].m128i_i64[0];
            }
            else
            {
              if ( v31 == &i[-15] )
              {
                v48 = i[-5].m128i_i64[1];
                i[-16].m128i_i64[0] = (__int64)v30;
                i[-16].m128i_i64[1] = v48;
                i[-15].m128i_i64[0] = i[-4].m128i_i64[0];
              }
              else
              {
                v32 = i[-5].m128i_i64[1];
                v33 = i[-15].m128i_i64[0];
                i[-16].m128i_i64[0] = (__int64)v30;
                i[-16].m128i_i64[1] = v32;
                i[-15].m128i_i64[0] = i[-4].m128i_i64[0];
                if ( v31 )
                {
                  i[-5].m128i_i64[0] = (__int64)v31;
                  i[-4].m128i_i64[0] = v33;
                  goto LABEL_28;
                }
              }
              i[-5].m128i_i64[0] = (__int64)i[-4].m128i_i64;
              v31 = i - 4;
            }
LABEL_28:
            i[-5].m128i_i64[1] = 0;
            v31->m128i_i8[0] = 0;
            v34 = (__m128i *)i[-3].m128i_i64[0];
            v35 = (__m128i *)i[-14].m128i_i64[0];
            if ( v34 == &i[-2] )
            {
              v45 = i[-3].m128i_u64[1];
              if ( v45 )
              {
                if ( v45 == 1 )
                  v35->m128i_i8[0] = i[-2].m128i_i8[0];
                else
                  memcpy(v35, v34, v45);
                v45 = i[-3].m128i_u64[1];
                v35 = (__m128i *)i[-14].m128i_i64[0];
              }
              i[-14].m128i_i64[1] = v45;
              v35->m128i_i8[v45] = 0;
              v35 = (__m128i *)i[-3].m128i_i64[0];
            }
            else
            {
              if ( v35 == &i[-13] )
              {
                v52 = i[-3].m128i_i64[1];
                i[-14].m128i_i64[0] = (__int64)v34;
                i[-14].m128i_i64[1] = v52;
                i[-13].m128i_i64[0] = i[-2].m128i_i64[0];
              }
              else
              {
                v36 = i[-3].m128i_i64[1];
                v37 = i[-13].m128i_i64[0];
                i[-14].m128i_i64[0] = (__int64)v34;
                i[-14].m128i_i64[1] = v36;
                i[-13].m128i_i64[0] = i[-2].m128i_i64[0];
                if ( v35 )
                {
                  i[-3].m128i_i64[0] = (__int64)v35;
                  i[-2].m128i_i64[0] = v37;
                  goto LABEL_32;
                }
              }
              i[-3].m128i_i64[0] = (__int64)i[-2].m128i_i64;
              v35 = i - 2;
            }
LABEL_32:
            i[-3].m128i_i64[1] = 0;
            v35->m128i_i8[0] = 0;
            v38 = (__m128i *)i[-1].m128i_i64[0];
            v39 = (__m128i *)i[-12].m128i_i64[0];
            if ( i == v38 )
            {
              v44 = i[-1].m128i_u64[1];
              if ( v44 )
              {
                if ( v44 == 1 )
                  v39->m128i_i8[0] = i->m128i_i8[0];
                else
                  memcpy(v39, i, v44);
                v44 = i[-1].m128i_u64[1];
                v39 = (__m128i *)i[-12].m128i_i64[0];
              }
              v38[-12].m128i_i64[1] = v44;
              v39->m128i_i8[v44] = 0;
              v39 = (__m128i *)v38[-1].m128i_i64[0];
            }
            else
            {
              if ( v39 == &i[-11] )
              {
                v51 = i[-1].m128i_i64[1];
                i[-12].m128i_i64[0] = (__int64)v38;
                i[-12].m128i_i64[1] = v51;
                i[-11].m128i_i64[0] = i->m128i_i64[0];
              }
              else
              {
                v40 = i[-1].m128i_i64[1];
                v41 = i[-11].m128i_i64[0];
                i[-12].m128i_i64[0] = (__int64)v38;
                i[-12].m128i_i64[1] = v40;
                i[-11].m128i_i64[0] = i->m128i_i64[0];
                if ( v39 )
                {
                  i[-1].m128i_i64[0] = (__int64)v39;
                  i->m128i_i64[0] = v41;
                  goto LABEL_36;
                }
              }
              i[-1].m128i_i64[0] = (__int64)i;
              v39 = i;
            }
LABEL_36:
            i[-1].m128i_i64[1] = 0;
            i += 11;
            v39->m128i_i8[0] = 0;
            if ( !--v22 )
            {
              v21 = *a1;
              break;
            }
          }
        }
        sub_A0AAD0(v21 - 176, v65);
        *(_DWORD *)(v21 - 144) = v67;
        *(_DWORD *)(v21 - 140) = v68;
        *(_DWORD *)(v21 - 136) = v69;
        sub_A0AAD0(v21 - 176 + 48, v70);
        sub_A0AAD0(v21 - 176 + 80, v72);
        sub_A0AAD0(v21 - 176 + 112, v74);
        sub_A0AAD0(v21 - 176 + 144, v76);
        if ( v76[0] != v77 )
          operator delete(v76[0]);
        if ( v74[0] != &v75 )
          operator delete(v74[0]);
        if ( v72[0] != &v73 )
          operator delete(v72[0]);
        if ( v70[0] != &v71 )
          operator delete(v70[0]);
        if ( v65[0] != &v66 )
          operator delete(v65[0]);
LABEL_85:
        result = (__int64 *)a2;
        v3 = (__int64 *)v6;
      }
      while ( v6 != (__m128i *)*a2 );
    }
  }
  return result;
}
