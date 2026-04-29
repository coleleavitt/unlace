__int64 __fastcall sub_76DE0(__int64 *a1, _QWORD **a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  bool v5; // zf
  __int64 (__fastcall *v8)(__int64, int); // rax
  int v9; // ebx
  int v10; // ebx
  __int64 v11; // r13
  __int64 (__fastcall *v12)(__int64, int, int); // rax
  unsigned int v13; // eax
  _DWORD *v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rdi
  unsigned int v18; // ebx
  _QWORD *v19; // r13
  unsigned int *v20; // r12
  unsigned int v21; // r12d
  __m128i v23; // xmm0
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // xmm0_8
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+8h] [rbp-98h]
  _QWORD **v30; // [rsp+10h] [rbp-90h]
  unsigned __int64 *v31; // [rsp+18h] [rbp-88h]
  _QWORD *v32; // [rsp+20h] [rbp-80h]
  unsigned __int64 *v33; // [rsp+28h] [rbp-78h]
  int v34; // [rsp+30h] [rbp-70h]
  signed int v35; // [rsp+34h] [rbp-6Ch]
  __int64 v36; // [rsp+38h] [rbp-68h]
  unsigned __int64 v37; // [rsp+48h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-50h] BYREF
  __int128 v39; // [rsp+58h] [rbp-48h]
  unsigned __int64 v40; // [rsp+68h] [rbp-38h]

  v30 = a2;
  v32 = (_QWORD *)a3;
  v40 = __readfsqword(0x28u);
  v4 = 0;
  v5 = a4[1] == 0;
  v38 = 0;
  v39 = 0;
  if ( v5 )
    return 0;
  v34 = 0;
  v33 = &v37;
  v31 = &v38;
  do
  {
    v35 = *(_DWORD *)(*a4 + 4 * v4);
    v8 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104);
    if ( v8 == sub_64AB0 )
    {
      if ( !a1[10] )
        goto LABEL_16;
      v9 = *(_DWORD *)(a1[9] + 24LL * v35 + 8);
    }
    else
    {
      v9 = v8((__int64)a1, v35);
    }
    v10 = v9 - 1;
    if ( v10 >= 0 )
    {
      v11 = 24LL * v35;
      v36 = 4LL * v10;
      do
      {
        v12 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 120);
        if ( v12 == sub_64AF0 )
          v13 = *(_DWORD *)(*(_QWORD *)(a1[9] + v11) + v36);
        else
          v13 = v12((__int64)a1, v35, v10);
        v14 = (_DWORD *)*a4;
        v15 = *a4 + 4LL * a4[1];
        if ( *a4 == v15 )
          goto LABEL_28;
        while ( v13 != *v14 )
        {
          if ( (_DWORD *)v15 == ++v14 )
            goto LABEL_28;
        }
        if ( v14 == (_DWORD *)v15 )
        {
LABEL_28:
          v23 = _mm_cvtsi32_si128(v13);
          v24 = v38;
          v25 = v39;
          v26 = _mm_unpacklo_epi32(v23, _mm_cvtsi32_si128(v35)).m128i_u64[0];
          v37 = v26;
          v27 = v39 + 1;
          if ( (unsigned __int64)v33 < v38 || (unsigned __int64)v33 >= v38 + 8LL * *((_QWORD *)&v39 + 1) )
          {
            if ( *((_QWORD *)&v39 + 1) < v27 )
            {
              v38 = qvector_reserve(v31, v38, v39 + 1, 8);
              v24 = v38;
              v25 = v39;
            }
            *(_QWORD *)(v24 + 8 * v25) = v37;
          }
          else
          {
            if ( *((_QWORD *)&v39 + 1) < v27 )
            {
              v29 = v26;
              v28 = qvector_reserve(v31, v38, v39 + 1, 8);
              v26 = v29;
              v38 = v28;
              v24 = v28;
              v25 = v39;
            }
            *(_QWORD *)(v24 + 8 * v25) = v26;
          }
          *(_QWORD *)&v39 = v39 + 1;
        }
        --v10;
        v36 -= 4;
      }
      while ( v10 != -1 );
    }
LABEL_16:
    v4 = ++v34;
  }
  while ( (unsigned __int64)v34 < a4[1] );
  v16 = v38;
  v17 = v38;
  if ( (unsigned __int64)v39 <= 1 || (v18 = v39 - 1, (int)v39 - 1 < 0) )
  {
    v21 = 0;
  }
  else
  {
    v36 = 8LL * v18;
    while ( 1 )
    {
      v19 = v32;
      v20 = (unsigned int *)(v36 + v16);
      if ( !sub_70250((__int64)a1, (__int64)v32, *v20) )
      {
        v21 = sub_74AA0(a1, v30, v19, (__int64)a4, *v20, v20[1], 0);
        if ( v21 )
          break;
      }
      --v18;
      v36 -= 8;
      if ( v18 == -1 )
      {
        v17 = v38;
        v21 = 0;
        goto LABEL_25;
      }
      v16 = v38;
    }
    v17 = v38;
  }
LABEL_25:
  if ( v17 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v17);
  }
  return v21;
}
