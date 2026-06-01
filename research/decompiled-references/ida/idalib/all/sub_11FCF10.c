void __fastcall sub_11FCF10(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rax
  const char **v10; // rax
  char *v11; // rbx
  size_t v12; // rdx
  unsigned __int64 v13; // r9
  __int64 *v14; // rbp
  size_t v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  size_t v18; // rcx
  size_t v19; // rax
  size_t v20; // rdx
  __int64 v21; // r9
  int v22; // eax
  size_t v23; // rax
  size_t v24; // r9
  int v25; // eax
  size_t v26; // rax
  size_t v27; // r9
  int v28; // eax
  size_t v29; // rax
  size_t v30; // rax
  unsigned int v31; // ebp
  __int64 v32; // rax
  __int64 v33; // rcx
  size_t v34; // rax
  __int64 (__fastcall *v35)(_QWORD *, void *, __int64); // rbp
  __int64 v36; // rbp
  __int64 v37; // rcx
  size_t v38; // rax
  size_t v39; // rax
  size_t v40; // rax
  int v41; // eax
  int v42; // eax
  size_t v43; // [rsp+0h] [rbp-1C8h]
  size_t v44; // [rsp+0h] [rbp-1C8h]
  size_t v45; // [rsp+0h] [rbp-1C8h]
  size_t v46; // [rsp+0h] [rbp-1C8h]
  size_t v47; // [rsp+0h] [rbp-1C8h]
  size_t v48; // [rsp+0h] [rbp-1C8h]
  size_t v49; // [rsp+0h] [rbp-1C8h]
  size_t v50; // [rsp+0h] [rbp-1C8h]
  size_t v51; // [rsp+0h] [rbp-1C8h]
  size_t v52; // [rsp+0h] [rbp-1C8h]
  size_t v53; // [rsp+0h] [rbp-1C8h]
  size_t v54; // [rsp+0h] [rbp-1C8h]
  size_t v55; // [rsp+0h] [rbp-1C8h]
  size_t v56; // [rsp+0h] [rbp-1C8h]
  size_t n; // [rsp+8h] [rbp-1C0h]
  size_t nb; // [rsp+8h] [rbp-1C0h]
  size_t na; // [rsp+8h] [rbp-1C0h]
  __int64 v60; // [rsp+10h] [rbp-1B8h]
  _QWORD v61[4]; // [rsp+40h] [rbp-188h] BYREF
  __int16 v62; // [rsp+60h] [rbp-168h]
  void *ptr; // [rsp+70h] [rbp-158h] BYREF
  __m128i si128; // [rsp+78h] [rbp-150h]
  _WORD v65[160]; // [rsp+88h] [rbp-140h] BYREF

  LODWORD(ptr) = 2897;
  v4 = sub_21B6DA0(a2, &ptr, 1);
  v5 = a2[1];
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 != v7 )
  {
    while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 2897) )
    {
      if ( v7 == ++v6 )
        return;
    }
    if ( v6 != v7 )
    {
      do
      {
        v8 = *v6;
        v9 = *(_QWORD *)(*v6 + 16LL);
        if ( !v9 )
          v9 = *v6;
        ++v6;
        *(_BYTE *)(v9 + 44) |= 1u;
        if ( v6 == v7 )
          break;
        while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 2897) )
        {
          if ( v7 == ++v6 )
            goto LABEL_13;
        }
      }
      while ( v7 != v6 );
