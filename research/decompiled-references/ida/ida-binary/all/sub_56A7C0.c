__int64 __fastcall sub_56A7C0(__int64 a1, __int64 a2, FILE *a3)
{
  __int64 v4; // rbp
  unsigned int v5; // eax
  unsigned int i; // ebx
  int v7; // ecx
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // r14d
  char *v13; // rdi
  char *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r12
  _DWORD *v18; // rax
  __int64 v19; // rdx
  int v20; // r8d
  unsigned int v21; // edx
  unsigned int v22; // esi
  unsigned int v23; // ebp
  unsigned int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // r14d
  __int64 v28; // rax
  FILE *v29; // r13
  unsigned int v30; // ecx
  unsigned int v31; // ebx
  char v32; // si
  const __m128i *v33; // rax
  __m128i v34; // xmm2
  __int32 v35; // edx
  __int64 v36; // r15
  _QWORD *v37; // rax
  __int64 v39; // rcx
  bool v40; // dl
  int v41; // r14d
  __int64 v42; // r12
  __int64 v43; // r15
  char v44; // bp
  unsigned __int64 v45; // rbx
  unsigned __int16 v46; // si
  char *v47; // rbp
  char v48; // al
  int v49; // ecx
  int v50; // edx
  __m128i *v51; // rax
  unsigned int v52; // edx
  unsigned int v53; // ebp
  char *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // ecx
  char *v58; // rdi
  unsigned int v59; // edx
  unsigned int v60; // ebx
  __m128i v61; // xmm1
  __int64 v62; // rcx
  __int64 v63; // [rsp+0h] [rbp-98h]
  unsigned int v64; // [rsp+0h] [rbp-98h]
  __int64 v65; // [rsp+8h] [rbp-90h]
  char v66; // [rsp+8h] [rbp-90h]
  __int64 v68; // [rsp+18h] [rbp-80h]
  __int32 v70; // [rsp+2Ch] [rbp-6Ch]
  __m128i v71; // [rsp+30h] [rbp-68h] BYREF
  __int64 v72; // [rsp+40h] [rbp-58h]
  __int8 v73; // [rsp+4Bh] [rbp-4Dh]
  unsigned int v74; // [rsp+4Ch] [rbp-4Ch]
  char *v75; // [rsp+50h] [rbp-48h]
  unsigned int v76; // [rsp+58h] [rbp-40h]
  unsigned int v77; // [rsp+5Ch] [rbp-3Ch]

  if ( *(_DWORD *)(a1 + 44) <= 0x1Fu )
    sub_55D020(a1 + 32, 32, 0x20u);
  if ( !a3 )
    a3 = stderr;
  fwrite("digraph stack {\n", 1u, 0x10u, a3);
  fwrite("rankdir=\"RL\";\n", 1u, 0xEu, a3);
  fwrite("edge [arrowhead=none]\n", 1u, 0x16u, a3);
  v4 = a1;
  v5 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 40) = 0;
  if ( v5 )
  {
    for ( i = 0; i < v5; ++i )
    {
      v16 = 48LL * i;
      v17 = v16 + *(_QWORD *)v4;
      if ( *(_DWORD *)(v17 + 40) != 2 )
      {
        fprintf(a3, "node_head_%u [shape=none, label=\"\"]\n", i);
        fprintf(a3, "node_head_%u -> node_%p [", i, *(const void **)v17);
        if ( *(_DWORD *)(v17 + 40) == 1 )
          fwrite("color=red ", 1u, 0xAu, a3);
        if ( i >= *(_DWORD *)(v4 + 8) )
          __assert_fail(
            "(uint32_t)(version) < (&self->heads)->size",
            "lib/src/./stack.c",
            0x1EEu,
            "ts_stack_error_cost");
        v18 = (_DWORD *)(v16 + *(_QWORD *)v4);
        v19 = *(_QWORD *)v18;
        v20 = *(_DWORD *)(*(_QWORD *)v18 + 216LL);
        if ( v18[10] == 1 || !*(_WORD *)v19 && !*(_QWORD *)(v19 + 24) )
          v20 += 500;
        v21 = *(_DWORD *)(v19 + 220);
        v22 = v18[4];
        if ( v21 >= v22 )
        {
          v7 = v21 - v22;
        }
        else
        {
          v18[4] = v21;
          v7 = 0;
        }
        fprintf(a3, "label=%u, fontcolor=blue, weight=10000, labeltooltip=\"node_count: %u\nerror_cost: %u", i, v7, v20);
        if ( *(_QWORD *)(v17 + 8) )
        {
          fwrite("\nsummary:", 1u, 9u, a3);
          v26 = *(_QWORD *)(v17 + 8);
          if ( *(_DWORD *)(v26 + 8) )
          {
            v27 = 0;
            do
            {
              v28 = v27++;
              fprintf(a3, " %u", *(unsigned __int16 *)(*(_QWORD *)v26 + 20 * v28 + 16));
              v26 = *(_QWORD *)(v17 + 8);
            }
            while ( v27 < *(_DWORD *)(v26 + 8) );
          }
        }
        v8 = *(_QWORD *)(v17 + 24);
        if ( v8 )
        {
          v63 = v8 + 48;
          if ( *(_DWORD *)(v8 + 72) > 0x18u )
            v63 = *(_QWORD *)(v8 + 48);
          fwrite("\nexternal_scanner_state:", 1u, 0x18u, a3);
          if ( *(_DWORD *)(v8 + 72) )
          {
            v65 = v4;
            v23 = i;
            v24 = 0;
            do
            {
              v25 = v24++;
              fprintf(a3, " %2X", *(char *)(v63 + v25));
            }
            while ( v24 < *(_DWORD *)(v8 + 72) );
            i = v23;
            v4 = v65;
          }
        }
        fwrite("\"]\n", 1u, 3u, a3);
        v9 = *(unsigned int *)(v4 + 40);
        v10 = *(_DWORD *)(v4 + 44);
        v11 = v9 + 1;
        if ( v10 >= (int)v9 + 1 )
        {
          v13 = *(char **)(v4 + 32);
        }
        else
        {
          v12 = 2 * v10;
          v13 = *(char **)(v4 + 32);
          if ( 2 * v10 < v11 )
            v12 = v9 + 1;
          if ( v12 < 8 )
            v12 = 8;
          if ( v10 < v12 )
          {
            if ( v13 )
              v13 = (char *)off_8C52A8(v13, 32LL * v12);
            else
              v13 = (char *)off_8C52B8(32LL * v12);
            v9 = *(unsigned int *)(v4 + 40);
            *(_QWORD *)(v4 + 32) = v13;
            *(_DWORD *)(v4 + 44) = v12;
            v11 = v9 + 1;
          }
        }
        *(_DWORD *)(v4 + 40) = v11;
        v14 = &v13[32 * v9];
        v15 = *(_QWORD *)v17;
        *(_OWORD *)v14 = 0;
        *(_QWORD *)v14 = v15;
        v5 = *(_DWORD *)(v4 + 8);
        *((_OWORD *)v14 + 1) = 0;
      }
    }
    v29 = a3;
    v76 = 0;
    v74 = 0;
    v75 = nullptr;
    v30 = *(_DWORD *)(a1 + 40);
    while ( v30 )
    {
      v31 = 0;
      v32 = 1;
      do
      {
        while ( 1 )
        {
          v68 = 32LL * v31;
          v33 = (const __m128i *)(*(_QWORD *)(a1 + 32) + v68);
          v34 = _mm_loadu_si128(v33);
          v72 = v33[1].m128i_i64[0];
          v35 = v33[1].m128i_i32[2];
          v36 = v34.m128i_i64[0];
          LOBYTE(v33) = v33[1].m128i_i8[12];
          v71 = v34;
          v70 = v35;
          v73 = (char)v33;
          if ( v74 )
          {
            v37 = v75;
            while ( *v37 != v34.m128i_i64[0] )
            {
              if ( &v75[8 * v74] == (char *)++v37 )
                goto LABEL_54;
            }
            goto LABEL_49;
          }
LABEL_54:
          if ( v34.m128i_i64[0] )
            break;
LABEL_49:
          if ( ++v31 >= v30 )
            goto LABEL_50;
        }
        fprintf(v29, "node_%p [", (const void *)v34.m128i_i64[0]);
        if ( *(_WORD *)v34.m128i_i64[0] )
        {
          if ( *(_WORD *)(v34.m128i_i64[0] + 208) != 1 )
            goto LABEL_61;
          v39 = *(_QWORD *)(v34.m128i_i64[0] + 24);
          if ( !v39 )
            goto LABEL_61;
          v40 = (*(_BYTE *)(v34.m128i_i64[0] + 24) & 8) != 0;
          if ( (v39 & 1) == 0 )
            v40 = (*(_BYTE *)(v39 + 44) & 4) != 0;
          if ( v40 )
            fwrite("shape=point margin=0 label=\"\"", 1u, 0x1Du, v29);
          else
LABEL_61:
            fprintf(v29, "label=\"%d\"", *(unsigned __int16 *)v34.m128i_i64[0]);
        }
        else
        {
          fwrite("label=\"?\"", 1u, 9u, v29);
        }
        v41 = 0;
        v42 = v34.m128i_i64[0] + 16;
        fprintf(
          v29,
          " tooltip=\"position: %u,%u\nnode_count:%u\nerror_cost: %u\ndynamic_precedence: %d\"];\n",
          *(_DWORD *)(v34.m128i_i64[0] + 8) + 1,
          *(_DWORD *)(v34.m128i_i64[0] + 12),
          *(_DWORD *)(v34.m128i_i64[0] + 220),
          *(_DWORD *)(v34.m128i_i64[0] + 216),
          *(_DWORD *)(v34.m128i_i64[0] + 224));
        if ( *(_WORD *)(v34.m128i_i64[0] + 208) )
        {
          v77 = v31;
          while ( 1 )
          {
            v43 = *(_QWORD *)v42;
            v44 = *(_BYTE *)(v42 + 16);
            v45 = *(_QWORD *)(v42 + 8);
            fprintf(v29, "node_%p -> node_%p [", (const void *)v34.m128i_i64[0], *(const void **)v42);
            if ( v44 )
            {
              fwrite("style=dashed ", 1u, 0xDu, v29);
              if ( v45 )
              {
LABEL_66:
                if ( (v45 & 1) != 0 )
                {
                  if ( (v45 & 8) != 0 )
                    fwrite("fontcolor=gray ", 1u, 0xFu, v29);
                  fwrite("label=\"", 1u, 7u, v29);
                  v66 = (v45 & 2) != 0;
                  if ( (v45 & 2) != 0 && (v45 & 4) == 0 )
                    fputc(39, v29);
                  else
                    v66 = 0;
                  v46 = BYTE1(v45);
                }
                else
                {
                  if ( (*(_BYTE *)(v45 + 44) & 4) != 0 )
                    fwrite("fontcolor=gray ", 1u, 0xFu, v29);
                  fwrite("label=\"", 1u, 7u, v29);
                  v66 = *(_BYTE *)(v45 + 44) & 1;
                  if ( v66 && (*(_BYTE *)(v45 + 44) & 2) == 0 )
                    fputc(39, v29);
                  else
                    v66 = 0;
                  v46 = *(_WORD *)(v45 + 40);
                }
                v47 = sub_563060(a2, v46);
                v48 = *v47;
                if ( !*v47 )
                {
LABEL_83:
                  if ( v66 )
                    fputc(39, v29);
                  fputc(34, v29);
                  if ( (v45 & 1) != 0 )
                  {
                    v49 = 0;
                    v50 = ((int)((unsigned int)(v45 >> 5) << 31) >> 31) & 0x262;
                  }
                  else
                  {
                    v49 = 0;
                    if ( *(_DWORD *)(v45 + 36) )
                      v49 = *(_DWORD *)(v45 + 60);
                    v50 = 610;
                    if ( (*(_BYTE *)(v45 + 45) & 2) == 0 )
                      v50 = *(_DWORD *)(v45 + 32);
                  }
                  fprintf(v29, "labeltooltip=\"error_cost: %u\ndynamic_precedence: %d\"", v50, v49);
                  goto LABEL_88;
                }
                while ( v48 != 10 )
                {
                  if ( v48 <= 10 )
                  {
                    if ( v48 == 9 )
                      fwrite("\\t", 1u, 2u, v29);
                    else
LABEL_104:
                      fputc(v48, v29);
LABEL_77:
                    v48 = *++v47;
                    if ( !v48 )
                      goto LABEL_83;
                    continue;
                  }
                  if ( v48 != 34 && v48 != 92 )
                    goto LABEL_104;
                  ++v47;
                  fputc(92, v29);
                  fputc(*(v47 - 1), v29);
                  v48 = *v47;
                  if ( !*v47 )
                    goto LABEL_83;
                }
                fwrite("\\n", 1u, 2u, v29);
                goto LABEL_77;
              }
            }
            else if ( v45 )
            {
              goto LABEL_66;
            }
            fwrite("color=red", 1u, 9u, v29);
LABEL_88:
            fwrite("];\n", 1u, 3u, v29);
            if ( v41 )
            {
              v56 = *(unsigned int *)(a1 + 40);
              v57 = *(_DWORD *)(a1 + 44);
              v58 = *(char **)(a1 + 32);
              v59 = v56 + 1;
              if ( v57 < (int)v56 + 1 )
              {
                v60 = 2 * v57;
                if ( 2 * v57 < v59 )
                  v60 = v56 + 1;
                if ( v60 < 8 )
                  v60 = 8;
                if ( v57 < v60 )
                {
                  if ( v58 )
                    v58 = (char *)off_8C52A8(v58, 32LL * v60);
                  else
                    v58 = (char *)off_8C52B8(32LL * v60);
                  *(_QWORD *)(a1 + 32) = v58;
                  *(_DWORD *)(a1 + 44) = v60;
                  v56 = *(unsigned int *)(a1 + 40);
                  v59 = v56 + 1;
                }
              }
              v61 = _mm_load_si128(&v71);
              v51 = (__m128i *)&v58[32 * v56];
              *(_DWORD *)(a1 + 40) = v59;
              v62 = v72;
              *v51 = v61;
              v51[1].m128i_i64[0] = v62;
              v51[1].m128i_i32[2] = v70;
              v51[1].m128i_i8[12] = v73;
              if ( !v59 )
                __assert_fail(
                  "(uint32_t)((&self->iterators)->size - 1) < (&self->iterators)->size",
                  "lib/src/./stack.c",
                  0x380u,
                  "ts_stack_print_dot_graph");
            }
            else
            {
              v51 = (__m128i *)(*(_QWORD *)(a1 + 32) + v68);
            }
            v51->m128i_i64[0] = v43;
            ++v41;
            v42 += 24;
            if ( *(unsigned __int16 *)(v34.m128i_i64[0] + 208) <= v41 )
            {
              v31 = v77;
              v36 = v34.m128i_i64[0];
              break;
            }
          }
        }
        v52 = v74 + 1;
        if ( v76 < v74 + 1 )
        {
          v53 = 2 * v76;
          if ( 2 * v76 < v52 )
            v53 = v74 + 1;
          if ( v53 < 8 )
            v53 = 8;
          if ( v76 < v53 )
          {
            v64 = v74 + 1;
            if ( v75 )
              v54 = (char *)off_8C52A8(v75, 8LL * v53);
            else
              v54 = (char *)off_8C52B8(8LL * v53);
            v52 = v64;
            v75 = v54;
            v76 = v53;
          }
        }
        v55 = v74;
        ++v31;
        v74 = v52;
        v32 = 0;
        *(_QWORD *)&v75[8 * v55] = v36;
        v30 = *(_DWORD *)(a1 + 40);
      }
      while ( v31 < v30 );
LABEL_50:
      if ( v32 )
        break;
    }
    fwrite("}\n", 1u, 2u, v29);
    if ( v75 )
      off_8C52A0(v75);
  }
  else
  {
    fwrite("}\n", 1u, 2u, a3);
  }
  return 1;
}
