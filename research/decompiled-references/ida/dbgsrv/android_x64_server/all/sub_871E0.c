/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_871E0
// Address: 0x00000000000871E0

//----- (00000000000871E0) ----------------------------------------------------
__int64 __fastcall sub_871E0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  unsigned int v4; // r15d
  __m128i v7; // xmm0
  int v8; // r12d
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  _BYTE *v12; // rax
  unsigned int v13; // ecx
  unsigned __int8 v14; // cf
  void *v15; // r12
  _OWORD *v16; // rcx
  __int64 v17; // r15
  unsigned int v18; // eax
  char v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  void *v23; // rsi
  unsigned __int64 v24; // rdx
  bool v25; // cc
  size_t v26; // rdx
  void *v27; // r8
  void *v28; // rax
  void *v29; // r14
  __int64 v30; // rax
  char *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  char *v34; // rax
  char *v35; // rdx
  __int64 v36; // rax
  char *v37; // rcx
  int v38; // ecx
  __m128i v39; // xmm0
  __int64 v40; // r14
  const char *v41; // rax
  int v42; // eax
  unsigned int qerrno; // eax
  unsigned int v45; // [rsp+Ch] [rbp-BCh]
  __m128i v46; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v47; // [rsp+20h] [rbp-A8h] BYREF
  void *src; // [rsp+38h] [rbp-90h]
  size_t n; // [rsp+40h] [rbp-88h]
  _OWORD *v50; // [rsp+48h] [rbp-80h]
  void *dest[5]; // [rsp+50h] [rbp-78h] BYREF
  char v52; // [rsp+78h] [rbp-50h]
  __int128 v53; // [rsp+80h] [rbp-48h]
  unsigned __int64 v54; // [rsp+90h] [rbp-38h]

  v54 = __readfsqword(0x28u);
  dest[4] = nullptr;
  v52 = 0;
  v7.m128i_i64[0] = 0;
  v53 = 0;
  memset(dest, 0, 26);
  v50 = (_OWORD *)(a1 + 32);
  v46.m128i_i64[0] = 0;
  v8 = 392;
  while ( 2 )
  {
    v12 = *(_BYTE **)(a1 + 8);
LABEL_7:
    switch ( *v12++ )
    {
      case 0:
        v11 = *(_QWORD *)(a1 + 64);
        if ( v11 < 2 )
          goto LABEL_56;
        v9 = v11 - 1;
        v10 = *(_QWORD *)(a1 + 56) + 56 * v9;
        *(_QWORD *)a1 = *(_QWORD *)(v10 + 24);
        *(_QWORD *)(a1 + 8) = *(_QWORD *)(v10 + 32);
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(v10 + 48);
        *(_QWORD *)(a1 + 64) = v9;
        sub_38490((char **)v10);
        continue;
      case 9:
      case 0xA:
      case 0x20:
        *(_QWORD *)(a1 + 8) = v12;
        goto LABEL_7;
      case 0x23:
        if ( *v12 != 35 )
          goto LABEL_56;
        v13 = *(unsigned __int16 *)(a2 + 24);
        a4 = 0;
        v45 = v4;
        if ( v13 > 8 )
        {
          v15 = nullptr;
        }
        else
        {
          v14 = _bittest(&v8, v13);
          v15 = nullptr;
          if ( v14 )
          {
            v15 = *(void **)(a1 + 32);
            a4 = *(__m128 *)(a1 + 40);
            v7.m128i_i64[0] = 0;
            v16 = v50;
            *v50 = 0;
            *((_QWORD *)v16 + 2) = 0;
          }
        }
        v47 = (__m128i)a4;
        v17 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = v12 + 1;
        v18 = sub_862A0(a1, (__int64)dest, *(_DWORD *)(a1 + 64), nullptr, *(double *)v7.m128i_i64, a4);
        v19 = 1;
        if ( v18 )
          goto LABEL_13;
        v19 = 3;
        switch ( LOWORD(dest[3]) )
        {
          case 1u:
            goto LABEL_42;
          case 0x3Bu:
            if ( (*(_BYTE *)(a1 + 508) & 8) == 0 )
              goto LABEL_41;
            goto LABEL_25;
          case 0x2Fu:
            if ( *(_WORD *)(a2 + 24) != 47 || (*(_BYTE *)(a1 + 508) & 4) == 0 )
              goto LABEL_41;
LABEL_25:
            while ( 1 )
            {
              v22 = *(_QWORD *)(a1 + 64);
              if ( !v22 )
                break;
              v20 = v22 - 1;
              v21 = *(_QWORD *)(a1 + 56) + 56 * v20;
              *(_QWORD *)a1 = *(_QWORD *)(v21 + 24);
              *(_QWORD *)(a1 + 8) = *(_QWORD *)(v21 + 32);
              *(_DWORD *)(a1 + 80) = *(_DWORD *)(v21 + 48);
              *(_QWORD *)(a1 + 64) = v20;
              sub_38490((char **)v21);
            }
            *(_WORD *)(a2 + 24) = 1;
            v4 = 0;
            v19 = 1;
            if ( v15 )
              goto LABEL_43;
            goto LABEL_44;
        }
        v23 = *(void **)(a1 + 24);
        v7 = _mm_load_si128(&v47);
        if ( (unsigned __int16)(LOWORD(dest[3]) - 6) < 3u )
          goto LABEL_31;
        if ( LOWORD(dest[3]) != 2 )
        {
          if ( LOWORD(dest[3]) == 3 )
          {
LABEL_31:
            if ( !v23 || (v24 = *(_QWORD *)(a1 + 8), v25 = v24 <= (unsigned __int64)v23, v26 = v24 - (_QWORD)v23, v25) )
            {
LABEL_41:
              *(_QWORD *)(a1 + 16) = v17;
              *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 24);
LABEL_42:
              v4 = v45;
              if ( !v15 )
                goto LABEL_44;
LABEL_43:
              qfree(v15);
              goto LABEL_44;
            }
            dest[1] = nullptr;
            v27 = (void *)(v26 + 1);
            v28 = dest[0];
            if ( dest[2] < (void *)(v26 + 1) )
            {
              n = v26;
              src = v23;
              v29 = (void *)(v26 + 1);
              v28 = qvector_reserve((__int64)dest, (char *)dest[0], v26 + 1, 1u);
              dest[0] = v28;
              v23 = src;
              v26 = n;
              v27 = v29;
            }
            dest[1] = v27;
            *((_BYTE *)v28 + v26) = 0;
            memmove(dest[0], v23, v26);
            v7 = _mm_load_si128(&v47);
          }
          else if ( LOWORD(dest[3]) <= 0x7Fu )
          {
            goto LABEL_41;
          }
        }
        v30 = *(unsigned __int16 *)(a2 + 24);
        if ( (_DWORD)v30 == 2 )
          goto LABEL_47;
        v30 = (unsigned __int16)v30;
        if ( (unsigned __int16)v30 > 0x7Fu )
          goto LABEL_47;
        if ( v7.m128i_i64[0] > 1uLL )
        {
          v30 = *(_QWORD *)a2;
          *(_QWORD *)a2 = v15;
          *(__m128i *)(a2 + 8) = v7;
          v15 = (void *)v30;
LABEL_47:
          if ( dest[1] )
          {
            v31 = (char *)dest[1] - 1;
            if ( dest[1] != (char *)&dword_0 + 1 )
            {
              v32 = *(_QWORD *)(a2 + 8);
              v33 = v32 - 1;
              if ( !v32 )
                v33 = 0;
              v34 = *(char **)a2;
              v35 = (char *)dest[1] + v33;
              if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)dest[1] + v33 )
              {
                v47.m128i_i64[0] = v33;
                v46.m128i_i64[0] = (__int64)dest[1] + v33;
                v34 = (char *)qvector_reserve(a2, v34, (unsigned __int64)v35, 1u);
                *(_QWORD *)a2 = v34;
                v35 = (char *)v46.m128i_i64[0];
                v33 = v47.m128i_i64[0];
              }
              *(_QWORD *)(a2 + 8) = v35;
              v31[v33 + (_QWORD)v34] = 0;
              v30 = (__int64)memcpy((void *)(*(_QWORD *)a2 + v33), dest[0], (size_t)v31);
            }
          }
          *(_QWORD *)(a1 + 16) = v17;
          LOBYTE(v30) = 1;
          v46.m128i_i64[0] = v30;
          v19 = 0;
          goto LABEL_42;
        }
        v18 = set_qerrno(0x1Du);
        v19 = 1;
