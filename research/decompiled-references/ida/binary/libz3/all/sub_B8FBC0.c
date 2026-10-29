void __fastcall sub_B8FBC0(__int64 a1, double a2, double a3, __m128 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  __m128i v8; // xmm0
  unsigned int v9; // edi
  int *v10; // rdx
  int v11; // r9d
  __int64 v12; // rbx
  __int64 i; // rbp
  void *v14; // rdi
  __m128i *v15; // r12
  __int64 v16; // rbx
  unsigned int v17; // ecx
  unsigned int *v18; // rax
  unsigned int v19; // ebx
  unsigned int *v20; // r14
  unsigned int v21; // edx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // [rsp+10h] [rbp-B8h]
  unsigned int *v30; // [rsp+20h] [rbp-A8h]
  unsigned int v31; // [rsp+28h] [rbp-A0h]
  unsigned int v32; // [rsp+2Ch] [rbp-9Ch]
  unsigned int v33; // [rsp+34h] [rbp-94h] BYREF
  int v34[2]; // [rsp+38h] [rbp-90h] BYREF
  __m128i v35; // [rsp+40h] [rbp-88h] BYREF
  int v36[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v37; // [rsp+58h] [rbp-70h]
  __int64 v38; // [rsp+60h] [rbp-68h] BYREF
  __int64 v39; // [rsp+68h] [rbp-60h]
  _QWORD v40[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v41; // [rsp+80h] [rbp-48h]
  __int64 v42; // [rsp+88h] [rbp-40h]

  sub_B87CA0((_QWORD *)a1);
  sub_B7A6E0(a1, a2, a3, a4);
  v5 = (unsigned int)(2 * *(_DWORD *)(a1 + 948));
  v6 = *(_QWORD *)(a1 + 984);
  v7 = 2 * *(_DWORD *)(a1 + 952);
  v8 = _mm_cvtsi32_si128(v5);
  v31 = 2 * *(_DWORD *)(a1 + 948);
  v9 = v5 | 1;
  v10 = (int *)(v6 + 32 * v5);
  v11 = *v10;
  v35 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(v8, _mm_cvtsi32_si128(v9)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v7 | 1)));
  if ( !v11 )
  {
    v10 = (int *)(v6 + 32LL * v9);
    if ( *v10 )
    {
      v31 = v9;
    }
    else
    {
      v10 = (int *)(v6 + 32LL * v7);
      if ( *v10 )
      {
        v31 = v7;
      }
      else
      {
        v10 = (int *)(v6 + 32LL * (v7 | 1));
        if ( !*v10 )
          goto LABEL_5;
        v31 = v7 | 1;
      }
    }
  }
  v40[0] = 0;
  v40[1] = 0;
  v41 = 1;
  v42 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v40, v10);
  v12 = *(_QWORD *)(a1 + 984);
  if ( v12 )
  {
    for ( i = v12 + 32LL * *(unsigned int *)(v12 - 4); i != v12; v12 += 32 )
    {
      v14 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v12 + 20) & 1) != 0
        || *(_DWORD *)(v12 + 16) != 1
        || (v41 & 0x100000000LL) != 0
        || (_DWORD)v41 != 1 )
      {
        sub_1852000(qword_1C7F2C0, v12, v40);
      }
      else
      {
        sub_1832A70(qword_1C7F2C0, v12, v40);
        sub_182CBA0(v14, v12 + 16);
        *(_BYTE *)(v12 + 20) &= ~1u;
        *(_DWORD *)(v12 + 16) = 1;
      }
    }
  }
  v15 = &v35;
  v29 = a1 + 960;
  sub_25A130((char *)v40);
  do
  {
    v16 = v15->m128i_u32[0];
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 984) + 32 * v16) )
    {
      *(_QWORD *)v36 = 0;
      v37 = 0;
      *(_QWORD *)v34 = 4294967294LL;
      v38 = 1;
      v39 = 0;
      sub_182CBA0(qword_1C7F2C0, &v38);
      BYTE4(v38) &= ~1u;
      LODWORD(v38) = 1;
      v33 = sub_B84960(v29, v31, v16, v36, (unsigned __int64 *)v34);
      v17 = v33;
      v18 = (unsigned int *)(*(_QWORD *)(a1 + 1000) + 56LL * v33);
      if ( !*((_BYTE *)v18 + 52) )
      {
        v21 = *(_DWORD *)(a1 + 1088);
        v22 = v18[1];
        *((_BYTE *)v18 + 52) = 1;
        v23 = *(_QWORD *)(a1 + 984);
        v32 = v17;
        v18[10] = v21;
        *(_DWORD *)(a1 + 1088) = v21 + 1;
        v24 = *v18;
        *(_DWORD *)(a1 + 1092) = v17;
        v30 = v18;
        sub_3EBB80((__int64)v40, 32 * v22 + v23, v23 + 32 * v24);
        if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v30 + 2), (__int64)v40) )
        {
          sub_25A130((char *)v40);
          sub_B8E480(v29, v32);
        }
        else
        {
          sub_25A130((char *)v40);
        }
        sub_B76360((unsigned int **)(a1 + 1096), &v33);
      }
      sub_25A130((char *)v36);
      *(_QWORD *)v36 = 0;
      *(_QWORD *)v34 = 4294967294LL;
      v37 = 0;
      v38 = 1;
      v39 = 0;
      sub_182CBA0(qword_1C7F2C0, &v38);
      BYTE4(v38) &= ~1u;
      LODWORD(v38) = 1;
      v33 = sub_B84960(v29, v16, v31, v36, (unsigned __int64 *)v34);
      v19 = v33;
      v20 = (unsigned int *)(*(_QWORD *)(a1 + 1000) + 56LL * v33);
      if ( !*((_BYTE *)v20 + 52) )
      {
        v25 = *(_DWORD *)(a1 + 1088);
        v26 = *v20;
        *((_BYTE *)v20 + 52) = 1;
        v27 = *(_QWORD *)(a1 + 984);
        v20[10] = v25;
        *(_DWORD *)(a1 + 1088) = v25 + 1;
        v28 = v20[1];
        *(_DWORD *)(a1 + 1092) = v19;
        sub_3EBB80((__int64)v40, 32 * v28 + v27, v27 + 32 * v26);
        if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v20 + 2), (__int64)v40) )
        {
          sub_25A130((char *)v40);
          sub_B8E480(v29, v19);
        }
        else
        {
          sub_25A130((char *)v40);
        }
        sub_B76360((unsigned int **)(a1 + 1096), &v33);
      }
      sub_25A130((char *)v36);
    }
    v15 = (__m128i *)((char *)v15 + 4);
  }
  while ( v36 != (int *)v15 );
LABEL_5:
  sub_B7DBA0(a1);
}

