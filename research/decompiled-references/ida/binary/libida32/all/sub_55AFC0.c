bool __fastcall sub_55AFC0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // r15
  bool result; // al
  __int64 v7; // r13
  char *v8; // rax
  int v9; // eax
  char v10; // r15
  char *v11; // rsi
  int v12; // ecx
  __m128i si128; // xmm0
  __m128i v14; // xmm1
  void *v15; // rsi
  unsigned __int64 v16; // rbp
  _BYTE *v17; // r15
  _BYTE *v18; // rbx
  unsigned int v19; // edi
  __int64 v20; // r9
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-268h]
  bool v24; // [rsp+0h] [rbp-268h]
  bool v25; // [rsp+0h] [rbp-268h]
  bool v26; // [rsp+0h] [rbp-268h]
  unsigned __int64 v27; // [rsp+0h] [rbp-268h]
  unsigned __int64 v28; // [rsp+0h] [rbp-268h]
  __int64 v29; // [rsp+8h] [rbp-260h]
  __int64 v30; // [rsp+8h] [rbp-260h]
  __int64 v31; // [rsp+8h] [rbp-260h]
  _QWORD v32[3]; // [rsp+10h] [rbp-258h] BYREF
  void *v33; // [rsp+28h] [rbp-240h]
  __m128i v34[2]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v35; // [rsp+50h] [rbp-218h]
  __int128 v36; // [rsp+60h] [rbp-208h]
  __int64 v37; // [rsp+70h] [rbp-1F8h]
  void *v38; // [rsp+80h] [rbp-1E8h]
  __int64 v39; // [rsp+88h] [rbp-1E0h]
  unsigned int v40; // [rsp+A0h] [rbp-1C8h]
  void *v41; // [rsp+B0h] [rbp-1B8h]
  __int64 v42; // [rsp+B8h] [rbp-1B0h]
  __int64 v43; // [rsp+C8h] [rbp-1A0h]
  unsigned int v44; // [rsp+D4h] [rbp-194h]
  char v45; // [rsp+D8h] [rbp-190h]
  __int64 v46; // [rsp+DCh] [rbp-18Ch]
  __int64 v47; // [rsp+E4h] [rbp-184h] BYREF
  __int64 v48; // [rsp+ECh] [rbp-17Ch]
  __int64 v49; // [rsp+F4h] [rbp-174h]
  char v50; // [rsp+FCh] [rbp-16Ch] BYREF
  char v51; // [rsp+1BCh] [rbp-ACh] BYREF
  void *ptr; // [rsp+1C0h] [rbp-A8h]
  __int128 v53; // [rsp+1C8h] [rbp-A0h]
  __int64 v54; // [rsp+1D8h] [rbp-90h]
  __int64 v55; // [rsp+1E0h] [rbp-88h]
  __int64 v56; // [rsp+1E8h] [rbp-80h]
  __int64 v57; // [rsp+1F0h] [rbp-78h]
  __int128 v58; // [rsp+1F8h] [rbp-70h]
  __int128 v59; // [rsp+208h] [rbp-60h]
  __int64 v60; // [rsp+218h] [rbp-50h]
  unsigned __int64 v61; // [rsp+220h] [rbp-48h]
  unsigned __int64 v62; // [rsp+228h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v5 = sub_3B9AA0((__int64)a1, a3, 0);
  if ( (~BYTE1(v5) & 6) != 0 )
    return 0;
  v7 = a1[4];
  v29 = a1[2];
  v23 = *(_QWORD *)(*a1 + 544LL);
  sub_559580((__int64)v32, a3, v5, 0);
  v44 = a3;
  v46 = 0;
  v49 = 0;
  v47 = -1;
  v32[0] = &off_2BCF860;
  v48 = 0xFFFFFFFFLL;
  v8 = &v50;
  do
  {
    *(_WORD *)v8 = 0;
    v8 += 24;
    *((_WORD *)v8 - 11) = 0;
    *((_WORD *)v8 - 10) = 0;
    *((_DWORD *)v8 - 1) = 0;
    *((_WORD *)v8 - 9) = 0;
    *((_QWORD *)v8 - 2) = 0;
    *((_DWORD *)v8 - 2) = 0;
  }
  while ( &v51 != v8 );
  v53 = 0;
  v55 = v23;
  v56 = v29;
  ptr = nullptr;
  v54 = 0;
  v57 = v7;
  v60 = -1;
  v61 = v5;
  v45 = 2;
  v40 = v40 & 0xFFF2FFFF | 0x90000;
  v58 = 0;
  v59 = 0;
  v9 = sub_55A0B0(a1, (__int64)&v47, a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)sub_39CC50((__int64)a1) != 25 )
      sub_4DB6D0(a1, -v10, a3, 0);
    goto LABEL_30;
  }
  if ( !v9 )
  {
LABEL_30:
    v32[0] = &off_2BCF860;
    if ( ptr )
    {
      *(_QWORD *)&v53 = 0;
      qfree(ptr);
    }
    v37 = 0;
    v32[0] = &off_2BD10E8;
    v43 = 0;
    v35 = 0;
    v36 = 0;
    if ( v41 )
    {
      v42 = 0;
      qfree(v41);
    }
    if ( v38 )
    {
      v39 = 0;
      qfree(v38);
    }
    if ( v33 )
    {
      v34[0].m128i_i64[0] = 0;
      qfree(v33);
    }
    return 0;
  }
  if ( !sub_375980(0x12u, v32) )
  {
    v11 = "!!bad insn.itype!!";
    v12 = *(_DWORD *)(v56 + 104);
    if ( WORD2(v48) >= v12 && WORD2(v48) < *(int *)(v56 + 108) )
      v11 = *(char **)(*(_QWORD *)(v56 + 112) + 16LL * (WORD2(v48) - v12));
    sub_55AAA0(v32, v11, 8, nullptr);
  }
  si128 = _mm_load_si128(v34);
  v14 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v15 = v33;
  v16 = si128.m128i_i64[0];
  v33 = *(void **)a2;
  *(_QWORD *)a2 = v15;
  *(__m128i *)(a2 + 8) = si128;
  v34[0] = v14;
  if ( si128.m128i_i64[0] > 1uLL )
  {
    tag_remove();
    v16 = *(_QWORD *)(a2 + 8);
    if ( v16 > 1 )
    {
      v17 = *(_BYTE **)a2;
      v18 = (_BYTE *)(*(_QWORD *)a2 + v16 - 1);
      if ( *(_QWORD *)a2 < (unsigned __int64)v18 )
      {
        while ( 1 )
        {
          v19 = (char)*(v18 - 1);
          if ( v19 > 0x7F || !isspace(v19) )
            break;
          if ( v17 == --v18 )
            goto LABEL_40;
        }
      }
      v20 = v18 - v17;
      if ( v18 == v17 )
      {
LABEL_40:
        if ( v17 )
        {
          *(_QWORD *)(a2 + 8) = 0;
          qfree(v17);
          *(_QWORD *)a2 = 0;
          v16 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)(a2 + 16) = 0;
        }
      }
      else
      {
        v21 = v20 + 1;
        if ( v16 < v20 + 1 )
        {
          if ( *(_QWORD *)(a2 + 16) < v21 )
          {
            v31 = v18 - v17;
            v28 = v20 + 1;
            v22 = qvector_reserve(a2, v17, v20 + 1, 1);
            v16 = *(_QWORD *)(a2 + 8);
            v21 = v28;
            *(_QWORD *)a2 = v22;
            v17 = (_BYTE *)v22;
            v20 = v31;
          }
          v27 = v21;
          v30 = v20;
          memset(&v17[v16], 0, v21 - v16);
          v18 = (_BYTE *)(*(_QWORD *)a2 + v30);
          *(_QWORD *)(a2 + 8) = v27;
        }
        else if ( v16 != v20 + 1 )
        {
          *(_QWORD *)(a2 + 8) = v21;
        }
        *v18 = 0;
        v16 = *(_QWORD *)(a2 + 8);
      }
    }
  }
  result = v16 > 1;
  v32[0] = &off_2BCF860;
  if ( ptr )
  {
    *(_QWORD *)&v53 = 0;
    qfree(ptr);
    result = v16 > 1;
  }
  v37 = 0;
  v32[0] = &off_2BD10E8;
  v43 = 0;
  v35 = 0;
  v36 = 0;
  if ( v41 )
  {
    v24 = result;
    v42 = 0;
    qfree(v41);
    result = v24;
  }
  if ( v38 )
  {
    v25 = result;
    v39 = 0;
    qfree(v38);
    result = v25;
  }
  if ( v33 )
  {
    v26 = result;
    v34[0].m128i_i64[0] = 0;
    qfree(v33);
    return v26;
  }
  return result;
}

