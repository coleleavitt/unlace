void __fastcall sub_1821E40(__int64 a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 *v5; // r14
  __int64 v9; // rsi
  _DWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  char v14; // r15
  bool v15; // cc
  char v16; // cl
  __int64 v17; // r14
  __int64 *v18; // rax
  __int64 *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // di
  __int64 v23; // rsi
  char *v24; // rdx
  __int64 v25; // rdi
  char *v26; // r8
  char *v27; // rax
  char *v28; // rsi
  char v29; // r13
  const void *v30; // r13
  __int64 v31; // r14
  unsigned __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // eax
  unsigned int v38; // eax
  __int64 *v39; // [rsp+0h] [rbp-148h]
  const void *v40; // [rsp+0h] [rbp-148h]
  __int64 v41; // [rsp+8h] [rbp-140h]
  char v42; // [rsp+1Ch] [rbp-12Ch]
  int v43; // [rsp+24h] [rbp-124h] BYREF
  _DWORD *v44; // [rsp+28h] [rbp-120h] BYREF
  const void *v45; // [rsp+30h] [rbp-118h] BYREF
  __int64 v46; // [rsp+38h] [rbp-110h]
  __int64 v47; // [rsp+40h] [rbp-108h] BYREF
  __int64 v48; // [rsp+48h] [rbp-100h]
  const void *v49; // [rsp+50h] [rbp-F8h] BYREF
  size_t v50; // [rsp+58h] [rbp-F0h]
  __int64 (__fastcall **v51)(); // [rsp+60h] [rbp-E8h] BYREF
  int v52; // [rsp+68h] [rbp-E0h]
  void *ptr; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+78h] [rbp-D0h]
  int v55; // [rsp+80h] [rbp-C8h]
  char v56; // [rsp+84h] [rbp-C4h]
  __int64 v57; // [rsp+88h] [rbp-C0h] BYREF
  char v58; // [rsp+108h] [rbp-40h]

  v5 = (__int64 *)(a1 + 8);
  sub_168B9F0((__int64)&v51, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x58u, 0);
  sub_15F7200(&v51);
  v9 = a3[5].m128i_i64[0];
  v45 = nullptr;
  v46 = 0;
  v10 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
  v44 = v10;
  if ( (*v10 & 0x10000) == 0 )
  {
    v11 = sub_1C02150(a1, v10);
    if ( v11 == 1 )
      return;
    v44 = (_DWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ( (unsigned __int8)sub_1821C20(a1, (__int64)a3, 1u, &v45, a4, a5) )
  {
    if ( (unsigned __int8)sub_180A7C0(a1, a2, (__int64)a3, (unsigned __int64 *)&v44, &v45) )
    {
      v47 = 0;
      v48 = 0;
      if ( (unsigned __int8)sub_1821C20(a1, (__int64)a3, 2u, &v47, a4, a5) )
      {
        v12 = v48;
        v14 = sub_B11DC0(v47, v48, &v43);
        if ( !v14 )
        {
          v38 = sub_EEB7E0(a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, v12, *(double *)a4.m128i_i64);
          sub_168B9F0((__int64)&v51, v5, v38, 0xE6Cu, 0);
          sub_15F7200(&v51);
          return;
        }
        v49 = nullptr;
        v15 = a3[3].m128i_i16[4] <= 3u;
        v50 = 0;
        if ( !v15 )
        {
          v12 = (__int64)a3;
          if ( !(unsigned __int8)sub_1821C20(a1, (__int64)a3, 3u, &v49, a4, a5) )
            return;
          if ( !v50 || (v12 = v50, !(unsigned __int8)(sub_FD3F00(v49, v50) >> 32)) )
          {
            v37 = sub_EEB7E0(a3[6].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL, v12, *(double *)a4.m128i_i64);
            sub_168B9F0((__int64)&v51, v5, v37, 0xE70u, 0);
            sub_1682BA0((__int64)&v51, (__int64)&v49);
            sub_15F7200(&v51);
            return;
          }
        }
        v16 = 0;
        if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
        {
          v17 = *(_QWORD *)(a2 + 120);
          v52 = 16777472;
          v51 = off_2C50FA0;
          ptr = &v57;
          v54 = 16;
          v55 = 0;
          v56 = 1;
          v18 = (__int64 *)(v17 + 8LL * (unsigned int)sub_B76070(a2, v12, v13, 0));
          v19 = *(__int64 **)(a2 + 120);
          v39 = v18;
          sub_B76070(a2, v12, v20, v21);
          v22 = v56;
          if ( v39 != v19 )
          {
            while ( 1 )
            {
              v23 = *v19;
              if ( v22 )
              {
                v24 = (char *)ptr;
                v25 = 8LL * HIDWORD(v54);
                v26 = (char *)ptr + v25;
                if ( ptr != (char *)ptr + v25 )
                {
                  v27 = (char *)ptr;
                  if ( v23 == *(_QWORD *)ptr )
                    goto LABEL_19;
                  while ( 1 )
                  {
                    v27 += 8;
                    if ( v26 == v27 )
                      break;
                    if ( v23 == *(_QWORD *)v27 )
                      goto LABEL_19;
                  }
                }
                if ( HIDWORD(v54) < (unsigned int)v54 )
                  break;
              }
              v27 = (char *)sub_2236760(&ptr, v23);
              v22 = v56;
              v24 = (char *)ptr;
              if ( v56 )
                goto LABEL_19;
              v28 = (char *)ptr + 8 * (unsigned int)v54;
LABEL_20:
              if ( v28 != v27 && (unsigned __int64)(*(_QWORD *)v27 + 2LL) <= 1 )
              {
                do
                  v27 += 8;
                while ( v28 != v27 && *(_QWORD *)v27 >= 0xFFFFFFFFFFFFFFFELL );
              }
              if ( v39 == ++v19 )
                goto LABEL_26;
            }
            ++HIDWORD(v54);
            *(_QWORD *)v26 = v23;
            v24 = (char *)ptr;
            v27 = (char *)ptr + v25;
LABEL_19:
            v22 = v14;
            v28 = &v24[8 * HIDWORD(v54)];
            goto LABEL_20;
          }
LABEL_26:
          v58 = 0;
          sub_BC97E0((__int64 *)&v51, (__int64)v44);
          v29 = v58;
          v51 = off_2C50FA0;
          if ( !v56 )
            free(ptr);
          v16 = v29;
        }
        v30 = v49;
        v42 = v16;
        v40 = v45;
        v31 = v50;
        v41 = v46;
        v32 = sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 96, 3u);
        sub_B2E4F0(v32, *(_QWORD *)(a1 + 248), a3, (__int64)v44, v40, v41, v43, v30, v31, v42, a2);
        sub_B8CC60(a2, v32, v33, v34, v35, v36);
      }
    }
  }
}
