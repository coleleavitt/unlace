void __fastcall sub_7C34B0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdi
  _WORD *v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 *v8; // r12
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rsi
  int v13; // edx
  char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rbp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  size_t v22; // rcx
  _BYTE *v23; // r10
  _QWORD *v24; // rax
  __int64 v25; // rdi
  _BYTE *v26; // rax
  __int64 v27; // rax
  void *v28; // rax
  _QWORD *v29; // rdi
  _BYTE *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdi
  _BYTE *v33; // rax
  int v34; // eax
  __int64 v35; // rdi
  _BYTE *v36; // rax
  __int64 v37; // rdi
  _QWORD *v38; // rax
  unsigned __int64 v39; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+0h] [rbp-B8h]
  __int64 v41; // [rsp+0h] [rbp-B8h]
  __int64 v42; // [rsp+0h] [rbp-B8h]
  __int64 *v43; // [rsp+10h] [rbp-A8h]
  char *src; // [rsp+18h] [rbp-A0h]
  size_t n; // [rsp+20h] [rbp-98h]
  size_t v46; // [rsp+38h] [rbp-80h]
  void *v47; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-70h]
  __int64 v49; // [rsp+50h] [rbp-68h] BYREF
  void *v50; // [rsp+60h] [rbp-58h] BYREF
  size_t v51; // [rsp+68h] [rbp-50h]
  _QWORD v52[9]; // [rsp+70h] [rbp-48h] BYREF

  v4 = *a1;
  v5 = *(_WORD **)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 24) - (_QWORD)v5;
  if ( (*(_BYTE *)(a2 + 58) & 2) != 0 )
  {
    if ( v6 <= 1 )
    {
      sub_26240F0(v4, "- ", 2);
    }
    else
    {
      *v5 = 8237;
      *(_QWORD *)(v4 + 32) += 2LL;
    }
  }
  else if ( v6 <= 1 )
  {
    sub_26240F0(v4, "+ ", 2);
  }
  else
  {
    *v5 = 8235;
    *(_QWORD *)(v4 + 32) += 2LL;
  }
  v7 = *(_QWORD *)(a2 + 80);
  if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    v38 = (_QWORD *)sub_798D40(a2);
    sub_7C3000(a1, v38, (*(_QWORD *)(a2 + 56) >> 26) & 0x7F, v7);
  }
  v50 = *(void **)(a2 + 40);
  sub_C87500(&v47, &v50);
  v8 = *(__int64 **)(a2 + 96);
  v9 = 0;
  v43 = &v8[*(unsigned int *)(a2 + 104)];
  if ( v43 != v8 )
  {
    while ( 1 )
    {
      v16 = *v8;
      v39 = v9;
      v17 = std::string::find();
      v18 = v39;
      v19 = *a1;
      v20 = v17;
      if ( v39 )
      {
        v30 = *(_BYTE **)(v19 + 32);
        if ( *(_BYTE **)(v19 + 24) == v30 )
        {
          sub_26240F0(*a1, " ", 1);
          v18 = v39;
        }
        else
        {
          *v30 = 32;
          ++*(_QWORD *)(v19 + 32);
        }
        v21 = v48;
        v19 = *a1;
        v17 = v20 - v18;
        if ( v48 < v18 )
          std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
      }
      else
      {
        v21 = v48;
      }
      v22 = v21 - v18;
      v50 = v52;
      v23 = (char *)v47 + v18;
      if ( v22 > v17 )
        v22 = v17;
      v46 = v22;
      if ( v22 > 0xF )
        break;
      if ( v22 == 1 )
      {
        LOBYTE(v52[0]) = *v23;
      }
      else if ( v22 )
      {
        v29 = v52;
        goto LABEL_28;
      }
      v24 = v52;
LABEL_20:
      v51 = v22;
      *((_BYTE *)v24 + v22) = 0;
      v25 = sub_26240F0(v19, v50, v51);
      v26 = *(_BYTE **)(v25 + 32);
      if ( (unsigned __int64)v26 >= *(_QWORD *)(v25 + 24) )
      {
        sub_26239D0(v25, 58);
      }
      else
      {
        *(_QWORD *)(v25 + 32) = v26 + 1;
        *v26 = 58;
      }
      if ( v50 != v52 )
        operator delete(v50, v52[0] + 1LL);
      v40 = *(_QWORD *)(v16 + 48);
      if ( (*(_BYTE *)(v16 + 97) & 0x10) != 0 )
      {
        v10 = sub_798D40(a2);
        v11 = v40;
        v12 = (_QWORD *)v10;
        v13 = (*(_DWORD *)(v16 + 96) >> 13) & 0x7F;
      }
      else
      {
        v27 = sub_798D40(a2);
        v11 = v40;
        LOBYTE(v13) = 0;
        v12 = (_QWORD *)v27;
      }
      ++v8;
      sub_7C3000(a1, v12, v13, v11);
      v14 = (char *)*a1;
      sub_77A870(v16, *a1);
      v9 = v20 + 1;
      if ( v43 == v8 )
      {
        v31 = *(unsigned int *)(a2 + 104);
        if ( (_DWORD)v31 )
          goto LABEL_35;
        goto LABEL_53;
      }
    }
    v41 = v19;
    n = v22;
    src = (char *)v47 + v18;
    v28 = (void *)std::string::_M_create();
    v19 = v41;
    v23 = src;
    v50 = v28;
    v29 = v28;
    v22 = n;
    v52[0] = v46;
LABEL_28:
    v42 = v19;
    memcpy(v29, v23, v22);
    v22 = v46;
    v24 = v50;
    v19 = v42;
    goto LABEL_20;
  }
