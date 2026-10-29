__int64 __fastcall sub_1567B60(
        __m128i *a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int8 v17; // r9
  int v18; // r8d
  __int64 v19; // r12
  __int8 v20; // r9
  bool v21; // zf
  _BYTE *v22; // rbp
  _BYTE *v23; // r12
  _BYTE *v24; // rdi
  __int64 v25; // rax
  int v26; // [rsp+8h] [rbp-2E0h]
  __int8 v27; // [rsp+8h] [rbp-2E0h]
  int v28; // [rsp+Ch] [rbp-2DCh]
  _QWORD v29[5]; // [rsp+10h] [rbp-2D8h] BYREF
  void *v30; // [rsp+38h] [rbp-2B0h]
  __int64 v31; // [rsp+40h] [rbp-2A8h]
  _BYTE v32[16]; // [rsp+48h] [rbp-2A0h] BYREF
  __int8 *v33; // [rsp+58h] [rbp-290h] BYREF
  void *ptr; // [rsp+60h] [rbp-288h]
  __int64 v35; // [rsp+68h] [rbp-280h]
  _QWORD v36[4]; // [rsp+70h] [rbp-278h] BYREF
  void *v37; // [rsp+90h] [rbp-258h]
  __int64 v38; // [rsp+98h] [rbp-250h]
  __int64 v39; // [rsp+A0h] [rbp-248h]
  __int64 v40; // [rsp+A8h] [rbp-240h]
  __int64 v41; // [rsp+B0h] [rbp-238h]
  __int64 v42; // [rsp+B8h] [rbp-230h]
  __int64 v43; // [rsp+C0h] [rbp-228h]
  __int64 v44; // [rsp+C8h] [rbp-220h]
  __int64 v45; // [rsp+D0h] [rbp-218h]
  __int64 v46; // [rsp+D8h] [rbp-210h]
  __int64 v47; // [rsp+E0h] [rbp-208h]
  __int64 v48; // [rsp+E8h] [rbp-200h]
  __int64 v49; // [rsp+F0h] [rbp-1F8h]
  __int64 v50; // [rsp+F8h] [rbp-1F0h]
  __int64 v51; // [rsp+100h] [rbp-1E8h]
  __int64 v52; // [rsp+108h] [rbp-1E0h]
  __int64 v53; // [rsp+110h] [rbp-1D8h]
  __int64 v54; // [rsp+118h] [rbp-1D0h]
  __int64 v55; // [rsp+120h] [rbp-1C8h]
  __int16 v56; // [rsp+128h] [rbp-1C0h]
  __int64 v57; // [rsp+130h] [rbp-1B8h]
  __int64 v58; // [rsp+138h] [rbp-1B0h]
  __int64 v59; // [rsp+140h] [rbp-1A8h] BYREF
  _BYTE *v60; // [rsp+148h] [rbp-1A0h]
  __int64 v61; // [rsp+150h] [rbp-198h]
  _BYTE v62[320]; // [rsp+158h] [rbp-190h] BYREF
  __int64 v63; // [rsp+298h] [rbp-50h]
  char v64; // [rsp+2A0h] [rbp-48h]

  v29[0] = a1;
  v26 = a5;
  v10 = sub_224AF30("ParseDeclarationOrFunctionDefinition", 36, sub_1563A10, v29, a5, a6);
  if ( a4 )
  {
    v11 = sub_15671C0(a1, a2, a3, a4, v26, a7, a8);
  }
  else
  {
    v29[0] &= 0xFFFFFFC000000000LL;
    v33 = &a1[31].m128i_i8[8];
    v30 = v32;
    v31 = 0x200000000LL;
    ptr = v36;
    v35 = 0x200000000LL;
    memset(&v29[2], 0, 24);
    v36[2] = 0;
    v36[3] = 0;
    v37 = nullptr;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 &= 0xF000u;
    v13 = a1[6].m128i_i64[0];
    v61 = 0x400000000LL;
    v58 = v13;
    v57 = 0;
    v59 = 0;
    v60 = v62;
    v63 = 0;
    v14 = *(_QWORD *)(v13 + 512);
    *(_QWORD *)(v13 + 512) = &v59;
    v15 = a1[6].m128i_i64[0];
    v63 = v14;
    v64 = 0;
    v16 = sub_18957D0(*(_QWORD *)(v15 + 736));
    v17 = a1[129].m128i_i8[1];
    v18 = v26;
    v19 = v16;
    a1[129].m128i_i8[1] = v16 != 0;
    v27 = v17;
    if ( v16 )
    {
      v28 = v18;
      sub_1A865F0(*(_QWORD *)(a1[6].m128i_i64[0] + 736), v16);
      v11 = sub_15671C0(a1, a2, a3, (__int64)v29, v28, a7, a8);
      sub_1A86610(*(_QWORD *)(a1[6].m128i_i64[0] + 736), v19);
      v20 = v27;
    }
    else
    {
      v25 = sub_15671C0(a1, a2, a3, (__int64)v29, v18, a7, a8);
      v20 = v27;
      v11 = v25;
    }
    v21 = v64 == 0;
    a1[129].m128i_i8[1] = v20;
    if ( v21 )
    {
      sub_1818070(v58, v63, 0);
      v64 = 1;
    }
    v22 = v60;
    v23 = &v60[80 * (unsigned int)v61];
    if ( v60 != v23 )
    {
      do
      {
        v24 = v22;
        v22 += 80;
        sub_15B6850(v24);
      }
      while ( v23 != v22 );
      v23 = v60;
    }
    if ( v23 != v62 )
      free(v23);
    if ( HIDWORD(v38) )
      free(v37);
    sub_15DCED0(v33, &v33);
    if ( ptr != v36 )
      free(ptr);
    if ( v30 != v32 )
      free(v30);
  }
  if ( v10 )
    sub_224D6D0(v10);
  return v11;
}
