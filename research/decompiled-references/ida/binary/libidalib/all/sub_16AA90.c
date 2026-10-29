unsigned __int64 __fastcall sub_16AA90(
        __int64 *a1,
        __int64 a2,
        const __m128i *a3,
        char a4,
        __int64 a5,
        unsigned __int8 a6)
{
  __int64 v7; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  __int64 v14; // rdi
  __m128i v15; // xmm0
  int v16; // eax
  __m128i v17; // xmm0
  __int64 (__fastcall *v18)(__int64, __int64, __int64); // rax
  char v19; // al
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r9d
  unsigned __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rdi
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rbp
  const __m128i *v33; // rdi
  _QWORD *v34; // r12
  char *v35; // rdi
  char *v36; // rdx
  _QWORD *v37; // rdi
  __int64 v38; // r9
  const __m128i *v39; // rdi
  const char *v40; // rsi
  const char *v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // [rsp+10h] [rbp-178h]
  __int64 v47; // [rsp+38h] [rbp-150h] BYREF
  _QWORD *v48; // [rsp+40h] [rbp-148h] BYREF
  __int64 v49; // [rsp+48h] [rbp-140h]
  _OWORD v50[2]; // [rsp+60h] [rbp-128h] BYREF
  int v51; // [rsp+80h] [rbp-108h]
  __int64 *v52; // [rsp+88h] [rbp-100h]
  __m128i v53[2]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-D8h]
  __int64 v55; // [rsp+B8h] [rbp-D0h]
  __int128 v56; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-B8h]
  __int64 v58; // [rsp+D8h] [rbp-B0h]
  __int64 v59; // [rsp+E0h] [rbp-A8h]
  __int128 v60; // [rsp+E8h] [rbp-A0h]
  __int128 v61; // [rsp+F8h] [rbp-90h]
  __int64 v62; // [rsp+108h] [rbp-80h]
  __int128 v63; // [rsp+110h] [rbp-78h]
  __int64 v64; // [rsp+120h] [rbp-68h]
  __int64 v65; // [rsp+128h] [rbp-60h]
  __int128 v66; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int64 v67; // [rsp+148h] [rbp-40h]

  v7 = a2 + 160;
  v67 = __readfsqword(0x28u);
  if ( !a2 )
    v7 = 0;
  sub_F2EC0(&v47, v7);
  if ( a3[2].m128i_i64[1] || (sub_8F740((__int64)"Coherency check failed: loc.is_valid()\n"), a3[2].m128i_i64[1]) )
  {
    v11 = (_QWORD *)qword_2544B0;
    v12 = (_QWORD *)(qword_2544B0 + 8 * xmmword_2544B8);
    if ( (_QWORD *)qword_2544B0 == v12 )
      goto LABEL_10;
    while ( a2 != *v11 )
    {
      if ( v12 == ++v11 )
        goto LABEL_10;
    }
    if ( v11 == v12 )
    {
LABEL_10:
      v14 = *(_QWORD *)(a2 + 480);
      if ( !v14 )
        goto LABEL_88;
      v15 = _mm_loadu_si128((const __m128i *)(a2 + 440));
      v16 = *(_DWORD *)(a2 + 472);
      v52 = nullptr;
      v50[0] = v15;
      v17 = _mm_loadu_si128((const __m128i *)(a2 + 456));
      v51 = v16;
      v50[1] = v17;
      v52 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      if ( a4 )
      {
        sub_15B980((__int64)&v48, a1, a2);
        v14 = a2 + 440;
        *(_QWORD *)&v66 = 0;
        *((_QWORD *)&v66 + 1) = a2;
        sub_161FE0(a2 + 440, a3, &v66, 1, 0, v38);
LABEL_16:
        if ( (*(_BYTE *)(a2 + 922) & 1) == 0 )
        {
          if ( !v52 || (v14 = a2, !sub_161B30(a2, v52, a3[2].m128i_i64[1])) )
          {
            if ( (int)v49 > 0 )
            {
              v23 = 0;
              v43 = 8LL * (unsigned int)(v49 - 1) + 8;
              do
              {
                v24 = v48[v23 / 8];
                if ( a2 != v24 )
                {
                  if ( !*(_QWORD *)(v24 + 480) )
                  {
                    sub_158B30(v14);
LABEL_88:
                    sub_158B30(v14);
                  }
                  v25 = a3[2].m128i_i64[1];
                  v26 = *(_QWORD *)(v24 + 472);
                  v53[0] = _mm_loadu_si128((const __m128i *)(v24 + 440));
                  v27 = _mm_loadu_si128((const __m128i *)(v24 + 456));
                  v54 = v26;
                  v55 = v25;
                  v53[1] = v27;
                  if ( v25 )
                    v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
                  sub_169320((__int64)&v56, v24, *(_DWORD *)(v24 + 916), *(_DWORD *)(v24 + 920) | 0x10000, -32768, v22);
                  *(_QWORD *)&v66 = 0;
                  *((_QWORD *)&v66 + 1) = a2;
                  if ( a4 )
                    sub_161FE0(v24 + 440, v53, &v66, 1, 0, v29);
                  else
                    sub_162470(v24 + 440, (__int64)v53, &v66, a6, v28, v29);
                  sub_169C90((__int64)&v56);
                  v14 = v55;
                  if ( v55 )
                    qfree();
                }
                v23 += 8LL;
              }
              while ( v43 != v23 );
            }
          }
        }
        v64 = 0;
        v65 = a2;
        *(_QWORD *)&v66 = 0;
        *((_QWORD *)&v66 + 1) = a2;
        v30 = (__int64 *)sub_15B8E0(a1, &v66);
        if ( !v30 )
          goto LABEL_55;
        v31 = *v30;
        v32 = *v30 + 16 * v30[1];
        if ( *v30 == v32 )
          goto LABEL_55;
        do
        {
          while ( 1 )
          {
            if ( !*(_BYTE *)v31 )
            {
              v33 = (const __m128i *)sub_1545C0(*(_QWORD *)(v31 + 8));
              if ( v33 )
                break;
            }
            v31 += 16;
            if ( v32 == v31 )
              goto LABEL_38;
          }
          sub_165A50(v33);
          v31 += 16;
        }
        while ( v32 != v31 );
LABEL_38:
        if ( !(_BYTE)v64 )
        {
LABEL_55:
          v39 = (const __m128i *)sub_1545C0(v65);
          if ( v39 )
            sub_165A50(v39);
        }
        v34 = v48;
        if ( 8 * v49 )
        {
          do
          {
            v35 = (char *)qword_2544B0;
            v36 = (char *)(qword_2544B0 + 8 * xmmword_2544B8);
            if ( (char *)qword_2544B0 == v36 )
              goto LABEL_51;
            while ( *v34 != *(_QWORD *)v35 )
            {
              v35 += 8;
              if ( v36 == v35 )
                goto LABEL_51;
            }
            if ( v35 == v36 )
            {
LABEL_51:
              sub_8F740((__int64)"Coherency check failed: currently_being_synced.del(cur)\n");
            }
            else
            {
              memmove(v35, v35 + 8, v36 - v35 - 8);
              *(_QWORD *)&xmmword_2544B8 = xmmword_2544B8 - 1;
            }
            v37 = v48;
            ++v34;
          }
          while ( v34 != &v48[v49] );
        }
        else
        {
          v37 = v48;
        }
        if ( v37 )
        {
          v49 = 0;
          qfree();
        }
        if ( !v52 )
          goto LABEL_9;
LABEL_50:
        qfree();
        goto LABEL_9;
      }
      v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 312LL);
      if ( v18 == sub_1587B0 )
        v19 = !sub_120550((__int64)a3, (__int64)v50, a2);
      else
        v19 = v18(a2, (__int64)v50, (__int64)a3);
      if ( v19 )
      {
LABEL_15:
        sub_15B980((__int64)&v48, a1, a2);
        v14 = a2 + 440;
        *((_QWORD *)&v66 + 1) = a2;
        *(_QWORD *)&v66 = 0;
        sub_162470(a2 + 440, (__int64)a3, &v66, a6, v20, v21);
        goto LABEL_16;
      }
      v57 = 0;
      v56 = 0;
      v58 = -1;
      v59 = 0;
      v62 = 0;
      v60 = 0;
      v61 = 0;
      v63 = 0;
      navstack_t_stack_index();
      if ( !(unsigned __int8)navstack_t_get_stack_entry() )
        goto LABEL_73;
      if ( *(_QWORD *)(a2 + 552) )
      {
        v40 = *(const char **)(a2 + 544);
        v41 = s1;
        if ( !(_QWORD)v61 )
          goto LABEL_60;
      }
      else
      {
        v40 = s1;
        if ( !(_QWORD)v61 )
        {
LABEL_61:
          v42 = v60;
          *(_DWORD *)(a2 + 880) = 0;
          if ( v42 )
          {
            qfree();
            *(_QWORD *)&v60 = 0;
          }
          if ( *((_QWORD *)&v60 + 1) )
          {
            *(_QWORD *)&v61 = 0;
            qfree();
            *((_QWORD *)&v60 + 1) = 0;
            *((_QWORD *)&v61 + 1) = 0;
          }
          if ( v62 )
          {
            *(_QWORD *)&v63 = 0;
            qfree();
          }
          if ( *((_QWORD *)&v60 + 1) )
          {
            *(_QWORD *)&v61 = 0;
            qfree();
          }
          if ( (_QWORD)v60 )
            qfree();
          if ( !v52 )
            goto LABEL_9;
          goto LABEL_50;
        }
      }
      v41 = *((const char **)&v60 + 1);
LABEL_60:
      if ( !strcmp(v41, v40) )
        goto LABEL_61;
LABEL_73:
      if ( (_QWORD)v60 )
      {
        qfree();
        *(_QWORD *)&v60 = 0;
      }
      if ( *((_QWORD *)&v60 + 1) )
      {
        *(_QWORD *)&v61 = 0;
        qfree();
        *((_QWORD *)&v60 + 1) = 0;
        *((_QWORD *)&v61 + 1) = 0;
      }
      if ( v62 )
      {
        *(_QWORD *)&v63 = 0;
        qfree();
      }
      if ( *((_QWORD *)&v60 + 1) )
      {
        *(_QWORD *)&v61 = 0;
        qfree();
      }
      if ( (_QWORD)v60 )
        qfree();
      goto LABEL_15;
    }
  }
LABEL_9:
  sub_F2CE0(&v47);
  return v67 - __readfsqword(0x28u);
}

