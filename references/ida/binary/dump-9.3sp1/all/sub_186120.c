__int64 __fastcall sub_186120(__int64 a1, __int64 a2, __int64 a3, int a4, _BYTE *a5, unsigned int a6)
{
  unsigned __int64 v8; // rbp
  char *v9; // rdx
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
  __int64 v23; // rsi
  int v24; // ebx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  signed int j; // r13d
  __int64 v29; // rdx
  __int64 v30; // rbp
  char *v31; // r15
  char v32; // dl
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // ecx
  int v36; // ecx
  __m128i *v37; // r15
  unsigned __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 *v44; // rsi
  _DWORD *v45; // rdi
  __int64 v46; // [rsp-8h] [rbp-B0h]
  int v47; // [rsp+0h] [rbp-A8h]
  int v48; // [rsp+8h] [rbp-A0h]
  __int64 v49; // [rsp+8h] [rbp-A0h]
  int v50; // [rsp+10h] [rbp-98h]
  int v51; // [rsp+14h] [rbp-94h]
  int v52; // [rsp+18h] [rbp-90h]
  __int64 i; // [rsp+18h] [rbp-90h]
  __int64 v56; // [rsp+38h] [rbp-70h]
  __m128i si128; // [rsp+40h] [rbp-68h] BYREF
  __int64 v58; // [rsp+50h] [rbp-58h] BYREF
  __int128 v59; // [rsp+58h] [rbp-50h]
  unsigned __int64 v60; // [rsp+68h] [rbp-40h]

  v60 = __readfsqword(0x28u);
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
  v10 = sub_335B10(
          *(_QWORD *)(a1 + 64),
          *(_QWORD *)(a2 + 24),
          (_DWORD)v9,
          (int)a5 + 24,
          a4,
          (_DWORD)a5,
          1,
          v46,
          v47,
          v48,
          v50,
          v52);
  v11 = *(_QWORD *)(v10 + 72);
  v56 = v11;
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
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  sub_316BB0(v11 + 216, &si128);
  si128 = 0u;
  v58 = 0;
  v59 = 0;
  v58 = qvector_reserve((__int64)&v58, 0, 1, 16);
  *(__m128i *)(v58 + 16 * v59) = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(_QWORD *)&v59 = v59 + 1;
  sub_64280((__int64 *)(v56 + 136), si128.m128i_i64);
  sub_316CB0(v56 + 152, &v58);
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  qfree(si128.m128i_i64[0]);
  sub_F7C10((int *)v56, a1);
LABEL_5:
  sub_11D890(v10, a2);
  if ( v10 )
  {
    sub_11CDA0(v10 + 64);
    sub_11CDA0(v10 + 48);
    sub_11CDA0(v10 + 32);
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
      v23 = 1;
      if ( v22 <= 0 )
        v22 = 1;
      v24 = v22 + v21;
      if ( *(_DWORD *)(a3 + 4) > v22 + v21 )
      {
        if ( v13 )
        {
          v14 = *(_QWORD *)(a3 + 40);
          v49 = *(_QWORD *)(v14 + 8 * v13 - 8);
          v25 = *(_DWORD *)v49;
          if ( *(_DWORD *)v49 == 4 || v25 == 1 )
          {
            v26 = *(_DWORD *)(v49 + 36);
LABEL_26:
            v51 = v26 - v24;
            if ( v26 != v24 )
            {
              for ( i = v49; ; i = v30 )
              {
                for ( j = round_down_power2(); ; j /= 2 )
                {
                  v29 = (unsigned int)(v24 >> 31);
                  if ( !(v24 % j) )
                    break;
                }
                LODWORD(v29) = v24 % j;
                v30 = j__qalloc_or_throw(80, v23, v29, v27);
                v31 = (char *)(v30 + 32);
                *(_QWORD *)(v30 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v30 + 40) = 0;
                *(_QWORD *)(v30 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v30 + 56) = 0;
                *(_QWORD *)(v30 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v30 + 72) = 0;
                *(_OWORD *)(v30 + 8) = 0;
                sub_1253A0(v30, v49);
                if ( *(_DWORD *)v30 == 2 )
                {
                  if ( !(unsigned __int8)sub_12CBA0(v30, *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL), v24) )
                  {
                    if ( !under_debugger )
                      sub_383060(52489);
                    goto LABEL_80;
                  }
                }
                else
                {
                  v32 = sub_11FD80(v31, &si128, 0);
                  v34 = *(_QWORD *)(a1 + 480);
                  if ( v32 )
                  {
                    v35 = v24;
                    if ( *(_BYTE *)(v34 + 145) )
                      v35 = *(_DWORD *)(v30 + 36) - j - v24;
                    v36 = 8 * v35;
                    v37 = *(__m128i **)(v30 + 40);
                    v38 = 0;
                    if ( (unsigned __int64)v36 <= 0x3F )
                      v38 = (unsigned __int64)si128.m128i_i64[0] >> v36;
                    v39 = sub_32ABC0(v38, (unsigned int)j, 0);
                    v37[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v39);
                  }
                  else
                  {
                    v44 = *(unsigned __int64 **)(v34 + 112);
                    if ( *(_BYTE *)(v30 + 32) == 4 && (v45 = *(_DWORD **)(v30 + 40), *v45 == 2) )
                    {
                      if ( !(unsigned __int8)sub_12CBA0((__int64)v45, v44, v24) )
                      {
                        if ( !under_debugger )
                          sub_383060(52501);
                        goto LABEL_80;
                      }
                      *(_DWORD *)(*(_QWORD *)(v30 + 40) + 68LL) = j;
                    }
                    else if ( !(unsigned __int8)sub_126F10((unsigned __int64)v31, (__int64)v44, v24, v33) )
                    {
                      if ( !under_debugger )
                        sub_383060(52490);
                      goto LABEL_80;
                    }
                  }
                  *(_DWORD *)(v30 + 36) = j;
                }
                v41 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                if ( *(_DWORD *)v49 == 1 )
                {
                  sub_A2B00((__int64)&si128, v41, *(_QWORD *)(v49 + 24), v49 + 64, v24, 1);
                  sub_125180(v30 + 64, (unsigned __int8 *)&si128);
                  sub_11CDA0((__int64)&si128);
                }
                else
                {
                  if ( !(unsigned __int8)sub_126F10(v30 + 64, v41, v24, v40) )
                  {
                    if ( !under_debugger )
                      sub_383060(52491);
                    goto LABEL_80;
                  }
                  *(_DWORD *)(v30 + 68) = j;
                }
                v23 = v30;
                v24 += j;
                sub_A3160(a1, (_QWORD *)v30, i);
                v51 -= j;
                if ( !v51 )
                {
                  v13 = *(_QWORD *)(a3 + 48);
                  goto LABEL_8;
                }
              }
            }
            goto LABEL_10;
          }
          if ( v25 == 2 )
          {
            v26 = *(_DWORD *)(v49 + 68);
            goto LABEL_26;
          }
          if ( !under_debugger )
            sub_383060(52488);
        }
        else if ( !under_debugger )
        {
          sub_383060(52492);
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
    sub_11D5A0(*(_QWORD *)(v14 + 8 * v16));
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
  v18 = *(_QWORD *)(v56 + 24);
  if ( *(_BYTE *)v18 == 10 )
  {
    v43 = *(_QWORD *)(v18 + 8);
    if ( *(_BYTE *)v43 == 5 )
      sub_18D890(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(v43 + 8) + 8LL));
  }
  if ( *(_BYTE *)(a2 + 64) == 8 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 72) + 284LL) == 2 )
      return v60 - __readfsqword(0x28u);
    v19 = *(_QWORD *)(v56 + 24);
    if ( *(_BYTE *)(v19 + 80) != 10 )
      return v60 - __readfsqword(0x28u);
  }
  else
  {
    v19 = *(_QWORD *)(v56 + 24);
    if ( *(_BYTE *)(v19 + 80) != 10 )
      return v60 - __readfsqword(0x28u);
  }
  v42 = *(_QWORD *)(v19 + 88);
  if ( *(_BYTE *)v42 != 5 )
    return v60 - __readfsqword(0x28u);
  return sub_18D890(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(v42 + 8) + 8LL));
}
