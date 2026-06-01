__int64 __fastcall sub_E4BE20(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // eax
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  char v18; // si
  unsigned __int64 v19; // r8
  char v20; // dl
  unsigned __int64 v21; // r8
  unsigned __int8 v22; // al
  char v23; // r13
  const void *v24; // rax
  size_t v25; // rdx
  size_t v26; // rax
  size_t v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rdi
  _BYTE *v31; // rax
  __int64 v32; // rax
  __int64 v33; // r13
  unsigned __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  unsigned __int64 *v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rsi
  __int64 v42; // r13
  unsigned __int8 v43; // al
  __int64 v44; // rdi
  int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int16 *v51; // rbp
  __int64 v52; // rdi
  _BYTE *v53; // rax
  unsigned __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdi
  size_t v59; // rax
  unsigned int v60; // [rsp+8h] [rbp-40h]
  char v61; // [rsp+Fh] [rbp-39h]

  v60 = *(_DWORD *)(a1 + 44);
  v9 = (v60 & 0xFFFFFFFE) + 2;
  if ( !a3 )
  {
    *(_DWORD *)(a1 + 44) = v9;
    goto LABEL_3;
  }
  *(_DWORD *)(a1 + 44) = v9 | 1;
  if ( (*(_BYTE *)(a2 + 21) & 2) != 0 && !a4 )
  {
    v59 = j__strlen("ns_returns_retained");
    sub_E39590(*(_QWORD *)(a1 + 8), "ns_returns_retained", v59);
  }
  v48 = *(_QWORD *)(a2 + 24);
  v49 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL;
  v50 = *(_QWORD *)&byte_8[v49];
  if ( (v50 & 8) == 0 )
    goto LABEL_63;
  v54 = v48 & 7;
  if ( (*(_WORD *)((_BYTE *)&qword_18 + (v50 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
    goto LABEL_63;
  if ( (v48 & 8) != 0 )
  {
    v56 = *(_QWORD *)v49;
    v57 = v54 | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL));
    v58 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    v54 = v57 & 0xFFFFFFFFFFFFFE3FLL;
    if ( (v57 & 0xFFFFFFFFFFFFFE38LL) == 0 )
    {
      v49 = v56 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_71;
    }
    v48 = sub_A70C40(v58, v56, v54);
LABEL_63:
    sub_E3FB80(a1, v48);
    *(_DWORD *)(a1 + 44) &= ~1u;
    goto LABEL_3;
  }
LABEL_71:
  sub_E3FB80(a1, v54 | v49);
  *(_DWORD *)(a1 + 44) &= ~1u;
LABEL_3:
  v10 = *(unsigned __int16 *)(a2 + 22);
  if ( *(_WORD *)(a2 + 22) )
  {
    v29 = 0;
LABEL_27:
    while ( 1 )
    {
      v32 = *(_QWORD *)(a2 + 16);
      if ( (v32 & 0x20000000) != 0 )
        break;
      v33 = 8 * v29;
      v34 = sub_A75E60(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *(_QWORD *)(a2 + 8 * v29 + 48));
      sub_E3FB80(a1, v34);
      if ( a4 )
      {
LABEL_30:
        v37 = *(_QWORD *)(*(_QWORD *)(a4 + 120) + v33);
        if ( (*(_BYTE *)(v37 + 29) & 1) == 0 )
          goto LABEL_21;
        v38 = sub_B8C3D0(v37, v34, v35, v36, a5, a6);
        v39 = *v38;
        v40 = *v38 + 8LL * *((unsigned int *)v38 + 2);
        if ( v39 >= v40 )
        {
          if ( v39 == v40 )
            goto LABEL_21;
          while ( *(_WORD *)(*(_QWORD *)v40 + 36LL) != 102 )
          {
            v40 += 8LL;
            if ( v39 == v40 )
            {
              if ( v10 != (_DWORD)++v29 )
                goto LABEL_27;
              goto LABEL_22;
            }
          }
LABEL_38:
          while ( 1 )
          {
            v42 = *(_QWORD *)v39;
            if ( *(_WORD *)(*(_QWORD *)v39 + 36LL) == 102 )
              break;
            v39 += 8LL;
          }
          if ( (*(_BYTE *)(v42 + 34) & 0xF0) != 0xF0 )
          {
            v43 = *(_BYTE *)(v42 + 34) >> 4;
            v44 = *(_QWORD *)(a1 + 8);
            v45 = v43;
            if ( v43 == 3 )
              goto LABEL_52;
            goto LABEL_41;
          }
          if ( (unsigned int)sub_FA77D0(v42) == 3 )
            goto LABEL_51;
          if ( (*(_BYTE *)(v42 + 34) & 0xF0) == 0xF0 )
          {
            if ( (unsigned int)sub_FA77D0(v42) == 4 )
            {
LABEL_51:
              v44 = *(_QWORD *)(a1 + 8);
              goto LABEL_52;
            }
            if ( (*(_BYTE *)(v42 + 34) & 0xF0) == 0xF0 )
            {
              v55 = sub_FA77D0(v42);
              v44 = *(_QWORD *)(a1 + 8);
              v45 = v55;
            }
            else
            {
              v44 = *(_QWORD *)(a1 + 8);
              v45 = *(_BYTE *)(v42 + 34) >> 4;
            }
LABEL_42:
            if ( v45 == 5 )
              goto LABEL_52;
            ++v29;
            v46 = sub_995540(v44, "U17pass_object_size");
            sub_227B930(v46, *(int *)(v42 + 40));
            if ( v10 == (_DWORD)v29 )
              goto LABEL_22;
          }
          else
          {
            v43 = *(_BYTE *)(v42 + 34) >> 4;
            v44 = *(_QWORD *)(a1 + 8);
            v45 = v43;
LABEL_41:
            if ( v43 != 4 )
              goto LABEL_42;
LABEL_52:
            ++v29;
            v47 = sub_995540(v44, "U25pass_dynamic_object_size");
            sub_227B930(v47, *(int *)(v42 + 40));
            if ( v10 == (_DWORD)v29 )
            {
LABEL_22:
              v11 = *(_QWORD *)(a2 + 16);
              goto LABEL_23;
            }
          }
        }
        else
        {
          v41 = v39;
          while ( *(_WORD *)(*(_QWORD *)v41 + 36LL) != 102 )
          {
            v41 += 8LL;
            if ( v40 == v41 )
              goto LABEL_21;
          }
          if ( v40 != v41 )
            goto LABEL_38;
LABEL_21:
          if ( v10 == (_DWORD)++v29 )
            goto LABEL_22;
        }
      }
      else if ( v10 == (_DWORD)++v29 )
      {
        goto LABEL_22;
      }
    }
    if ( !a4 )
    {
      v16 = 8LL * *(unsigned __int16 *)(a2 + 22) + 48;
      v17 = (v32 & 0x40000000) != 0;
      v18 = *(_BYTE *)(a2 + 19);
      if ( (v18 & 0x40) != 0 )
        v17 += (*(_BYTE *)(((a2 + v16 + ((v18 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v19 = ((a2 + v16 + ((SBYTE3(v32) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v17;
      v20 = ((unsigned __int8)v18 >> 1) & 0xF;
      if ( v20 != 2 )
        __asm { jmp     rax }
      v21 = v19 + 8LL * (*(_WORD *)((a2 + ((SBYTE3(v32) >> 5) & 4) + v16 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
      v22 = *(_BYTE *)(v21 + v29) & 0xF;
      v23 = *(_BYTE *)(v21 + v29) & 0x10;
      v61 = *(_BYTE *)(v21 + v29) & 0x40;
      if ( v22 && v22 <= 6u )
      {
        v24 = (const void *)sub_F70F40(v22);
        sub_E39590(*(_QWORD *)(a1 + 8), v24, v25);
      }
      if ( v23 )
      {
        v26 = j__strlen("ns_consumed");
        sub_E39590(*(_QWORD *)(a1 + 8), "ns_consumed", v26);
      }
      if ( v61 )
      {
        v27 = j__strlen("noescape");
        sub_E39590(*(_QWORD *)(a1 + 8), "noescape", v27);
      }
      v28 = sub_A75E60(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *(_QWORD *)(a2 + 8 * v29 + 48));
      sub_E3FB80(a1, v28);
      goto LABEL_21;
    }
    v33 = 8 * v29;
    v34 = sub_A75E60(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *(_QWORD *)(a2 + 8 * v29 + 48));
    sub_E3FB80(a1, v34);
    goto LABEL_30;
  }
  v11 = *(_QWORD *)(a2 + 16);
  if ( (v11 & 0x80000000LL) != 0 )
  {
LABEL_23:
    if ( (v11 & 0x80000000LL) != 0 )
    {
      v30 = *(_QWORD *)(a1 + 8);
      v31 = *(_BYTE **)(v30 + 32);
      if ( (unsigned __int64)v31 >= *(_QWORD *)(v30 + 24) )
      {
        sub_227BA10(v30, 122);
      }
      else
      {
        *(_QWORD *)(v30 + 32) = v31 + 1;
        *v31 = 122;
      }
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(_BYTE **)(v12 + 32);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
    {
      sub_227BA10(v12, 118);
    }
    else
    {
      *(_QWORD *)(v12 + 32) = v13 + 1;
      *v13 = 118;
    }
  }
  if ( a4 )
  {
    *(_DWORD *)(a1 + 44) |= 1u;
    v14 = *(_QWORD *)(a4 + 56);
    if ( (v14 & 4) != 0 )
    {
      v51 = *(unsigned __int16 **)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      if ( v51 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 2320LL) + 212LL) > 0x9Fu )
        {
          v52 = *(_QWORD *)(a1 + 8);
          v53 = *(_BYTE **)(v52 + 32);
          if ( (unsigned __int64)v53 >= *(_QWORD *)(v52 + 24) )
          {
            sub_227BA10(v52, 81);
          }
          else
          {
            *(_QWORD *)(v52 + 32) = v53 + 1;
            *v53 = 81;
          }
          sub_E486B0(a1, v51, (unsigned __int16 *)0xFFFFFFFFLL, 0, a5, a6);
        }
      }
    }
  }
  *(_DWORD *)(a1 + 44) = v60;
  return v60;
}
