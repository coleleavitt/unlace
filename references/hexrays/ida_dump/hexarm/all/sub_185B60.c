__int64 __fastcall sub_185B60(__int64 a1, __int64 a2, __int64 a3, int a4, _BYTE *a5, unsigned int a6)
{
  unsigned __int64 v8; // rbp
  const char *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  int v21; // ecx
  int v22; // edx
  int v23; // ebx
  int v24; // eax
  int v25; // eax
  signed int j; // r13d
  __int64 v27; // rbp
  char *v28; // r15
  char v29; // dl
  __int64 v30; // rax
  int v31; // ecx
  int v32; // ecx
  __m128i *v33; // r15
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rsi
  _DWORD *v40; // rdi
  __int64 v41; // [rsp-8h] [rbp-B0h]
  int v42; // [rsp+0h] [rbp-A8h]
  int v43; // [rsp+8h] [rbp-A0h]
  __int64 v44; // [rsp+8h] [rbp-A0h]
  int v45; // [rsp+10h] [rbp-98h]
  unsigned int v46; // [rsp+14h] [rbp-94h]
  int v47; // [rsp+18h] [rbp-90h]
  __int64 i; // [rsp+18h] [rbp-90h]
  __int64 v51; // [rsp+38h] [rbp-70h]
  __m128i si128; // [rsp+40h] [rbp-68h] BYREF
  __int64 v53; // [rsp+50h] [rbp-58h] BYREF
  __int128 v54; // [rsp+58h] [rbp-50h]
  unsigned __int64 v55; // [rsp+68h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v8 = a6;
  switch ( a6 )
  {
    case 2u:
      v9 = "memset";
      break;
    case 5u:
      v9 = "memcpy";
      break;
    case 6u:
      v9 = "strcpy";
      break;
    case 0x22u:
      v9 = "wmemcpy";
      break;
    case 0x23u:
      v9 = "wmemset";
      break;
    default:
      v9 = "wcscpy";
      break;
  }
  v10 = sub_335C70(
          *(_QWORD *)(a1 + 64),
          *(_QWORD *)(a2 + 24),
          (_DWORD)v9,
          (int)a5 + 24,
          a4,
          (_DWORD)a5,
          1,
          v41,
          v42,
          v43,
          v45,
          v47);
  v11 = *(_QWORD *)(v10 + 72);
  v51 = v11;
  *(_DWORD *)(v11 + 284) = v8;
  if ( (*(_BYTE *)(a3 + 136) & 0x20) != 0 )
  {
    *(_DWORD *)(v11 + 280) |= 0x80u;
    if ( *a5 == 10 )
      goto LABEL_5;
  }
  else if ( *a5 == 10 )
  {
    goto LABEL_5;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
  sub_316F70(v11 + 216, &si128);
  si128 = 0u;
  v53 = 0;
  v54 = 0;
  v53 = qvector_reserve(&v53, 0, 1, 16);
  *(__m128i *)(v53 + 16 * v54) = _mm_load_si128((const __m128i *)&xmmword_41F900);
  *(_QWORD *)&v54 = v54 + 1;
  sub_63C80((__int64 *)(v51 + 136), si128.m128i_i64);
  sub_317070(v51 + 152, &v53);
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
  qfree(si128.m128i_i64[0]);
  sub_F7650((int *)v51, a1);
LABEL_5:
  sub_11D2D0(v10, a2);
  if ( v10 )
  {
    sub_11C7E0(v10 + 64);
    sub_11C7E0(v10 + 48);
    sub_11C7E0(v10 + 32);
    j__qfree(v10);
  }
  v12 = 0x1000000040LL;
  v13 = *(_QWORD *)(a3 + 48);
  if ( _bittest64(&v12, v8) )
  {
    v21 = *(_DWORD *)(a3 + 128);
    if ( v21 != -1 )
    {
      v22 = *(_DWORD *)(a3 + 124);
      if ( v22 <= 0 )
        v22 = 1;
      v23 = v22 + v21;
      if ( *(_DWORD *)(a3 + 4) > v22 + v21 )
      {
        if ( v13 )
        {
          v14 = *(_QWORD *)(a3 + 40);
          v44 = *(_QWORD *)(v14 + 8 * v13 - 8);
          v24 = *(_DWORD *)v44;
          if ( *(_DWORD *)v44 == 4 || v24 == 1 )
          {
            v25 = *(_DWORD *)(v44 + 36);
LABEL_26:
            v46 = v25 - v23;
            if ( v25 != v23 )
            {
              for ( i = v44; ; i = v27 )
              {
                for ( j = round_down_power2(v46); v23 % j; j /= 2 )
                  ;
                v27 = j__qalloc_or_throw(80);
                v28 = (char *)(v27 + 32);
                *(_QWORD *)(v27 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v27 + 40) = 0;
                *(_QWORD *)(v27 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v27 + 56) = 0;
                *(_QWORD *)(v27 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v27 + 72) = 0;
                *(_OWORD *)(v27 + 8) = 0;
                sub_124DE0(v27, v44);
                if ( *(_DWORD *)v27 == 2 )
                {
                  if ( !(unsigned __int8)sub_12C5E0(v27, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v23) )
                  {
                    if ( !under_debugger )
                      sub_3835A0(52489);
                    goto LABEL_80;
                  }
                }
                else
                {
                  v29 = sub_11F7C0(v28, &si128, 0);
                  v30 = *(_QWORD *)(a1 + 480);
                  if ( v29 )
                  {
                    v31 = v23;
                    if ( *(_BYTE *)(v30 + 145) )
                      v31 = *(_DWORD *)(v27 + 36) - j - v23;
                    v32 = 8 * v31;
                    v33 = *(__m128i **)(v27 + 40);
                    v34 = 0;
                    if ( (unsigned __int64)v32 <= 0x3F )
                      v34 = (unsigned __int64)si128.m128i_i64[0] >> v32;
                    v35 = sub_32AEF0(v34, (unsigned int)j, 0);
                    v33[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v35, (__m128i)(unsigned __int64)v35);
                  }
                  else
                  {
                    v39 = *(_QWORD *)(v30 + 112);
                    if ( *(_BYTE *)(v27 + 32) == 4 && (v40 = *(_DWORD **)(v27 + 40), *v40 == 2) )
                    {
                      if ( !(unsigned __int8)sub_12C5E0((__int64)v40, v39, v23) )
                      {
                        if ( !under_debugger )
                          sub_3835A0(52501);
                        goto LABEL_80;
                      }
                      *(_DWORD *)(*(_QWORD *)(v27 + 40) + 68LL) = j;
                    }
                    else if ( !(unsigned __int8)sub_126950((unsigned __int64)v28, v39, v23) )
                    {
                      if ( !under_debugger )
                        sub_3835A0(52490);
                      goto LABEL_80;
                    }
                  }
                  *(_DWORD *)(v27 + 36) = j;
                }
                v36 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                if ( *(_DWORD *)v44 == 1 )
                {
                  sub_A2540((__int64)&si128, v36, *(_QWORD *)(v44 + 24), v44 + 64, v23, 1);
                  sub_124BC0(v27 + 64, (unsigned __int8 *)&si128);
                  sub_11C7E0((__int64)&si128);
                }
                else
                {
                  if ( !(unsigned __int8)sub_126950(v27 + 64, v36, v23) )
                  {
                    if ( !under_debugger )
                      sub_3835A0(52491);
                    goto LABEL_80;
                  }
                  *(_DWORD *)(v27 + 68) = j;
                }
                v23 += j;
                sub_A2BA0(a1, (_QWORD *)v27, i);
                v46 -= j;
                if ( !v46 )
                {
                  v13 = *(_QWORD *)(a3 + 48);
                  goto LABEL_8;
                }
              }
            }
            goto LABEL_10;
          }
          if ( v24 == 2 )
          {
            v25 = *(_DWORD *)(v44 + 68);
            goto LABEL_26;
          }
          if ( !under_debugger )
            sub_3835A0(52488);
        }
        else if ( !under_debugger )
        {
          sub_3835A0(52492);
        }
LABEL_80:
        BUG();
      }
    }
  }
LABEL_8:
  if ( !v13 )
    goto LABEL_13;
  v14 = *(_QWORD *)(a3 + 40);
LABEL_10:
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    ++v15;
    sub_11CFE0(*(_QWORD *)(v14 + 8 * v16));
    v16 = v15;
    if ( (unsigned __int64)v15 >= *(_QWORD *)(a3 + 48) )
      break;
    v14 = *(_QWORD *)(a3 + 40);
  }
LABEL_13:
  v17 = *(_DWORD *)(a1 + 24);
  BYTE1(v17) &= ~2u;
  LOBYTE(v17) = v17 | 0x80;
  *(_DWORD *)(a1 + 24) = v17;
  v18 = *(_QWORD *)(v51 + 24);
  if ( *(_BYTE *)v18 == 10 )
  {
    v38 = *(_QWORD *)(v18 + 8);
    if ( *(_BYTE *)v38 == 5 )
      sub_18D2D0(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(v38 + 8) + 8LL));
  }
  if ( *(_BYTE *)(a2 + 64) == 8 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 72) + 284LL) == 2 )
      return v55 - __readfsqword(0x28u);
    v19 = *(_QWORD *)(v51 + 24);
    if ( *(_BYTE *)(v19 + 80) != 10 )
      return v55 - __readfsqword(0x28u);
  }
  else
  {
    v19 = *(_QWORD *)(v51 + 24);
    if ( *(_BYTE *)(v19 + 80) != 10 )
      return v55 - __readfsqword(0x28u);
  }
  v37 = *(_QWORD *)(v19 + 88);
  if ( *(_BYTE *)v37 != 5 )
    return v55 - __readfsqword(0x28u);
  return sub_18D2D0(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(v37 + 8) + 8LL));
}