LABEL_13:
        v4 = v18;
        if ( v15 )
          goto LABEL_43;
LABEL_44:
        v8 = 392;
        if ( !v19 )
          continue;
        if ( v19 != 3 )
          goto LABEL_78;
LABEL_56:
        if ( (v46.m128i_i8[0] & 1) == 0 )
          goto LABEL_57;
        v36 = *(_QWORD *)(a2 + 8);
        if ( v36 )
          v37 = *(char **)a2;
        else
          v37 = byte_155771;
        v38 = (unsigned __int8)*v37;
        if ( (v38 & 0x80u) == 0 && (unsigned int)(v38 - 48) < 0xA )
          goto LABEL_65;
        if ( !v36 )
        {
          if ( byte_155771[0] != 46 )
            goto LABEL_68;
LABEL_65:
          v39 = _mm_loadu_si128((const __m128i *)a1);
          v46 = v39;
          v40 = *(_QWORD *)(a1 + 16);
          if ( v36 )
            v41 = *(const char **)a2;
          else
            v41 = s1;
          *(_QWORD *)(a1 + 8) = v41;
          *(_QWORD *)a1 = v41;
          v4 = sub_862A0(a1, a2, 0, nullptr, *(double *)v39.m128i_i64, a4);
          *(__m128i *)a1 = _mm_load_si128(&v46);
          *(_QWORD *)(a1 + 16) = v40;
          if ( v4 )
            goto LABEL_78;
          goto LABEL_57;
        }
        if ( **(_BYTE **)a2 == 46 )
          goto LABEL_65;
LABEL_68:
        v42 = sub_86110(a1, 1, a2, *(double *)v7.m128i_i64, a4);
        if ( v42 != -1 )
        {
          if ( v42 == 1 )
          {
            v4 = sub_862A0(a1, a2, 0, nullptr, *(double *)v7.m128i_i64, a4);
            if ( !v4 && *(_QWORD *)(a1 + 64) )
            {
              qerrno = sub_871E0(a1, a2, *(double *)v7.m128i_i64, a4);
              goto LABEL_77;
            }
            goto LABEL_78;
          }
LABEL_57:
          v4 = 0;
          goto LABEL_78;
        }
        qerrno = get_qerrno();
LABEL_77:
        v4 = qerrno;
LABEL_78:
        if ( dest[0] )
        {
          dest[1] = nullptr;
          qfree(dest[0]);
          dest[0] = nullptr;
          dest[2] = nullptr;
        }
        return v4;
      default:
        goto LABEL_56;
    }
  }
}
// 872E3: variable 'v4' is possibly undefined
// 0: using guessed type int dword_0;
