_QWORD *__fastcall sub_E18B40(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned int v10; // r15d
  unsigned __int64 v11; // rdi
  __int64 v12; // rdi
  int v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  unsigned __int64 v16; // rdi
  char *v17; // rsi
  char v18; // al
  _BYTE *v19; // rdx
  _BYTE *v20; // rcx
  __int64 v21; // rax
  size_t v22; // rsi
  _QWORD *v23; // rdi
  size_t v24; // r9
  unsigned __int64 v25; // rax
  _BYTE *v26; // rdi
  size_t v27; // rax
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rcx
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // ecx
  __int64 *v35; // rsi
  __int64 v36; // r8
  unsigned __int64 v37; // r13
  _QWORD *v38; // rdx
  __int64 v39; // rax
  char *v40; // rsi
  size_t v41; // rsi
  _QWORD *v42; // rdi
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // rax
  _BYTE *v45; // rdi
  __int64 v46; // rbp
  _QWORD *v47; // rax
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // rdx
  _QWORD *v50; // rax
  int v52; // esi
  int v53; // r8d
  __int64 v54; // r9
  size_t na; // [rsp+8h] [rbp-90h]
  size_t nb; // [rsp+8h] [rbp-90h]
  size_t nc; // [rsp+8h] [rbp-90h]
  size_t nd; // [rsp+8h] [rbp-90h]
  int n; // [rsp+8h] [rbp-90h]
  unsigned __int64 v60; // [rsp+10h] [rbp-88h]
  char v61; // [rsp+34h] [rbp-64h] BYREF
  _BYTE v62[11]; // [rsp+35h] [rbp-63h] BYREF
  __m128 v63; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v64[9]; // [rsp+50h] [rbp-48h] BYREF

  v5 = a1 + 2;
  *a1 = a1 + 2;
  sub_E15570(a1, "<lambda", (__int64)"");
  v9 = sub_B733B0(a3);
  v10 = *(_DWORD *)(*(_QWORD *)(a3 + 128) + 108LL) >> 1;
  if ( v9 && (*(_BYTE *)(v9 + 28) & 0x7F) == 0x2B )
  {
    v11 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
      v11 = *(_QWORD *)v11;
    if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 34 <= 5 )
    {
      v12 = v11 - 72;
      if ( v12 )
      {
        v13 = sub_B52330(v12, (__int64)"<lambda", v7, v8);
        v14 = (unsigned __int8)(*(_WORD *)(v9 + 98) >> 4);
        if ( v14 == 255 )
        {
          n = v13;
          v14 = sub_B50B40(v9);
          v13 = n;
        }
        v15 = v13 - v14;
        if ( v15 )
        {
          v16 = v15;
          v17 = v62;
          while ( 1 )
          {
            --v17;
            v18 = v16 % 0xA + 48;
            *v17 = v18;
            if ( v16 <= 9 )
              break;
            v16 /= 0xAu;
          }
          v19 = (_BYTE *)(v62 - v17);
          v63.m128_u64[0] = (unsigned __int64)v64;
          v20 = (_BYTE *)(v62 - v17);
          if ( (unsigned __int64)(v62 - v17) > 0xF )
          {
            if ( (__int64)v19 < 0 )
              std::__throw_length_error("basic_string::_M_create");
            v21 = operator new((unsigned __int64)(v19 + 1));
            v19 = (_BYTE *)(v62 - v17);
            v20 = (_BYTE *)(v62 - v17);
            v63.m128_u64[0] = v21;
            v64[0] = v62 - v17;
            goto LABEL_16;
          }
          if ( v19 != (_BYTE *)&dword_0 + 1 )
          {
            v21 = (__int64)v64;
            if ( v19 )
            {
LABEL_16:
              na = (size_t)v20;
              memcpy((void *)v21, v17, (size_t)v19);
              v21 = v63.m128_u64[0];
              v20 = (_BYTE *)na;
            }
LABEL_17:
            v63.m128_u64[1] = (unsigned __int64)v20;
            v20[v21] = 0;
            v22 = a1[1];
            v23 = (_QWORD *)*a1;
            v24 = v63.m128_u64[1] + v22;
            if ( v5 == (_QWORD *)*a1 )
              v25 = 15;
            else
              v25 = a1[2];
            if ( v24 > v25 )
            {
              nd = v63.m128_u64[1] + v22;
              sub_974DF0((__int64)a1, v22, 0, v63.m128_u64[0], v63.m128_u64[1]);
              v23 = (_QWORD *)*a1;
              v24 = nd;
            }
            else if ( v63.m128_u64[1] )
            {
              v26 = (char *)v23 + v22;
              if ( v63.m128_u64[1] == 1 )
              {
                *v26 = *(_BYTE *)v63.m128_u64[0];
                v23 = (_QWORD *)*a1;
              }
              else
              {
                nb = v63.m128_u64[1] + v22;
                memcpy(v26, (const void *)v63.m128_u64[0], v63.m128_u64[1]);
                v23 = (_QWORD *)*a1;
                v24 = nb;
              }
            }
            a1[1] = v24;
            *((_BYTE *)v23 + v24) = 0;
            if ( (_QWORD *)v63.m128_u64[0] != v64 )
              operator delete((void *)v63.m128_u64[0]);
            v27 = a1[1];
            if ( v27 == 0x7FFFFFFFFFFFFFFFLL )
              std::__throw_length_error("basic_string::append");
            v28 = v27 + 1;
            if ( v5 == (_QWORD *)*a1 )
              v29 = 15;
            else
              v29 = a1[2];
            if ( v28 > v29 )
            {
              v60 = v27 + 1;
              nc = a1[1];
              sub_974DF0((__int64)a1, nc, 0, "_", 1u);
              v28 = v60;
              v27 = nc;
            }
            else
            {
              *(_BYTE *)(*a1 + v27) = 95;
            }
            v30 = (_QWORD *)*a1;
            a1[1] = v28;
            v31 = v10;
            *((_BYTE *)v30 + v27 + 1) = 0;
            if ( v10 )
              goto LABEL_52;
            goto LABEL_31;
          }
        }
        else
        {
          v63.m128_u64[0] = (unsigned __int64)v64;
          v18 = 48;
        }
        LOBYTE(v64[0]) = v18;
        v20 = (_BYTE *)(&dword_0 + 1);
        v21 = (__int64)v64;
        goto LABEL_17;
      }
    }
  }
  v31 = v10;
  if ( v10 )
  {
LABEL_52:
    v40 = v62;
    while ( 1 )
    {
      *--v40 = v31 % 0xA + 48;
      if ( v31 <= 9 )
        break;
      v31 /= 0xAu;
    }
    goto LABEL_37;
  }
