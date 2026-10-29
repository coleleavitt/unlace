__int64 __fastcall sub_15B7190(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(_QWORD),
        __int64 a6)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  char v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // r14
  _QWORD *v13; // r15
  __int64 v14; // rbx
  _QWORD *v16; // rsi
  _QWORD *v17; // r10
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  char *v22; // rax
  char *v23; // r9
  char *v24; // r15
  char *v25; // rax
  void **v26; // rax
  __int64 v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 *v34; // rsi
  void **v35; // rbx
  void **v36; // rdi
  void **v37; // r12
  void *v41; // [rsp+18h] [rbp-1E8h] BYREF
  char *v42; // [rsp+20h] [rbp-1E0h]
  _QWORD *v43; // [rsp+28h] [rbp-1D8h]
  void *src; // [rsp+30h] [rbp-1D0h]
  size_t n; // [rsp+38h] [rbp-1C8h]
  __int64 v46; // [rsp+40h] [rbp-1C0h] BYREF
  __int64 v47[2]; // [rsp+48h] [rbp-1B8h] BYREF
  __int64 v48; // [rsp+58h] [rbp-1A8h] BYREF
  void *v49[3]; // [rsp+60h] [rbp-1A0h] BYREF
  __int64 v50; // [rsp+78h] [rbp-188h]
  __int64 v51; // [rsp+80h] [rbp-180h] BYREF
  unsigned int v52; // [rsp+88h] [rbp-178h]
  void *v53[2]; // [rsp+100h] [rbp-100h] BYREF
  int v54; // [rsp+110h] [rbp-F0h]
  char v55; // [rsp+114h] [rbp-ECh]
  _QWORD v56[5]; // [rsp+118h] [rbp-E8h] BYREF
  void *ptr; // [rsp+140h] [rbp-C0h]
  __int64 v58; // [rsp+148h] [rbp-B8h]
  _DWORD v59[26]; // [rsp+150h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+1B8h] [rbp-48h]
  __int16 v61; // [rsp+1C0h] [rbp-40h]
  char v62; // [rsp+1C2h] [rbp-3Eh]

  v7 = a1;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v46 = a4;
  v8 = sub_B94670(a3 + 64, a4, a3, a4, (__int64)a5, a6);
  if ( !v8 )
    goto LABEL_24;
  v9 = 0;
  v10 = v8;
  do
  {
    v11 = v10;
    v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    v13 = v12;
    v14 = (v11 >> 2) & 1;
    if ( (_DWORD)v14 )
    {
      v13 = nullptr;
      if ( v12 )
        v13 = (_QWORD *)*v12;
    }
    if ( (*((_BYTE *)v13 + 30) & 0x2A) != 0 )
      v9 = 1;
    if ( ((unsigned __int8 (__fastcall *)(__int64, _QWORD *))a5)(a6, v13) )
    {
      v16 = *(_QWORD **)(v7 + 8);
      if ( v16 != *(_QWORD **)(v7 + 16) )
      {
        *v16 = v13;
        *(_QWORD *)(v7 + 8) = v16 + 1;
        goto LABEL_9;
      }
      v17 = *(_QWORD **)v7;
      v18 = (__int64)v16 - *(_QWORD *)v7;
      v19 = v18 >> 3;
      if ( v18 >> 3 )
      {
        v20 = 2 * v19;
        if ( v19 > 2 * v19 )
        {
          v21 = -8;
        }
        else
        {
          v21 = -8;
          if ( v20 <= 0x1FFFFFFFFFFFFFFFLL )
          {
            if ( !v20 )
            {
              v42 = nullptr;
              v23 = nullptr;
LABEL_20:
              *(_QWORD *)&v23[v18] = v13;
              v24 = &v23[v18 + 8];
              if ( v16 == v17 )
              {
                if ( !v17 )
                  goto LABEL_23;
              }
              else
              {
                v41 = v17;
                v25 = (char *)memmove(v23, v17, v18);
                v17 = v41;
                v23 = v25;
              }
              v41 = v23;
              operator delete(v17);
LABEL_23:
              v41 = v24;
              *(_QWORD *)(v7 + 16) = v42;
              *(__m128 *)v7 = _mm_loadh_ps((const double *)&v41);
              goto LABEL_9;
            }
            v21 = 16 * v19;
          }
        }
      }
      else
      {
        v21 = 8;
      }
      n = (size_t)v16 - *(_QWORD *)v7;
      src = v17;
      v43 = v16;
      v41 = (void *)v21;
      v22 = (char *)operator new(v21);
      v16 = v43;
      v23 = v22;
      v17 = src;
      v18 = n;
      v42 = (char *)v41 + (_QWORD)v22;
      goto LABEL_20;
    }
LABEL_9:
    if ( !(_DWORD)v14 )
      break;
    if ( !v12 )
      break;
    v10 = v12[1];
  }
  while ( v10 );
  if ( v9 )
    return v7;
