void __fastcall sub_9D4010(__int64 *a1, unsigned __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  const __m128i *v7; // rcx
  const __m128i *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // r14
  __int32 v11; // esi
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  char *v19; // rsi
  char *v20; // rsi
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rdx
  __int64 v24; // r9
  __int64 *v25; // rax
  __int64 *v26; // rdx
  __int64 v27; // r15
  __int64 v28; // r15
  __int64 v29; // r9
  const __m128i *v30; // rax
  const __m128i *v31; // rdx
  int v32; // edx
  double v33[2]; // [rsp+8h] [rbp-90h] BYREF
  __int64 *v34; // [rsp+18h] [rbp-80h] BYREF
  __int64 *v35; // [rsp+20h] [rbp-78h] BYREF
  const __m128i *v36; // [rsp+28h] [rbp-70h] BYREF
  const __m128i *v37; // [rsp+30h] [rbp-68h] BYREF
  const __m128i *v38; // [rsp+38h] [rbp-60h] BYREF
  __m128i v39; // [rsp+40h] [rbp-58h] BYREF
  int v40; // [rsp+50h] [rbp-48h]
  __int64 *v41; // [rsp+58h] [rbp-40h] BYREF

  v2 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( (unsigned int)(v2 - 21) <= 0xA )
  {
    v4 = sub_BFD550(*(_QWORD *)(a2 + 16));
    if ( (*(_WORD *)v4 & 0x1FF) == 0x47 )
    {
      v7 = (const __m128i *)a1[1];
      v8 = *(const __m128i **)(v4 + 16);
      v9 = (__int64 *)v7;
      if ( v7 )
      {
        while ( v8 != (const __m128i *)v9[6] )
        {
          if ( (unsigned __int64)v8 < v9[6] )
          {
            v9 = (__int64 *)v9[1];
            if ( !v9 )
              return;
          }
          else
          {
            v9 = (__int64 *)v9[2];
            if ( !v9 )
              return;
          }
        }
        v10 = *a1;
        v11 = v7[4].m128i_i32[1];
        if ( v2 == 21 )
        {
          v34 = (__int64 *)a1[1];
          v7[4].m128i_i32[1] = v11 + 1;
          v13 = (__int64 *)v7;
          v14 = *(_QWORD *)(a2 + 24);
          v35 = (__int64 *)v8;
          while ( v8 != (const __m128i *)v13[6] )
          {
            if ( (unsigned __int64)v8 < v13[6] )
              v13 = (__int64 *)v13[1];
            else
              v13 = (__int64 *)v13[2];
            if ( !v13 )
            {
              v15 = (__int64)v7;
              v34 = nullptr;
              goto LABEL_24;
            }
          }
          v27 = *(_QWORD *)(v10 + 96) - *(_QWORD *)(v10 + 88);
          v39.m128i_i64[0] = (__int64)v7;
          v7[4].m128i_i32[1] = v11 + 2;
          *(_QWORD *)&v33[0] = v14;
          v28 = v27 >> 5;
          sub_9D3BD0(&v36, v10, (const __m128i **)&v39, (unsigned __int64 *)&v35, v5, v14);
          sub_9D1F20(&v39);
          v29 = *(_QWORD *)&v33[0];
          v38 = v36;
          if ( v36 )
            ++v36[4].m128i_i32[1];
          *(_QWORD *)&v33[0] = v29;
          sub_9D3F10(v39.m128i_i64, v10, (__int64 **)&v38, (__int64)v35, (unsigned int)v28, v29);
          v30 = (const __m128i *)v39.m128i_i64[0];
          v31 = v36;
          v39.m128i_i64[0] = 0;
          v36 = v30;
          v37 = v31;
          sub_9D1F20((_DWORD **)&v37);
          sub_9D1F20(&v39);
          sub_9D1F20((_DWORD **)&v38);
          v38 = (const __m128i *)v34;
          if ( v34 )
          {
            v32 = *((_DWORD *)v34 + 17);
            *(double *)&v39.m128i_i64[1] = v33[0];
            v40 = 0;
            v39.m128i_i64[0] = (__int64)v35;
            v41 = v34;
            *((_DWORD *)v34 + 17) = v32 + 2;
          }
          else
          {
            *(double *)&v39.m128i_i64[1] = v33[0];
            v40 = 0;
            v39.m128i_i64[0] = (__int64)v35;
            v41 = nullptr;
          }
          sub_9D1F40((__m128i **)(v10 + 88), &v39);
          sub_9D1F20((_DWORD **)&v41);
          sub_9D1F20((_DWORD **)&v38);
          v7 = v36;
          v15 = a1[1];
LABEL_24:
          a1[1] = (__int64)v7;
          v39.m128i_i64[0] = v15;
          v38 = nullptr;
          sub_9D1F20(&v39);
          sub_9D1F20((_DWORD **)&v38);
          sub_9D1F20((_DWORD **)&v34);
        }
        else
        {
          v34 = (__int64 *)a1[1];
          v36 = v8;
          v35 = (__int64 *)v7;
          v7[4].m128i_i32[1] = v11 + 2;
          v12 = (__int64 *)v7;
          while ( v8 != (const __m128i *)v12[6] )
          {
            if ( (unsigned __int64)v8 < v12[6] )
              v12 = (__int64 *)v12[1];
            else
              v12 = (__int64 *)v12[2];
            if ( !v12 )
            {
              v21 = (__int64)v7;
              goto LABEL_32;
            }
          }
          v38 = v7;
          v7[4].m128i_i32[1] = v11 + 3;
          sub_9D3BD0((const __m128i **)&v39, v10, &v38, (unsigned __int64 *)&v36, v5, v6);
          v22 = (__int64 *)v39.m128i_i64[0];
          v23 = v35;
          v39.m128i_i64[0] = 0;
          v35 = v22;
          v37 = (const __m128i *)v23;
          sub_9D1F20((_DWORD **)&v37);
          sub_9D1F20(&v39);
          sub_9D1F20((_DWORD **)&v38);
          v38 = (const __m128i *)v35;
          if ( v35 )
            ++*((_DWORD *)v35 + 17);
          sub_9D3F10(v39.m128i_i64, v10, (__int64 **)&v38, (__int64)v36, 0, v24);
          v25 = (__int64 *)v39.m128i_i64[0];
          v26 = v35;
          v39.m128i_i64[0] = 0;
          v35 = v25;
          v37 = (const __m128i *)v26;
          sub_9D1F20((_DWORD **)&v37);
          sub_9D1F20(&v39);
          sub_9D1F20((_DWORD **)&v38);
          v7 = (const __m128i *)v35;
          v21 = a1[1];
LABEL_32:
          a1[1] = (__int64)v7;
          v39.m128i_i64[0] = v21;
          v35 = nullptr;
          sub_9D1F20(&v39);
          sub_9D1F20((_DWORD **)&v35);
          sub_9D1F20((_DWORD **)&v34);
        }
        v16 = a1[1];
        v17 = *a1;
        v38 = (const __m128i *)v16;
        if ( v16 )
        {
          *(_QWORD *)&v33[0] = v16;
          v18 = *(_DWORD *)(v16 + 68);
          v39 = (__m128i)_mm_loadh_ps(v33);
          *(_DWORD *)(v16 + 68) = v18 + 2;
        }
        else
        {
          v39 = (__m128i)a2;
        }
        v19 = *(char **)(v17 + 120);
        if ( v19 == *(char **)(v17 + 128) )
        {
          sub_9D2160(v17 + 112, v19, &v39);
        }
        else
        {
          v20 = v19 + 16;
          *((__m128i *)v20 - 1) = v39;
          v39.m128i_i64[1] = 0;
          *(_QWORD *)(v17 + 120) = v20;
        }
        sub_9D1F20((_DWORD **)&v39.m128i_i64[1]);
        sub_9D1F20((_DWORD **)&v38);
      }
    }
  }
}
