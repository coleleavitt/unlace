__int64 __fastcall sub_977870(__int64 a1, __int64 a2, bool a3, __int64 a4)
{
  __int64 v5; // r15
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // r13
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int64 *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r13
  __int64 v35; // rsi
  int v36; // r14d
  int v37; // ecx
  int v38; // eax
  int v39; // edx
  __int16 v40; // ax
  __int64 v41; // rsi
  __m128i si128; // xmm0
  int v43; // eax
  int v44; // eax
  _QWORD *v45; // rbx
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdi
  unsigned __int64 v50; // rdi
  __int64 v51; // rax
  _QWORD *v52; // r11
  __int64 v53; // rsi
  __int16 v54; // ax
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbx
  __int64 v60; // r14
  __m128 v61; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD *v62; // [rsp+18h] [rbp-B0h]
  char *v63; // [rsp+20h] [rbp-A8h]
  void **p_ptr; // [rsp+28h] [rbp-A0h]
  void *v65; // [rsp+30h] [rbp-98h] BYREF
  __int128 v66; // [rsp+38h] [rbp-90h] BYREF
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __int128 v68; // [rsp+58h] [rbp-70h] BYREF

  if ( a2 )
  {
    v5 = a2;
    v61.m128_u64[0] = (unsigned __int64)&v66 + 8;
    while ( 2 )
    {
      v8 = *(_WORD *)v5 & 0x1FF;
      v9 = (unsigned int)(v8 + 502);
      LOWORD(v9) = (v8 + 502) & 0x1FF;
      switch ( v9 )
      {
        case 0LL:
        case 107LL:
          return *(_QWORD *)(a1 + 16);
        case 10LL:
          v5 = *(_QWORD *)(v5 + 24);
          goto LABEL_5;
        case 38LL:
          v48 = *(_QWORD *)(v5 + 16);
          a3 = 0;
          if ( (v48 & 4) != 0 )
            a3 = (unsigned int)sub_B75F80(v48 & 0xFFFFFFFFFFFFFFF8LL) != 0;
          *(_QWORD *)&v66 = 0x200000000LL;
          v65 = (void *)v61.m128_u64[0];
          p_ptr = &ptr;
          ptr = (char *)&v68 + 8;
          *(_QWORD *)&v68 = 0x200000000LL;
          v49 = *(_QWORD *)(v5 + 16);
          if ( (v49 & 4) != 0 )
            v50 = *(_QWORD *)((v49 & 0xFFFFFFFFFFFFFFF8LL) + 40);
          else
            v50 = v49 & 0xFFFFFFFFFFFFFFF8LL;
          v51 = sub_BD34A0(v50, &v65);
          v52 = v65;
          v5 = v51;
          v63 = (char *)v65 + 8 * (unsigned int)v66;
          if ( v65 != v63 )
          {
            do
            {
              v53 = *v52;
              v62 = v52;
              sub_977870(a1, v53, 0, a4);
              v52 = v62 + 1;
            }
            while ( v63 != (char *)(v62 + 1) );
          }
          if ( ptr != p_ptr + 2 )
            free(ptr);
          if ( v65 != (void *)v61.m128_u64[0] )
            free(v65);
          goto LABEL_5;
        case 41LL:
          v45 = (_QWORD *)(v5 + 32);
          v10 = *(_QWORD *)(a1 + 16);
          v46 = v5 + 8LL * *(unsigned __int16 *)(v5 + 4) + 32;
          if ( v46 != v5 + 32 )
          {
            do
            {
              if ( *v45 )
              {
                v47 = sub_977870(a1, *v45, 1, a4);
                if ( v47 )
                  v10 = v47;
              }
              ++v45;
            }
            while ( (_QWORD *)v46 != v45 );
          }
          return v10;
        case 43LL:
          return sub_977F40(a1, v5, a3, a4);
        case 51LL:
        case 69LL:
        case 76LL:
          v5 = *(_QWORD *)(v5 + 16);
          goto LABEL_5;
        case 101LL:
          v5 = sub_C70F80(v5);
          goto LABEL_5;
        case 102LL:
          v5 = sub_C70F40(v5);
LABEL_5:
          if ( !v5 )
            goto LABEL_6;
          continue;
        case 106LL:
          v10 = sub_977870(a1, *(_QWORD *)(v5 + 24), 1, a4);
          if ( a3 )
            return v10;
          v21 = *(_QWORD *)(sub_B68470(**(_QWORD **)(v5 + 16) + 72LL) + 16);
          if ( (v21 & 4) != 0 )
            v24 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v24 = v21 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v24 )
            BUG();
          v25 = *(_QWORD *)(v24 + 40);
          sub_6E4DB0((__int64 *)(v25 + 96), v25, v19, v20, v22, v23);
          if ( (*(_BYTE *)(*(_QWORD *)(v24 + 64) + 10LL) & 8) != 0 )
          {
            if ( v10 )
              *(_QWORD *)(a1 + 24) = v10;
            *(_QWORD *)(a1 + 16) = sub_9765D0(a1, v25, v26, v27, v28, v29);
            goto LABEL_28;
          }
          if ( *(_BYTE *)a4 )
          {
            if ( !*(_QWORD *)(a4 + 16) )
            {
              if ( v10 )
                *(_QWORD *)(a1 + 24) = v10;
              *(_QWORD *)(a1 + 16) = sub_975DA0(a1, v25, v26, v27, v28, v29);
              goto LABEL_28;
            }
            if ( *(_QWORD *)(a1 + 16) )
            {
LABEL_31:
              v31 = *(unsigned __int64 **)(a1 + 16);
              goto LABEL_32;
            }
            goto LABEL_85;
          }
          v31 = *(unsigned __int64 **)(a1 + 16);
          if ( !v31 )
          {
LABEL_85:
            sub_976590(a1, v25, v26, v27, v28, v29);
LABEL_28:
            if ( *(_BYTE *)a4 && !*(_QWORD *)(a4 + 16) )
            {
              v30 = *(_QWORD *)(a1 + 24);
              *(_QWORD *)(a4 + 16) = v5;
              *(_QWORD *)(a4 + 8) = v30;
            }
            goto LABEL_31;
          }
LABEL_32:
          v32 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)&v68 = 3;
          ptr = (void *)(v5 & 0xFFFFFFFFFFFFFFFCLL | 1);
          sub_976620(v31, (const __m128i *)&ptr, (_QWORD *)(v32 + 32), v27, (__int64)ptr, v29);
          v10 = *(_QWORD *)(a1 + 16);
          break;
        case 108LL:
          v18 = (*(_WORD *)(v5 + 2) >> 3) & 0x3F;
          if ( ((*(_WORD *)(v5 + 2) >> 3) & 0x3F) == 0x20 )
          {
            v60 = sub_977870(a1, *(_QWORD *)(v5 + 16), 0, a4);
            v10 = sub_977870(a1, *(_QWORD *)(v5 + 24), a3, a4);
            if ( !v10 )
              return v60;
          }
          else if ( (unsigned int)(unsigned __int8)v18 - 19 <= 1 )
          {
            sub_977870(a1, *(_QWORD *)(v5 + 16), 0, a4);
            v11 = sub_974040((__int64 *)a1, *(_QWORD *)(v5 + 16));
            v12 = -1;
            if ( v11 >= 0 )
            {
              v13 = *(_DWORD *)(a4 + 4);
              if ( ((*(_WORD *)(v5 + 2) >> 3) & 0x3F) == 0x14 )
                v11 ^= 1u;
              if ( v13 >= 0 )
                v12 = v13 == 1 && v11 == 1;
            }
            HIDWORD(ptr) = v12;
            LOBYTE(ptr) = 1;
            v68 = 0;
            sub_977870(a1, *(_QWORD *)(v5 + 24), 0, &ptr);
            if ( *((_QWORD *)&v68 + 1) )
              sub_975DF0(a1, (__int64)&ptr, 0, v14, v15, v16);
            return *(_QWORD *)(a1 + 16);
          }
          else if ( (unsigned int)(unsigned __int8)v18 - 21 <= 0xA )
          {
            v59 = sub_977870(a1, *(_QWORD *)(v5 + 24), 0, a4);
            v10 = sub_977870(a1, *(_QWORD *)(v5 + 16), 0, a4);
            if ( !v10 )
              return v59;
          }
          else
          {
            return sub_977F40(a1, v5, a3, a4);
          }
          return v10;
        case 118LL:
        case 119LL:
          if ( (_WORD)v8 == 128 )
            v33 = *(_QWORD *)(v5 + 24);
          else
            v33 = *(_QWORD *)(v5 + 32);
          sub_977870(a1, v33, 0, a4);
          v34 = *(_QWORD *)(a1 + 24);
          v61.m128_u64[0] = *(_QWORD *)(a1 + 16);
          if ( (*(_WORD *)v5 & 0x1FF) == 0x80 )
            v35 = *(_QWORD *)(v5 + 24);
          else
            v35 = *(_QWORD *)(v5 + 32);
          v36 = sub_974040((__int64 *)a1, v35);
          v37 = v36;
          v38 = -1;
          if ( v36 >= 0 )
          {
            v39 = *(_DWORD *)(a4 + 4);
            v36 ^= 1u;
            if ( v39 >= 0 )
              v38 = v39 == 1 && v37 == 1;
          }
          HIDWORD(v65) = v38;
          v66 = 0;
          v40 = *(_WORD *)v5;
          LOBYTE(v65) = 1;
          if ( (v40 & 0x1FF) == 0x80 )
            v41 = *(_QWORD *)(v5 + 32);
          else
            v41 = *(_QWORD *)(v5 + 40);
          v61.m128_u64[0] = v34;
          v61 = _mm_loadh_ps((const double *)v61.m128_u64);
          sub_977870(a1, v41, a3, &v65);
          si128 = _mm_load_si128((const __m128i *)&v61);
          v62 = *(_QWORD **)(a1 + 16);
          *(__m128i *)(a1 + 16) = si128;
          v43 = *(_DWORD *)(a4 + 4);
          if ( v36 < 0 || v43 < 0 )
            v44 = -1;
          else
            v44 = v43 == 1 && v36 == 1;
          HIDWORD(ptr) = v44;
          v68 = 0;
          v54 = *(_WORD *)v5;
          LOBYTE(ptr) = 1;
          if ( (v54 & 0x1FF) == 0x80 )
            v55 = *(_QWORD *)(v5 + 40);
          else
            v55 = *(_QWORD *)(v5 + 48);
          sub_977870(a1, v55, a3, &ptr);
          if ( *((_QWORD *)&v66 + 1) )
          {
            if ( *((_QWORD *)&v68 + 1) )
            {
              sub_975DF0(a1, (__int64)&ptr, (__int64)v62, v56, v57, v58);
            }
            else
            {
              *(_QWORD *)(a1 + 16) = v62;
              sub_975DF0(a1, (__int64)&v65, 0, v56, v57, v58);
            }
          }
          else if ( *((_QWORD *)&v68 + 1) )
          {
            sub_975DF0(a1, (__int64)&ptr, 0, v56, v57, v58);
          }
          return *(_QWORD *)(a1 + 16);
        default:
          return sub_977F40(a1, v5, 0, a4);
      }
      break;
    }
  }
  else
  {
LABEL_6:
    *(_BYTE *)(a1 + 320) = 1;
    return 0;
  }
  return v10;
}

