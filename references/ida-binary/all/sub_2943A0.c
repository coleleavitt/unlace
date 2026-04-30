unsigned __int64 __fastcall sub_2943A0(int *a1, int a2, char a3)
{
  _QWORD *v4; // rax
  __int64 (__fastcall *v5)(__int64); // rdx
  int v6; // ebp
  __int64 (__fastcall *v7)(__int64, int, int); // rcx
  __int64 v8; // r13
  unsigned int v9; // ebp
  __int64 (__fastcall *v10)(__int64, int, int); // rcx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rsi
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  __int64 v17; // rsi
  __int64 v18; // r14
  unsigned __int64 v19; // rsi
  __int64 v20; // r9
  unsigned __int64 *v21; // rcx
  __int64 v22; // rdx
  char *v23; // rax
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r15
  char *v28; // rsi
  int *v29; // r12
  int v30; // r8d
  int v31; // edi
  int v32; // ecx
  __int64 v33; // r15
  __int64 v34; // r10
  unsigned __int64 v35; // rax
  int *v36; // r15
  char *v37; // rcx
  int v38; // r8d
  int v39; // edi
  int v40; // r10d
  __int64 v41; // r12
  __int64 v42; // r11
  __int64 v43; // r10
  unsigned __int64 v44; // rdx
  size_t v45; // rax
  unsigned __int64 v46; // rax
  void *v47; // rax
  __int64 (__fastcall *v48)(__int64); // rdx
  __int64 (__fastcall *v49)(__int64, __int64); // rax
  __int64 v51; // [rsp+0h] [rbp-98h]
  unsigned int v52; // [rsp+Ch] [rbp-8Ch]
  char *n; // [rsp+18h] [rbp-80h]
  size_t na; // [rsp+18h] [rbp-80h]
  size_t nb; // [rsp+18h] [rbp-80h]
  __int64 v58; // [rsp+20h] [rbp-78h]
  __int64 v59; // [rsp+20h] [rbp-78h]
  _QWORD *v60; // [rsp+20h] [rbp-78h]
  __int64 v61; // [rsp+20h] [rbp-78h]
  __int64 v62; // [rsp+28h] [rbp-70h]
  __int64 v63; // [rsp+28h] [rbp-70h]
  __int64 v64; // [rsp+28h] [rbp-70h]
  __int64 v65; // [rsp+30h] [rbp-68h] BYREF
  __int64 v66; // [rsp+38h] [rbp-60h]
  void *src; // [rsp+40h] [rbp-58h] BYREF
  __int128 v68; // [rsp+48h] [rbp-50h]
  unsigned __int64 v69; // [rsp+58h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  while ( 1 )
  {
    v4 = *(_QWORD **)a1;
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v5 != interactive_graph_t__::vfunc_7 )
      break;
    v6 = *((_QWORD *)a1 + 23);
    if ( a2 >= v6 )
      return v69 - __readfsqword(0x28u);
LABEL_4:
    v7 = (__int64 (__fastcall *)(__int64, int, int))v4[14];
    v8 = (unsigned int)(v6 - 1);
    v9 = v6 - 2;
    if ( v7 == interactive_graph_t__::vfunc_14 )
    {
      LODWORD(v51) = **(_DWORD **)(*((_QWORD *)a1 + 22) + 24LL * (int)v9);
    }
    else
    {
      LODWORD(v51) = v7((__int64)a1, v9, 0);
      v4 = *(_QWORD **)a1;
    }
    v10 = (__int64 (__fastcall *)(__int64, int, int))v4[15];
    if ( v10 == interactive_graph_t__::vfunc_15 )
    {
      v52 = **(_DWORD **)(*((_QWORD *)a1 + 25) + 24LL * (int)v8);
    }
    else
    {
      v52 = v10((__int64)a1, v8, 0);
      v4 = *(_QWORD **)a1;
    }
    v11 = (__int64 (__fastcall *)(__int64, __int64))v4[20];
    v12 = v9 | (unsigned __int64)(v8 << 32);
    if ( v11 == interactive_graph_t__::vfunc_20 )
      v13 = (_QWORD *)interactive_graph_t__::vfunc_20((__int64)a1, v12);
    else
      v13 = (_QWORD *)v11((__int64)a1, v12);
    v65 = *v13;
    v14 = v13[1];
    v68 = 0;
    v15 = v13[3];
    v66 = v14;
    src = nullptr;
    if ( v15 )
    {
      v60 = v13;
      v47 = (void *)qalloc_or_throw(8 * v15);
      *((_QWORD *)&v68 + 1) = v15;
      src = v47;
      memcpy(v47, (const void *)v60[2], 8 * v15);
      *(_QWORD *)&v68 = v15;
    }
    if ( !a3 )
    {
      v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL);
      v17 = (v51 << 32) | v9;
      if ( v16 == interactive_graph_t__::vfunc_20 )
      {
        v18 = interactive_graph_t__::vfunc_20((__int64)a1, v17);
        v19 = ((unsigned __int64)(unsigned int)v8 << 32) | v52;
        goto LABEL_15;
      }
      v18 = v16((__int64)a1, v17);
      v49 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL);
      v19 = ((unsigned __int64)(unsigned int)v8 << 32) | v52;
      if ( v49 == interactive_graph_t__::vfunc_20 )
