__int64 __fastcall sub_1A8CEF0(
        __int64 *a1,
        __m128 a2,
        double a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        int a8,
        __int64 *a9,
        __int64 a10,
        unsigned int a11,
        _BYTE *a12,
        __int64 a13,
        unsigned __int64 a14,
        int a15,
        unsigned int a16)
{
  __int64 *v18; // r14
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // r13
  __int64 *v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  _BYTE *v26; // rbx
  __int64 v27; // rdx
  unsigned int v28; // ebp
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // r11
  __int64 *v36; // rax
  unsigned __int64 v37; // r11
  __int64 *v38; // rbp
  unsigned __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rcx
  int v42; // esi
  unsigned __int64 v43; // r13
  unsigned int v44; // eax
  unsigned __int64 v45; // rsi
  unsigned int v46; // edx
  __int64 v47; // rdx
  unsigned int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // eax
  unsigned __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdx
  unsigned __int64 v55; // rbx
  unsigned int v56; // eax
  __int64 v57; // rcx
  __int64 i; // rdx
  __int64 v59; // [rsp+8h] [rbp-170h]
  unsigned __int64 v60; // [rsp+8h] [rbp-170h]
  _QWORD *v61; // [rsp+18h] [rbp-160h]
  unsigned __int64 v63; // [rsp+20h] [rbp-158h]
  __int64 v64; // [rsp+28h] [rbp-150h]
  unsigned __int64 v65; // [rsp+30h] [rbp-148h]
  unsigned __int64 v68; // [rsp+40h] [rbp-138h]
  __int64 v69; // [rsp+40h] [rbp-138h]
  __int64 v70; // [rsp+48h] [rbp-130h]
  char v71; // [rsp+5Fh] [rbp-119h] BYREF
  __int64 *v72; // [rsp+60h] [rbp-118h] BYREF
  unsigned __int64 v73; // [rsp+68h] [rbp-110h] BYREF
  __int64 v74[2]; // [rsp+70h] [rbp-108h] BYREF
  void *ptr; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v76; // [rsp+88h] [rbp-F0h]
  _BYTE v77[32]; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD v78[25]; // [rsp+B0h] [rbp-C8h] BYREF

  v18 = a9;
  LODWORD(v64) = a8;
  v72 = nullptr;
  v61 = (_QWORD *)sub_168B6C0((__int64)a1);
  v19 = sub_1E5F010(a6, &v72);
  if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v21 = v19;
  v22 = v72;
  if ( !v72 )
  {
    v22 = sub_A81910(v61, v21, a5);
    v72 = v22;
  }
  ptr = v77;
  v76 = 0x400000000LL;
  if ( (_DWORD)a10 )
  {
    do
    {
      v24 = *v18;
      v78[0] = 0;
      if ( (sub_1E5F010(v24, v78) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        LODWORD(v76) = 0;
        v23 = 0;
        v26 = ptr;
        v22 = v72;
        goto LABEL_14;
      }
      v25 = (unsigned int)v76 + 1LL;
      if ( v25 <= HIDWORD(v76) )
      {
        *((_QWORD *)ptr + (unsigned int)v76) = v78[0];
      }
      else
      {
        v70 = v78[0];
        sub_2237220(&ptr, v77, v25, 8);
        *((_QWORD *)ptr + (unsigned int)v76) = v70;
      }
      ++v18;
      v23 = (unsigned int)(v76 + 1);
      LODWORD(v76) = v76 + 1;
    }
    while ( v18 != &a9[(unsigned int)(a10 - 1) + 1] );
    v22 = v72;
    v26 = ptr;
  }
  else
  {
    v23 = 0;
    v26 = v77;
  }
LABEL_14:
  v27 = *v22;
  v68 = v23;
  v74[1] = (__int64)(v22 + 1);
  v74[0] = v27;
  sub_F6CE20(v74);
  v28 = sub_F6CCB0(v74, a2);
  v29 = sub_168B6C0((__int64)a1);
  v30 = v68;
  v31 = v29;
  if ( v68 )
  {
    v69 = v29;
    v35 = sub_1A8B8D0(*a1, v28, v21, (__int64)v26, v30, a7 | (unsigned __int64)(v64 << 32), a2, 0, 0);
    v31 = v69;
    if ( !a13 )
      goto LABEL_21;
  }
  else
  {
    if ( !a13 )
      goto LABEL_16;
    v35 = v21;
  }
  v52 = sub_A787C0(v31, v35, a12, a13, &v71, 0);
  v35 = v52;
  if ( v71 )
  {
    v65 = v52;
    sub_168B9F0((__int64)v78, a1, v28, 0xFD5u, 0);
    v73 = __PAIR64__(a16, a11);
    sub_1587DB0((__int64)v78, (__int64 *)&v73);
    sub_15F7200(v78);
    v35 = v65;
  }
LABEL_21:
  if ( v21 != v35 )
  {
    v63 = v35;
    v36 = sub_A81BC0(v61, v35, 0, v32, v33, v34);
    v37 = v63;
    v38 = v36;
    v39 = (unsigned __int64)(v36 + 1);
    v40 = *v38;
    if ( *v38 & 7 | (*v38 >> 3) & 1
      || *(_BYTE *)(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34
      && v40
      && (*((_DWORD *)v38 + 2) = 0,
          v51 = sub_F6C520(*(_QWORD *)(v40 + 32)),
          v40 = *(_QWORD *)(v40 + 32),
          v37 = v63,
          v39 = v51
              * (((__int64 *)((char *)v38 + 12) != nullptr)
               + ((unsigned __int64)v38 - ((__int64 *)((char *)v38 + 12) != nullptr) + 12) / v51),
          v40 & 7 | (v40 >> 3) & 1)
      || *(_BYTE *)(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 37
      || !v40 )
    {
      if ( (*(_WORD *)(v40 + 18) & 0x3F8) != 0 )
      {
        *(_DWORD *)v39 = a7;
        *(_DWORD *)(v39 + 4) = v64;
        if ( (_DWORD)v76 )
        {
          v53 = 8LL * (unsigned int)(v76 - 1) + 8;
          v54 = 0;
          do
          {
            *(_QWORD *)(v39 + v54 + 24) = *(_QWORD *)((char *)ptr + v54);
            v54 += 8;
          }
          while ( v53 != v54 );
        }
      }
      else
      {
        *(_QWORD *)v39 = 0;
      }
      if ( *(_BYTE *)(v40 + 19) >> 2 )
      {
        *(_DWORD *)(v39 + 12) = a16;
        *(_DWORD *)(v39 + 8) = a11;
        if ( (_DWORD)a13 )
        {
          v41 = 0;
          do
          {
            v42 = *(_DWORD *)(a14 + v41);
            v41 += 4;
            *(_DWORD *)(v41 + v39 + (*(_WORD *)(v40 + 18) & 0x3F8) + 20) = v42;
          }
          while ( 4LL * (unsigned int)(a13 - 1) + 4 != v41 );
        }
      }
      else
      {
        *(_QWORD *)(v39 + 8) = 0;
      }
      *(_BYTE *)(v39 + 16) = 1;
      v60 = v37;
      if ( v21 == v40 )
      {
        v55 = v39 + 8 * ((4 * ((*(_BYTE *)(v21 + 19) >> 2) + 2 * ((*(_WORD *)(v21 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 8;
        v56 = sub_F6C520(*(_QWORD *)(v21 + 24));
        v78[0] = *(_QWORD *)(v21 + 24);
        v78[1] = v56 * ((v55 != 0) + (v55 - (v55 != 0)) / v56);
        sub_F6C7F0((__int64)v78, *v72, (const __m128i *)(v72 + 1));
      }
      else
      {
        v43 = v39 + 8 * ((4 * ((*(_BYTE *)(v40 + 19) >> 2) + 2 * ((*(_WORD *)(v40 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 8;
        v44 = sub_F6C520(*(_QWORD *)(v40 + 24));
        sub_F6DC70(v61, *(_QWORD *)(v40 + 24), v44 * ((v43 - (v43 != 0)) / v44 + (v43 != 0)), a5);
      }
      v37 = v60;
    }
    else if ( (*(_BYTE *)(v40 + 32) & 0x3F) != 0 )
    {
      *(_DWORD *)(v39 + 4) = a11;
      *(_DWORD *)(v39 + 8) = a16;
      if ( (_DWORD)a13 )
      {
        v45 = v39 + 12;
        v46 = a13 - 1;
        if ( (a14 >= v39 + 28 || v39 + 12 >= a14 + 16) && v46 > 2 )
        {
          v47 = 0;
          do
          {
            a2 = (__m128)_mm_loadu_si128((const __m128i *)(a14 + v47));
            *(__m128 *)(v39 + v47 + 12) = a2;
            v47 += 16;
          }
          while ( v47 != 16LL * ((unsigned int)a13 >> 2) );
          v48 = a13 & 0xFFFFFFFC;
          if ( (_DWORD)a13 != (a13 & 0xFFFFFFFC) )
          {
            *(_DWORD *)(v45 + 4LL * v48) = *(_DWORD *)(a14 + 4LL * v48);
            v49 = v48 + 1;
            if ( (_DWORD)a13 != (_DWORD)v49 )
            {
              v50 = v48 + 2;
              *(_DWORD *)(v45 + 4 * v49) = *(_DWORD *)(a14 + 4 * v49);
              if ( (_DWORD)a13 != (_DWORD)v50 )
                *(_DWORD *)(v45 + 4 * v50) = *(_DWORD *)(a14 + 4 * v50);
            }
          }
        }
        else
        {
          v57 = v46;
          for ( i = 0; ; ++i )
          {
            *(_DWORD *)(v39 + 4 * i + 12) = *(_DWORD *)(a14 + 4 * i);
            if ( v57 == i )
              break;
          }
        }
      }
    }
    result = sub_1E61050(*a1, v37, v38, *(double *)a2.m128_u64, a3);
    goto LABEL_17;
  }
LABEL_16:
  result = a6;
LABEL_17:
  if ( ptr != v77 )
  {
    v59 = result;
    free(ptr);
    return v59;
  }
  return result;
}
