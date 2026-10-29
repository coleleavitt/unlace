void __fastcall sub_215AC80(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v4; // r14
  __int64 v9; // rdx
  _QWORD *v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r15
  __int16 v18; // ax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  size_t v41; // [rsp+0h] [rbp-180h]
  void *s1; // [rsp+8h] [rbp-178h]
  void *s1a; // [rsp+8h] [rbp-178h]
  void *s1b; // [rsp+8h] [rbp-178h]
  __int64 v45; // [rsp+10h] [rbp-170h]
  __int64 v46; // [rsp+18h] [rbp-168h] BYREF
  _QWORD *v47; // [rsp+20h] [rbp-160h] BYREF
  __int64 v48; // [rsp+28h] [rbp-158h] BYREF
  char v49; // [rsp+30h] [rbp-150h]
  void *v50; // [rsp+38h] [rbp-148h] BYREF
  size_t v51; // [rsp+40h] [rbp-140h]
  char v52; // [rsp+48h] [rbp-138h]
  __m128i v53[3]; // [rsp+58h] [rbp-128h] BYREF
  __m128i v54; // [rsp+88h] [rbp-F8h] BYREF
  void *v55; // [rsp+98h] [rbp-E8h]
  __int64 v56; // [rsp+A0h] [rbp-E0h]
  __int16 v57; // [rsp+A8h] [rbp-D8h]
  __m128i v58[2]; // [rsp+B8h] [rbp-C8h] BYREF
  __int16 v59; // [rsp+D8h] [rbp-A8h]
  __m128i v60[2]; // [rsp+E8h] [rbp-98h] BYREF
  __int16 v61; // [rsp+108h] [rbp-78h]
  __m128i v62; // [rsp+118h] [rbp-68h] BYREF

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a3 )
  {
    v4 = 0;
    if ( a2 )
    {
      sub_215DEC0(a2);
      v4 = v9 - (a3 - sub_215DEC0(a2));
    }
    if ( (*(_BYTE *)(a2 + 114) & 7) == 6 )
    {
      v10 = (_QWORD *)operator new(0x18u);
      sub_215AA20(v10, a2, a3, v4, (_QWORD **)a4);
    }
    else
    {
      v10 = (_QWORD *)operator new(0x18u);
      sub_2159900(v10, a2, a3, v4, (void **)a4);
    }
    v11 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v10;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( !*a4 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 104LL))(*(_QWORD *)(a1 + 8));
      v13 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 16) = a3;
      v14 = v12;
      *(_QWORD *)(a1 + 24) = v12;
      (*(void (__fastcall **)(__int64 *))(*(_QWORD *)v13 + 96LL))(&v48);
      if ( (v49 & 1) != 0 )
      {
        v21 = v48;
        v48 = 0;
        *a4 = v21;
      }
      else
      {
        v15 = *(__int64 **)(a1 + 8);
        v16 = *v15;
        if ( (_BYTE)v48 )
        {
LABEL_13:
          v18 = (*(__int64 (**)(void))(v16 + 104))();
          v19 = *(_QWORD *)(a1 + 8);
          *(_WORD *)(a1 + 32) = v18;
          (*(void (__fastcall **)(void **))(*(_QWORD *)v19 + 24LL))(&v50);
          if ( (v52 & 1) != 0 )
          {
            v20 = (__int64)v50;
            v50 = nullptr;
            *a4 = v20;
          }
          else if ( (*(_BYTE *)(a2 + 114) & 7) == 6 )
          {
            *(_WORD *)(a1 + 32) += (v51 + 1) & 0xFFFE;
          }
          else
          {
            v41 = v51;
            s1 = v50;
            v22 = j__strlen("#1/");
            v23 = v41;
            if ( v22 <= v41 )
            {
              if ( !v22 || (v24 = memcmp(s1, "#1/", v22), v23 = v41, !v24) )
              {
                v25 = 0;
                if ( v23 > 2 )
                {
                  v25 = v23 - 3;
                  v23 = 3;
                }
                v62.m128i_i64[0] = (__int64)s1 + v23;
                v62.m128i_i64[1] = v25;
                s1a = (void *)v25;
                v26 = sub_22470F0(&v62, 32, -1);
                v27 = v62.m128i_i64[1];
                v28 = v26 + 1;
                if ( v28 > v62.m128i_i64[1] )
                  v28 = v62.m128i_u64[1];
                v29 = v62.m128i_i64[1] - (_QWORD)s1a + v28;
                if ( v29 <= v62.m128i_i64[1] )
                  v27 = v29;
                v45 = v27;
                s1b = (void *)v62.m128i_i64[0];
                if ( (unsigned __int8)sub_2247970(v62.m128i_i64[0], v27, 10, &v62) )
                {
                  v31 = sub_215DEC0(a2);
                  v59 = 259;
                  v61 = 267;
                  v60[0].m128i_i64[0] = (__int64)&v46;
                  v58[0].m128i_i64[0] = (__int64)"' for archive member header at offset ";
                  v54.m128i_i64[0] = (__int64)"long name length characters after the #1/ are not all decimal numbers: '";
                  v57 = 1283;
                  v55 = s1b;
                  v46 = a3 - v31;
                  v56 = v45;
                  sub_A41580(v53, &v54, v58, 1283, v32, v33);
                  sub_A41580(&v62, v53, v60, v34, v35, v36);
                  sub_2158040(&v47, (__int64)v53, v37, v38, v39, v40, v62.m128i_i8[0]);
                  *a4 = (__int64)v47;
                }
                else
                {
                  *(_WORD *)(a1 + 32) += v62.m128i_i16[0];
                }
              }
            }
          }
          sub_111DFC0((__int64 *)&v50);
          goto LABEL_17;
        }
        (*(void (__fastcall **)(__m128i *, __int64 *))(v16 + 72))(&v62, v15);
        if ( (v62.m128i_i8[8] & 1) == 0 )
        {
          v17 = v62.m128i_i64[0] + v14;
          *(_QWORD *)(a1 + 16) = a3;
          *(_QWORD *)(a1 + 24) = v17;
          sub_A0AE70(v62.m128i_i64);
          v16 = **(_QWORD **)(a1 + 8);
          goto LABEL_13;
        }
        v30 = v62.m128i_i64[0];
        v62.m128i_i64[0] = 0;
        *a4 = v30;
        sub_A0AE70(v62.m128i_i64);
      }
LABEL_17:
      sub_12EBA60(&v48);
    }
  }
  else
  {
    *(_WORD *)(a1 + 32) = -1;
  }
}
