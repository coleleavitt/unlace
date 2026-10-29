unsigned __int64 __fastcall sub_14F570(__int64 a1, __int64 a2)
{
  char v3; // al
  int *v5; // rdx
  unsigned __int8 (__fastcall **v6)(__int64, __int64, int *); // rax
  int v7; // r12d
  __int16 v9; // ax
  __int16 v10; // ax
  __int64 v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // r12
  int v14; // eax
  __int64 v15; // r12
  _QWORD *v16; // r15
  unsigned __int64 v17; // r12
  __int16 v18; // r12
  const char *v19; // rsi
  unsigned __int64 v20; // r12
  const void *v21; // r8
  void *v22; // rdi
  __int64 v23; // rsi
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // dx
  bool v26; // cf
  unsigned __int8 (__fastcall **v27)(__int64, __int64, int *); // rax
  __int64 v28; // rsi
  __m128i si128; // xmm0
  __int64 v30; // rax
  const void *v31; // r15
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  const void *v36; // r8
  void *v37; // rdi
  __int64 v38; // rax
  const void *v39; // r8
  __int64 v40; // rax
  char tinfo; // [rsp+8h] [rbp-B0h]
  const void *v42; // [rsp+8h] [rbp-B0h]
  const void *v43; // [rsp+8h] [rbp-B0h]
  const void *v44; // [rsp+8h] [rbp-B0h]
  __int16 v45; // [rsp+12h] [rbp-A6h] BYREF
  int v46; // [rsp+14h] [rbp-A4h] BYREF
  __int64 v47; // [rsp+18h] [rbp-A0h] BYREF
  const char *v48; // [rsp+20h] [rbp-98h] BYREF
  __int128 v49; // [rsp+28h] [rbp-90h]
  __int64 v50; // [rsp+40h] [rbp-78h] BYREF
  __int128 v51; // [rsp+48h] [rbp-70h]
  __int128 v52; // [rsp+58h] [rbp-60h]
  __int64 v53; // [rsp+68h] [rbp-50h]
  int v54; // [rsp+70h] [rbp-48h]
  unsigned __int64 v55; // [rsp+78h] [rbp-40h]

  v3 = *(_BYTE *)(a1 + 288);
  v55 = __readfsqword(0x28u);
  if ( v3 == 29 || (v5 = (int *)(a1 + 260), v3 != 45) && (v5 = nullptr, v3 == 13) )
    v5 = (int *)(a1 + 256);
  v6 = *(unsigned __int8 (__fastcall ***)(__int64, __int64, int *))a2;
  v7 = *v5;
  v46 = 0;
  (*v6)(a2, 100, &v46);
  *(_DWORD *)(a1 + 252) |= 0x800u;
  if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 10, a1 + 120) )
  {
    v47 = 0;
    copy_tinfo_t();
    v48 = nullptr;
    v45 = 0;
    v49 = 0;
    switch ( v7 )
    {
      case 1:
        (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 5, a1 + 56);
        (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 6, a1 + 112);
        *(_WORD *)(a1 + 82) = 0;
        if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 7, &v45) && v45 )
          *(_WORD *)(a1 + 82) |= 1u;
        if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 8, &v45) && v45 )
          *(_WORD *)(a1 + 82) |= 2u;
        if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 11, &v45) && v45 )
        {
          *(_WORD *)(a1 + 80) = 0;
        }
        else if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 12, &v45) && v45 )
        {
          *(_WORD *)(a1 + 80) = 1;
        }
        else if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 13, &v45) && v45 )
        {
          *(_WORD *)(a1 + 80) = 2;
        }
        else if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 14, &v45) && v45 )
        {
          *(_WORD *)(a1 + 80) = 3;
        }
        else if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 15, &v45) && v45 )
        {
          *(_WORD *)(a1 + 80) = 4;
        }
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 > 1 )
        {
          v21 = *(const void **)(a1 + 56);
          v22 = *(void **)(a1 + 136);
          if ( *(_QWORD *)(a1 + 152) < v13 )
          {
            v42 = *(const void **)(a1 + 56);
            v33 = qvector_reserve();
            *(_QWORD *)(a1 + 136) = v33;
            v21 = v42;
            v22 = (void *)v33;
          }
          *(_QWORD *)(a1 + 144) = v13;
          memmove(v22, v21, v13 - 1);
          *(_BYTE *)(*(_QWORD *)(a1 + 136) + v13 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 144) = 0;
        }
        if ( !(unsigned __int8)sub_14F210((__int64)&v47, a1 + 56, (__int64 *)&v48, (__int64)&v47) )
          goto LABEL_59;
        v14 = set_tinfo_property4();
