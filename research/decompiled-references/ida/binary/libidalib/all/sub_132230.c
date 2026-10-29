__int64 __fastcall sub_132230(__int64 a1, unsigned __int64 a2, char a3)
{
  int flags; // r14d
  unsigned int aflags; // r12d
  int v7; // ecx
  char v8; // r8
  __int64 func; // rax
  __int64 v10; // r12
  const char *v11; // r15
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r15
  unsigned __int64 v21; // r14
  __int64 v22; // rsi
  __m128i si128; // xmm0
  __int64 v24; // r12
  unsigned __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rsi
  __m128i v28; // xmm0
  __int64 v29; // r12
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // r8
  unsigned __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rsi
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // [rsp+0h] [rbp-90h]
  unsigned __int64 v49; // [rsp+0h] [rbp-90h]
  unsigned __int64 v50; // [rsp+0h] [rbp-90h]
  unsigned __int64 v51; // [rsp+0h] [rbp-90h]
  __int64 v52; // [rsp+8h] [rbp-88h]
  __int64 v53; // [rsp+8h] [rbp-88h]
  __int64 v54; // [rsp+8h] [rbp-88h]
  __int64 v55; // [rsp+8h] [rbp-88h]
  __int64 v56; // [rsp+10h] [rbp-80h]
  __int64 v57; // [rsp+10h] [rbp-80h]
  __int64 v58; // [rsp+10h] [rbp-80h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  flags = get_flags_ex();
  aflags = get_aflags();
  if ( a3 )
  {
    if ( get_ea_name() > 0 )
    {
      if ( (aflags & 8) != 0 )
      {
        v38 = *(_QWORD *)(a1 + 8);
        if ( v38 )
        {
          v40 = v38 + 4;
          v39 = v38 + 5;
          --v38;
        }
        else
        {
          v39 = 6;
          v40 = 5;
        }
        v41 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v39 )
        {
          v57 = v38;
          v54 = v40;
          v50 = v39;
          v46 = qvector_reserve();
          v38 = v57;
          v40 = v54;
          *(_QWORD *)a1 = v46;
          v41 = v46;
          v39 = v50;
        }
        *(_QWORD *)(a1 + 8) = v39;
        *(_BYTE *)(v41 + v40) = 0;
        v42 = *(_QWORD *)a1 + v38;
        *(_DWORD *)v42 = 1801545079;
        *(_BYTE *)(v42 + 4) = 32;
      }
      if ( (aflags & 4) != 0 )
      {
        v34 = *(_QWORD *)(a1 + 8);
        if ( v34 )
        {
          v36 = v34 + 3;
          v35 = v34 + 4;
          --v34;
        }
        else
        {
          v35 = 5;
          v36 = 4;
        }
        v37 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v35 )
        {
          v58 = v34;
          v55 = v36;
          v51 = v35;
          v47 = qvector_reserve();
          v34 = v58;
          v36 = v55;
          *(_QWORD *)a1 = v47;
          v37 = v47;
          v35 = v51;
        }
        *(_QWORD *)(a1 + 8) = v35;
        *(_BYTE *)(v37 + v36) = 0;
        *(_DWORD *)(*(_QWORD *)a1 + v34) = 543323504;
      }
      if ( (~(_WORD)flags & 0xC000) == 0 )
      {
        v30 = *(_QWORD *)(a1 + 8);
        if ( v30 )
        {
          v32 = v30 + 7;
          v31 = v30 + 8;
          --v30;
        }
        else
        {
          v31 = 9;
          v32 = 8;
        }
        v33 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v31 )
        {
          v56 = v32;
          v53 = v30;
          v49 = v31;
          v45 = qvector_reserve();
          v32 = v56;
          v30 = v53;
          *(_QWORD *)a1 = v45;
          v33 = v45;
          v31 = v49;
        }
        *(_QWORD *)(a1 + 8) = v31;
        *(_BYTE *)(v33 + v32) = 0;
        *(_QWORD *)(*(_QWORD *)a1 + v30) = 0x656D616E6F747561LL;
      }
      sub_96630((__int64 *)a1);
    }
    if ( (aflags & 0x4000) != 0 )
    {
      get_ea_name();
      sub_96630((__int64 *)a1);
    }
    if ( (~(_WORD)flags & 0x600) != 0 )
      v7 = 1;
    else
      v7 = 7;
    v8 = 3;
  }
  else
  {
    v7 = 7;
    v8 = 2;
    if ( (~BYTE1(flags) & 6) != 0 )
      v7 = 1;
  }
  sub_12DEE0((__int64 *)a1, a2, flags, v7, (aflags >> 9) & 4 | v8);
  func = get_func();
  if ( func && *(_QWORD *)func == a2 )
  {
    if ( *(_QWORD *)(func + 48) )
    {
      sub_96630((__int64 *)a1);
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(func + 17) & 0x40) != 0 )
      {
        if ( v19 )
        {
          v20 = v19 + 34;
          v21 = v19 + 35;
          --v19;
        }
        else
        {
          v21 = 36;
          v20 = 35;
        }
        v22 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v21 )
        {
          v44 = qvector_reserve();
          *(_QWORD *)a1 = v44;
          v22 = v44;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_1D3700);
        *(_QWORD *)(a1 + 8) = v21;
        *(_BYTE *)(v22 + v20) = 0;
        v24 = *(_QWORD *)a1 + v19;
        *(__m128i *)v24 = si128;
        *(__m128i *)(v24 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D3710);
        *(_DWORD *)(v24 + 31) = 174809953;
      }
      else
      {
        if ( v19 )
        {
          v26 = v19 + 38;
          v25 = v19 + 39;
          --v19;
        }
        else
        {
          v25 = 40;
          v26 = 39;
        }
        v27 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v25 )
        {
          v43 = qvector_reserve();
          *(_QWORD *)a1 = v43;
          v27 = v43;
        }
        v28 = _mm_load_si128((const __m128i *)&xmmword_1D3720);
        *(_QWORD *)(a1 + 8) = v25;
        *(_BYTE *)(v27 + v26) = 0;
        v29 = *(_QWORD *)a1 + v19;
        *(__m128i *)v29 = v28;
        *(__m128i *)(v29 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D3730);
        *(_QWORD *)(v29 + 31) = 0xA6E776F6E6B6E75LL;
      }
    }
  }
  if ( (unsigned __int8)is_problem_present() )
  {
    v10 = 55;
    v11 = "decision to convert to instruction/data is made by IDA\n";
    if ( a3 )
    {
      v10 = 14;
      v11 = " ida_decision ";
    }
    v12 = *(_QWORD *)(a1 + 8);
    v13 = v10;
    if ( v12 )
      v13 = --v12 + v10;
    v14 = *(_QWORD *)a1;
    v15 = v13 + 1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v13 + 1) )
    {
      v52 = v13;
      v48 = v13 + 1;
      v18 = qvector_reserve();
      v13 = v52;
      v15 = v48;
      *(_QWORD *)a1 = v18;
      v14 = v18;
    }
    *(_QWORD *)(a1 + 8) = v15;
    *(_BYTE *)(v14 + v13) = 0;
    v16 = (_QWORD *)(v12 + *(_QWORD *)a1);
    *v16 = *(_QWORD *)v11;
    *(_QWORD *)((char *)v16 + v10 - 8) = *(_QWORD *)&v11[v10 - 8];
    qmemcpy(
      (void *)((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)(v11 - ((const char *)v16 - ((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
      8LL * (((unsigned int)v10 + (_DWORD)v16 - (((_DWORD)v16 + 8) & 0xFFFFFFF8)) >> 3));
  }
  if ( get_cmt() >= 0 )
    sub_96630((__int64 *)a1);
  if ( get_cmt() >= 0 )
    sub_96630((__int64 *)a1);
  return a1;
}

