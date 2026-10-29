void __fastcall sub_1E392C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6, __m128i a7)
{
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rbx
  __int64 v14; // r15
  char v15; // al
  __int64 v16; // rdx
  __int64 *v17; // rdx
  __int64 v18; // rsi
  int v19; // r13d
  int v20; // esi
  int v21; // edx
  char v22; // r12
  unsigned __int16 *v23; // r12
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // r13
  int v29; // eax
  __int64 v30; // rdx
  void **v31; // rsi
  __int64 *v32; // r13
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r13
  int v37; // eax
  __int64 v38; // r8
  unsigned __int64 v39; // r8
  int v40; // r13d
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int16 *v45; // r12
  __int64 v46; // rbx
  int v47; // eax
  __int64 v48; // rdx
  void **v49; // rsi
  __int64 *v50; // rbx
  __int64 v51; // r8
  __int64 v53; // [rsp+8h] [rbp-120h]
  char v54; // [rsp+17h] [rbp-111h]
  int v55; // [rsp+18h] [rbp-110h]
  int v56; // [rsp+40h] [rbp-E8h]
  __int64 *v57; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v58; // [rsp+48h] [rbp-E0h]
  char v59; // [rsp+5Ah] [rbp-CEh] BYREF
  char v60; // [rsp+5Bh] [rbp-CDh] BYREF
  int v61; // [rsp+5Ch] [rbp-CCh] BYREF
  __int64 v62[2]; // [rsp+60h] [rbp-C8h] BYREF
  void *v63; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+78h] [rbp-B0h]
  _BYTE v65[32]; // [rsp+80h] [rbp-A8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-80h]
  _BYTE v68[120]; // [rsp+B0h] [rbp-78h] BYREF

  v63 = v65;
  v9 = *(_BYTE *)(a3 + 28);
  v64 = 0x400000000LL;
  v54 = v9 >> 7;
  v53 = sub_B98F20(a3) + 8LL * (unsigned __int16)(*(_DWORD *)(a3 + 84) >> 13);
  v10 = sub_B98F20(a3);
  if ( v53 != v10 )
  {
    v13 = (__int64 *)v10;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v14 = *v13;
            v15 = *(_BYTE *)(*v13 + 28);
            if ( (v15 & 4) != 0 )
              break;
LABEL_15:
            if ( (__int64 *)v53 == ++v13 )
              goto LABEL_16;
          }
          v16 = *(_QWORD *)v14;
          if ( (*(_QWORD *)v14 & 6) == 0 && (v15 & 1) == 0 && *(_DWORD *)(v14 + 16) )
          {
            if ( !v16 )
              BUG();
            v17 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
            v18 = *v17;
            ptr = v68;
            v62[1] = (__int64)(v17 + 1);
            v67 = 0x400000000LL;
            v62[0] = v18;
            sub_1E4C9B0(a1, v18, v17 + 1, &ptr);
            sub_1E4CA90(*(_QWORD *)(v14 + 8));
            v59 = 0;
            v19 = v67;
            v56 = (int)ptr;
            v60 = 0;
            v61 = 0;
            sub_F6CE20(v62);
            v20 = 0;
            v21 = sub_F6CCB0(v62, a5);
            if ( (*(_BYTE *)v14 & 6) == 0 && (*(_BYTE *)(v14 + 28) & 1) == 0 )
              v20 = *(_DWORD *)(v14 + 16);
            v22 = sub_1E54D70(a1, v20, v21, v56, v19, a4, (__int64)&v59, (__int64)&v60, (__int64)&v61);
            if ( v22 )
            {
              sub_B88650(a2, 1);
              v54 = v22;
            }
            else if ( v61 != 1 )
            {
              v40 = 0;
              v57 = v13;
              v55 = *(_DWORD *)(a1 + 12632);
              while ( 1 )
              {
                *(_DWORD *)(a1 + 12632) = ++v40;
                v45 = sub_1DDCBD0(a1, *(_QWORD *)(v14 + 8), a4, 1, v11, v12, a5, a6);
                if ( v45 == (unsigned __int16 *)((char *)&dword_0 + 1) )
                  break;
                v46 = *(_QWORD *)(a2 + 40);
                v47 = sub_B98AF0(v14);
                v48 = *(_QWORD *)v14;
                v49 = nullptr;
                if ( *(_QWORD *)v14 )
                {
                  v49 = (void **)(v48 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( (v48 & 6) != 0 )
                    v49 = nullptr;
                }
                v50 = (__int64 *)sub_1DD4AE0(a1, v49, a4, v47, v46, 0, a5, a6);
                if ( !v50 )
                  break;
                v51 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
                if ( (v51 & 4) != 0 )
                  v41 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF8LL);
                else
                  v41 = v51 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v41 )
                  v41 -= 64LL;
                v42 = sub_184C6E0(
                        (_QWORD *)a1,
                        *v50,
                        v50,
                        (_DWORD *)((unsigned __int64)v45 & 0xFFFFFFFFFFFFFFFELL),
                        v41,
                        0,
                        a5);
                if ( v42 == 1 )
                  break;
                v43 = v42 & 0xFFFFFFFFFFFFFFFELL;
                v44 = (unsigned int)v64 + 1LL;
                if ( v44 > HIDWORD(v64) )
                {
                  v58 = v43;
                  sub_2237220(&v63, v65, v44, 8);
                  *((_QWORD *)v63 + (unsigned int)v64) = v58;
                  LODWORD(v64) = v64 + 1;
                  *(_DWORD *)(a1 + 12632) = v55;
                  if ( v40 == v61 - 1 )
                  {
LABEL_68:
                    v13 = v57;
                    goto LABEL_13;
                  }
                }
                else
                {
                  *((_QWORD *)v63 + (unsigned int)v64) = v43;
                  LODWORD(v64) = v64 + 1;
                  *(_DWORD *)(a1 + 12632) = v55;
                  if ( v61 - 1 == v40 )
                    goto LABEL_68;
                }
              }
              v13 = v57;
              v54 = 1;
              *(_DWORD *)(a1 + 12632) = v55;
            }
