__int64 __fastcall sub_C61F40(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __m128i *a7)
{
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rcx
  unsigned int v15; // ebp
  __int64 v16; // rsi
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned __int64 v21; // r10
  char v22; // al
  _BYTE *v23; // rax
  _DWORD *v24; // rdx
  unsigned int i; // eax
  unsigned int v26; // eax
  __int64 v27; // rax
  _DWORD *v28; // rdi
  __int64 v29; // rbp
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r8
  _DWORD *v33; // rbx
  unsigned int v34; // r12d
  unsigned __int64 v35; // rcx
  int v36; // ebp
  __int64 v37; // rax
  __m128 *v38; // rsi
  __int64 v39; // rcx
  unsigned int v40; // ebx
  __int64 v41; // r8
  bool v43; // zf
  _QWORD *v44; // rcx
  __int128 v45; // [rsp-10h] [rbp-5C8h]
  unsigned int v46; // [rsp+4h] [rbp-5B4h]
  __int64 *v48; // [rsp+18h] [rbp-5A0h]
  __int64 v49; // [rsp+20h] [rbp-598h]
  _DWORD *v50; // [rsp+20h] [rbp-598h]
  unsigned int v51; // [rsp+30h] [rbp-588h]
  __int64 v52; // [rsp+38h] [rbp-580h]
  __int64 v53; // [rsp+40h] [rbp-578h]
  __int64 v54; // [rsp+50h] [rbp-568h]
  __int64 v57; // [rsp+68h] [rbp-550h] BYREF
  __int16 v58; // [rsp+70h] [rbp-548h] BYREF
  __int64 v59; // [rsp+78h] [rbp-540h]
  _QWORD v60[3]; // [rsp+80h] [rbp-538h] BYREF
  char v61; // [rsp+98h] [rbp-520h]
  __int64 v62; // [rsp+A8h] [rbp-510h]
  void *ptr; // [rsp+B0h] [rbp-508h]
  __int64 v64; // [rsp+B8h] [rbp-500h]
  _BYTE v65[80]; // [rsp+C0h] [rbp-4F8h] BYREF
  __m128i v66[13]; // [rsp+110h] [rbp-4A8h] BYREF
  __m128 v67; // [rsp+1E0h] [rbp-3D8h] BYREF
  _BYTE *v68; // [rsp+1F8h] [rbp-3C0h]
  _DWORD *v69; // [rsp+200h] [rbp-3B8h]
  __int64 v70; // [rsp+2E8h] [rbp-2D0h]
  unsigned int v71; // [rsp+2F0h] [rbp-2C8h]
  char v72; // [rsp+572h] [rbp-46h]
  char v73; // [rsp+573h] [rbp-45h]
  unsigned int v74; // [rsp+574h] [rbp-44h]

  v67.m128_u64[0] = (unsigned __int64)&v57;
  v57 = a4;
  v67.m128_u64[1] = a3;
  v54 = sub_224AF30("EvaluateWithSubstitution", 24, sub_C10600, &v67, a5, a6);
  v58 = 0;
  v59 = 0;
  sub_C12870(&v67, a3, (__int64)&v58, 1);
  v61 |= 1u;
  ptr = v65;
  v67.m128_i8[8] = 1;
  memset(v60, 0, sizeof(v60));
  v62 = 0;
  v64 = 0x800000000LL;
  v65[65] = 0;
  v53 = 0;
  if ( a7 )
  {
    if ( (a7->m128i_i32[0] & 0x20000) != 0 )
    {
      v12 = v68;
    }
    else
    {
      v43 = (unsigned __int8)sub_C5DF90((__int64)&v67, a7, (__int64)v60, v9, v10, v11) == 0;
      v12 = v68;
      if ( !v43 )
      {
        v44 = nullptr;
        if ( !*v68 )
          v44 = v60;
        v53 = (__int64)v44;
      }
    }
    *v12 = 0;
  }
  v13 = v57;
  v14 = (unsigned int)v69[40];
  v15 = v69[32];
  v69[40] = v14 + 1;
  v46 = v14 + 1;
  v16 = (__int64)&a5[a6];
  v48 = (__int64 *)v16;
  if ( (__int64 *)v16 == a5 )
  {
    v51 = v15;
    v52 = v46;
  }
  else
  {
    v17 = a5;
    v18 = v13;
    v51 = v15;
    v52 = v46;
    while ( 1 )
    {
      v19 = v17 - a5;
      if ( (unsigned int)sub_B76070(v18, v16, v19, v14) <= (unsigned int)v19 )
        break;
      v16 = *v17;
      v20 = *(_QWORD *)(v57 + 120);
      v21 = *(_QWORD *)(v20 + 8LL * (unsigned int)v19);
      if ( (*(_DWORD *)*v17 & 0x20000) != 0
        || (v49 = *(_QWORD *)(v20 + 8LL * (unsigned int)v19),
            v22 = sub_C57580(v49, v16, v13, ((unsigned __int64)v46 << 32) | v15, (__int64)&v67, 0, nullptr),
            v21 = v49,
            !v22)
        || (v23 = v68, *v68) )
      {
        v24 = v69;
        for ( i = v69[32]; v15 < i; i = v24[32] )
          v24 = *((_DWORD **)v24 + 2);
        if ( v15 == i )
        {
          if ( v13 )
          {
            v26 = (unsigned __int8)(*(_WORD *)(v21 + 98) >> 4);
            if ( v26 == 255 )
            {
              v50 = v24;
              v26 = sub_B74880(v21);
              v24 = v50;
            }
            v21 = *(_QWORD *)(*(_QWORD *)(v13 + 120) + 8LL * v26);
          }
          v27 = *((_QWORD *)v24 + 11);
          v14 = (__int64)(v24 + 20);
          v28 = v24 + 20;
          if ( v27 )
          {
            do
            {
              while ( v21 <= *(_QWORD *)(v27 + 32) )
              {
                if ( v21 == *(_QWORD *)(v27 + 32) )
                {
                  v16 = v46;
                  if ( v46 > *(_DWORD *)(v27 + 40) )
                    break;
                }
                v28 = (_DWORD *)v27;
                v27 = *(_QWORD *)(v27 + 16);
                if ( !v27 )
                  goto LABEL_28;
              }
              v27 = *(_QWORD *)(v27 + 24);
            }
            while ( v27 );
LABEL_28:
            if ( v28 != (_DWORD *)v14 && v21 == *((_QWORD *)v28 + 4) && v46 == v28[10] )
            {
              v66[0].m128i_i8[4] &= ~1u;
              v66[0].m128i_i32[0] = 0;
              v16 = (__int64)v66;
              sub_A4FD20((__int64)(v28 + 12), (__int64)v66);
              if ( v66[0].m128i_i32[0] > 1u )
                sub_A4F8E0(v66[0].m128i_i32);
            }
          }
        }
        v23 = v68;
      }
      *v23 = 0;
      if ( ++v17 == v48 )
        break;
      v18 = v57;
    }
  }
  v29 = v70;
  v30 = v70 + 32LL * v71;
  if ( v70 != v30 )
  {
    do
    {
      if ( (unsigned int)sub_F65A30(*(_QWORD *)(v29 + 24)) )
      {
        *v68 = 1;
        if ( v74 <= 2 && !v72 && !v73 )
          break;
      }
      v29 += 32;
    }
    while ( v30 != v29 );
  }
  v31 = v57;
  v71 = 0;
  *v68 = 0;
  *((_QWORD *)&v45 + 1) = (v52 << 32) | v51;
  *(_QWORD *)&v45 = v13;
  sub_C0F9C0(
    v66,
    (__int64)&v67,
    ((unsigned __int64)*(unsigned int *)(v31 + 24) << 32) | *(unsigned int *)(v31 + 24),
    v31,
    v53,
    (__int64)a7,
    v45);
  v33 = v69;
  v34 = v71;
  v35 = (unsigned int)v69[37];
  v36 = v69[40] + 1;
  v37 = (unsigned int)v69[36];
  v69[40] = v36;
  if ( v37 + 1 > v35 )
  {
    sub_2237220(v33 + 34, v33 + 38, v37 + 1, 4);
    v37 = (unsigned int)v33[36];
  }
  v38 = &v67;
  *(_DWORD *)(*((_QWORD *)v33 + 17) + 4 * v37) = v36;
  ++v33[36];
  v40 = sub_C39A10(a2, (__int64)&v67, a1, v35, v32);
  if ( (_BYTE)v40 )
  {
    v38 = (__m128 *)(&dword_0 + 1);
    v40 = sub_C553F0((__int64)&v67, 1, v34, v39, v41);
    if ( (_BYTE)v40 )
      v40 = (unsigned __int8)*v68 ^ 1;
  }
  else if ( v34 != -1 )
  {
    v38 = nullptr;
    sub_C553F0((__int64)&v67, 0, v34, v39, v41);
  }
  --v69[36];
  sub_C23C00((__int64)v66);
  if ( ptr != v65 )
    free(ptr);
  sub_C23D80((__int64)&v67, (__int64)v38);
  if ( v54 )
    sub_224D6D0(v54);
  return v40;
}
