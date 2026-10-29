void __fastcall sub_F11420(_QWORD *a1, __int64 *a2, double a3)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // r14
  int v9; // r12d
  int v10; // ebp
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  char *v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rdi
  _BYTE *v21; // rax
  _BOOL8 v22; // rdx
  char *v23; // rsi
  __int64 v24; // rdi
  _WORD *v25; // r12
  _BYTE *v26; // rax
  __int64 v27; // r13
  size_t v28; // rax
  _WORD *v29; // r12
  __int64 v30; // rdi
  __int16 v31; // ax
  _BYTE *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r13d
  int i; // r12d
  _BYTE *v37; // rax
  _BYTE *v38; // r15
  size_t v39; // r14
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  char *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  size_t v47; // [rsp+8h] [rbp-70h]
  __int64 v48; // [rsp+18h] [rbp-60h] BYREF
  void *v49; // [rsp+20h] [rbp-58h] BYREF
  size_t v50; // [rsp+28h] [rbp-50h]
  _QWORD v51[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *a1;
  if ( ((*((_BYTE *)a2 + 1) >> 1) & 7u) - 2 > 1 )
  {
    sub_995540(v5, "if (");
    v17 = *a2;
    if ( (*a2 & 0x4000) != 0 )
    {
      v18 = (char *)a2[2];
      if ( v18 )
      {
        if ( (v17 & 0x4000) == 0 )
          v18 = nullptr;
        sub_F0C1A0((__int64)a1, v18, 4, v14, v15, v16, a3);
        v17 = *a2;
      }
    }
    if ( (v17 & 0x2000) != 0 && (v19 = a2[((v17 & 0x4000) != 0) + 2]) != 0 )
    {
      sub_F03C00((__int64)a1, v19);
      v20 = *a1;
      v21 = *(_BYTE **)(*a1 + 32LL);
      if ( (unsigned __int64)v21 >= *(_QWORD *)(*a1 + 24LL) )
      {
LABEL_17:
        sub_227BA10(v20, 41);
        goto LABEL_22;
      }
    }
    else
    {
      v22 = (v17 & 0x4000) != 0;
      v23 = (char *)a2[v22 + 2 + ((v17 & 0x2000) != 0)];
      if ( v23 )
        sub_F05430(a1, v23, v22, v14, v15, v16, a3);
      else
        sub_F049C0(a1);
      v20 = *a1;
      v21 = *(_BYTE **)(*a1 + 32LL);
      if ( (unsigned __int64)v21 >= *(_QWORD *)(*a1 + 24LL) )
        goto LABEL_17;
    }
    *(_QWORD *)(v20 + 32) = v21 + 1;
    *v21 = 41;
LABEL_22:
    v24 = *a1;
    v25 = (_WORD *)a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)];
    if ( (*v25 & 0x1FF) != 0xF9 )
    {
      sub_227BF10(v24, a1[5], a1[6]);
      sub_F0C470(
        (__int64)a1,
        (char *)a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)],
        *((unsigned __int8 *)a1 + 24),
        (*a2 & 0x4000) != 0,
        v33,
        v34,
        a3);
      v29 = (_WORD *)sub_F04E60(a2);
      if ( !v29 )
        return;
      v35 = *((_DWORD *)a1 + 2);
      if ( v35 <= 0 )
        goto LABEL_30;
      for ( i = 0; i != v35; ++i )
        sub_995540(*a1, "  ");
LABEL_29:
      v29 = (_WORD *)sub_F04E60(a2);
      if ( !v29 )
        return;
LABEL_30:
      sub_995540(*a1, "else");
      v30 = *a1;
      v31 = *v29 & 0x1FF;
      if ( v31 == 249 )
      {
        v32 = *(_BYTE **)(v30 + 32);
        if ( (unsigned __int64)v32 >= *(_QWORD *)(v30 + 24) )
        {
          sub_227BA10(v30, 32);
        }
        else
        {
          *(_QWORD *)(v30 + 32) = v32 + 1;
          *v32 = 32;
        }
        sub_F0C550(a1, (__int64)v29, a3);
        sub_227BF10(*a1, a1[5], a1[6]);
      }
      else if ( v31 == 241 )
      {
        v37 = *(_BYTE **)(v30 + 32);
        if ( (unsigned __int64)v37 >= *(_QWORD *)(v30 + 24) )
        {
          sub_227BA10(v30, 32);
        }
        else
        {
          *(_QWORD *)(v30 + 32) = v37 + 1;
          *v37 = 32;
        }
        sub_F11420(a1, v29);
      }
      else
      {
        sub_227BF10(v30, a1[5], a1[6]);
        v43 = (char *)sub_F04E60(a2);
        sub_F0C470((__int64)a1, v43, *((unsigned __int8 *)a1 + 24), v44, v45, v46, a3);
      }
      return;
    }
    v26 = *(_BYTE **)(v24 + 32);
    if ( (unsigned __int64)v26 >= *(_QWORD *)(v24 + 24) )
    {
      sub_227BA10(v24, 32);
    }
    else
    {
      *(_QWORD *)(v24 + 32) = v26 + 1;
      *v26 = 32;
    }
    sub_F0C550(a1, (__int64)v25, a3);
    v27 = *a1;
    v49 = v51;
    if ( sub_F04E60(a2) )
    {
      v28 = j__strlen(" ");
      sub_F03D80(&v49, " ", (__int64)&asc_22D9D59[v28]);
      goto LABEL_27;
    }
    v38 = (_BYTE *)a1[5];
    v39 = a1[6];
    if ( &v38[v39] && !v38 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v48 = a1[6];
    if ( v39 > 0xF )
    {
      v41 = (_QWORD *)sub_F03D10(&v48, 0);
      v42 = v48;
      v49 = v41;
      v51[0] = v48;
    }
    else
    {
      if ( v39 == 1 )
      {
        LOBYTE(v51[0]) = *v38;
        v40 = v51;
LABEL_51:
        v50 = v39;
        *((_BYTE *)v40 + v39) = 0;
LABEL_27:
        sub_227BF10(v27, v49, v50);
        if ( v49 != v51 )
          operator delete(v49);
        goto LABEL_29;
      }
      if ( !v39 )
      {
        v40 = v51;
        goto LABEL_51;
      }
      v42 = v39;
      v41 = v51;
    }
    v47 = v42;
    memcpy(v41, v38, v39);
    v40 = v49;
    v39 = v47;
    goto LABEL_51;
  }
  sub_995540(v5, "if ");
  if ( ((*((_BYTE *)a2 + 1) >> 1) & 7) == 3 )
    sub_995540(*a1, "!");
  sub_995540(*a1, "consteval");
  sub_227BF10(*a1, a1[5], a1[6]);
  sub_F0C470(
    (__int64)a1,
    (char *)a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)],
    *((unsigned __int8 *)a1 + 24),
    (*a2 & 0x4000) != 0,
    v6,
    v7,
    a3);
  v8 = (char *)sub_F04E60(a2);
  if ( v8 )
  {
    v9 = *((_DWORD *)a1 + 2);
    v10 = 0;
    if ( v9 > 0 )
    {
      do
      {
        ++v10;
        sub_995540(*a1, "  ");
      }
      while ( v9 != v10 );
    }
    sub_995540(*a1, "else");
    sub_F0C470((__int64)a1, v8, *((unsigned __int8 *)a1 + 24), v11, v12, v13, a3);
    sub_227BF10(*a1, a1[5], a1[6]);
  }
}
