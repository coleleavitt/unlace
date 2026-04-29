unsigned __int64 __fastcall sub_226670(__int64 a1)
{
  __int64 v2; // r8
  int v3; // r9d
  unsigned __int64 v4; // r12
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  unsigned int v9; // esi
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  unsigned __int64 v15; // r14
  __int64 v16; // rdi
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // r15
  char v25; // al
  unsigned __int64 *v26; // rax
  __int64 v27; // [rsp+10h] [rbp-D0h]
  int v28; // [rsp+1Ch] [rbp-C4h]
  unsigned int v29; // [rsp+2Ch] [rbp-B4h] BYREF
  __int64 v30; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-98h]
  __int64 v34; // [rsp+50h] [rbp-90h] BYREF
  __int128 v35; // [rsp+58h] [rbp-88h]
  __int64 v36; // [rsp+70h] [rbp-70h] BYREF
  __int128 v37; // [rsp+78h] [rbp-68h] BYREF
  __int128 v38; // [rsp+88h] [rbp-58h]
  unsigned __int64 v39; // [rsp+98h] [rbp-48h]
  char v40; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  v30 = -1;
  v29 = 0;
  v31 = 0;
  if ( !(unsigned __int8)sub_22D5F0(*(_QWORD *)(a1 + 16), &v30, &v29, &v31) )
    goto LABEL_12;
  v4 = (int)v29;
  v5 = *(__int64 **)(a1 + 16);
  v6 = v30;
  v7 = (__int64)v5;
  v8 = v29;
  if ( (int)v29 + v30 > v5[16] )
    goto LABEL_3;
  v15 = *(_QWORD *)(*(_QWORD *)(v5[187] + 24) + 16LL) & (v5[180] + v30);
  v36 = 0;
  v37 = 0u;
  v38 = 0;
  if ( v15 + (int)v29 - 1 >= v15 )
  {
    *((_QWORD *)&v37 + 1) = qvector_reserve((char *)&v37 + 8, 0, 1, 16);
    v26 = (unsigned __int64 *)(16 * v38 + *((_QWORD *)&v37 + 1));
    *v26 = v15;
    v26[1] = v4;
    *(_QWORD *)&v38 = v38 + 1;
  }
  if ( (unsigned __int8)sub_64180(v5 + 104, &v36) )
  {
    v16 = *((_QWORD *)&v37 + 1);
    if ( !*((_QWORD *)&v37 + 1) )
    {
LABEL_18:
      qfree(v36);
      v17 = *(_QWORD **)(a1 + 16);
      v6 = v30;
      v18 = v17[16];
      v8 = v29;
      v7 = (__int64)v17;
      if ( v30 + (int)v29 <= v18 && v30 < v18 )
      {
        if ( !(unsigned __int8)sub_317400(
                                 v17 + 106,
                                 *(_QWORD *)(*(_QWORD *)(v17[187] + 24LL) + 16LL) & (v30 + v17[180])) )
        {
          if ( !under_debugger )
            sub_3835A0(52653);
          goto LABEL_45;
        }
        v7 = *(_QWORD *)(a1 + 16);
        v8 = v29;
        v6 = v30;
      }
LABEL_3:
      v9 = *(_DWORD *)(v7 + 480);
      v36 = 0;
      *(_QWORD *)&v38 = v6;
      BYTE8(v38) = 5;
      v40 = 1;
      v37 = 0;
      v39 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(v9)).m128i_u64[0];
      v10 = *(_DWORD *)(*(_QWORD *)(v7 + 944) + 64LL);
      if ( v10 == -1 )
      {
        v32 = 0;
        v33 = 0;
        cleanup_argloc(&v32);
        v33 = v6;
        LODWORD(v32) = 1;
        v19 = sub_2260F0(a1, -1, &v31, &v32, 0, 0, v29, 0);
        v20 = *(__int64 **)(a1 + 88);
        v10 = v19;
        if ( v20[1] )
        {
          v28 = 0;
          v27 = 104LL * v19;
          v21 = 0;
          do
          {
            if ( v10 != v28 )
            {
              v22 = *v20;
              v34 = 0;
              v35 = 0;
              sub_1C3200(
                (int *)(v22 + 104 * v21),
                &v34,
                *(_DWORD *)(v22 + 104 * v21 + 88),
                v27 + v22,
                *(_DWORD *)(v27 + v22 + 88),
                1);
              v23 = v34 + 24 * v35;
              if ( v34 != v23 )
              {
                v24 = v34;
                do
                {
                  sub_2258F0(a1, v28, v10, *(int *)(v24 + 16), *(int *)(v24 + 20), *(_DWORD *)v24);
                  v24 += 24;
                }
                while ( v23 != v24 );
                v23 = v34;
              }
              if ( v23 )
              {
                *(_QWORD *)&v35 = 0;
                qfree(v23);
              }
              v20 = *(__int64 **)(a1 + 88);
            }
            v21 = ++v28;
          }
          while ( v28 < (unsigned __int64)v20[1] );
        }
        cleanup_argloc(&v32);
        v7 = *(_QWORD *)(a1 + 16);
        goto LABEL_8;
      }
      v11 = **(_QWORD **)(a1 + 88) + 104LL * v10;
      if ( *(_DWORD *)v11 == 1 )
        v12 = *(_QWORD *)(v11 + 8);
      else
        v12 = -1;
      if ( v12 == v6 && *(_DWORD *)(v11 + 88) == v8 )
      {
LABEL_8:
        v13 = *(_QWORD *)(a1 + 32) == 0;
        HIDWORD(v39) = v10;
        if ( v13 )
        {
          sub_21E350(v7, v10, *(_DWORD *)(a1 + 148), v12, v2, v3);
          v7 = *(_QWORD *)(a1 + 16);
        }
        (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL))(
          a1,
          (unsigned int)(*(_DWORD *)(v7 + 64) - 1),
          &v36);
        if ( v36 )
        {
          *(_QWORD *)&v37 = 0;
          qfree(v36);
        }
        goto LABEL_12;
      }
      if ( !under_debugger )
        sub_3835A0(52847);
LABEL_45:
      BUG();
    }
LABEL_17:
    *(_QWORD *)&v38 = 0;
    qfree(v16);
    goto LABEL_18;
  }
  v25 = sub_318830(v5 + 106, (char *)&v37 + 8);
  v16 = *((_QWORD *)&v37 + 1);
  if ( v25 )
  {
    if ( !*((_QWORD *)&v37 + 1) )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( *((_QWORD *)&v37 + 1) )
  {
    *(_QWORD *)&v38 = 0;
    qfree(*((_QWORD *)&v37 + 1));
  }
  qfree(v36);
LABEL_12:
  clear_tinfo_t(&v31);
  return v41 - __readfsqword(0x28u);
}