LABEL_31:
  v32 = *(unsigned int *)(a2 + 96);
  v33 = *(_QWORD *)(a2 + 80);
  if ( !(_DWORD)v32 )
    goto LABEL_65;
  v34 = (v32 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v35 = (__int64 *)(v33 + 16LL * v34);
  v36 = *v35;
  if ( a3 != *v35 )
  {
    v52 = 1;
    if ( v36 != -4096 )
    {
      do
      {
        v53 = v52 + 1;
        v34 = (v32 - 1) & (v52 + v34);
        v35 = (__int64 *)(v33 + 16LL * v34);
        v54 = *v35;
        if ( a3 == *v35 )
          goto LABEL_33;
        v52 = v53;
      }
      while ( v54 != -4096 );
    }
LABEL_65:
    sub_E18AD0(&v63, (_QWORD *)(v33 + 16LL * (unsigned int)v32), (_QWORD *)(v33 + 16LL * (unsigned int)v32), a2 + 80, 1);
    v37 = v63.m128_u64[0];
    goto LABEL_34;
  }
LABEL_33:
  sub_E18AD0(&v63, v35, (_QWORD *)(16 * v32 + v33), a2 + 80, 1);
  v37 = v63.m128_u64[0];
LABEL_34:
  v38 = (_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL * *(unsigned int *)(a2 + 96));
  sub_E18AD0(&v63, v38, v38, a2 + 80, 1);
  if ( v63.m128_u64[0] != v37 )
  {
    v39 = *(_QWORD *)(v37 + 8);
    v31 = (unsigned int)v39;
    if ( (_DWORD)v39 )
      goto LABEL_52;
  }
  v61 = 48;
  v40 = &v61;
LABEL_37:
  v63.m128_u64[0] = (unsigned __int64)v64;
  sub_E154B0(&v63, v40, (__int64)v62);
  v41 = a1[1];
  v42 = (_QWORD *)*a1;
  v43 = v63.m128_u64[1] + v41;
  if ( v5 == (_QWORD *)*a1 )
    v44 = 15;
  else
    v44 = a1[2];
  if ( v43 > v44 )
  {
    sub_974DF0((__int64)a1, v41, 0, v63.m128_u64[0], v63.m128_u64[1]);
    v42 = (_QWORD *)*a1;
  }
  else if ( v63.m128_u64[1] )
  {
    v45 = (char *)v42 + v41;
    if ( v63.m128_u64[1] == 1 )
      *v45 = *(_BYTE *)v63.m128_u64[0];
    else
      memcpy(v45, (const void *)v63.m128_u64[0], v63.m128_u64[1]);
    v42 = (_QWORD *)*a1;
  }
  a1[1] = v43;
  *((_BYTE *)v42 + v43) = 0;
  if ( (_QWORD *)v63.m128_u64[0] != v64 )
    operator delete((void *)v63.m128_u64[0]);
  v46 = a1[1];
  v47 = (_QWORD *)*a1;
  v48 = v46 + 1;
  if ( v5 == (_QWORD *)*a1 )
    v49 = 15;
  else
    v49 = a1[2];
  if ( v48 > v49 )
  {
    sub_974DF0((__int64)a1, a1[1], 0, nullptr, 1u);
    v47 = (_QWORD *)*a1;
  }
  *((_BYTE *)v47 + v46) = 62;
  v50 = (_QWORD *)*a1;
  a1[1] = v48;
  *((_BYTE *)v50 + v46 + 1) = 0;
  return a1;
}

