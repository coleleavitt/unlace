__int64 __fastcall sub_13B9C00(__int64 a1, __int64 a2, __int64 a3, __m128i a4)
{
  __int64 v4; // rax
  int v6; // rbx^4
  char *v7; // rbp
  const char *v8; // rax
  unsigned __int64 v9; // rbx
  _BYTE *v10; // rax
  size_t v11; // r14
  unsigned __int64 v12; // rax
  _QWORD *v13; // r13
  size_t v14; // r15
  size_t v15; // r8
  char *v16; // rcx
  char *v17; // rdi
  size_t v18; // r9
  size_t v19; // r13
  char v20; // al
  size_t v21; // r14
  _BYTE *v22; // rax
  size_t v23; // r15
  unsigned __int64 v24; // rdx
  char *v25; // rdi
  _BYTE *v26; // rax
  size_t v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  char v30; // dl
  size_t v31; // rbx
  _BYTE *v32; // rdi
  unsigned __int64 v33; // rax
  char *v34; // rdi
  __int64 v35; // r15
  _BYTE *v36; // rax
  _QWORD *v37; // r8
  __int64 v38; // [rsp+8h] [rbp-90h]
  size_t v39; // [rsp+10h] [rbp-88h]
  size_t v40; // [rsp+10h] [rbp-88h]
  __int64 v41; // [rsp+10h] [rbp-88h]
  char *src; // [rsp+18h] [rbp-80h]
  int v44; // [rsp+30h] [rbp-68h]
  void *v45; // [rsp+40h] [rbp-58h] BYREF
  size_t v46; // [rsp+48h] [rbp-50h]
  _QWORD v47[9]; // [rsp+50h] [rbp-48h] BYREF

  v38 = *(_QWORD *)(a2 + 88);
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 && v4 != *(_QWORD *)(a2 + 88) )
    return 0;
  v6 = HIDWORD(a3);
  v44 = a3;
  v7 = (char *)sub_1021A70(v38, a3, nullptr);
  v8 = sub_1021A70(v38, v6, nullptr);
  src = (char *)v8;
  v9 = v8 - v7;
  if ( v8 == v7 )
    return 0;
  v10 = memchr(v7, 92, v8 - v7);
  if ( !v10 || (v11 = v10 - v7, v10 - v7 == -1) )
  {
    sub_13B6E10(
      (unsigned __int8 *)v7,
      v9,
      (unsigned __int8 *)(a1 + 136),
      v38,
      a2,
      v44,
      a4,
      (int *)(a1 + 96),
      *(_QWORD *)(a1 + 56));
    return 0;
  }
  LOBYTE(v47[0]) = 0;
  v46 = 0;
  v45 = v47;
  if ( v9 > 0xF )
  {
    if ( (v9 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    v35 = 30;
    if ( v9 >= 0x1E )
      v35 = v9;
    v41 = v35;
    v36 = (_BYTE *)operator new(v35 + 1);
    v14 = v46;
    v37 = v45;
    v13 = v36;
    *v36 = *(_BYTE *)v45;
    if ( v37 != v47 )
    {
      operator delete(v37);
      v14 = v46;
    }
    v45 = v13;
    v47[0] = v41;
    v12 = 0x7FFFFFFFFFFFFFFFLL - v14;
  }
  else
  {
    v12 = 0x7FFFFFFFFFFFFFFFLL;
    v13 = v47;
    v14 = 0;
  }
  if ( v9 == v11 )
  {
    src = v7;
LABEL_48:
    if ( v11 <= v12 )
    {
      v31 = v14 + v11;
      goto LABEL_50;
    }
LABEL_76:
    std::__throw_length_error("basic_string::append");
  }
  v15 = v11;
  if ( v9 <= v11 )
    v15 = v9;
  if ( v15 > v12 )
    goto LABEL_76;
  v16 = v7;
  while ( 1 )
  {
    v18 = v15 + v14;
    v29 = v13 == v47 ? 15LL : v47[0];
    if ( v18 <= v29 )
    {
      if ( v15 )
      {
        v17 = (char *)v13 + v14;
        if ( v15 == 1 )
        {
          *v17 = *v16;
          v13 = v45;
        }
        else
        {
          v39 = v15 + v14;
          memcpy(v17, v16, v15);
          v13 = v45;
          v18 = v39;
        }
      }
    }
    else
    {
      v40 = v15 + v14;
      sub_998B30((__int64)&v45, v14, 0, v16, v15);
      v13 = v45;
      v18 = v40;
    }
    v46 = v18;
    *((_BYTE *)v13 + v18) = 0;
    v19 = v11 + 1;
    if ( v9 <= v11 + 1 )
      break;
    v20 = v7[v11 + 1];
    if ( v20 != 13 && v20 != 10 )
      break;
    v19 = v11 + 2;
    if ( v9 <= v11 + 2 )
      goto LABEL_45;
    v25 = &v7[v19];
    v30 = v7[v19];
    if ( (v30 == 10 || v30 == 13) && v20 != v30 )
    {
      v19 = v11 + 3;
      if ( v9 <= v11 + 3 )
        goto LABEL_45;
      goto LABEL_25;
    }
LABEL_26:
    v14 = v46;
    if ( v9 == v19 )
      goto LABEL_46;
    v26 = memchr(v25, 92, v9 - v19);
    if ( !v26 )
      goto LABEL_46;
    v27 = v26 - v7;
    v11 = v27;
    if ( v27 == -1 || v9 == v27 )
      goto LABEL_46;
    v28 = v19;
    if ( v9 <= v19 )
      v28 = v9;
    v15 = v27 - v19;
    if ( v27 - v19 > v9 - v28 )
      v15 = v9 - v28;
    v16 = &v7[v28];
    if ( 0x7FFFFFFFFFFFFFFFLL - v14 < v15 )
      goto LABEL_76;
    v13 = v45;
  }
  v21 = v46;
  v22 = v45;
  v23 = v46 + 1;
  if ( v45 == v47 )
    v24 = 15;
  else
    v24 = v47[0];
  if ( v23 > v24 )
  {
    sub_998B30((__int64)&v45, v46, 0, nullptr, 1u);
    v22 = v45;
  }
  v22[v21] = 92;
  v46 = v23;
  *((_BYTE *)v45 + v21 + 1) = 0;
  if ( v9 > v19 )
  {
LABEL_25:
    v25 = &v7[v19];
    goto LABEL_26;
  }
LABEL_45:
  v14 = v46;
LABEL_46:
  if ( v9 >= v19 )
  {
    src = &v7[v19];
    v11 = v9 - v19;
    v12 = 0x7FFFFFFFFFFFFFFFLL - v14;
    goto LABEL_48;
  }
  v31 = v14;
  v11 = 0;
LABEL_50:
  v32 = v45;
  if ( v45 == v47 )
    v33 = 15;
  else
    v33 = v47[0];
  if ( v33 < v31 )
  {
    sub_998B30((__int64)&v45, v14, 0, src, v11);
    v32 = v45;
  }
  else if ( v11 )
  {
    v34 = (char *)v45 + v14;
    if ( v11 == 1 )
      *v34 = *src;
    else
      memcpy(v34, src, v11);
    v32 = v45;
  }
  v46 = v31;
  v32[v31] = 0;
  if ( v46 )
    sub_13B6E10(
      (unsigned __int8 *)v45,
      v46,
      (unsigned __int8 *)(a1 + 136),
      v38,
      a2,
      v44,
      a4,
      (int *)(a1 + 96),
      *(_QWORD *)(a1 + 56));
  if ( v45 != v47 )
    operator delete(v45);
  return 0;
}
