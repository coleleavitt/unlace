__int64 __fastcall sub_70D920(
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
  int v12; // ecx
  unsigned int v13; // r8d
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _UNKNOWN **v18; // rdx
  __m128i v19; // xmm2
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  char *v22; // r12
  size_t v23; // rax
  size_t v24; // r15
  void *v25; // rdi
  size_t v26; // r13
  unsigned int v27; // r12d
  char *v29; // r14
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r14
  int v35; // r9d
  unsigned int v36; // eax
  __int64 v37; // rax
  int v39; // [rsp+10h] [rbp-240h]
  int v41; // [rsp+18h] [rbp-238h]
  int v42; // [rsp+24h] [rbp-22Ch] BYREF
  __int64 v43; // [rsp+28h] [rbp-228h] BYREF
  __m128i v44; // [rsp+30h] [rbp-220h] BYREF
  __int64 v45; // [rsp+40h] [rbp-210h]
  __int64 v46; // [rsp+48h] [rbp-208h]
  _BYTE v47[16]; // [rsp+50h] [rbp-200h] BYREF
  void (__fastcall *v48)(_BYTE *, _BYTE *, __int64); // [rsp+60h] [rbp-1F0h]
  void (__fastcall *v49)(_BYTE *, __int64 *); // [rsp+68h] [rbp-1E8h]
  __int64 v50; // [rsp+70h] [rbp-1E0h]
  __m128i v51[6]; // [rsp+80h] [rbp-1D0h] BYREF
  char *s; // [rsp+E0h] [rbp-170h] BYREF
  __int128 v53; // [rsp+E8h] [rbp-168h]
  void *ptr; // [rsp+F8h] [rbp-158h]
  __int128 v55; // [rsp+100h] [rbp-150h]
  __int128 v56; // [rsp+110h] [rbp-140h]
  _QWORD *v57; // [rsp+120h] [rbp-130h]
  _DWORD v58[32]; // [rsp+128h] [rbp-128h] BYREF
  int v59; // [rsp+1A8h] [rbp-A8h] BYREF
  __int16 v60; // [rsp+1ACh] [rbp-A4h]
  __m128i si128; // [rsp+1AEh] [rbp-A2h]
  unsigned __int64 v62; // [rsp+1BEh] [rbp-92h]
  __int16 v63; // [rsp+1C6h] [rbp-8Ah]
  char v64; // [rsp+1C8h] [rbp-88h]
  __m128i v65; // [rsp+1C9h] [rbp-87h]
  __m128i v66; // [rsp+1D9h] [rbp-77h]
  __m128i v67; // [rsp+1E9h] [rbp-67h]
  __int64 v68; // [rsp+1F9h] [rbp-57h]
  unsigned int v69; // [rsp+201h] [rbp-4Fh]
  _QWORD v70[9]; // [rsp+205h] [rbp-4Bh] BYREF

  v12 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)((char *)&v70[2] + 3) = __readfsqword(0x28u);
  v60 = 0;
  v39 = v12;
  s = nullptr;
  ptr = nullptr;
  v57 = a9;
  v59 = 826360905;
  v53 = 0;
  v55 = 0;
  v56 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384270);
  v63 = 910;
  v62 = 0xAABBCCDD00000000LL;
  v64 = 0;
  v68 = 0;
  v69 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  qstrncpy(&v59, "IDA1", 6);
  v13 = a5;
  v64 = a6;
  v63 = 910;
  si128.m128i_i64[0] = 109;
  if ( a5 > 0x10 )
    v13 = 16;
  LODWORD(v62) = v39;
  if ( v13 >= 8 )
  {
    v70[0] = *a4;
    *(__int64 *)((char *)&v68 + v13 + 4) = *(_QWORD *)((char *)a4 + v13 - 8);
    v29 = (char *)a4 - ((char *)v70 - ((char *)v70 + 3));
    v30 = ((char *)v70 - ((char *)v70 + 3) + v13) & 0xFFFFFFF8;
    if ( v30 >= 8 )
    {
      v31 = v30 & 0xFFFFFFF8;
      v32 = 0;
      do
      {
        v33 = v32;
        v32 += 8;
        *(_QWORD *)((char *)v70 + v33 + 3) = *(_QWORD *)&v29[v33];
      }
      while ( v32 < v31 );
    }
  }
  else if ( (v13 & 4) != 0 )
  {
    LODWORD(v70[0]) = *(_DWORD *)a4;
    *(unsigned int *)((char *)&v69 + v13) = *(_DWORD *)((char *)a4 + v13 - 4);
  }
  else if ( v13 )
  {
    LOBYTE(v70[0]) = *(_BYTE *)a4;
    if ( (v13 & 2) != 0 )
      *(_WORD *)((char *)&v69 + v13 + 2) = *(_WORD *)((char *)a4 + v13 - 2);
  }
  memset(v58, 0, sizeof(v58));
  v14 = 128;
  if ( a8 <= 0x80 )
    v14 = a8;
  if ( v14 < 8 )
  {
    if ( (v14 & 4) != 0 )
    {
      v58[0] = *a7;
      *(_DWORD *)((char *)&v58[-1] + v14) = *(_DWORD *)((char *)a7 + v14 - 4);
    }
    else if ( v14 )
    {
      LOBYTE(v58[0]) = *(_BYTE *)a7;
      if ( (v14 & 2) != 0 )
        *(_WORD *)((char *)&v57 + v14 + 6) = *(_WORD *)((char *)a7 + v14 - 2);
    }
  }
  else
  {
    *(_QWORD *)((char *)&v58[-2] + v14) = *(_QWORD *)((char *)a7 + v14 - 8);
    qmemcpy(v58, a7, 8LL * ((v14 - 1) >> 3));
  }
  v15 = v57[1];
  if ( v15 )
  {
    v69 = v57[1];
    v68 = 237;
    *(_QWORD *)&v56 = 8LL * (unsigned int)v15;
    v16 = v56 + 237;
  }
  else
  {
    v68 = 0;
    v16 = 237;
    v69 = 0;
  }
  si128.m128i_i64[1] = v16;
  if ( (unsigned __int8)sub_813610(a1, a2, 0) )
  {
    v17 = 0;
    v18 = &off_2B0E4A0;
    if ( v69 <= 0x1FFFFFFF )
    {
      while ( *(_QWORD *)(a3 + 8 * v17 + 8) || ((_BYTE)v18[1] & 1) != 0 )
      {
        ++v17;
        v18 += 2;
        if ( v17 == 6 )
        {
          v19 = _mm_loadu_si128((const __m128i *)(a3 + 40));
          v20 = _mm_loadu_si128((const __m128i *)(a3 + 8));
          v66 = _mm_loadu_si128((const __m128i *)(a3 + 24));
          v21 = _mm_add_epi64(_mm_add_epi64(v66, v19), v20);
          v65 = v20;
          v67 = v19;
          *((_QWORD *)&v56 + 1) = _mm_add_epi64(v21, _mm_srli_si128(v21, 8)).m128i_u64[0];
          if ( !(unsigned __int8)sub_813810(&s, a2, &v59, 109)
            || !(unsigned __int8)sub_813810(&s, a2, v58, 128)
            || v57[1] && !(unsigned __int8)sub_813810(&s, a2, *v57, v56) )
          {
            if ( (_QWORD)v53 && (v22 = s) != nullptr && (v23 = strlen(s), (v24 = v23) != 0) )
            {
              v25 = *(void **)a1;
              v26 = v23 + 1;
              if ( *(_QWORD *)(a1 + 16) < v23 + 1 )
              {
                v37 = qvector_reserve(a1, *(_QWORD *)a1, v23 + 1, 1);
                *(_QWORD *)a1 = v37;
                v25 = (void *)v37;
              }
              *(_QWORD *)(a1 + 8) = v26;
              memmove(v25, v22, v24);
              *(_BYTE *)(*(_QWORD *)a1 + v24) = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 8) = 0;
            }
            goto LABEL_26;
          }
          v34 = si128.m128i_i64[1];
          if ( v34 != qftell(a2) )
          {
            if ( !under_debugger )
              interr(3333);
            BUG();
          }
          v42 = 0;
          v41 = *(_QWORD *)a3;
          memset(v51, 0, 32);
          sub_70AB90(&v44, (_QWORD *)a1, a2, nullptr, a6, *(_DWORD *)(a1 + 72), v51);
          if ( v51[1].m128i_i64[0] )
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v51[1].m128i_i64[0])(v51, v51, 3);
          if ( !(unsigned __int8)sub_70FD20(v41, (unsigned int)&v44, DWORD2(v56), a1, (unsigned int)&v42, v35) )
            goto LABEL_55;
          if ( v50 )
          {
            v36 = (*(__int64 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v50 + 16LL))(v50, &v42, 4);
          }
          else
          {
            if ( v48 )
            {
              v43 = 4;
              v49(v47, &v43);
            }
            v36 = sub_813810(v45, v46, &v42, 4);
          }
          v27 = v36;
          if ( (_BYTE)v36 && (!v50 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v50 + 32LL))(v50)) )
          {
            memset(v51, 0, 0x58u);
            MD5Init(v51);
            MD5Update();
            MD5Final(a1 + 48, v51);
          }
          else
          {
LABEL_55:
            v27 = 0;
          }
          v44.m128i_i64[0] = (__int64)off_2B0E470;
          if ( v50 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50);
          v44.m128i_i64[1] = (__int64)&off_2B0E438;
          if ( v48 )
            v48(v47, v47, 3);
          goto LABEL_27;
        }
      }
    }
    sub_3573A0((char **)a1);
  }
LABEL_26:
  v27 = 0;
LABEL_27:
  if ( ptr )
  {
    *(_QWORD *)&v55 = 0;
    qfree(ptr);
  }
  if ( s )
  {
    *(_QWORD *)&v53 = 0;
    qfree(s);
  }
  return v27;
}

