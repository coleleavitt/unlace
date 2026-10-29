__int64 __fastcall sub_EECA80(__int64 *a1, char *a2, double a3)
{
  __int64 v3; // r13
  __int64 v5; // rdi
  _BYTE *v6; // rax
  char v7; // al
  bool v8; // r12
  __int64 v9; // rdi
  _BYTE *v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r14
  char *v13; // rsi
  size_t v14; // rdx
  unsigned __int64 v15; // r15
  char v16; // cl
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdi
  _BYTE *v24; // rax
  __int64 v25; // r12
  const char *v26; // rax
  size_t v27; // rdx
  __int64 v28; // rdi
  _BYTE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  _BYTE *v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 *i; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdi
  unsigned __int64 v44; // rdi
  _BYTE *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdi
  _BYTE *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  size_t v56; // rax
  __int64 v57; // rdi
  _BYTE *v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rsi
  char *v63; // [rsp+8h] [rbp-C0h]
  _QWORD *v64; // [rsp+8h] [rbp-C0h]
  size_t v65; // [rsp+10h] [rbp-B8h]
  __int64 *v66; // [rsp+10h] [rbp-B8h]
  size_t v67; // [rsp+18h] [rbp-B0h]
  __int64 v68; // [rsp+28h] [rbp-A0h]
  __int64 v69; // [rsp+38h] [rbp-90h] BYREF
  void *v70[2]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v71[16]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v72[4]; // [rsp+60h] [rbp-68h] BYREF
  __int16 v73; // [rsp+80h] [rbp-48h]

  v3 = (__int64)a2;
  v5 = *a1;
  v6 = *(_BYTE **)(v5 + 32);
  if ( *(_QWORD *)(v5 + 24) <= (unsigned __int64)v6 )
  {
    a2 = (_BYTE *)(&qword_58 + 3);
    sub_2257CD0(v5, 91);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v6 + 1;
    *v6 = 91;
  }
  v7 = (*(_BYTE *)(v3 + 2) >> 3) & 3;
  if ( v7 == 1 )
  {
    v57 = *a1;
    v58 = *(_BYTE **)(*a1 + 32);
    if ( *(_QWORD *)(*a1 + 24) <= (unsigned __int64)v58 )
    {
      a2 = (_BYTE *)(&word_3C + 1);
      v8 = 1;
      sub_2257CD0(v57, 61);
    }
    else
    {
      v8 = 1;
      *(_QWORD *)(v57 + 32) = v58 + 1;
      *v58 = 61;
    }
  }
  else
  {
    v8 = 0;
    if ( v7 == 2 )
    {
      v9 = *a1;
      v10 = *(_BYTE **)(*a1 + 32);
      if ( *(_QWORD *)(*a1 + 24) <= (unsigned __int64)v10 )
      {
        a2 = (_BYTE *)(&qword_20 + 6);
        v8 = 1;
        sub_2257CD0(v9, 38);
      }
      else
      {
        v8 = 1;
        *(_QWORD *)(v9 + 32) = v10 + 1;
        *v10 = 38;
      }
    }
  }
  v11 = sub_C714F0(v3);
  v12 = sub_C71560(v3);
  while ( v12 != v11 )
  {
    while ( (*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
LABEL_15:
      v11 += 16LL;
      if ( v12 == v11 )
        goto LABEL_30;
    }
    if ( v8 )
    {
      sub_971800(*a1, ", ");
      v22 = sub_C71100((__int64 *)v11);
      if ( v22 == 1 )
      {
LABEL_63:
        sub_971800(*a1, "*this");
        goto LABEL_26;
      }
    }
    else
    {
      v22 = sub_C71100((__int64 *)v11);
      if ( v22 == 1 )
        goto LABEL_63;
    }
    if ( v22 )
    {
      if ( v22 != 2 )
      {
        if ( v22 != 3 )
          goto LABEL_26;
        if ( ((*(_BYTE *)(v3 + 2) >> 3) & 3) != 2 || sub_C71270(v3, (_QWORD *)v11) )
        {
          v23 = *a1;
          v24 = *(_BYTE **)(*a1 + 32);
          if ( (unsigned __int64)v24 >= *(_QWORD *)(*a1 + 24) )
          {
            sub_2257CD0(v23, 38);
          }
          else
          {
            *(_QWORD *)(v23 + 32) = v24 + 1;
            *v24 = 38;
          }
        }
      }
      v25 = *a1;
      v26 = sub_971A10(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFF8LL);
      sub_9717A0(v25, v26, v27);
    }
    else
    {
      sub_971800(*a1, "this");
    }
LABEL_26:
    if ( *(_DWORD *)(v11 + 12) )
      sub_971800(*a1, "...");
    a2 = (char *)v11;
    v8 = sub_C71270(v3, (_QWORD *)v11);
    if ( v8 )
    {
      v63 = nullptr;
      v13 = nullptr;
      v14 = 0;
      v65 = 0;
      v15 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFF8LL;
      v16 = (*(_BYTE *)(v15 + 96) >> 5) & 3;
      if ( v16 == 1 )
      {
        if ( (*(_WORD *)sub_B4F900(v15) & 0x1FF) == 0x13 )
        {
          v14 = 0;
          v13 = nullptr;
          v16 = (*(_BYTE *)(v15 + 96) >> 5) & 3;
          goto LABEL_10;
        }
        v67 = j__strlen("(");
        v56 = j__strlen(")");
        v14 = v67;
        v13 = "(";
        v63 = ")";
        v65 = v56;
      }
      else
      {
LABEL_10:
        if ( !v16 )
        {
          v13 = " = ";
          v14 = j__strlen(" = ");
        }
      }
      sub_9717A0(*a1, v13, v14);
      v17 = (char *)sub_B4F900(v15);
      if ( v17 )
        sub_EE16F0(a1, v17, v18, v19, v20, v21, a3);
      else
        sub_EE0C80(a1);
      a2 = v63;
      sub_9717A0(*a1, v63, v65);
      goto LABEL_15;
    }
    v11 += 16LL;
    v8 = 1;
  }
LABEL_30:
  v28 = *a1;
  v29 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v29 >= *(_QWORD *)(*a1 + 24) )
  {
    a2 = (_BYTE *)(&qword_58 + 5);
    sub_2257CD0(v28, 93);
  }
  else
  {
    *(_QWORD *)(v28 + 32) = v29 + 1;
    *v29 = 93;
  }
  sub_C71640(v3);
  if ( v30 )
  {
    v59 = sub_C71620(v3);
    v60 = sub_C715F0(v3);
    v61 = sub_B685F0(v60);
    a2 = (char *)*a1;
    sub_B95CF0(v59, *a1, v61, 1);
  }
  v31 = *a1;
  v32 = *(_BYTE **)(*a1 + 32);
  v33 = *(_QWORD *)(*a1 + 24);
  if ( (*(_QWORD *)v3 & 0x200000LL) == 0 )
    goto LABEL_58;
  if ( (unsigned __int64)v32 >= v33 )
  {
    a2 = (char *)&qword_28;
    sub_2257CD0(v31, 40);
  }
  else
  {
    *(_QWORD *)(v31 + 32) = v32 + 1;
    *v32 = 40;
  }
  v34 = sub_C71600(v3);
  v35 = *(__int64 **)(v34 + 120);
  v68 = v34;
  v64 = a1 + 3;
  v66 = &v35[(unsigned int)sub_B52330(v34, (__int64)a2, v36, v37)];
  if ( v66 == v35 )
  {
    if ( sub_B50B60(v68, (__int64)a2, v38, (__int64)(a1 + 3)) )
      goto LABEL_85;
    goto LABEL_49;
  }
  v39 = *v35;
  for ( i = v35 + 1; ; ++i )
  {
    if ( (*((_BYTE *)a1 + 29) & 0x10) != 0
      && (v43 = *(_QWORD *)(v39 + 40), (v43 & 7) == 0)
      && (v44 = v43 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v45 = (_BYTE *)sub_FBA480(v44);
      v70[0] = v71;
      if ( v45 )
      {
        sub_EE0040(v70, v45, (__int64)&v45[v46]);
      }
      else
      {
        v70[1] = nullptr;
        v71[0] = 0;
      }
    }
    else
    {
      sub_B62CC0((__int64)v70, (__int64 *)(v39 + 40));
    }
    v47 = sub_B508C0(v39);
    a2 = (char *)*a1;
    v69 = v47;
    v73 = 260;
    v72[0] = v70;
    sub_F50AF0(&v69, a2, v64, v72, 0);
    if ( v70[0] == v71 )
      break;
    operator delete(v70[0]);
    if ( v66 == i )
      goto LABEL_48;
LABEL_40:
    v39 = *i;
    sub_971800(*a1, ", ");
  }
  if ( v66 != i )
    goto LABEL_40;
LABEL_48:
  if ( !sub_B50B60(v68, (__int64)a2, v41, v42) )
    goto LABEL_49;
  sub_971800(*a1, ", ");
LABEL_85:
  a2 = "...";
  sub_971800(*a1, "...");
LABEL_49:
  v48 = *a1;
  v49 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v49 >= *(_QWORD *)(*a1 + 24) )
  {
    a2 = (_BYTE *)(&qword_28 + 1);
    sub_2257CD0(v48, 41);
  }
  else
  {
    *(_QWORD *)(v48 + 32) = v49 + 1;
    *v49 = 41;
  }
  if ( sub_C716A0(v3, (__int64)a2) )
  {
    a2 = " mutable";
    sub_971800(*a1, " mutable");
  }
  v52 = (__int64 *)(*(_QWORD *)(v68 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v53 = *v52;
  if ( *(_BYTE *)(*v52 + 16) != 26 )
    v53 = sub_F3F310(*v52, a2, v50, v51);
  sub_F50B40(v53, *a1, v64);
  if ( (*(_QWORD *)v3 & 0x400000LL) != 0 )
  {
    sub_971800(*a1, " -> ");
    v62 = *a1;
    v70[0] = *(void **)(v53 + 24);
    v73 = 257;
    sub_F50AF0(v70, v62, v64, v72, 0);
  }
  v31 = *a1;
  v32 = *(_BYTE **)(*a1 + 32);
  v33 = *(_QWORD *)(*a1 + 24);
LABEL_58:
  if ( v33 <= (unsigned __int64)v32 )
  {
    sub_2257CD0(v31, 32);
  }
  else
  {
    *(_QWORD *)(v31 + 32) = v32 + 1;
    *v32 = 32;
  }
  if ( *((char *)a1 + 27) < 0 )
    return sub_971800(*a1, "{}");
  v54 = sub_C711C0(v3);
  return sub_EE8810(a1, v54, a3);
}

