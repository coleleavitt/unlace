__int64 __fastcall dirtree_traverse(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v4)(__int64, const __m128i *, __int64); // rax
  unsigned int v5; // esi
  __int64 v6; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  __int64 (__fastcall *v13)(__int64, const __m128i *, __int64); // rax
  unsigned int v14; // esi
  char v15; // r13
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  char v19; // r10
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 (__fastcall *v23)(__int64, const __m128i *, __int64); // rax
  unsigned int v24; // esi
  char v25; // r14
  char v26; // r9
  __int64 v27; // rax
  __int64 v28; // r15
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-D0h]
  unsigned int *v35; // [rsp+18h] [rbp-C0h]
  __int64 v36; // [rsp+18h] [rbp-C0h]
  unsigned int *v37; // [rsp+18h] [rbp-C0h]
  __int32 *v38; // [rsp+18h] [rbp-C0h]
  char v39; // [rsp+18h] [rbp-C0h]
  __int32 *v40; // [rsp+20h] [rbp-B8h]
  char v41; // [rsp+20h] [rbp-B8h]
  char v42; // [rsp+20h] [rbp-B8h]
  __int64 v43; // [rsp+20h] [rbp-B8h]
  char v44; // [rsp+28h] [rbp-B0h]
  __int64 v45; // [rsp+28h] [rbp-B0h]
  __int64 v46; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v47; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v48; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v49; // [rsp+30h] [rbp-A8h]
  __int64 v50; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v51; // [rsp+38h] [rbp-A0h]
  bool v52; // [rsp+47h] [rbp-91h]
  unsigned __int64 v53; // [rsp+48h] [rbp-90h]
  __m128i v54; // [rsp+50h] [rbp-88h] BYREF
  __m128i v55; // [rsp+60h] [rbp-78h] BYREF
  __m128i v56; // [rsp+70h] [rbp-68h] BYREF
  __m128i v57; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+98h] [rbp-40h]

  v2 = *(_QWORD *)a2;
  v58 = __readfsqword(0x28u);
  v54.m128i_i32[0] = -1;
  v54.m128i_i64[1] = 0;
  v4 = *(__int64 (__fastcall **)(__int64, const __m128i *, __int64))(v2 + 16);
  if ( v4 == sub_753160 )
  {
    v5 = dword_2CAA5E2;
    if ( dword_2CAA5E2 == *(_DWORD *)(a2 + 24) && byte_2CAA5E6 == *(_BYTE *)(a2 + 28) )
    {
      v6 = 1;
      *(__m128i *)(a2 + 8) = _mm_load_si128(&v54);
      return v6;
    }
  }
  else
  {
    v6 = v4(a2, &v54, (__int64)&dword_2CAA5E2);
    if ( v6 )
      return v6;
    v5 = dword_2CAA5E2;
  }
  v6 = 0;
  if ( v5 != -1 )
  {
    if ( byte_2CAA5E6 )
    {
      if ( (unsigned __int64)v5 < *(_QWORD *)(a1 + 56) )
      {
        v8 = *(_QWORD *)(a1 + 48) + 176LL * v5;
        v34 = v8;
        sub_757350(a1, v5, v8, nullptr);
        v9 = *(_QWORD *)(v8 + 32);
        v55.m128i_i32[0] = dword_2CAA5E2;
        if ( v9 )
        {
          v10 = 0;
          v11 = v9;
          while ( 1 )
          {
            while ( 1 )
            {
              v55.m128i_i64[1] = v10;
              v12 = *(_QWORD *)(v34 + 24) + 5 * v10;
              v13 = *(__int64 (__fastcall **)(__int64, const __m128i *, __int64))(*(_QWORD *)a2 + 16LL);
              if ( v13 == sub_753160 )
              {
                v14 = *(_DWORD *)v12;
                if ( *(_DWORD *)v12 == *(_DWORD *)(a2 + 24) && *(_BYTE *)(v12 + 4) == *(_BYTE *)(a2 + 28) )
                {
                  *(__m128i *)(a2 + 8) = _mm_load_si128(&v55);
                  return 1;
                }
              }
              else
              {
                v35 = (unsigned int *)(*(_QWORD *)(v34 + 24) + 5 * v10);
                v16 = v13(a2, &v55, v12);
                v12 = (__int64)v35;
                v6 = v16;
                if ( v16 )
                  return v6;
                v14 = *v35;
              }
              v15 = ++v10 < v11;
              if ( v14 != -1 )
              {
                if ( *(_BYTE *)(v12 + 4) )
                  break;
              }
              v6 = 0;
              if ( v10 >= v11 )
                return v6;
            }
            v6 = 0;
            if ( (unsigned __int64)v14 < *(_QWORD *)(a1 + 56) )
            {
              v40 = (__int32 *)v12;
              v44 = *(_BYTE *)(v12 + 4);
              v36 = *(_QWORD *)(a1 + 48) + 176LL * v14;
              sub_757350(a1, v14, v36, nullptr);
              v17 = v36;
              v18 = *(_QWORD *)(v36 + 32);
              v56.m128i_i32[0] = *v40;
              if ( v18 )
                break;
            }
LABEL_18:
            if ( !v15 )
              return v6;
          }
          v51 = v11;
          v19 = v44;
          v53 = v10;
          v52 = v10 < v11;
          v20 = 0;
          while ( 1 )
          {
            v21 = *(_QWORD *)a2;
            v56.m128i_i64[1] = v20;
            v22 = *(_QWORD *)(v17 + 24) + 5 * v20;
            v23 = *(__int64 (__fastcall **)(__int64, const __m128i *, __int64))(v21 + 16);
            if ( v23 == sub_753160 )
            {
              v24 = *(_DWORD *)v22;
              if ( *(_DWORD *)v22 == *(_DWORD *)(a2 + 24) && *(_BYTE *)(v22 + 4) == *(_BYTE *)(a2 + 28) )
              {
                *(__m128i *)(a2 + 8) = _mm_load_si128(&v56);
                return 1;
              }
            }
            else
            {
              v48 = v18;
              v45 = v17;
              v41 = v19;
              v37 = (unsigned int *)(*(_QWORD *)(v17 + 24) + 5 * v20);
              v27 = v23(a2, &v56, v22);
              v22 = (__int64)v37;
              v19 = v41;
              v17 = v45;
              v18 = v48;
              v6 = v27;
              if ( v27 )
                return v6;
              v24 = *v37;
            }
            if ( v24 == -1 || (v25 = *(_BYTE *)(v22 + 4)) == 0 )
            {
              v25 = v19;
              v6 = 0;
            }
            else
            {
              v6 = 0;
              if ( (unsigned __int64)v24 < *(_QWORD *)(a1 + 56) )
              {
                v49 = v18;
                v46 = v17;
                v28 = *(_QWORD *)(a1 + 48) + 176LL * v24;
                v42 = v19;
                v38 = (__int32 *)v22;
                sub_757350(a1, v24, v28, nullptr);
                v29 = *(_QWORD *)(v28 + 32);
                v19 = v42;
                v17 = v46;
                v18 = v49;
                v57.m128i_i32[0] = *v38;
                if ( v29 )
                {
                  v39 = v42;
                  v30 = v29;
                  v43 = v46;
                  v47 = v49;
                  v50 = v20;
                  v31 = 0;
                  do
                  {
                    v32 = *(_QWORD *)(v28 + 24) + 5 * v31;
                    v57.m128i_i64[1] = v31++;
                    v33 = sub_7574E0(a1, &v57, v32, a2);
                  }
                  while ( v31 < v30 && !v33 );
                  v17 = v43;
                  v18 = v47;
                  v25 = v33 == 0;
                  v6 = v33;
                  v19 = v39;
                  v20 = v50;
                }
              }
            }
            if ( ++v20 >= v18 || !v25 )
            {
              v26 = v25;
              v10 = v53;
              v11 = v51;
              v15 = v26 & v52;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
  return v6;
}