LABEL_53:
  v14 = (char *)v47;
  sub_26240F0(*a1, v47, v48);
LABEL_35:
  if ( (*(_BYTE *)(a2 + 58) & 4) != 0 )
  {
    v37 = *a1;
    v15 = *(_QWORD *)(*a1 + 32LL);
    if ( (unsigned __int64)(*(_QWORD *)(*a1 + 24LL) - v15) <= 4 )
    {
      v14 = ", ...";
      sub_26240F0(v37, ", ...", 5);
    }
    else
    {
      *(_DWORD *)v15 = 774774828;
      *(_BYTE *)(v15 + 4) = 46;
      *(_QWORD *)(v37 + 32) += 5LL;
    }
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v14 = (char *)a2;
    sub_7C2320((__int64)a1, a2, 0);
  }
  if ( (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, unsigned __int64))(*(_QWORD *)a2 + 64LL))(
         a2,
         v14,
         v15,
         v31,
         v9)
    && *((char *)a1 + 11) >= 0 )
  {
    v32 = *a1;
    v33 = *(_BYTE **)(*a1 + 32LL);
    if ( (unsigned __int64)v33 >= *(_QWORD *)(*a1 + 24LL) )
    {
      sub_26239D0(v32, 32);
    }
    else
    {
      *(_QWORD *)(v32 + 32) = v33 + 1;
      *v33 = 32;
    }
    v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    sub_AE6C50(v34, *a1, 0, (_DWORD)a1 + 8, *((_DWORD *)a1 + 8), a1[3], "\n", 1u);
  }
  else if ( (*((_BYTE *)a1 + 12) & 1) != 0 )
  {
    v35 = *a1;
    v36 = *(_BYTE **)(*a1 + 32LL);
    if ( (unsigned __int64)v36 >= *(_QWORD *)(*a1 + 24LL) )
    {
      sub_26239D0(v35, 59);
    }
    else
    {
      *(_QWORD *)(v35 + 32) = v36 + 1;
      *v36 = 59;
    }
  }
  if ( v47 != &v49 )
    operator delete(v47, v49 + 1);
}