LABEL_13:
            if ( ptr != v68 )
              free(ptr);
            goto LABEL_15;
          }
          v23 = sub_1DDCBD0(a1, *(_QWORD *)(v14 + 8), a4, 1, v11, v12, a5, a6);
          if ( v23 != (unsigned __int16 *)((char *)&dword_0 + 1) )
            break;
          v54 = 1;
          if ( (__int64 *)v53 == ++v13 )
            goto LABEL_16;
        }
        v24 = (*(__int64 *)v14 >> 1) & 3;
        if ( ((*(__int64 *)v14 >> 1) & 3) != 0 )
          break;
        v28 = *(_QWORD *)(a2 + 40);
        v29 = sub_B98AF0(v14);
        v30 = *(_QWORD *)v14;
        v31 = nullptr;
        if ( *(_QWORD *)v14 && (v30 & 6) == 0 )
          v31 = (void **)(v30 & 0xFFFFFFFFFFFFFFF8LL);
        v32 = (__int64 *)sub_1DD4AE0(a1, v31, a4, v29, v28, 0, a5, a6);
        if ( v32 )
        {
          if ( (*(_BYTE *)v14 & 6) != 0 || (*(_BYTE *)(v14 + 28) & 1) != 0 )
          {
            v33 = *(_QWORD *)(sub_B8C1B0(*(_QWORD *)(a1 + 544)) + 16);
            if ( (v33 & 4) != 0 )
              v34 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
            else
              v34 = v33 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v34 )
              v34 -= 64LL;
            v35 = sub_1849520((_QWORD *)a1, v32, (unsigned __int64)v23 & 0xFFFFFFFFFFFFFFFELL, v34, a5);
          }
          else
          {
            v38 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
            if ( (v38 & 4) != 0 )
              v39 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF8LL);
            else
              v39 = v38 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v39 )
              v39 -= 64LL;
            v35 = sub_184C6E0(
                    (_QWORD *)a1,
                    *v32,
                    v32,
                    (_DWORD *)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFFELL),
                    v39,
                    0,
                    a5);
          }
          if ( v35 != 1 )
            goto LABEL_45;
        }
LABEL_39:
        ++v13;
        sub_B88650(a2, 1);
        v54 = 1;
        if ( (__int64 *)v53 == v13 )
          goto LABEL_16;
      }
      if ( v24 != 1 )
      {
        v25 = 0;
        if ( v24 != 2 )
          goto LABEL_23;
      }
      v36 = sub_1E38470(a1, *(_DWORD *)(v14 + 16), *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFF8LL, a4, 0, a5, a6, a7);
      if ( !v36 )
        goto LABEL_39;
      v37 = sub_B98AF0(v14);
      v35 = sub_1840700(
              a1,
              v36,
              (unsigned __int16 *)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFFELL),
              v37,
              *(double *)a5.m128_u64);
      if ( v35 == 1 )
        goto LABEL_39;
LABEL_45:
      v25 = v35 & 0xFFFFFFFFFFFFFFFELL;
LABEL_23:
      v26 = (unsigned int)v64;
      v27 = (unsigned int)v64 + 1LL;
      if ( v27 > HIDWORD(v64) )
      {
        sub_2237220(&v63, v65, v27, 8);
        v26 = (unsigned int)v64;
      }
      ++v13;
      *((_QWORD *)v63 + v26) = v25;
      LODWORD(v64) = v64 + 1;
    }
    while ( (__int64 *)v53 != v13 );
  }
LABEL_16:
  sub_187CDA0((_QWORD *)a1, a2, 0, v63, (unsigned int)v64, v54, (__m128i)a5, *(double *)a6.m128_u64);
  if ( v63 != v65 )
    free(v63);
}
