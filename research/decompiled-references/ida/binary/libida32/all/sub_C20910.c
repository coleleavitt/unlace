__int64 __fastcall sub_C20910(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __m128i si128; // xmm1
  int v6; // edx
  __m128i v7; // xmm1
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r13d
  __m128i *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi
  void *v14; // rbp
  void *v15; // r14
  __m128 v17; // [rsp+0h] [rbp-4F8h] BYREF
  __int16 v18; // [rsp+10h] [rbp-4E8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-4E0h]
  unsigned int v20; // [rsp+20h] [rbp-4D8h] BYREF
  char v21; // [rsp+24h] [rbp-4D4h]
  __m128i v22; // [rsp+60h] [rbp-498h] BYREF
  __m128i *v23; // [rsp+70h] [rbp-488h]
  __int64 v24; // [rsp+78h] [rbp-480h]
  __int128 v25; // [rsp+80h] [rbp-478h]
  __int64 v26; // [rsp+90h] [rbp-468h]
  __int64 v27; // [rsp+98h] [rbp-460h]
  __int64 v28; // [rsp+A0h] [rbp-458h]
  __int64 v29; // [rsp+A8h] [rbp-450h] BYREF
  int v30; // [rsp+B0h] [rbp-448h] BYREF
  void *v31; // [rsp+B8h] [rbp-440h]
  int *v32; // [rsp+C0h] [rbp-438h]
  int *v33; // [rsp+C8h] [rbp-430h]
  __int64 v34; // [rsp+D0h] [rbp-428h]
  __int64 v35; // [rsp+D8h] [rbp-420h]
  int v36; // [rsp+E0h] [rbp-418h]
  void *ptr; // [rsp+E8h] [rbp-410h]
  __int64 v38; // [rsp+F0h] [rbp-408h]
  _DWORD v39[4]; // [rsp+F8h] [rbp-400h] BYREF
  __int64 v40; // [rsp+108h] [rbp-3F0h]
  __int64 v41; // [rsp+110h] [rbp-3E8h]
  unsigned int v42; // [rsp+118h] [rbp-3E0h]
  __int64 v43; // [rsp+120h] [rbp-3D8h]
  char v44; // [rsp+128h] [rbp-3D0h]
  __int64 (__fastcall **v45)(); // [rsp+130h] [rbp-3C8h] BYREF
  char v46; // [rsp+138h] [rbp-3C0h]
  __int64 v47; // [rsp+140h] [rbp-3B8h]
  __int16 *v48; // [rsp+148h] [rbp-3B0h]
  __m128i *v49; // [rsp+150h] [rbp-3A8h]
  int v50; // [rsp+158h] [rbp-3A0h]
  int v51; // [rsp+15Ch] [rbp-39Ch]
  int v52; // [rsp+160h] [rbp-398h]
  char v53; // [rsp+164h] [rbp-394h]
  _OWORD v54[3]; // [rsp+168h] [rbp-390h] BYREF
  __int64 v55; // [rsp+198h] [rbp-360h]
  __int64 v56; // [rsp+1A0h] [rbp-358h]
  __int64 v57; // [rsp+1A8h] [rbp-350h]
  int v58; // [rsp+1B8h] [rbp-340h] BYREF
  __int64 v59; // [rsp+1C0h] [rbp-338h]
  int *v60; // [rsp+1C8h] [rbp-330h]
  int *v61; // [rsp+1D0h] [rbp-328h]
  __int64 v62; // [rsp+1D8h] [rbp-320h]
  __int64 v63; // [rsp+1E0h] [rbp-318h]
  int v64; // [rsp+1E8h] [rbp-310h]
  _DWORD *v65; // [rsp+1F0h] [rbp-308h]
  __int64 v66; // [rsp+1F8h] [rbp-300h]
  _DWORD v67[4]; // [rsp+200h] [rbp-2F8h] BYREF
  __int64 v68; // [rsp+210h] [rbp-2E8h]
  __int64 v69; // [rsp+218h] [rbp-2E0h]
  int v70; // [rsp+220h] [rbp-2D8h]
  __int64 v71; // [rsp+228h] [rbp-2D0h]
  char v72; // [rsp+230h] [rbp-2C8h]
  __int64 *v73; // [rsp+238h] [rbp-2C0h]
  __int64 v74; // [rsp+240h] [rbp-2B8h]
  __int64 v75; // [rsp+248h] [rbp-2B0h] BYREF
  _DWORD v76[6]; // [rsp+448h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+460h] [rbp-98h]
  __int64 v78; // [rsp+468h] [rbp-90h]
  __int64 v79; // [rsp+470h] [rbp-88h]
  int v80; // [rsp+478h] [rbp-80h]
  int v81; // [rsp+488h] [rbp-70h] BYREF
  __int64 v82; // [rsp+490h] [rbp-68h]
  int *v83; // [rsp+498h] [rbp-60h]
  int *v84; // [rsp+4A0h] [rbp-58h]
  __int64 v85; // [rsp+4A8h] [rbp-50h]
  __int64 v86; // [rsp+4B0h] [rbp-48h]
  __int64 v87; // [rsp+4B8h] [rbp-40h]
  __int64 v88; // [rsp+4C0h] [rbp-38h]

  v10 = a1;
  v19 = a3;
  v17.m128_u64[0] = (unsigned __int64)&v45;
  v18 = 0;
  v17 = _mm_loadh_ps((const double *)v17.m128_u64);
  v47 = sub_B685F0(a2);
  v4 = *(_QWORD *)(v47 + 2320);
  v48 = &v18;
  si128 = _mm_load_si128((const __m128i *)&v17);
  v6 = *(_DWORD *)(v4 + 136);
  LOBYTE(v4) = *(_BYTE *)(v4 + 140);
  memset(&v54[1], 0, 32);
  v54[0] = si128;
  v53 = v4 & 1;
  v60 = &v58;
  v61 = &v58;
  v65 = v67;
  v45 = &off_2B214A8;
  v52 = v6;
  v66 = 0x200000001LL;
  v46 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v51 = 2;
  v62 = 0;
  v63 = 0;
  v64 = 1;
  v67[0] = 1;
  v67[2] = 1;
  v68 = 0;
  v69 = 0;
  v49 = (__m128i *)v54;
  v73 = &v75;
  v74 = 0x1000000000LL;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v50 = 1;
  sub_A2B560((__int64)v76, 0, 0, 0);
  v83 = &v81;
  v7 = _mm_load_si128((const __m128i *)&v17);
  v84 = &v81;
  v88 = 0x100010000LL;
  v24 = a2;
  v23 = v49;
  v32 = &v30;
  v33 = &v30;
  v22 = v7;
  v36 = v51;
  v25 = 0;
  ++v51;
  v76[4] = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v46 = 1;
  v85 = 0;
  v86 = 0;
  v87 = -1;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v30 = 0;
  v31 = nullptr;
  v34 = 0;
  v35 = 0;
  ptr = v39;
  v38 = 0x200000001LL;
  v21 &= ~1u;
  ++v50;
  v39[0] = 1;
  v39[2] = 1;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v49 = &v22;
  v20 = 0;
  sub_C15CD0((__int64)&v20, (__int64)&v45, a1, v8, v9);
  LOBYTE(v10) = *(_DWORD *)(a3 + 8) == 0;
  if ( v20 > 1 )
    sub_A2BBA0((int *)&v20);
  v11 = v23;
  v22.m128i_i64[0] = (__int64)&off_2B21540;
  v12 = v22.m128i_i64[1];
  --*(_DWORD *)(v22.m128i_i64[1] + 40);
  *(_QWORD *)(v12 + 32) = v11;
  v13 = 16LL * v42;
  operator delete();
  if ( ptr != v39 )
    free(ptr);
  v14 = v31;
  if ( v31 )
  {
    while ( 1 )
    {
      v13 = *((_QWORD *)v14 + 3);
      sub_BFFE50((__int64)&v29, v13);
      v15 = *((void **)v14 + 2);
      if ( *((_DWORD *)v14 + 12) > 1u )
      {
        sub_A2BBA0((int *)v14 + 12);
        operator delete(v14);
        if ( !v15 )
          break;
      }
      else
      {
        operator delete(v14);
        if ( !v15 )
          break;
      }
      v14 = v15;
    }
  }
  sub_C00040((__int64)&v45, v13);
  return v10;
}

