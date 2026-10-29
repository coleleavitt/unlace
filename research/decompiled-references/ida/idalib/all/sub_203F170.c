void __fastcall sub_203F170(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbp
  size_t v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  char v13; // si
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbp
  __int64 *v19; // r15
  _BYTE *v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  _BYTE *v23; // rax
  __int64 v24; // rdi
  _BYTE *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 *v28; // rbp
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  _BYTE *v35; // rax
  unsigned __int64 v36; // rax
  _WORD *v37; // rdx
  __m128i *v38; // rdx
  __int64 v39; // rbx
  size_t v40; // rax
  __m128i si128; // xmm0
  size_t v42; // rax
  size_t v43; // r10
  __int64 v44; // [rsp+0h] [rbp-80h]
  _QWORD *v45; // [rsp+8h] [rbp-78h]
  size_t v46; // [rsp+8h] [rbp-78h]
  _QWORD *v47; // [rsp+8h] [rbp-78h]
  __int64 v48; // [rsp+10h] [rbp-70h]
  __int64 v49; // [rsp+18h] [rbp-68h]
  _QWORD *v50; // [rsp+18h] [rbp-68h]
  __int64 v51; // [rsp+20h] [rbp-60h]
  _QWORD v52[11]; // [rsp+28h] [rbp-58h] BYREF

  if ( *(char *)(a2 + 7) < 0 )
  {
    v4 = sub_20C9AA0(a2);
    v6 = v4 + v5;
    v7 = 0;
    if ( *(char *)(a2 + 7) < 0 )
      v7 = sub_20C9AA0(a2);
    if ( (unsigned int)((v6 - v7) >> 4) )
    {
      v8 = *a1;
      v9 = j__strlen(" [ ");
      sub_9954E0(v8, " [ ", v9);
      if ( *(char *)(a2 + 7) < 0 )
      {
        v10 = sub_20C9AA0(a2);
        v12 = v10 + v11;
        if ( *(char *)(a2 + 7) < 0 )
          v12 -= sub_20C9AA0(a2);
        if ( (unsigned int)(v12 >> 4) )
        {
          v13 = 1;
          v44 = 0;
          v48 = 16 * ((unsigned int)(v12 >> 4) - 1 + 1LL);
          while ( 1 )
          {
            v14 = 0;
            if ( *(char *)(a2 + 7) < 0 )
              v14 = sub_20C9AA0(a2);
            v15 = v44 + v14;
            v16 = *(_QWORD **)v15;
            v17 = *a1;
            v18 = 32LL * *(unsigned int *)(v15 + 12) - 32LL * *(unsigned int *)(v15 + 8);
            v19 = (__int64 *)(a2 + 32LL * *(unsigned int *)(v15 + 8) - 32LL * (*(_DWORD *)(a2 + 4) & 0x7FFFFFF));
            if ( v13 )
              break;
            v49 = *a1;
            v45 = *(_QWORD **)v15;
            v42 = j__strlen(", ");
            v17 = v49;
            v16 = v45;
            v43 = v42;
            v21 = *(_QWORD *)(v49 + 24);
            v20 = *(_BYTE **)(v49 + 32);
            if ( v43 > v21 - (unsigned __int64)v20 )
            {
              sub_227BF10(v49, ", ", v43);
              v17 = *a1;
              v16 = v45;
              v20 = *(_BYTE **)(*a1 + 32);
              v21 = *(_QWORD *)(*a1 + 24);
LABEL_14:
              if ( (unsigned __int64)v20 < v21 )
                goto LABEL_15;
              goto LABEL_44;
            }
            if ( !v43 )
              goto LABEL_14;
            v51 = v49;
            v50 = v45;
            v46 = v43;
            memcpy(v20, ", ", v43);
            v16 = v50;
            *(_QWORD *)(v51 + 32) += v46;
            v17 = *a1;
            v20 = *(_BYTE **)(*a1 + 32);
            if ( (unsigned __int64)v20 < *(_QWORD *)(*a1 + 24) )
            {
LABEL_15:
              *(_QWORD *)(v17 + 32) = v20 + 1;
              *v20 = 34;
              goto LABEL_16;
            }
LABEL_44:
            v47 = v16;
            sub_227BA10(v17, 34);
            v16 = v47;
LABEL_16:
            sub_22449A0(v16 + 2, *v16, *a1);
            v22 = *a1;
            v23 = *(_BYTE **)(*a1 + 32);
            if ( (unsigned __int64)v23 >= *(_QWORD *)(*a1 + 24) )
            {
              sub_227BA10(v22, 34);
            }
            else
            {
              *(_QWORD *)(v22 + 32) = v23 + 1;
              *v23 = 34;
            }
            v24 = *a1;
            v25 = *(_BYTE **)(*a1 + 32);
            if ( (unsigned __int64)v25 >= *(_QWORD *)(*a1 + 24) )
            {
              sub_227BA10(v24, 40);
            }
            else
            {
              *(_QWORD *)(v24 + 32) = v25 + 1;
              *v25 = 40;
            }
            v26 = a1[1];
            v27 = a1[4];
            v28 = (__int64 *)((char *)v19 + v18);
            v52[1] = a1 + 5;
            v29 = *a1;
            v52[0] = off_2BE5D20;
            v52[2] = v27;
            v52[3] = v26;
            if ( v28 == v19 )
            {
              v37 = *(_WORD **)(v29 + 32);
              v36 = *(_QWORD *)(v29 + 24);
            }
            else
            {
              v30 = *v19;
              if ( *v19 )
              {
LABEL_22:
                sub_2034FF0((__int64)(a1 + 5), *(_QWORD *)(v30 + 8), v29);
                v34 = *a1;
                v35 = *(_BYTE **)(*a1 + 32);
                if ( *(_BYTE **)(*a1 + 24) == v35 )
                {
                  sub_227BF10(v34, " ", 1);
                }
                else
                {
                  *v35 = 32;
                  ++*(_QWORD *)(v34 + 32);
                }
                sub_2038AA0(*a1, *v19, (__int64)v52, v31, v32, v33);
                goto LABEL_25;
              }
              while ( 1 )
              {
                v38 = *(__m128i **)(v29 + 32);
                if ( *(_QWORD *)(v29 + 24) - (_QWORD)v38 > 0x15u )
                {
                  si128 = _mm_load_si128((const __m128i *)&xmmword_23AAFF0);
                  v38[1].m128i_i32[0] = 1701602414;
                  v38[1].m128i_i16[2] = 15905;
                  *v38 = si128;
                  *(_QWORD *)(v29 + 32) += 22LL;
                }
                else
                {
                  sub_227BF10(v29, "<null operand bundle!>", 22);
                }
LABEL_25:
                v29 = *a1;
                v19 += 4;
                v36 = *(_QWORD *)(*a1 + 24);
                v37 = *(_WORD **)(*a1 + 32);
                if ( v28 == v19 )
                  break;
                if ( v36 - (unsigned __int64)v37 > 1 )
                {
                  *v37 = 8236;
                  *(_QWORD *)(v29 + 32) += 2LL;
                }
                else
                {
                  sub_227BF10(v29, ", ", 2);
                }
                v30 = *v19;
                v29 = *a1;
                if ( *v19 )
                  goto LABEL_22;
              }
            }
            if ( v36 <= (unsigned __int64)v37 )
            {
              sub_227BA10(v29, 41);
              v44 += 16;
              if ( v44 == v48 )
                goto LABEL_34;
            }
            else
            {
              v44 += 16;
              *(_QWORD *)(v29 + 32) = (char *)v37 + 1;
              *(_BYTE *)v37 = 41;
              if ( v44 == v48 )
                goto LABEL_34;
            }
            v13 = 0;
          }
          v20 = *(_BYTE **)(v17 + 32);
          v21 = *(_QWORD *)(v17 + 24);
          goto LABEL_14;
        }
      }
LABEL_34:
      v39 = *a1;
      v40 = j__strlen(" ]");
      sub_9954E0(v39, " ]", v40);
    }
  }
}
