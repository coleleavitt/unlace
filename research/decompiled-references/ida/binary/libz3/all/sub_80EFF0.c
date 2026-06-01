__int64 __fastcall sub_80EFF0(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  unsigned int v5; // r15d
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r11
  __int64 v9; // r10
  unsigned int v10; // r13d
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  int v13; // r12d
  __int64 v14; // r15
  int v15; // r9d
  __int64 i; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned int v22; // r13d
  int v23; // r12d
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // rax
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int32 v32; // esi
  int v33; // ecx
  __int64 v34; // rax
  __m128i v35; // xmm0
  int v36; // r9d
  unsigned int v37; // [rsp+28h] [rbp-80h]
  int v38; // [rsp+2Ch] [rbp-7Ch]
  __m128i v39; // [rsp+30h] [rbp-78h] BYREF
  __int64 v40; // [rsp+40h] [rbp-68h]
  __m128i v41; // [rsp+50h] [rbp-58h] BYREF
  int v42; // [rsp+60h] [rbp-48h]

  v4 = *(unsigned int *)(a2 + 4);
  v5 = *(_DWORD *)(a2 + 8);
  v37 = v5;
  v6 = sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8 * v4));
  result = sub_1673B10(a1 + 128, v6);
  if ( (_BYTE)result )
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( !*(_BYTE *)(v8 + 3128) )
    {
      result = *(_QWORD *)(a1 + 600);
      v9 = *(_QWORD *)(result + 8 * v4);
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 - 4);
        if ( v10 > 1 )
        {
          v11 = v4;
          v12 = 1;
          v13 = 0;
          v14 = *(_QWORD *)(result + 8LL * v5);
          v15 = 0;
          for ( i = 0; ; i += 4 )
          {
            result = *(unsigned int *)(v14 + i);
            v17 = *(unsigned int *)(v9 + i);
            if ( (*(_DWORD *)(v14 + i) ^ 1) == (_DWORD)v17 )
              return result;
            v18 = *(_QWORD *)(v8 + 3288);
            v19 = *(_DWORD *)(v18 + 4 * v17);
            result = *(unsigned int *)(v18 + 4 * result);
            if ( v19 )
            {
              if ( (_DWORD)result )
              {
                if ( (_DWORD)result != v19 )
                  return result;
                goto LABEL_7;
              }
              v36 = v15 + 1;
              v13 = -v12;
            }
            else
            {
              if ( !(_DWORD)result )
                return result;
              v36 = v15 + 1;
              v13 = v12;
            }
            if ( v36 == 2 )
              return result;
            v15 = 1;
LABEL_7:
            result = v12 + 1;
            if ( v12 >= v10 )
            {
              if ( v15 )
              {
                if ( v13 < 0 )
                {
                  v34 = v14;
                  v14 = v9;
                  v13 = -v13;
                  v9 = v34;
                  LODWORD(v34) = v11;
                  v11 = v37;
                  v37 = v34;
                }
                v20 = (unsigned int)(v13 - 1);
                v21 = *(unsigned int *)(v14 + 4 * v20);
                v22 = *(_DWORD *)(v9 + 4 * v20);
                v23 = v13 - 1;
                v24 = sub_7E4F30(a1, **(unsigned int ***)(a2 + 16));
                v25 = *(_QWORD *)(a1 + 24);
                v38 = v24 ^ 1;
                if ( *(_DWORD *)(*(_QWORD *)(v25 + 3288) + 4 * v21) == 1 )
                  v22 ^= 1u;
                ++*(_DWORD *)(a1 + 192);
                v26 = sub_7E4EC0(a1);
                result = sub_180C100(v26, 56);
                v30 = *(_QWORD *)(a1 + 24);
                v31 = *(_QWORD *)(v25 + 3288);
                LODWORD(v40) = 3;
                *(_DWORD *)(result + 16) = v11;
                *(_DWORD *)(result + 12) = v23;
                *(_DWORD *)(result + 20) = v37;
                *(_DWORD *)(result + 24) = v22;
                *(_DWORD *)(result + 28) = v38;
                v32 = *(_DWORD *)(v30 + 3612);
                v33 = *(_DWORD *)(v31 + 4LL * v22);
                *(_QWORD *)result = a1;
                *(_DWORD *)(result + 8) = 1;
                v39.m128i_i32[0] = v32;
                v39.m128i_i64[1] = result;
                if ( v33 )
                {
                  if ( v33 == 1 )
                  {
                    v41.m128i_i32[0] = v32;
                    v41.m128i_i64[1] = result;
                    v42 = 3;
                    if ( !v32 && !*(_BYTE *)(v25 + 3832) )
                    {
                      result = *(_QWORD *)(v25 + 3296) + 24LL * (v22 >> 1);
                      if ( *(_DWORD *)result )
                      {
                        v35 = _mm_load_si128(&v41);
                        *(_DWORD *)(result + 16) = 3;
                        *(__m128i *)result = v35;
                      }
                    }
                  }
                  else if ( v33 == -1 )
                  {
                    v39.m128i_i32[0] = v32;
                    v39.m128i_i64[1] = result;
                    LODWORD(v40) = 3;
                    return sub_11B4C90(v25, v22 ^ 1, v27, -1, v28, v29, (__int128)_mm_load_si128(&v39), 3);
                  }
                }
                else
                {
                  v39.m128i_i32[0] = v32;
                  v39.m128i_i64[1] = result;
                  LODWORD(v40) = 3;
                  return sub_11C3360(v25, v22, v27, 0, v28, v29, (__int128)_mm_load_si128(&v39), v40);
                }
              }
              return result;
            }
            ++v12;
          }
        }
      }
    }
  }
  return result;
}

