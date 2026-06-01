__int64 __fastcall sub_1D2540(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5, _BYTE *a6, double a7)
{
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // r11
  _DWORD *v13; // r15
  int v14; // eax
  void (__fastcall *v15)(_QWORD *, __int64, _BYTE *, _BYTE *, __int128 *, _QWORD); // rax
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int *v20; // rax
  __int64 v21; // rsi
  char tinfo_property; // al
  __m128i v23; // xmm0
  int v24; // eax
  int dtype_size; // eax
  char v26; // al
  __int64 v27; // [rsp+10h] [rbp-C0h]
  int *v28; // [rsp+18h] [rbp-B8h]
  __int64 v29; // [rsp+20h] [rbp-B0h]
  int v30; // [rsp+20h] [rbp-B0h]
  __int64 v31; // [rsp+28h] [rbp-A8h]
  unsigned int v32; // [rsp+30h] [rbp-A0h]
  __int64 v33; // [rsp+30h] [rbp-A0h]
  __int64 v34; // [rsp+30h] [rbp-A0h]
  __int64 v35; // [rsp+30h] [rbp-A0h]
  __int64 v36; // [rsp+38h] [rbp-98h]
  __int64 v37; // [rsp+40h] [rbp-90h]
  __int64 v41; // [rsp+60h] [rbp-70h] BYREF
  int v42; // [rsp+68h] [rbp-68h]
  _BYTE v43[12]; // [rsp+70h] [rbp-60h] BYREF
  __int128 v44; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+98h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  v9 = sub_414E70((__int64)a1, a4);
  if ( !(_BYTE)v9 )
    return 0;
  v10 = v9;
  v12 = a1[11];
  v13 = *(_DWORD **)(a1[1] + 112LL);
  v36 = v12 + 80LL * a1[12];
  if ( v36 != v12 )
  {
    v37 = 0;
    do
    {
      v14 = *(_DWORD *)(v12 + 72);
      if ( (v14 & 2) != 0 )
      {
        if ( a5 )
        {
          while ( 1 )
          {
            if ( !*a6 )
            {
              if ( !under_debugger )
                sub_383060(0xCE3Eu, a7);
              BUG();
            }
            if ( *(_DWORD *)v12 != 3 )
              return 0;
            v29 = v12;
            *(_QWORD *)&a7 = _mm_unpacklo_epi32(
                               _mm_cvtsi32_si128(v13[21]),
                               _mm_cvtsi32_si128(
                                 (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v13 + 168LL))(
                                   v13,
                                   *(unsigned __int16 *)(v12 + 8)))).m128i_u64[0];
            v15 = *(void (__fastcall **)(_QWORD *, __int64, _BYTE *, _BYTE *, __int128 *, _QWORD))(*a1 + 64LL);
            LODWORD(v44) = 1;
            *(double *)((char *)&v44 + 4) = a7;
            v16 = v13[16];
            *(_QWORD *)v43 = 0x200000001LL;
            *(_DWORD *)&v43[8] = v16;
            v15(a1, 1, a6, v43, &v44, 0);
            sub_11CDA0((__int64)v43);
            sub_11CDA0((__int64)&v44);
            v12 = v29 + 80;
            if ( v36 == v29 + 80 )
              return v10;
            v14 = *(_DWORD *)(v29 + 152);
            if ( (v14 & 2) == 0 )
              goto LABEL_12;
          }
        }
      }
      else
      {
LABEL_12:
        if ( v37 )
        {
          if ( v37 != 1 || (*(_BYTE *)(a4 + 16) & 0x2A) != 0 )
            return 0;
          v30 = 1;
          v27 = a3;
          if ( (unsigned int)(*(_DWORD *)(a4 + 8) - 22) > 2 )
          {
            v34 = v12;
            dtype_size = get_dtype_size();
            v12 = v34;
            v30 = dtype_size;
            v14 = *(_DWORD *)(v34 + 72);
          }
        }
        else
        {
          if ( (*(_BYTE *)(a4 + 16) & 8) != 0 )
            return 0;
          v33 = v12;
          v24 = get_dtype_size();
          v12 = v33;
          v30 = v24;
          v27 = a2;
          v14 = *(_DWORD *)(v33 + 72);
        }
        if ( (v14 & 4) != 0 )
        {
          if ( *(_DWORD *)v12 != 3 )
            return 0;
          v17 = *(unsigned __int16 *)(v12 + 8);
          v31 = v12;
          v32 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v13 + 168LL))(v13, v17);
          v20 = (int *)j__qalloc_or_throw(80, v17, v18, v19);
          v21 = a1[8];
          v28 = v20;
          *((_QWORD *)v20 + 4) = 0xFFFFFFFF00000000LL;
          *((_QWORD *)v20 + 5) = 0;
          *((_QWORD *)v20 + 6) = 0xFFFFFFFF00000000LL;
          *((_QWORD *)v20 + 7) = 0;
          *((_QWORD *)v20 + 8) = 0xFFFFFFFF00000000LL;
          *((_QWORD *)v20 + 9) = 0;
          sub_330970((__int64)v20, v21);
          tinfo_property = get_tinfo_property();
          v44 = 0xFFFFFFFF00000000LL;
          v23 = _mm_cvtsi32_si128(v13[21]);
          *(_DWORD *)v43 = 1;
          v41 = 0x200000001LL;
          *(_QWORD *)&a7 = _mm_unpacklo_epi32(v23, _mm_cvtsi32_si128(v32)).m128i_u64[0];
          *(double *)&v43[4] = a7;
          v42 = v13[16];
          sub_4145E0(
            (__int64)a1,
            v28,
            2,
            (unsigned __int8 *)&v41,
            v43,
            (unsigned __int8 *)&v44,
            (tinfo_property & 0xF) == 9);
          sub_11CDA0((__int64)&v41);
          sub_11CDA0((__int64)v43);
          sub_11CDA0((__int64)&v44);
          v28[17] = v30;
          sub_11CDA0(v27);
          v12 = v31;
          *(_BYTE *)v27 = 4;
          *(_QWORD *)(v27 + 8) = v28;
          *(_DWORD *)(v27 + 4) = v30;
        }
        else
        {
          v35 = v12;
          v26 = sub_1D2210((__int64)v13, v27, (_QWORD *)v12, v30);
          v12 = v35;
          if ( !v26 )
            return 0;
        }
        ++v37;
      }
      v12 += 80;
    }
    while ( v36 != v12 );
  }
  return v10;
}
