__int64 __fastcall sub_E67790(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  unsigned int v4; // eax
  _DWORD *v5; // rdi
  unsigned int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int16 v11; // dx
  unsigned int *v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  __int64 *v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // r12
  _QWORD *v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rdi
  _QWORD *v21; // r12
  _QWORD *v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  void (__fastcall *v28)(__int64, _QWORD, __m128i *); // r15
  __int64 v29; // rax
  __m128i v30; // rdi
  unsigned int *v31; // rcx
  __int64 v32; // [rsp+8h] [rbp-C0h]
  __int64 v33; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v35; // [rsp+10h] [rbp-B8h]
  __int64 v36; // [rsp+10h] [rbp-B8h]
  __int64 v37; // [rsp+18h] [rbp-B0h]
  __int64 *v38; // [rsp+20h] [rbp-A8h]
  unsigned int *v39; // [rsp+28h] [rbp-A0h] BYREF
  int v40; // [rsp+30h] [rbp-98h]
  unsigned int v41; // [rsp+34h] [rbp-94h]
  __int64 v42; // [rsp+38h] [rbp-90h]
  __int64 v43; // [rsp+40h] [rbp-88h]
  __m128i *v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+50h] [rbp-78h] BYREF
  __int64 v46; // [rsp+58h] [rbp-70h]
  __int64 v47; // [rsp+60h] [rbp-68h] BYREF
  __int64 v48; // [rsp+68h] [rbp-60h]
  __m128i v49; // [rsp+70h] [rbp-58h] BYREF
  __m128i v50; // [rsp+80h] [rbp-48h]

  result = sub_F86870(*(_QWORD *)(a1 + 16));
  if ( (_BYTE)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v43 = *(_QWORD *)(a1 + 8);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v5 = *(_DWORD **)(a1 + 16);
    v41 = v4;
    v6 = v5[2];
    (*(void (**)(void))(*(_QWORD *)v5 + 16LL))();
    v40 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
    if ( v6 != v40 )
    {
      v7 = 0;
      v8 = 0;
      v37 = v43;
      v44 = &v49;
      while ( 1 )
      {
        v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                         *(_QWORD *)(a1 + 16),
                         v6);
        v10 = v9[1];
        v11 = *(_WORD *)(v10 + 4);
        if ( v11 )
        {
          if ( v11 == 2 )
          {
LABEL_6:
            v12 = (unsigned int *)v9[3];
            v13 = v9[2];
            ++*(_DWORD *)(v10 + 8);
            v39 = v12;
            v42 = v13;
            if ( v7 )
            {
              v14 = (*(_DWORD *)(v7 + 8))-- == 1;
              if ( v14 )
                sub_15D7BC0(v43, v7);
            }
            v15 = *(__int64 **)(a1 + 40);
            v32 = *v15;
            v38 = v15 + 224;
            v16 = v15[229];
            if ( v16 )
            {
              if ( *(_DWORD *)(v16 - 4) || v15[228] != *(_QWORD *)v15[227] )
              {
                *(_DWORD *)(v16 - 4) = 0;
LABEL_13:
                v17 = (_QWORD *)v15[231];
                if ( v17 )
                {
                  v18 = &v17[*((unsigned int *)v17 - 1)];
                  if ( v17 >= v18 )
                    goto LABEL_21;
                  do
                  {
                    while ( 1 )
                    {
                      v19 = *v17;
                      if ( *v17 )
                      {
                        v20 = v15[230];
                        v14 = (*(_DWORD *)(v19 + 8))-- == 1;
                        if ( v14 )
                          break;
                      }
                      if ( ++v17 >= v18 )
                        goto LABEL_20;
                    }
                    v34 = (unsigned __int64)v18;
                    sub_15D7BC0(v20, v19);
                    v18 = (_QWORD *)v34;
                    ++v17;
                  }
                  while ( (unsigned __int64)v17 < v34 );
LABEL_20:
                  v17 = (_QWORD *)v15[231];
                  if ( v17 )
LABEL_21:
                    *((_DWORD *)v17 - 1) = 0;
                }
                v21 = (_QWORD *)v15[235];
                if ( v21 )
                {
                  v22 = &v21[*((unsigned int *)v21 - 1)];
                  if ( v21 >= v22 )
                    goto LABEL_30;
                  do
                  {
                    while ( 1 )
                    {
                      v23 = *v21;
                      if ( *v21 )
                      {
                        v24 = v15[234];
                        v14 = (*(_DWORD *)(v23 + 8))-- == 1;
                        if ( v14 )
                          break;
                      }
                      if ( ++v21 >= v22 )
                        goto LABEL_29;
                    }
                    v35 = (unsigned __int64)v22;
                    sub_15D7BC0(v24, v23);
                    v22 = (_QWORD *)v35;
                    ++v21;
                  }
                  while ( (unsigned __int64)v21 < v35 );
LABEL_29:
                  v21 = (_QWORD *)v15[235];
                  if ( v21 )
LABEL_30:
                    *((_DWORD *)v21 - 1) = 0;
                }
                v25 = v15[241];
                if ( v25 )
                  *(_DWORD *)(v25 - 4) = 0;
                sub_15843E0(v38);
              }
            }
            else if ( *(_QWORD *)v15[227] != v15[228] )
            {
              goto LABEL_13;
            }
            v14 = *((_BYTE *)v15 + 1808) == 0;
            v45 = v8;
            v47 = 0;
            v48 = v32;
            v46 = v37;
            if ( v14 )
              sub_E81DF0(v38, v10, &v47, &v45);
            else
              sub_E816B0(v38, v10, &v47, &v45);
            v7 = v47;
            v8 = v45;
            v37 = v46;
            v33 = v48;
            if ( *(_DWORD *)(*v15 + 712) )
            {
              v26 = sub_15DE370(*v15);
              if ( v26 )
                ++*(_DWORD *)(v26 + 8);
              v36 = v26;
              sub_E65BA0(v8, v37);
              v8 = v36;
            }
            v14 = (*(_DWORD *)(v10 + 8))-- == 1;
            if ( v14 )
              sub_15D7BC0(v33, v10);
            if ( v10 == v7 )
              goto LABEL_59;
            v27 = *(_QWORD *)(a1 + 16);
            v28 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v27 + 32LL);
            if ( v42 && v8 )
            {
              v29 = sub_15DE0E0(*(_QWORD *)(a1 + 8), v42, v8);
              v49 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 8)), (__m128i)(unsigned __int64)v7);
              v50 = (__m128i)_mm_loadh_ps((const double *)&v39);
              if ( v7 )
                ++*(_DWORD *)(v7 + 8);
              if ( v39 )
LABEL_48:
                *v39 = (*v39 + 1) & 0x3FFFFFFF | *v39 & 0xC0000000;
              if ( v29 )
                ++*(_DWORD *)(v29 + 8);
            }
            else
            {
              v31 = v39;
              v49 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 8)), (__m128i)(unsigned __int64)v7);
              v50 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v39);
              if ( v7 )
              {
                ++*(_DWORD *)(v7 + 8);
                v29 = 0;
                if ( v31 )
                  goto LABEL_48;
              }
              else if ( v39 )
              {
                *v39 = (*v39 + 1) & 0x3FFFFFFF | *v39 & 0xC0000000;
              }
            }
            v28(v27, v6, v44);
            v30 = v49;
            if ( v49.m128i_i64[1] )
            {
              v14 = (*(_DWORD *)(v49.m128i_i64[1] + 8))-- == 1;
              if ( v14 )
              {
                sub_15D7BC0(v30.m128i_i64[0], v30.m128i_i64[1]);
                v30.m128i_i64[0] = v49.m128i_i64[0];
              }
            }
            if ( v50.m128i_i64[1] )
            {
              sub_234C20((__int64 *)(v30.m128i_i64[0] + 648), (unsigned int *)v50.m128i_i64[1]);
              v30.m128i_i64[0] = v49.m128i_i64[0];
            }
            v30.m128i_i64[1] = v50.m128i_i64[0];
            if ( v50.m128i_i64[0] )
            {
              v14 = (*(_DWORD *)(v50.m128i_i64[0] + 8))-- == 1;
              if ( v14 )
                sub_15D7BC0(v30.m128i_i64[0], v30.m128i_i64[1]);
            }
          }
        }
        else if ( (*(_BYTE *)(v10 + 30) & 2) != 0 )
        {
          goto LABEL_6;
        }
LABEL_59:
        if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16))
          || v6 >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16)) )
        {
          v6 = v41;
        }
        else
        {
          ++v6;
        }
        if ( v6 == v40 )
          goto LABEL_64;
      }
    }
    v7 = 0;
    v8 = 0;
    v37 = v43;
LABEL_64:
    sub_E65BC0(v7, v43);
    return sub_E65BA0(v8, v37);
  }
  return result;
}

