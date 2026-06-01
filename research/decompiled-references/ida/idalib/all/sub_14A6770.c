__int64 __fastcall sub_14A6770(
        __int64 a1,
        char a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __m128i a7,
        __m128 a8,
        __int64 *a9)
{
  __int16 v12; // bp
  unsigned int v13; // r9d
  const __m128i *v14; // r15
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  int v20; // eax
  __int64 *v21; // rdi
  __int32 v22; // r12d
  unsigned int v23; // r9d
  __int64 v24; // r8
  unsigned int v25; // eax
  _QWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  unsigned __int8 v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  unsigned int v35; // r9d
  __int64 v36; // r8
  __int64 v37; // rax
  unsigned int v38; // [rsp+8h] [rbp-D0h]
  unsigned int v39; // [rsp+8h] [rbp-D0h]
  __int64 v40; // [rsp+8h] [rbp-D0h]
  unsigned int v41; // [rsp+8h] [rbp-D0h]
  __int64 v42; // [rsp+8h] [rbp-D0h]
  __int64 v43; // [rsp+10h] [rbp-C8h]
  __int64 v44; // [rsp+10h] [rbp-C8h]
  unsigned int v45; // [rsp+10h] [rbp-C8h]
  unsigned int v46; // [rsp+10h] [rbp-C8h]
  __int64 v47; // [rsp+18h] [rbp-C0h]
  __int64 v48; // [rsp+18h] [rbp-C0h]
  int v49; // [rsp+2Ch] [rbp-ACh] BYREF
  __m128i v50; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v52; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int8 v53; // [rsp+58h] [rbp-80h]
  __int64 v54; // [rsp+60h] [rbp-78h]
  int v55; // [rsp+68h] [rbp-70h]
  __int16 v56; // [rsp+6Ch] [rbp-6Ch]
  __int64 (__fastcall *v57)(__int64); // [rsp+70h] [rbp-68h]
  __int64 v58; // [rsp+78h] [rbp-60h]
  __int64 v59; // [rsp+80h] [rbp-58h]

  v12 = *(_WORD *)(a1 + 32);
  *a9 = 0;
  if ( a2 )
  {
    v13 = 0;
    if ( ((v12 - 148) & 0xFFEF) == 0 )
    {
      v14 = (const __m128i *)(a1 + 16);
      v51 = *(_QWORD *)(a1 + 32);
      v15 = *(_DWORD *)(a1 + 16);
      v50 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      *(_DWORD *)(a1 + 40) = v15;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v16 = *(_DWORD *)(a1 + 40);
      v17 = *(_WORD *)(a1 + 32) == 22;
      *a3 = v16;
      a3[1] = v16;
      if ( v17 )
      {
        v26 = (_QWORD *)operator new(0x70u);
        v26[1] = 0x400000000LL;
        *v26 = v26 + 2;
        *a9 = (__int64)v26;
        sub_141B840((__int64)v26, &v50);
        sub_141B840(*a9, v14);
        v27 = sub_146A990(a1);
        v28 = *a9;
        a3[1] = v27;
        sub_146E570(a1, 23, 23, v28, 1, 1);
        v13 = 11;
        a3[1] = *(_DWORD *)(*(_QWORD *)*a9 + 24LL * *(unsigned int *)(*a9 + 8) - 24);
      }
      else if ( v12 == 164 )
      {
        sub_1564840(&v52, a1, v14, 2122);
        sub_AEA040((__int64)&v52);
        *a6 = 0;
        return 5;
      }
      else
      {
        sub_1564840(&v52, a1, v14, 1625);
        sub_149E970(&v52, (__int64)"throw");
        sub_AEA040((__int64)&v52);
        return 1;
      }
    }
  }
  else
  {
    v13 = 0;
    if ( v12 == 148 )
    {
      v40 = a5;
      v25 = sub_14A6400(a1, (__int64)a3, a4, a5, a7, a8);
      v12 = *(_WORD *)(a1 + 32);
      a5 = v40;
      v13 = v25;
    }
    if ( v12 == 164 )
    {
      v43 = a5;
      v38 = v13;
      sub_1564840(&v52, a1, a1 + 16, 2122);
      sub_AEA040((__int64)&v52);
      v20 = *(_DWORD *)(a1 + 16);
      v21 = *(__int64 **)(a1 + 8);
      v50.m128i_i64[0] = 0;
      *(_DWORD *)(a1 + 40) = v20;
      v49 = 0;
      sub_14634E0(v21, (int *)(a1 + 16));
      v22 = *(_DWORD *)(a1 + 40);
      v23 = v38;
      v24 = v43;
      if ( *(_WORD *)(a1 + 32) == 22 )
      {
        v47 = v43;
        v52 = (unsigned __int8 *)(a1 + 1952);
        v29 = *(_BYTE *)(a1 + 1952);
        *(_BYTE *)(a1 + 1952) = 1;
        v53 = v29;
        v56 = 63;
        v45 = v38;
        v54 = a1;
        v55 = 1507350;
        v57 = sub_146A990;
        v58 = 0;
        v59 = 0;
        sub_149E920((__int64)&v52);
        v42 = *(_QWORD *)(a1 + 96);
        sub_18C74E0(v42, 4, 0, 4);
        *a6 = sub_14C4B50(a1, 0);
        sub_14808E0((__int64)&v52, nullptr, v30, v31, v32, v33);
        v35 = v45;
        v36 = v47;
        if ( *a6 == 1 )
        {
          v49 = 5;
        }
        else
        {
          v37 = sub_18B0290(*(_QWORD *)(a1 + 96), *a6 & 0xFFFFFFFFFFFFFFFELL, &v49, v34, v47, v45);
          v50.m128i_i32[0] = v22;
          v35 = v45;
          *a6 = v37;
          v36 = v47;
          v50.m128i_i32[1] = HIDWORD(v59);
        }
        v48 = v36;
        v46 = v35;
        sub_190D5E0(v42);
        v23 = v46;
        v24 = v48;
        *v52 = v53;
      }
      else
      {
        v49 = 5;
        v50.m128i_i32[0] = v22;
        v50.m128i_i32[1] = v22;
      }
      if ( v23 )
      {
        v41 = v23;
        sub_1564820(&v52, a1, *(unsigned int *)(a1 + 16), 1595);
        sub_AEA040((__int64)&v52);
        return v41;
      }
      else
      {
        v17 = *(_WORD *)(a1 + 32) == 148;
        v13 = v49;
        *(_QWORD *)a3 = v50.m128i_i64[0];
        if ( v17 )
        {
          v39 = v13;
          v44 = v24;
          sub_1564820(&v52, a1, *(unsigned int *)(a1 + 16), 1595);
          sub_AEA040((__int64)&v52);
          sub_14A6400(a1, (__int64)&v50, a4, v44, a7, a8);
          return v39;
        }
      }
    }
  }
  return v13;
}