LABEL_34:
        if ( !v14 )
          sub_14EEA0((_QWORD *)a1, (__int64)&v47, a2);
LABEL_36:
        if ( v48 )
        {
          *(_QWORD *)&v49 = 0;
          qfree();
        }
        break;
      case 2:
        if ( !*(_QWORD *)(a1 + 216) )
        {
          if ( !(unsigned int)verify_tinfo() )
          {
            v20 = *(_QWORD *)(a1 + 144);
            if ( v46 == 1 )
            {
              if ( v20 > 1 )
              {
                v39 = *(const void **)(a1 + 136);
                if ( *(_QWORD *)(a1 + 72) < v20 )
                {
                  v44 = *(const void **)(a1 + 136);
                  *(_QWORD *)(a1 + 56) = qvector_reserve();
                  v39 = v44;
                }
                *(_QWORD *)(a1 + 64) = v20;
                memmove(*(void **)(a1 + 56), v39, v20 - 1);
                *(_BYTE *)(*(_QWORD *)(a1 + 56) + v20 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(a1 + 64) = 0;
              }
              sub_14E370(a1 + 56);
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 5, a1 + 56);
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 6, a1 + 112);
              v23 = 0;
              v24 = *(_WORD *)(a1 + 80) & 7;
              v25 = v24 + 11;
              v26 = v24 < 5u;
              v27 = *(unsigned __int8 (__fastcall ***)(__int64, __int64, int *))a2;
              if ( v26 )
                v23 = v25;
              v45 = 1;
              v27[1](a2, v23, (int *)&v45);
              v45 = *(_WORD *)(a1 + 82) & 1;
              (*(void (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)a2 + 8LL))(a2, 7, &v45);
              v45 = ((int)*(unsigned __int16 *)(a1 + 82) >> 1) & 1;
              (*(void (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)a2 + 8LL))(a2, 8, &v45);
            }
            else
            {
              if ( v20 > 1 )
              {
                v36 = *(const void **)(a1 + 136);
                v37 = *(void **)(a1 + 8);
                if ( *(_QWORD *)(a1 + 24) < v20 )
                {
                  v43 = *(const void **)(a1 + 136);
                  v40 = qvector_reserve();
                  *(_QWORD *)(a1 + 8) = v40;
                  v36 = v43;
                  v37 = (void *)v40;
                }
                *(_QWORD *)(a1 + 16) = v20;
                memmove(v37, v36, v20 - 1);
                *(_BYTE *)(*(_QWORD *)(a1 + 8) + v20 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(a1 + 16) = 0;
              }
              sub_14F070(a1 + 8);
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 1, a1 + 8);
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 17, a1 + 32);
              if ( *(_WORD *)(a1 + 32) )
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 2, a1 + 40);
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 3, a1 + 48);
              v45 = (*(_BYTE *)(a1 + 52) & 2) != 0;
              (*(void (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)a2 + 8LL))(a2, 16, &v45);
            }
            goto LABEL_36;
          }
          goto LABEL_59;
        }
        break;
      case 0:
        (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 1, a1 + 8);
        (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 17, a1 + 32);
        (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 2, a1 + 40);
        (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 3, a1 + 48);
        (**(void (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 16, &v45);
        v9 = *(_WORD *)(a1 + 52) & 0xFFFD;
        if ( v45 )
          v9 = *(_WORD *)(a1 + 52) | 2;
        *(_WORD *)(a1 + 52) = v9;
        (**(void (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 19, &v45);
        v10 = *(_WORD *)(a1 + 52) & 0xFFFB;
        if ( v45 )
          v10 = *(_WORD *)(a1 + 52) | 4;
        *(_WORD *)(a1 + 52) = v10;
        v50 = 0;
        v53 = 0;
        v54 = 1;
        v51 = 0;
        v52 = 0;
        if ( (unsigned __int8)get_tinfo_details() )
        {
          sub_14DF80(a1 + 8, (__int64)&v50);
          tinfo = create_tinfo();
          if ( tinfo )
          {
            v11 = v50;
            if ( !v50 )
            {
LABEL_48:
              v17 = *(_QWORD *)(a1 + 16);
              if ( v17 > 1 )
              {
                v31 = *(const void **)(a1 + 8);
                v32 = *(void **)(a1 + 136);
                if ( *(_QWORD *)(a1 + 152) < v17 )
                {
                  v38 = qvector_reserve();
                  *(_QWORD *)(a1 + 136) = v38;
                  v32 = (void *)v38;
                }
                *(_QWORD *)(a1 + 144) = v17;
                memmove(v32, v31, v17 - 1);
                *(_BYTE *)(*(_QWORD *)(a1 + 136) + v17 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(a1 + 144) = 0;
              }
              v18 = *(_WORD *)(a1 + 32) & 1;
              if ( (_BYTE)v18 != ((get_tinfo_property() & 0x400) != 0) )
                set_tinfo_property4();
              if ( v18 )
              {
                if ( *(__int64 *)(a1 + 40) < 0 )
                {
                  v28 = (__int64)v48;
                  if ( *((_QWORD *)&v49 + 1) <= 0x21u )
                  {
                    v48 = (const char *)qvector_reserve();
                    v28 = (__int64)v48;
                  }
                  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2940);
                  *(_BYTE *)(v28 + 32) = 101;
                  *(_QWORD *)&v49 = 34;
                  *(__m128i *)v28 = si128;
                  v30 = (__int64)v48;
                  *(__m128i *)(v28 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D2950);
                  *(_BYTE *)(v30 + 33) = 0;
                  goto LABEL_56;
                }
                if ( (unsigned int)set_tinfo_property4() )
                  goto LABEL_55;
              }
              if ( (*(_DWORD *)(a1 + 48) & (*(_DWORD *)(a1 + 48) - 1)) != 0 )
              {
                v34 = (__int64)v48;
                if ( *((_QWORD *)&v49 + 1) <= 0x1Eu )
                {
                  v48 = (const char *)qvector_reserve();
                  v34 = (__int64)v48;
                }
                *(_QWORD *)&v49 = 31;
                *(__m128i *)v34 = _mm_load_si128((const __m128i *)&xmmword_1D2960);
                v35 = (__int64)v48;
                *(__m128i *)(v34 + 14) = _mm_load_si128((const __m128i *)&xmmword_1D2970);
                *(_BYTE *)(v35 + 30) = 0;
                goto LABEL_56;
              }
              if ( (unsigned int)set_tinfo_property4() )
              {
LABEL_55:
                tinfo_errstr();
                sub_94360((__int64 *)&v48);
LABEL_56:
                v19 = s1;
                if ( (_QWORD)v49 )
                  v19 = v48;
                sub_92120((__int64)"%s", v19);
                goto LABEL_59;
              }
              v14 = verify_tinfo();
              goto LABEL_34;
            }
            v12 = v51;
            if ( !(_QWORD)v51 )
            {
              qfree();
              goto LABEL_48;
            }
LABEL_41:
            v15 = 0;
            do
            {
              v16 = (_QWORD *)(v11 + (v15 << 7));
              clear_tinfo_t();
              if ( v16[5] )
              {
                v16[6] = 0;
                qfree();
              }
              if ( v16[2] )
              {
                v16[3] = 0;
                qfree();
              }
              ++v15;
              v11 = v50;
            }
            while ( v12 != v15 );
            *(_QWORD *)&v51 = 0;
            qfree();
            if ( !tinfo )
              goto LABEL_59;
            goto LABEL_48;
          }
        }
        sub_94360((__int64 *)&v48);
        v11 = v50;
        if ( v50 )
        {
          v12 = v51;
          tinfo = 0;
          if ( (_QWORD)v51 )
            goto LABEL_41;
          qfree();
        }
LABEL_59:
        if ( v48 )
        {
          *(_QWORD *)&v49 = 0;
          qfree();
        }
        break;
    }
    clear_tinfo_t();
  }
  return v55 - __readfsqword(0x28u);
}