LABEL_13:
      v10 = *(const char ***)(v8 + 48);
      v11 = (char *)*v10;
      if ( *v10 )
      {
        v12 = strlen(*v10);
        v13 = v12;
        v14 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL);
        if ( v12 == 3 )
        {
          if ( *(_WORD *)v11 == 12849 && v11[2] == 56
            || *(_WORD *)v11 == 13618 && v11[2] == 54
            || *(_WORD *)v11 == 12597 && v11[2] == 50 )
          {
LABEL_45:
            if ( v11[v13 - 1] == 43 )
            {
              if ( v13 > v13 - 1 )
                --v13;
              v31 = 0;
LABEL_49:
              if ( !(unsigned __int8)sub_2247970(v11, v13, 10, &ptr) && ptr == (void *)(unsigned int)ptr )
                v31 = (unsigned int)ptr >> 7;
              LODWORD(v60) = v31;
              ptr = v65;
              v61[0] = "-mvscale-min=";
              si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
              v61[2] = v60;
              v62 = 2307;
              v35 = *(__int64 (__fastcall **)(_QWORD *, void *, __int64))(*a2 + 16LL);
              sub_22538C0(v61, &ptr);
              v36 = v35(a2, ptr, si128.m128i_i64[0]);
              if ( ptr != v65 )
                free(ptr);
              v37 = *(unsigned int *)(a3 + 8);
              if ( v37 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
              {
                sub_2237220(a3, a3 + 16, v37 + 1, 8);
                v37 = *(unsigned int *)(a3 + 8);
              }
              *(_QWORD *)(*(_QWORD *)a3 + 8 * v37) = v36;
              ++*(_DWORD *)(a3 + 8);
              return;
            }
LABEL_34:
            v50 = v13;
            if ( (unsigned __int8)sub_2247970(v11, v13, 10, &ptr) || ptr != (void *)(unsigned int)ptr )
              v31 = 0;
            else
              v31 = (unsigned int)ptr >> 7;
            LODWORD(v61[0]) = v31;
            ptr = (void *)"-mvscale-max=";
            v65[4] = 2307;
            si128.m128i_i64[1] = v61[0];
            v32 = sub_10DA6C0((__int64)a2, (__int64)&ptr);
            v33 = *(unsigned int *)(a3 + 8);
            v13 = v50;
            if ( v33 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
            {
              v54 = v32;
              na = v13;
              sub_2237220(a3, a3 + 16, v33 + 1, 8);
              v33 = *(unsigned int *)(a3 + 8);
              v13 = na;
              v32 = v54;
            }
            *(_QWORD *)(*(_QWORD *)a3 + 8 * v33) = v32;
            ++*(_DWORD *)(a3 + 8);
            goto LABEL_49;
          }
          v15 = j__strlen("512+");
          v16 = 3;
          v17 = 3;
          v18 = v15;
          if ( v15 != 3 )
          {
LABEL_19:
            n = v17;
            v43 = v16;
            v19 = j__strlen("1024+");
            v20 = n;
            v21 = v43;
            if ( v19 == n )
            {
              if ( n )
                goto LABEL_21;
LABEL_33:
              v13 = 0;
              goto LABEL_34;
            }
            goto LABEL_31;
          }
LABEL_43:
          v52 = v18;
          if ( !memcmp(v11, "512+", v18) )
          {
            v13 = v52;
            goto LABEL_45;
          }
          if ( v52 == j__strlen("1024+") )
          {
            v42 = memcmp(v11, "1024+", v52);
            v13 = v52;
            if ( !v42 )
              goto LABEL_45;
LABEL_22:
            v45 = v13;
            v23 = j__strlen("2048+");
            v24 = v45;
            if ( v23 == v45 )
            {
              v25 = memcmp(v11, "2048+", v45);
              v13 = v45;
              if ( !v25 )
              {
                if ( !v45 )
                  goto LABEL_34;
                goto LABEL_45;
              }
              goto LABEL_24;
            }
LABEL_73:
            v55 = v24;
            v39 = j__strlen("scalable");
            v27 = v55;
            if ( v39 != v55 )
              goto LABEL_26;
            if ( !v55 )
              return;
LABEL_25:
            v47 = v27;
            v28 = memcmp(v11, "scalable", v27);
            v27 = v47;
            if ( !v28 )
              return;
LABEL_26:
            v48 = v27;
            sub_FC70B0((__int64)&ptr, *v14, 0, 497);
            sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(v8 + 24), *(_QWORD *)(v8 + 32));
            sub_AEC220((unsigned __int8 **)&ptr, v11, v48);
            sub_AEA040((__int64)&ptr);
            return;
          }
          v40 = j__strlen("2048+");
          v24 = v52;
          if ( v52 != v40 )
            goto LABEL_73;
          goto LABEL_78;
        }
        if ( v12 != 4 )
        {
          nb = v12;
          v51 = v12;
          v34 = j__strlen("512+");
          v17 = nb;
          v16 = v51;
          if ( v34 != nb )
            goto LABEL_19;
          v18 = v34;
          if ( !v34 )
            goto LABEL_33;
          goto LABEL_43;
        }
        if ( *(_DWORD *)v11 == 875704369
          || *(_DWORD *)v11 == 942944306
          || *(_DWORD *)v11 == 725103153
          || *(_DWORD *)v11 == 724972850 )
        {
          goto LABEL_45;
        }
        v53 = v12;
        v18 = j__strlen("512+");
        if ( v18 == 4 )
          goto LABEL_43;
        v38 = j__strlen("1024+");
        v21 = v53;
        if ( v38 == 4 )
        {
          v20 = 4;
          v21 = 4;
LABEL_21:
          v44 = v21;
          v22 = memcmp(v11, "1024+", v20);
          v13 = v44;
          if ( !v22 )
            goto LABEL_45;
          goto LABEL_22;
        }
      }
      else
      {
        v14 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL);
        if ( !j__strlen("512+") )
          goto LABEL_33;
        v29 = j__strlen("1024+");
        v21 = 0;
        if ( !v29 )
          goto LABEL_33;
      }
LABEL_31:
      v49 = v21;
      v30 = j__strlen("2048+");
      v24 = v49;
      if ( v49 != v30 )
        goto LABEL_73;
      if ( !v49 )
        goto LABEL_33;
LABEL_78:
      v56 = v24;
      v41 = memcmp(v11, "2048+", v24);
      v13 = v56;
      if ( !v41 )
        goto LABEL_45;
LABEL_24:
      v46 = v13;
      v26 = j__strlen("scalable");
      v27 = v46;
      if ( v46 != v26 )
        goto LABEL_26;
      goto LABEL_25;
    }
  }
}
