_QWORD *__fastcall sub_4F7B40(_QWORD *a1, const void *a2, const void *a3, __m128 a4)
{
  _QWORD *v6; // r15
  _DWORD *v7; // r13
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // r14
  __int64 v11; // r11
  _QWORD *v12; // r10
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // r12
  _QWORD *v16; // r14
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rbp
  _QWORD *v20; // r12
  unsigned int v21; // r13d
  __int64 v22; // rbx
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // r15
  char v26; // al
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // r12d
  int v30; // ebp
  __int64 v31; // r13
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // edx
  _QWORD *v37; // rbp
  unsigned int v38; // eax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 i; // rcx
  __int64 j; // rdx
  void (__fastcall *v45)(_QWORD *, __int64); // rbp
  __int64 v46; // rbx
  void (__fastcall *v47)(_QWORD *, __int64); // rbp
  __int64 v48; // rbx
  _QWORD *v49; // [rsp+0h] [rbp-98h]
  _DWORD *v50; // [rsp+8h] [rbp-90h]
  char v51; // [rsp+10h] [rbp-88h]
  __int64 v52; // [rsp+10h] [rbp-88h]
  __int64 v53; // [rsp+18h] [rbp-80h]
  _QWORD *v54; // [rsp+20h] [rbp-78h]
  _QWORD *v55; // [rsp+28h] [rbp-70h]
  __int64 v56; // [rsp+30h] [rbp-68h]
  _QWORD *v57; // [rsp+38h] [rbp-60h]
  __int64 v58; // [rsp+38h] [rbp-60h]
  __int64 v59; // [rsp+40h] [rbp-58h]
  __int64 v60; // [rsp+48h] [rbp-50h]
  _QWORD *v61; // [rsp+50h] [rbp-48h]
  __int64 v62; // [rsp+58h] [rbp-40h]

  v6 = sub_4EC5D0(a2);
  v7 = sub_4EC5D0(a3);
  v8 = v6[1];
  v9 = (_QWORD *)sub_186B270(0x80u);
  v10 = v9;
  sub_4EE440((__int64)v9, v8, a1 + 1);
  v11 = a1[5];
  v49 = (_QWORD *)a1[4];
  if ( *((_DWORD *)v6 + 12) )
  {
    v12 = a1 + 2;
    v9 += 7;
    v54 = a1 + 3;
    v13 = 0;
    v61 = v10 + 7;
    v14 = v10;
    v55 = v12;
    v56 = v11;
    v50 = v7;
    if ( !v7[12] )
      goto LABEL_38;
    while ( 1 )
    {
      v62 = v13;
      v15 = 0;
      v16 = v14;
      v53 = 8 * v13;
      do
      {
        v9 = v49;
        v8 = *(_QWORD *)(v6[5] + v53);
        v17 = sub_555230(v49, v8, *(_QWORD *)(*((_QWORD *)v50 + 5) + 8 * v15), v56, v55, v54);
        if ( !v17 )
          goto LABEL_35;
        v18 = *((_DWORD *)v16 + 12);
        if ( !v18 )
          goto LABEL_32;
        v59 = v15;
        v19 = 0;
        v20 = v16;
        v60 = v18;
        v21 = 0;
        v22 = v17;
        v23 = *((_DWORD *)v16 + 12);
        v51 = 0;
        v57 = v6;
        do
        {
          while ( 1 )
          {
            v9 = v49;
            v25 = 8 * v19;
            v8 = *(_QWORD *)(v20[5] + 8 * v19);
            v26 = sub_558790(v49, v8, v22);
            if ( v26 )
            {
              v51 = v26;
              break;
            }
            v9 = v49;
            v8 = v22;
            if ( !(unsigned __int8)sub_558790(v49, v22, *(_QWORD *)(v20[5] + 8 * v19)) )
              break;
            v9 = v49;
            ++v19;
            v8 = *(_QWORD *)(v20[5] + v25);
            sub_553300(v49, v8);
            if ( v19 == v60 )
              goto LABEL_14;
          }
          if ( v21 != (_DWORD)v19 )
          {
            v24 = v20[5];
            v8 = *(_QWORD *)(v24 + 8 * v19);
            *(_QWORD *)(v24 + 8LL * v21) = v8;
          }
          ++v19;
          ++v21;
        }
        while ( v19 != v60 );
LABEL_14:
        v27 = v23;
        v6 = v57;
        v16 = v20;
        v17 = v22;
        v15 = v59;
        if ( v27 != v21 )
        {
          v28 = *((_DWORD *)v16 + 12);
          if ( v28 >= v21 )
          {
            if ( v21 < v28 )
              *((_DWORD *)v16 + 12) = v21;
          }
          else
          {
            v29 = v21;
            v58 = v22;
            v30 = *((_DWORD *)v16 + 12);
            LODWORD(v31) = *((_DWORD *)v16 + 13);
            do
            {
              if ( v28 < (unsigned int)v31 )
              {
                v32 = (_QWORD *)v16[5];
              }
              else
              {
                v31 = (unsigned int)(2 * v31);
                v34 = sub_186B270(8 * v31);
                v9 = (_QWORD *)v16[5];
                v32 = (_QWORD *)v34;
                v28 = *((_DWORD *)v16 + 12);
                if ( v28 )
                {
                  if ( v28 - 1 <= 2 || v32 == v9 + 1 )
                  {
                    for ( i = 0; i != v28; ++i )
                      v32[i] = v9[i];
                  }
                  else
                  {
                    v35 = 0;
                    do
                    {
                      a4 = (__m128)_mm_loadu_si128((const __m128i *)&v9[v35]);
                      *(__m128 *)&v32[v35] = a4;
                      v35 += 2;
                    }
                    while ( v35 != 2LL * (v28 >> 1) );
                    if ( (v28 & 1) != 0 )
                      v32[v28 & 0xFFFFFFFE] = v9[v28 & 0xFFFFFFFE];
                  }
                }
                v8 = (__int64)v61;
                if ( v9 != v61 && v9 )
                {
                  sub_186B220(v9);
                  v28 = *((_DWORD *)v16 + 12);
                }
                v16[5] = v32;
                *((_DWORD *)v16 + 13) = v31;
              }
              v33 = v28;
              ++v30;
              ++v28;
              v32[v33] = 0;
              *((_DWORD *)v16 + 12) = v28;
            }
            while ( v30 != v29 );
            v17 = v58;
            v15 = v59;
          }
        }
        if ( v51 )
        {
          v9 = v49;
          v8 = v17;
          sub_553300(v49, v17);
          goto LABEL_35;
        }
        v18 = *((_DWORD *)v16 + 12);
LABEL_32:
        v36 = *((_DWORD *)v16 + 13);
        if ( v18 >= v36 )
        {
          v52 = v17;
          v40 = 2 * v36;
          v41 = sub_186B270(8 * v40);
          v9 = (_QWORD *)v16[5];
          v17 = v52;
          v37 = (_QWORD *)v41;
          v18 = *((_DWORD *)v16 + 12);
          if ( v18 )
          {
            if ( v18 - 1 <= 2 || v37 == v9 + 1 )
            {
              for ( j = 0; j != v18; ++j )
                v37[j] = v9[j];
            }
            else
            {
              v42 = 0;
              do
              {
                a4 = (__m128)_mm_loadu_si128((const __m128i *)&v9[v42]);
                *(__m128 *)&v37[v42] = a4;
                v42 += 2;
              }
              while ( v42 != 2LL * (v18 >> 1) );
              if ( (v18 & 1) != 0 )
                v37[v18 & 0xFFFFFFFE] = v9[v18 & 0xFFFFFFFE];
            }
          }
          v8 = (__int64)v61;
          if ( v9 != v61 && v9 )
          {
            sub_186B220(v9);
            v18 = *((_DWORD *)v16 + 12);
            v17 = v52;
          }
          v16[5] = v37;
          *((_DWORD *)v16 + 13) = v40;
        }
        else
        {
          v37 = (_QWORD *)v16[5];
        }
        v37[v18] = v17;
        *((_DWORD *)v16 + 12) = v18 + 1;
LABEL_35:
        ++v15;
        v38 = v50[12];
      }
      while ( (unsigned int)v15 < v38 );
      v14 = v16;
      if ( (unsigned int)(v62 + 1) < *((_DWORD *)v6 + 12) )
      {
        v13 = v62 + 1;
        if ( v38 )
          continue;
      }
LABEL_38:
      v10 = v14;
      break;
    }
  }
  if ( (unsigned int)sub_180B130(v9) > 2 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)a4.m128_u64) )
    {
      sub_186A4C0(*(double *)a4.m128_u64);
      v45 = *(void (__fastcall **)(_QWORD *, __int64))(*v10 + 120LL);
      v46 = sub_180B150(v9, v8);
      std::__ostream_insert<char,std::char_traits<char>>();
      v45(v10, v46);
      sub_186A500(v10, v46);
    }
    else
    {
      v47 = *(void (__fastcall **)(_QWORD *, __int64))(*v10 + 120LL);
      v48 = sub_180B150(v9, v8);
      std::__ostream_insert<char,std::char_traits<char>>();
      v47(v10, v48);
    }
  }
  return v10;
}

