__int64 __fastcall sub_7779F0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 (__fastcall *v8)(__int64, const __m128i *, __int64); // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  __int64 v12; // r9
  unsigned __int64 v13; // r11
  char v14; // r8
  unsigned __int64 i; // r14
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 (__fastcall *v18)(__int64, const __m128i *, __int64); // rax
  unsigned __int64 v19; // rsi
  char v20; // r10
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-98h]
  char v27; // [rsp+0h] [rbp-98h]
  char v28; // [rsp+0h] [rbp-98h]
  char v29; // [rsp+0h] [rbp-98h]
  char v30; // [rsp+8h] [rbp-90h]
  __int64 v31; // [rsp+8h] [rbp-90h]
  char v32; // [rsp+8h] [rbp-90h]
  __int64 v33; // [rsp+8h] [rbp-90h]
  unsigned __int64 v34; // [rsp+10h] [rbp-88h]
  __int64 v35; // [rsp+10h] [rbp-88h]
  unsigned __int64 v36; // [rsp+10h] [rbp-88h]
  __int64 v37; // [rsp+18h] [rbp-80h]
  unsigned __int64 v38; // [rsp+28h] [rbp-70h]
  __m128i v39; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v40[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *(_QWORD *)a4;
  v40[3] = __readfsqword(0x28u);
  v8 = *(__int64 (__fastcall **)(__int64, const __m128i *, __int64))(v6 + 16);
  if ( v8 == sub_773620 )
  {
    v9 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 == *(_QWORD *)(a4 + 24) && *(_BYTE *)(a3 + 8) == *(_BYTE *)(a4 + 32) )
    {
      v10 = 1;
      *(__m128i *)(a4 + 8) = _mm_loadu_si128(a2);
      return v10;
    }
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(__int64))v8)(a4);
    if ( v10 )
      return v10;
    v9 = *(_QWORD *)a3;
  }
  v10 = 0;
  if ( v9 != -1 )
  {
    if ( *(_BYTE *)(a3 + 8) )
    {
      if ( v9 < *(_QWORD *)(a1 + 56) )
      {
        v30 = *(_BYTE *)(a3 + 8);
        v26 = *(_QWORD *)(a1 + 48) + 176 * v9;
        sub_777860(a1, v9, v26, nullptr);
        v12 = v26;
        v13 = *(_QWORD *)(v26 + 32);
        v39.m128i_i64[0] = *(_QWORD *)a3;
        if ( v13 )
        {
          v14 = v30;
          for ( i = 0; i < v13 && v20; ++i )
          {
            v16 = *(_QWORD *)a4;
            v17 = *(_QWORD *)(v12 + 24) + 9 * i;
            v39.m128i_i64[1] = i;
            v18 = *(__int64 (__fastcall **)(__int64, const __m128i *, __int64))(v16 + 16);
            if ( v18 == sub_773620 )
            {
              v19 = *(_QWORD *)v17;
              if ( *(_QWORD *)v17 == *(_QWORD *)(a4 + 24) && *(_BYTE *)(v17 + 8) == *(_BYTE *)(a4 + 32) )
              {
                v10 = 1;
                *(__m128i *)(a4 + 8) = _mm_load_si128(&v39);
                return v10;
              }
            }
            else
            {
              v34 = v13;
              v31 = v12;
              v27 = v14;
              v21 = v18(a4, &v39, v17);
              v14 = v27;
              v12 = v31;
              v13 = v34;
              v10 = v21;
              if ( v21 )
                return v10;
              v19 = *(_QWORD *)v17;
            }
            if ( v19 == -1 || (v20 = *(_BYTE *)(v17 + 8)) == 0 )
            {
              v20 = v14;
              v10 = 0;
            }
            else
            {
              v10 = 0;
              if ( v19 < *(_QWORD *)(a1 + 56) )
              {
                v38 = v13;
                v35 = v12;
                v32 = *(_BYTE *)(v17 + 8);
                v28 = v14;
                v37 = *(_QWORD *)(a1 + 48) + 176 * v19;
                sub_777860(a1, v19, v37, nullptr);
                v14 = v28;
                v20 = v32;
                v12 = v35;
                v22 = *(_QWORD *)(v37 + 32);
                v13 = v38;
                v40[0] = *(_QWORD *)v17;
                if ( v22 )
                {
                  v23 = 0;
                  do
                  {
                    v36 = v13;
                    v24 = *(_QWORD *)(v37 + 24) + 9 * v23;
                    v33 = v12;
                    v29 = v14;
                    v40[1] = v23++;
                    v25 = sub_7779F0(a1, v40, v24, a4);
                    v14 = v29;
                    v12 = v33;
                    v10 = v25;
                    v13 = v36;
                    v20 = v25 == 0;
                  }
                  while ( v23 < v22 && !v25 );
                }
              }
            }
          }
        }
      }
    }
  }
  return v10;
}