LABEL_24:
  v49[2] = nullptr;
  v50 = 1;
  v49[1] = v49;
  v49[0] = v49;
  v26 = (void **)&v51;
  do
  {
    *v26 = nullptr;
    v26 += 2;
  }
  while ( v26 != v53 );
  v53[0] = v56;
  ptr = v59;
  v58 = 0x400000000LL;
  v61 = 257;
  v47[0] = (__int64)&v46;
  v53[1] = &byte_4;
  v54 = 0;
  v55 = 1;
  v56[4] = 0;
  v59[24] = 0;
  v60 = 0;
  v62 = 1;
  v48 = a3;
  v47[1] = a2;
  if ( !(unsigned __int8)sub_B6EFE0(a3, (__int64 *)sub_15B7E90, (__int64)v47, (__int64)&v48, 1u) )
    goto LABEL_40;
  v27 = *((_QWORD *)v49[0] + 17);
  if ( !v27 )
    goto LABEL_40;
  v28 = v7;
  while ( 2 )
  {
    v29 = v27;
    v30 = v27 & 0xFFFFFFFFFFFFFFF8LL;
    v31 = (v29 >> 2) & 1;
    v32 = (unsigned int)v31;
    if ( (_DWORD)v31 )
    {
      if ( !v30 )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)v30 + 30LL) & 0x2A) != 0 && a5(a6) )
      {
        v33 = *(_QWORD *)v30;
        goto LABEL_34;
      }
      goto LABEL_38;
    }
    if ( (*(_BYTE *)(v30 + 30) & 0x2A) == 0 || !((unsigned __int8 (__fastcall *)(__int64, unsigned __int64))a5)(a6, v30) )
      break;
    v33 = v30;
LABEL_34:
    v47[0] = v33;
    v34 = *(__int64 **)(v28 + 8);
    if ( v34 == *(__int64 **)(v28 + 16) )
    {
      sub_15B7040(v28, v34, v47);
    }
    else
    {
      *v34 = v33;
      *(_QWORD *)(v28 + 8) = v34 + 1;
    }
    if ( v32 && v30 )
    {
LABEL_38:
      v27 = *(_QWORD *)(v30 + 8);
      if ( !v27 )
        break;
      continue;
    }
    break;
  }
  v7 = v28;
LABEL_40:
  if ( ptr != v59 )
    free(ptr);
  if ( !v55 )
    free(v53[0]);
  if ( (v50 & 1) == 0 )
    operator delete(v51, 16LL * v52, 8);
  v35 = (void **)v49[0];
  if ( v49[0] != v49 )
  {
    while ( 1 )
    {
      v36 = (void **)v35[2];
      v37 = (void **)*v35;
      if ( v36 == v35 + 4 )
      {
        operator delete(v35);
        if ( v37 == v49 )
          return v7;
      }
      else
      {
        free(v36);
        operator delete(v35);
        if ( v37 == v49 )
          return v7;
      }
      v35 = v37;
    }
  }
  return v7;
}
