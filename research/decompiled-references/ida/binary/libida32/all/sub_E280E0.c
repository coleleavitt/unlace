__int64 __fastcall sub_E280E0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
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
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // r8
  __int64 v32; // r15
  __int64 v33; // rdi
  _BYTE *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r13
  unsigned __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdi
  unsigned __int64 *v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rsi
  __int64 v48; // r13
  unsigned __int8 v49; // al
  __int64 v50; // rdi
  int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // r8
  __int64 v56; // rax
  unsigned __int64 v57; // rsi
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int16 *v60; // rbp
  __int64 v61; // rdi
  _BYTE *v62; // rax
  int v63; // eax
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rdi
  size_t v67; // rax
  unsigned int v68; // [rsp+8h] [rbp-40h]
  char v69; // [rsp+Fh] [rbp-39h]

  v68 = *(_DWORD *)(a1 + 44);
  v9 = (v68 & 0xFFFFFFFE) + 2;
  if ( !(_BYTE)a3 )
  {
    *(_DWORD *)(a1 + 44) = v9;
    goto LABEL_3;
  }
  *(_DWORD *)(a1 + 44) = v9 | 1;
  if ( (*(_BYTE *)(a2 + 21) & 2) != 0 && !a4 )
  {
    v67 = j__strlen("ns_returns_retained");
    sub_E15850(*(_QWORD *)(a1 + 8), "ns_returns_retained", v67);
  }
  v57 = *(_QWORD *)(a2 + 24);
  v58 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL;
  v59 = *(_QWORD *)&byte_8[v58];
  if ( (v59 & 8) == 0 )
    goto LABEL_63;
  a3 = v57 & 7;
  if ( (*(_WORD *)((_BYTE *)&qword_18 + (v59 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
    goto LABEL_63;
  if ( (v57 & 8) != 0 )
  {
    v64 = *(_QWORD *)v58;
    v65 = a3 | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL));
    v66 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    a3 = v65 & 0xFFFFFFFFFFFFFE3FLL;
    if ( (v65 & 0xFFFFFFFFFFFFFE38LL) == 0 )
    {
      v58 = v64 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_71;
    }
    v57 = sub_A4CF00(v66, v64, a3);
LABEL_63:
    sub_E1BE40(a1, v57, a3, v58, a5);
    *(_DWORD *)(a1 + 44) &= ~1u;
    goto LABEL_3;
  }
LABEL_71:
  sub_E1BE40(a1, a3 | v58, a3, a3 | v58, a5);
  *(_DWORD *)(a1 + 44) &= ~1u;
LABEL_3:
  v10 = *(unsigned __int16 *)(a2 + 22);
  if ( *(_WORD *)(a2 + 22) )
  {
    v32 = 0;
LABEL_27:
    while ( 1 )
    {
      v35 = *(_QWORD *)(a2 + 16);
      if ( (v35 & 0x20000000) != 0 )
        break;
      v36 = 8 * v32;
      v37 = sub_A52120(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *(_QWORD *)(a2 + 8 * v32 + 48));
      sub_E1BE40(a1, v37, v53, v54, v55);
      if ( a4 )
      {
LABEL_30:
        v43 = *(_QWORD *)(*(_QWORD *)(a4 + 120) + v36);
        if ( (*(_BYTE *)(v43 + 29) & 1) == 0 )
          goto LABEL_21;
        v44 = sub_B68690(v43, v37, v41, v42, a5, a6);
        v45 = *v44;
        v46 = *v44 + 8LL * *((unsigned int *)v44 + 2);
        if ( v45 >= v46 )
        {
          if ( v45 == v46 )
            goto LABEL_21;
          while ( *(_WORD *)(*(_QWORD *)v46 + 36LL) != 102 )
          {
            v46 += 8LL;
            if ( v45 == v46 )
            {
              if ( v10 != (_DWORD)++v32 )
                goto LABEL_27;
              goto LABEL_22;
            }
          }
LABEL_38:
          while ( 1 )
          {
            v48 = *(_QWORD *)v45;
            if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) == 102 )
              break;
            v45 += 8LL;
          }
          if ( (*(_BYTE *)(v48 + 34) & 0xF0) != 0xF0 )
          {
            v49 = *(_BYTE *)(v48 + 34) >> 4;
            v50 = *(_QWORD *)(a1 + 8);
            v51 = v49;
            if ( v49 == 3 )
              goto LABEL_52;
            goto LABEL_41;
          }
          if ( (unsigned int)sub_F83A90(v48) == 3 )
            goto LABEL_51;
          if ( (*(_BYTE *)(v48 + 34) & 0xF0) == 0xF0 )
          {
            if ( (unsigned int)sub_F83A90(v48) == 4 )
            {
LABEL_51:
              v50 = *(_QWORD *)(a1 + 8);
              goto LABEL_52;
            }
            if ( (*(_BYTE *)(v48 + 34) & 0xF0) == 0xF0 )
            {
              v63 = sub_F83A90(v48);
              v50 = *(_QWORD *)(a1 + 8);
              v51 = v63;
            }
            else
            {
              v50 = *(_QWORD *)(a1 + 8);
              v51 = *(_BYTE *)(v48 + 34) >> 4;
            }
LABEL_42:
            if ( v51 == 5 )
              goto LABEL_52;
            ++v32;
            v52 = sub_971800(v50, "U17pass_object_size");
            sub_2257BF0(v52, *(int *)(v48 + 40));
            if ( v10 == (_DWORD)v32 )
              goto LABEL_22;
          }
          else
          {
            v49 = *(_BYTE *)(v48 + 34) >> 4;
            v50 = *(_QWORD *)(a1 + 8);
            v51 = v49;
LABEL_41:
            if ( v49 != 4 )
              goto LABEL_42;
LABEL_52:
            ++v32;
            v56 = sub_971800(v50, "U25pass_dynamic_object_size");
            sub_2257BF0(v56, *(int *)(v48 + 40));
            if ( v10 == (_DWORD)v32 )
            {
LABEL_22:
              v11 = *(_QWORD *)(a2 + 16);
              goto LABEL_23;
            }
          }
        }
        else
        {
          v47 = v45;
          while ( *(_WORD *)(*(_QWORD *)v47 + 36LL) != 102 )
          {
            v47 += 8LL;
            if ( v46 == v47 )
              goto LABEL_21;
          }
          if ( v46 != v47 )
            goto LABEL_38;
LABEL_21:
          if ( v10 == (_DWORD)++v32 )
            goto LABEL_22;
        }
      }
      else if ( v10 == (_DWORD)++v32 )
      {
        goto LABEL_22;
      }
    }
    if ( !a4 )
    {
      v16 = 8LL * *(unsigned __int16 *)(a2 + 22) + 48;
      v17 = (v35 & 0x40000000) != 0;
      v18 = *(_BYTE *)(a2 + 19);
      if ( (v18 & 0x40) != 0 )
        v17 += (*(_BYTE *)(((a2 + v16 + ((v18 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v19 = ((a2 + v16 + ((SBYTE3(v35) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v17;
      v20 = ((unsigned __int8)v18 >> 1) & 0xF;
      if ( v20 != 2 )
        __asm { jmp     rax }
      v21 = v19 + 8LL * (*(_WORD *)((a2 + ((SBYTE3(v35) >> 5) & 4) + v16 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
      v22 = *(_BYTE *)(v21 + v32) & 0xF;
      v23 = *(_BYTE *)(v21 + v32) & 0x10;
      v69 = *(_BYTE *)(v21 + v32) & 0x40;
      if ( v22 && v22 <= 6u )
      {
        v24 = (const void *)sub_F4D200(v22);
        sub_E15850(*(_QWORD *)(a1 + 8), v24, v25);
      }
      if ( v23 )
      {
        v26 = j__strlen("ns_consumed");
        sub_E15850(*(_QWORD *)(a1 + 8), "ns_consumed", v26);
      }
      if ( v69 )
      {
        v27 = j__strlen("noescape");
        sub_E15850(*(_QWORD *)(a1 + 8), "noescape", v27);
      }
      v28 = sub_A52120(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *(_QWORD *)(a2 + 8 * v32 + 48));
      sub_E1BE40(a1, v28, v29, v30, v31);
      goto LABEL_21;
    }
    v36 = 8 * v32;
    v37 = sub_A52120(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *(_QWORD *)(a2 + 8 * v32 + 48));
    sub_E1BE40(a1, v37, v38, v39, v40);
    goto LABEL_30;
  }
  v11 = *(_QWORD *)(a2 + 16);
  if ( (v11 & 0x80000000LL) != 0 )
  {
LABEL_23:
    if ( (v11 & 0x80000000LL) != 0 )
    {
      v33 = *(_QWORD *)(a1 + 8);
      v34 = *(_BYTE **)(v33 + 32);
      if ( (unsigned __int64)v34 >= *(_QWORD *)(v33 + 24) )
      {
        sub_2257CD0(v33, 122);
      }
      else
      {
        *(_QWORD *)(v33 + 32) = v34 + 1;
        *v34 = 122;
      }
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(_BYTE **)(v12 + 32);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
    {
      sub_2257CD0(v12, 118);
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
      v60 = *(unsigned __int16 **)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      if ( v60 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 2320LL) + 212LL) > 0x9Fu )
        {
          v61 = *(_QWORD *)(a1 + 8);
          v62 = *(_BYTE **)(v61 + 32);
          if ( (unsigned __int64)v62 >= *(_QWORD *)(v61 + 24) )
          {
            sub_2257CD0(v61, 81);
          }
          else
          {
            *(_QWORD *)(v61 + 32) = v62 + 1;
            *v62 = 81;
          }
          sub_E24970(a1, v60, (unsigned __int16 *)0xFFFFFFFFLL, 0, a5, a6);
        }
      }
    }
  }
  *(_DWORD *)(a1 + 44) = v68;
  return v68;
}

