void __fastcall sub_EB4A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 (*v17)(); // rax
  __int64 *v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _BOOL8 v23; // rbx
  unsigned __int64 v24; // rtt
  char v25; // al
  unsigned __int64 v26; // rbx
  int v27; // edx
  unsigned __int64 v28; // r13
  unsigned int v29; // ebx
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  unsigned __int64 v37; // rsi
  bool v38; // cc
  __int64 v39; // rdx
  __int64 v40; // rbx
  _BOOL8 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __m128i si128; // xmm0
  __int64 v45; // rdi
  unsigned int v46; // ebx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  unsigned __int64 v53; // rsi
  __int64 v54; // [rsp+0h] [rbp-98h]
  unsigned int v55; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 *v56[17]; // [rsp+10h] [rbp-88h] BYREF

  v8 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 2320) + 1LL) & 8) != 0 && !*(_QWORD *)(a1 + 16) )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 > 2
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6),
          v8 = *(_QWORD *)a1,
          (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 2) != 0) )
    {
      v42 = sub_A74320(v8, 1);
      v8 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 16) = v42;
    }
  }
  v9 = sub_A74320(v8, *(_QWORD *)(a1 + 248));
  if ( *(_QWORD *)(a1 + 16) >= v9 )
    v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)a1;
  v11 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = v9;
  v12 = v9;
  v13 = *(unsigned __int8 *)(a1 + 201);
  v14 = sub_A74320(v10, v11);
  v15 = *(_QWORD *)a1;
  v16 = v14;
  v54 = *(_QWORD *)(a1 + 16);
  v17 = *(__int64 (**)())(**(_QWORD **)(*(_QWORD *)a1 + 17448LL) + 832LL);
  if ( v17 == sub_A321E0 || !(unsigned __int8)v17() )
    v18 = (__int64 *)(a1 + 24);
  else
    v18 = (__int64 *)(a1 + 32);
  v19 = sub_A74320(v15, *v18);
  v22 = *(_QWORD *)(a1 + 16);
  v23 = v22 != 0;
  v24 = v22 - v23;
  v25 = *(_BYTE *)(a1 + 200);
  v26 = v19 * (v24 / v19 + v23);
  if ( (v25 & 1) != 0 )
  {
    v43 = *(_QWORD *)(a1 + 664);
    if ( (v25 & 2) != 0 && v26 > v43 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384CC0);
      *(_BYTE *)(a1 + 200) = v25 & 0xFD;
      *(__m128i *)(a1 + 24) = si128;
    }
    *(_QWORD *)(a1 + 16) = v43;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v26;
    v27 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)(v27 - 58) <= 3 )
    {
      v28 = v12 - v13;
      if ( v28 < v26 )
      {
        v29 = v26 - v28;
        v30 = 1;
        if ( (v29 & 7) == 0 )
        {
          v29 >>= 3;
          v30 = 0;
        }
        v55 = *(_DWORD *)(a2 + 24);
        v31 = sub_A3ED80(*(_QWORD *)a1);
        sub_FA3370(v56, v31, v55, 2587);
        v36 = *(_QWORD *)(a2 + 48);
        if ( v36 )
          v37 = v36 & 0xFFFFFFFFFFFFFFF0LL;
        else
          v37 = sub_A56D30(*(_QWORD *)a1, a2, v32, v33, v34, v35);
        sub_AC60B0(v56, v37, 8u);
        sub_AC60B0(v56, v29, 3u);
        sub_AC60B0(v56, v30, 2u);
        sub_AC6300((__int64)v56);
        v25 = *(_BYTE *)(a1 + 200);
        v27 = *(_BYTE *)(a2 + 28) & 0x7F;
      }
      v38 = (unsigned int)(v27 - 59) <= 2;
      v39 = 0;
      if ( v38 )
        v39 = a2;
      v40 = v39;
      if ( (v25 & 4) != 0 && *(_QWORD *)(a1 + 40) <= *(_QWORD *)(a1 + 24) )
      {
        v41 = v54 != 0;
        if ( *(_QWORD *)(a1 + 16) == (v41 + (v54 - v41) / v16) * v16 && !*(_BYTE *)(a1 + 266) )
        {
          if ( v39 )
          {
            sub_6E4DB0(
              (__int64 *)(*(_QWORD *)(v39 + 104) + 96LL),
              *(_QWORD *)(v39 + 104),
              (v54 - v41) % v16,
              v41,
              v20,
              v21);
            v45 = *(_QWORD *)a1;
            if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 1LL) & 1) == 0
              && *(_BYTE *)(*(_QWORD *)(v45 + 2320) + 212LL) > 0x8Fu )
            {
              return;
            }
          }
          else
          {
            v45 = *(_QWORD *)a1;
          }
          v46 = *(_DWORD *)(a2 + 24);
          v47 = sub_A3ED80(v45);
          sub_FA3370(v56, v47, v46, 2589);
          v52 = *(_QWORD *)(a2 + 48);
          if ( v52 )
            v53 = v52 & 0xFFFFFFFFFFFFFFF0LL;
          else
            v53 = sub_A56D30(*(_QWORD *)a1, a2, v48, v49, v50, v51);
          sub_AC60B0(v56, v53, 8u);
          sub_AC6300((__int64)v56);
        }
      }
    }
  }
}

