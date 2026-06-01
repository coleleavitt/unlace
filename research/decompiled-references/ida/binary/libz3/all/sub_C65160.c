__int64 __fastcall sub_C65160(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 *v5; // rbp
  __int64 v6; // rax
  unsigned int v8; // ecx
  unsigned int v9; // r12d
  _DWORD *v10; // rax
  bool v11; // bp
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdi
  bool v23; // zf
  __int64 v24; // rsi
  __int64 v25; // rdi
  char *v26; // rbx
  __int64 result; // rax
  char *v28; // rbp
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 *v31; // rax
  char *v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rsi
  int v37[2]; // [rsp+8h] [rbp-130h]
  void *v38; // [rsp+10h] [rbp-128h]
  __int64 v40; // [rsp+30h] [rbp-108h] BYREF
  __int64 v41; // [rsp+38h] [rbp-100h]
  __int64 v42; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-F0h]
  _QWORD v44[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+68h] [rbp-D0h]
  __int64 v47; // [rsp+70h] [rbp-C8h]
  _BYTE v48[192]; // [rsp+78h] [rbp-C0h] BYREF

  v4 = *a1;
  v5 = (__int64 *)v48;
  v47 = 0x1000000000LL;
  v6 = *a2;
  v45 = v4;
  ptr = v48;
  v40 = 0;
  v41 = v4;
  if ( !v6 )
  {
LABEL_48:
    v20 = sub_15E1AF0(v4);
    if ( !v20 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v8 = 0;
  v9 = 0;
  do
  {
    if ( v9 >= *(_DWORD *)(v6 - 4) )
      break;
    sub_177C570(&v42, a2, v9);
    sub_1632F10(a1 + 95, &v42, 1, &v40);
    if ( v42 )
      sub_177F260(v43);
    *(_QWORD *)v37 = *a1;
    v10 = *(_DWORD **)(sub_15D1F10(v40) + 24);
    v11 = 0;
    if ( v10 && *v10 == 5 )
      v11 = v10[1] == 1;
    v42 = 0;
    v43 = 0;
    v44[0] = 1;
    v44[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v44);
    v15 = a1[2];
    BYTE4(v44[0]) &= ~1u;
    LODWORD(v44[0]) = 1;
    if ( !v15 )
    {
      sub_16669E0(a1 + 1);
      v15 = a1[2];
    }
    sub_166A700(v15, (unsigned int)&v42, v11, v12, v13, v14);
    v38 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v42);
    sub_182CBA0(v38, v44);
    v16 = sub_15E1B70(v37[0]);
    v17 = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v18 = v47;
    if ( (unsigned int)v47 >= HIDWORD(v47) )
    {
      v30 = (unsigned int)(2 * HIDWORD(v47));
      v31 = (__int64 *)sub_186B270(8 * v30);
      v18 = v47;
      v32 = (char *)ptr;
      v5 = v31;
      if ( (_DWORD)v47 )
      {
        if ( (unsigned int)(v47 - 1) <= 2 || v31 == (__int64 *)((char *)ptr + 8) )
        {
          v35 = 0;
          v36 = 8LL * (unsigned int)v47;
          do
          {
            v5[v35 / 8] = *(_QWORD *)&v32[v35];
            v35 += 8LL;
          }
          while ( v35 != v36 );
        }
        else
        {
          v33 = 0;
          v34 = 16LL * ((unsigned int)v47 >> 1);
          do
          {
            *(__m128i *)&v5[v33 / 8] = _mm_loadu_si128((const __m128i *)&v32[v33]);
            v33 += 16LL;
          }
          while ( v34 != v33 );
          if ( (v18 & 1) != 0 )
            v5[v18 & 0xFFFFFFFE] = *(_QWORD *)&v32[8 * (v18 & 0xFFFFFFFE)];
        }
      }
      if ( v32 != v48 && v32 )
      {
        sub_186B220(v32);
        v18 = v47;
      }
      ptr = v5;
      HIDWORD(v47) = v30;
    }
    else
    {
      v5 = (__int64 *)ptr;
    }
    v19 = v18;
    v8 = v18 + 1;
    ++v9;
    v5[v19] = v17;
    v6 = *a2;
    LODWORD(v47) = v8;
  }
  while ( v6 );
  if ( v8 != 1 )
  {
    v4 = *a1;
    goto LABEL_48;
  }
  v20 = *v5;
  if ( *v5 )
LABEL_18:
    ++*(_DWORD *)(v20 + 8);
LABEL_19:
  v21 = *a3;
  if ( *a3 )
  {
    v22 = a3[1];
    v23 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v22, v21);
  }
  v24 = v40;
  *a3 = v20;
  if ( v24 )
  {
    v25 = v41;
    v23 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v25, v24);
  }
  v26 = (char *)ptr;
  result = (unsigned int)v47;
  v28 = (char *)ptr + 8 * (unsigned int)v47;
  if ( ptr < v28 )
  {
    do
    {
      while ( 1 )
      {
        v29 = *(_QWORD *)v26;
        if ( *(_QWORD *)v26 )
        {
          v23 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v23 )
            break;
        }
        v26 += 8;
        if ( v26 >= v28 )
          goto LABEL_31;
      }
      result = sub_15D7BC0(v45, v29);
      v26 += 8;
    }
    while ( v26 < v28 );
LABEL_31:
    v26 = (char *)ptr;
  }
  if ( v26 )
  {
    result = (__int64)v48;
    if ( v26 != v48 )
      return sub_186B220(v26);
  }
  return result;
}

