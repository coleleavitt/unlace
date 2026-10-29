__int64 __fastcall sub_72DE80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        unsigned __int64 a8,
        _QWORD *a9)
{
  const char *v12; // rsi
  bool v14; // zf
  int v15; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _UNKNOWN **v21; // rdx
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  char *v25; // r12
  size_t v26; // rax
  size_t v27; // r15
  void *v28; // rdi
  size_t v29; // r13
  unsigned int v30; // r12d
  char *v32; // r14
  unsigned int v33; // r8d
  unsigned int v34; // r8d
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r14
  int v38; // r9d
  unsigned int v39; // eax
  __int64 v40; // rax
  int v42; // [rsp+10h] [rbp-240h]
  int v44; // [rsp+18h] [rbp-238h]
  int v45; // [rsp+24h] [rbp-22Ch] BYREF
  __int64 v46; // [rsp+28h] [rbp-228h] BYREF
  __m128i v47; // [rsp+30h] [rbp-220h] BYREF
  __int64 v48; // [rsp+40h] [rbp-210h]
  __int64 v49; // [rsp+48h] [rbp-208h]
  _BYTE v50[16]; // [rsp+50h] [rbp-200h] BYREF
  void (__fastcall *v51)(_BYTE *, _BYTE *, __int64); // [rsp+60h] [rbp-1F0h]
  void (__fastcall *v52)(_BYTE *, __int64 *); // [rsp+68h] [rbp-1E8h]
  __int64 v53; // [rsp+70h] [rbp-1E0h]
  __m128i v54[6]; // [rsp+80h] [rbp-1D0h] BYREF
  char *s; // [rsp+E0h] [rbp-170h] BYREF
  __int128 v56; // [rsp+E8h] [rbp-168h]
  void *ptr; // [rsp+F8h] [rbp-158h]
  __int128 v58; // [rsp+100h] [rbp-150h]
  __int128 v59; // [rsp+110h] [rbp-140h]
  _QWORD *v60; // [rsp+120h] [rbp-130h]
  _DWORD v61[32]; // [rsp+128h] [rbp-128h] BYREF
  int v62; // [rsp+1A8h] [rbp-A8h] BYREF
  __int16 v63; // [rsp+1ACh] [rbp-A4h]
  __m128i si128; // [rsp+1AEh] [rbp-A2h]
  unsigned __int64 v65; // [rsp+1BEh] [rbp-92h]
  __int16 v66; // [rsp+1C6h] [rbp-8Ah]
  char v67; // [rsp+1C8h] [rbp-88h]
  __m128i v68; // [rsp+1C9h] [rbp-87h]
  __m128i v69; // [rsp+1D9h] [rbp-77h]
  __m128i v70; // [rsp+1E9h] [rbp-67h]
  __int64 v71; // [rsp+1F9h] [rbp-57h]
  unsigned int v72; // [rsp+201h] [rbp-4Fh]
  _QWORD v73[9]; // [rsp+205h] [rbp-4Bh] BYREF

  v12 = "IDA1";
  v14 = *(_BYTE *)(a1 + 68) == 32;
  v15 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)((char *)&v73[2] + 3) = __readfsqword(0x28u);
  if ( !v14 )
    v12 = "IDA2";
  v60 = a9;
  v63 = 0;
  v65 = 0xAABBCCDD00000000LL;
  v69 = 0;
  v42 = v15;
  s = nullptr;
  ptr = nullptr;
  v62 = 843138121;
  v66 = 910;
  v67 = 0;
  v71 = 0;
  v72 = 0;
  v56 = 0;
  v58 = 0;
  v59 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A82A0);
  v68 = 0;
  v70 = 0;
  qstrncpy(&v62, v12, 6);
  v16 = a5;
  v67 = a6;
  v66 = 910;
  si128.m128i_i64[0] = 109;
  if ( a5 > 0x10 )
    v16 = 16;
  LODWORD(v65) = v42;
  if ( v16 >= 8 )
  {
    v73[0] = *a4;
    *(__int64 *)((char *)&v71 + v16 + 4) = *(_QWORD *)((char *)a4 + v16 - 8);
    v32 = (char *)a4 - ((char *)v73 - ((char *)v73 + 3));
    v33 = ((char *)v73 - ((char *)v73 + 3) + v16) & 0xFFFFFFF8;
    if ( v33 >= 8 )
    {
      v34 = v33 & 0xFFFFFFF8;
      v35 = 0;
      do
      {
        v36 = v35;
        v35 += 8;
        *(_QWORD *)((char *)v73 + v36 + 3) = *(_QWORD *)&v32[v36];
      }
      while ( v35 < v34 );
    }
  }
  else if ( (v16 & 4) != 0 )
  {
    LODWORD(v73[0]) = *(_DWORD *)a4;
    *(unsigned int *)((char *)&v72 + v16) = *(_DWORD *)((char *)a4 + v16 - 4);
  }
  else if ( v16 )
  {
    LOBYTE(v73[0]) = *(_BYTE *)a4;
    if ( (v16 & 2) != 0 )
      *(_WORD *)((char *)&v72 + v16 + 2) = *(_WORD *)((char *)a4 + v16 - 2);
  }
  memset(v61, 0, sizeof(v61));
  v17 = 128;
  if ( a8 <= 0x80 )
    v17 = a8;
  if ( v17 < 8 )
  {
    if ( (v17 & 4) != 0 )
    {
      v61[0] = *a7;
      *(_DWORD *)((char *)&v61[-1] + v17) = *(_DWORD *)((char *)a7 + v17 - 4);
    }
    else if ( v17 )
    {
      LOBYTE(v61[0]) = *(_BYTE *)a7;
      if ( (v17 & 2) != 0 )
        *(_WORD *)((char *)&v60 + v17 + 6) = *(_WORD *)((char *)a7 + v17 - 2);
    }
  }
  else
  {
    *(_QWORD *)((char *)&v61[-2] + v17) = *(_QWORD *)((char *)a7 + v17 - 8);
    qmemcpy(v61, a7, 8LL * ((v17 - 1) >> 3));
  }
  v18 = v60[1];
  if ( v18 )
  {
    v72 = v60[1];
    v71 = 237;
    *(_QWORD *)&v59 = 8LL * (unsigned int)v18;
    v19 = v59 + 237;
  }
  else
  {
    v71 = 0;
    v19 = 237;
    v72 = 0;
  }
  si128.m128i_i64[1] = v19;
  if ( (unsigned __int8)sub_8369E0(a1, a2, 0) )
  {
    v20 = 0;
    v21 = &off_2B38440;
    if ( v72 <= 0x1FFFFFFF )
    {
      while ( *(_QWORD *)(a3 + 8 * v20 + 8) || ((_BYTE)v21[1] & 1) != 0 )
      {
        ++v20;
        v21 += 2;
        if ( v20 == 6 )
        {
          v22 = _mm_loadu_si128((const __m128i *)(a3 + 40));
          v23 = _mm_loadu_si128((const __m128i *)(a3 + 8));
          v69 = _mm_loadu_si128((const __m128i *)(a3 + 24));
          v24 = _mm_add_epi64(_mm_add_epi64(v69, v22), v23);
          v68 = v23;
          v70 = v22;
          *((_QWORD *)&v59 + 1) = _mm_add_epi64(v24, _mm_srli_si128(v24, 8)).m128i_u64[0];
          if ( !(unsigned __int8)sub_836BE0(&s, a2, &v62, 109)
            || !(unsigned __int8)sub_836BE0(&s, a2, v61, 128)
            || v60[1] && !(unsigned __int8)sub_836BE0(&s, a2, *v60, v59) )
          {
            if ( (_QWORD)v56 && (v25 = s) != nullptr && (v26 = strlen(s), (v27 = v26) != 0) )
            {
              v28 = *(void **)a1;
              v29 = v26 + 1;
              if ( *(_QWORD *)(a1 + 16) < v26 + 1 )
              {
                v40 = qvector_reserve(a1, *(_QWORD *)a1, v26 + 1, 1);
                *(_QWORD *)a1 = v40;
                v28 = (void *)v40;
              }
              *(_QWORD *)(a1 + 8) = v29;
              memmove(v28, v25, v27);
              *(_BYTE *)(*(_QWORD *)a1 + v27) = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 8) = 0;
            }
            goto LABEL_28;
          }
          v37 = si128.m128i_i64[1];
          if ( v37 != qftell(a2) )
          {
            if ( !under_debugger )
              interr(3333);
            BUG();
          }
          v45 = 0;
          v44 = *(_QWORD *)a3;
          memset(v54, 0, 32);
          sub_72B170(&v47, (_QWORD *)a1, a2, nullptr, a6, *(_DWORD *)(a1 + 72), v54);
          if ( v54[1].m128i_i64[0] )
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v54[1].m128i_i64[0])(v54, v54, 3);
          if ( !(unsigned __int8)sub_730280(v44, (unsigned int)&v47, DWORD2(v59), a1, (unsigned int)&v45, v38) )
            goto LABEL_57;
          if ( v53 )
          {
            v39 = (*(__int64 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v53 + 16LL))(v53, &v45, 4);
          }
          else
          {
            if ( v51 )
            {
              v46 = 4;
              v52(v50, &v46);
            }
            v39 = sub_836BE0(v48, v49, &v45, 4);
          }
          v30 = v39;
          if ( (_BYTE)v39 && (!v53 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53)) )
          {
            memset(v54, 0, 0x58u);
            MD5Init(v54);
            MD5Update(v54, &v62, 109);
            MD5Final(a1 + 48, v54);
          }
          else
          {
LABEL_57:
            v30 = 0;
          }
          v47.m128i_i64[0] = (__int64)off_2B38410;
          if ( v53 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
          v47.m128i_i64[1] = (__int64)&off_2B383D8;
          if ( v51 )
            v51(v50, v50, 3);
          goto LABEL_29;
        }
      }
    }
    sub_35A790((char **)a1);
  }
LABEL_28:
  v30 = 0;
LABEL_29:
  if ( ptr )
  {
    *(_QWORD *)&v58 = 0;
    qfree(ptr);
  }
  if ( s )
  {
    *(_QWORD *)&v56 = 0;
    qfree(s);
  }
  return v30;
}