LABEL_15:
        v20 = interactive_graph_t__::vfunc_20((__int64)a1, v19);
      else
        v20 = v49((__int64)a1, v19);
      v21 = (unsigned __int64 *)src;
      v22 = v68;
      v23 = (char *)src + 8 * v68;
      if ( src != v23 )
      {
        v24 = (unsigned __int64 *)(v23 - 8);
        if ( src < v24 )
        {
          do
          {
            v25 = *v21;
            v19 = *v24;
            ++v21;
            --v24;
            *(v21 - 1) = v19;
            v24[1] = v25;
          }
          while ( v21 < v24 );
          v22 = v68;
        }
      }
      v26 = *(_QWORD *)(v18 + 24);
      v27 = *(_QWORD *)(v20 + 24);
      if ( (int)v22 <= 1
        || (v21 = (unsigned __int64 *)(((unsigned int)v26 | (unsigned int)v27) & 0xFFFFFFFD),
            (((unsigned int)v26 | (unsigned int)v27) & 0xFFFFFFFD) != 0) )
      {
        if ( !under_debugger )
          interr(40147, v19, v22, v21, 0.0);
        BUG();
      }
      v28 = (char *)src;
      if ( v27 )
      {
        v29 = *(int **)(v20 + 16);
        v30 = *((_DWORD *)src + 2);
        v31 = v29[2];
        v32 = *v29;
        if ( *(_DWORD *)src > v30 )
        {
          if ( v31 <= v32 )
            goto LABEL_26;
          goto LABEL_54;
        }
        if ( *(_DWORD *)src >= v30 )
        {
          if ( v31 != v32 )
          {
LABEL_26:
            v33 = 8 * v27;
            v34 = v33 >> 3;
            if ( v33 >> 3 )
            {
              if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v34 + v22) )
              {
                na = v20;
                src = (void *)qvector_reserve(&src, src, v34 + v22, 8);
                v22 = v68;
                v28 = (char *)src;
                v34 = v33 >> 3;
                v20 = na;
              }
              v62 = v34;
              v58 = v20;
              memmove(&v28[v33], v28, 8 * v22);
              v35 = 0;
              v20 = v58;
              if ( v33 )
              {
                do
                {
                  *(_QWORD *)&v28[v35] = *(_QWORD *)&v29[v35 / 4];
                  v35 += 8LL;
                }
                while ( v33 != v35 );
              }
              v28 = (char *)src;
              v22 = v62 + v68;
              *(_QWORD *)&v68 = v62 + v68;
              v26 = *(_QWORD *)(v18 + 24);
            }
            goto LABEL_32;
          }
LABEL_54:
          *(_DWORD *)src = v32;
          v22 = v68;
          v26 = *(_QWORD *)(v18 + 24);
          v28 = (char *)src;
          goto LABEL_32;
        }
        if ( v31 >= v32 )
          goto LABEL_26;
        *(_DWORD *)src = v32;
        v22 = v68;
        v26 = *(_QWORD *)(v18 + 24);
        v28 = (char *)src;
      }
LABEL_32:
      if ( v26 )
      {
        v36 = *(int **)(v18 + 16);
        v37 = &v28[8 * v22 - 8];
        v38 = *(_DWORD *)&v28[8 * v22 - 16];
        v39 = v36[2];
        v40 = *v36;
        if ( *(_DWORD *)v37 < v38 )
        {
          if ( v39 <= v40 )
            goto LABEL_36;
          goto LABEL_52;
        }
        if ( *(_DWORD *)v37 > v38 )
        {
          if ( v39 >= v40 )
            goto LABEL_36;
          *(_DWORD *)v37 = v39;
        }
        else
        {
          if ( v39 != v40 )
          {
LABEL_36:
            v41 = 8 * v26;
            v42 = 8 * v22;
            v43 = (8 * v26) >> 3;
            if ( v43 )
            {
              v44 = v43 + v22;
              v45 = 0;
              if ( *((_QWORD *)&v68 + 1) < v44 )
              {
                v64 = v43;
                v61 = v42;
                nb = v20;
                src = (void *)qvector_reserve(&src, v28, v44, 8);
                v28 = (char *)src;
                v42 = v61;
                v43 = v64;
                v20 = nb;
                v45 = 8 * v68 - v61;
              }
              v63 = v43;
              v59 = v20;
              n = &v28[v42];
              memmove(&n[v41], n, v45);
              v46 = 0;
              v20 = v59;
              if ( v41 )
              {
                do
                {
                  *(_QWORD *)&n[v46] = *(_QWORD *)&v36[v46 / 4];
                  v46 += 8LL;
                }
                while ( v41 != v46 );
              }
              *(_QWORD *)&v68 = v63 + v68;
            }
            goto LABEL_42;
          }
LABEL_52:
          *(_DWORD *)v37 = v39;
        }
      }
LABEL_42:
      HIDWORD(v66) = *(_DWORD *)(v18 + 12);
      LODWORD(v66) = *(_DWORD *)(v20 + 8);
    }
    (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 200LL))(a1, v9);
    (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 200LL))(a1, (unsigned int)v8);
    (*(void (__fastcall **)(int *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)a1 + 208LL))(a1, v52, (unsigned int)v51, &v65);
    if ( src )
    {
      *(_QWORD *)&v68 = 0;
      qfree(src, (const char *)v52);
    }
  }
  if ( a2 < (int)v5((__int64)a1) )
  {
    v4 = *(_QWORD **)a1;
    v48 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v48 == interactive_graph_t__::vfunc_7 )
    {
      v6 = a1[46];
    }
    else
    {
      v6 = v48((__int64)a1);
      v4 = *(_QWORD **)a1;
    }
    goto LABEL_4;
  }
  return v69 - __readfsqword(0x28u);
}
