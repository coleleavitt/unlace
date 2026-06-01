__int64 __fastcall sub_1A24E20(
        __int64 a1,
        __int64 a2,
        __int32 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int8 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int32 v13; // r15d
  unsigned __int64 v14; // rbx
  __m128i *v15; // r10
  __int64 v16; // rax
  __int64 v18; // r8
  __int64 v19; // rsi
  _QWORD *v20; // rdx
  __int64 v21; // r13
  _QWORD *v22; // r9
  __int64 v23; // r11
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r13
  unsigned int v35; // eax
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // [rsp+0h] [rbp-2018h]
  __int64 v40; // [rsp+0h] [rbp-2018h]
  unsigned __int64 v41; // [rsp+18h] [rbp-2000h] BYREF
  __m128i v42; // [rsp+20h] [rbp-1FF8h] BYREF
  int v43; // [rsp+30h] [rbp-1FE8h] BYREF
  __int64 v44; // [rsp+38h] [rbp-1FE0h]
  unsigned int v45; // [rsp+40h] [rbp-1FD8h]
  __int64 v46; // [rsp+E8h] [rbp-1F30h]
  __int64 v47; // [rsp+F0h] [rbp-1F28h]
  unsigned int v48; // [rsp+F8h] [rbp-1F20h]

  v8 = 1;
  if ( a4 != 1 )
  {
    v9 = a4 & 0xFFFFFFFFFFFFFFFELL;
    v13 = a3;
    v14 = v9;
    v41 = v9;
    if ( !a3 )
      v13 = sub_EEB7E0(v9, a2, *(double *)a7.m128_u64);
    v42.m128i_i8[1] = a6;
    v42.m128i_i32[1] = sub_EEB7E0(v14, a2, *(double *)a7.m128_u64);
    v42.m128i_i32[2] = v13;
    v42.m128i_i32[3] = v13;
    v42.m128i_i8[0] = 2;
    sub_1A19220((__int64)&v43, a1, a2, &v42, (__int64)&v41, 1, a7, a8, a5, 1u);
    v15 = &v42;
    if ( *(_DWORD *)a2 != 1 && *(_DWORD *)a2 != 19 || !v45 || (v18 = 40LL * v45, *(_DWORD *)(v44 + v18 - 40) != 19) )
    {
      v16 = sub_1A1D600((unsigned int)&v43, a1, a2, (unsigned int)&v42, (unsigned int)&v41, 1, 0);
LABEL_7:
      v8 = v16;
      sub_1A0BB10((__int64)&v43);
      return v8;
    }
    v19 = *(unsigned int *)(a1 + 9960);
    v20 = *(_QWORD **)(a1 + 9952);
    v21 = *(_QWORD *)(a2 + 16);
    v22 = &v20[v19];
    v23 = (8 * v19) >> 3;
    if ( (8 * v19) >> 5 )
    {
      if ( v21 == *v20 )
      {
        v24 = *(_QWORD **)(a1 + 9952);
      }
      else
      {
        v24 = v20 + 1;
        if ( v21 != v20[1] )
        {
          v24 = v20 + 2;
          if ( v21 != v20[2] )
          {
            v24 = v20 + 3;
            v25 = &v20[4 * ((8 * v19) >> 5)];
            if ( v21 != v20[3] )
            {
              while ( 1 )
              {
                v24 = v20 + 4;
                if ( v25 == v20 + 4 )
                {
                  v23 = v22 - v24;
                  goto LABEL_24;
                }
                if ( v21 == v20[4] )
                  goto LABEL_32;
                if ( v21 == v20[5] )
                {
                  v24 = v20 + 5;
                  goto LABEL_32;
                }
                if ( v21 == v20[6] )
                {
                  v24 = v20 + 6;
                  goto LABEL_32;
                }
                if ( v21 == v20[7] )
                  break;
                v20 += 4;
              }
              v24 = v20 + 7;
            }
          }
        }
      }
      goto LABEL_32;
    }
    v24 = *(_QWORD **)(a1 + 9952);
LABEL_24:
    if ( v23 != 2 )
    {
      if ( v23 != 3 )
      {
        if ( v23 != 1 )
          goto LABEL_28;
LABEL_27:
        if ( v21 != *v24 )
          goto LABEL_28;
LABEL_32:
        if ( v22 == v24 )
          goto LABEL_28;
        v26 = v47;
        v43 = 0;
        v46 = 0x10000001ELL;
        v27 = *(_QWORD *)(v44 + v18 - 16);
        v28 = 168LL * v48;
        v29 = v47 + v28;
        v30 = (__int64)(0xCF3CF3CF3CF3CF3DLL * (v28 >> 3)) >> 2;
        if ( v30 )
        {
          v31 = v47 + 672 * v30;
          while ( (*(_BYTE *)(v26 + 104) & 1) == 0 || v27 != *(_QWORD *)v26 || !*(_QWORD *)(v26 + 56) )
          {
            if ( (*(_BYTE *)(v26 + 272) & 1) != 0 && v27 == *(_QWORD *)(v26 + 168) && *(_QWORD *)(v26 + 224) )
            {
              v26 += 168;
              goto LABEL_45;
            }
            if ( (*(_BYTE *)(v26 + 440) & 1) != 0 && v27 == *(_QWORD *)(v26 + 336) && *(_QWORD *)(v26 + 392) )
            {
              v26 += 336;
              goto LABEL_45;
            }
            if ( (*(_BYTE *)(v26 + 608) & 1) != 0 && v27 == *(_QWORD *)(v26 + 504) && *(_QWORD *)(v26 + 560) )
            {
              v26 += 504;
              goto LABEL_45;
            }
            v26 += 672;
            if ( v31 == v26 )
              goto LABEL_54;
          }
          goto LABEL_45;
        }
LABEL_54:
        v33 = 0xCF3CF3CF3CF3CF3DLL * ((v29 - v26) >> 3);
        if ( v33 != 2 )
        {
          if ( v33 != 3 )
          {
            if ( v33 != 1 )
              goto LABEL_28;
            goto LABEL_57;
          }
          if ( (*(_BYTE *)(v26 + 104) & 1) != 0 && v27 == *(_QWORD *)v26 && *(_QWORD *)(v26 + 56) )
          {
LABEL_45:
            if ( v29 != v26 )
            {
              v39 = *(_QWORD *)(v44 + v18 - 16);
              v32 = sub_B76070(v39, v19, v27, v29);
              v15 = &v42;
              if ( v32 )
              {
                v34 = v41;
                v35 = *(_DWORD *)(v26 + 104) & 0xFFFC03FE;
                BYTE1(v35) |= 8u;
                *(_DWORD *)(v26 + 104) = v35;
                v36 = *(_QWORD *)(v26 + 48);
                v37 = *(_QWORD *)(**(_QWORD **)(v39 + 120) + 48LL);
                if ( (*(_DWORD *)v36 & 0x7FFFFFFF) == 3 )
                {
                  v40 = *(_QWORD *)(**(_QWORD **)(v39 + 120) + 48LL);
                  sub_1BD22E0(v36 + 16);
                  v15 = &v42;
                  v37 = v40;
                }
                *(_DWORD *)v36 = *(_DWORD *)v36 & 0x80000000 | 5;
                v38 = *(_QWORD *)(v34 + 8);
                *(_DWORD *)(v36 + 24) = 0;
                *(_QWORD *)(v36 + 32) = v38;
                *(_QWORD *)(v36 + 40) = v37;
                *(_QWORD *)(v36 + 16) = v34;
              }
              v19 = *(unsigned int *)(a1 + 9960);
              v21 = *(_QWORD *)(a2 + 16);
            }
            goto LABEL_28;
          }
          v26 += 168;
        }
        if ( (*(_BYTE *)(v26 + 104) & 1) == 0 || v27 != *(_QWORD *)v26 || !*(_QWORD *)(v26 + 56) )
        {
          v26 += 168;
LABEL_57:
          if ( (*(_BYTE *)(v26 + 104) & 1) != 0 && v27 == *(_QWORD *)v26 && *(_QWORD *)(v26 + 56) )
            goto LABEL_45;
LABEL_28:
          if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 9964) )
          {
            sub_2237220(a1 + 9952, a1 + 9968, v19 + 1, 8);
            v19 = *(unsigned int *)(a1 + 9960);
            LODWORD(v15) = (unsigned int)&v42;
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 9952) + 8 * v19) = v21;
          ++*(_DWORD *)(a1 + 9960);
          v16 = sub_1A1D600((unsigned int)&v43, a1, a2, (_DWORD)v15, (unsigned int)&v41, 1, 0);
          --*(_DWORD *)(a1 + 9960);
          goto LABEL_7;
        }
        goto LABEL_45;
      }
      if ( v21 == *v24 )
        goto LABEL_32;
      ++v24;
    }
    if ( v21 == *v24 )
      goto LABEL_32;
    ++v24;
    goto LABEL_27;
  }
  return v8;
}
