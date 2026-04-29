__int64 __fastcall sub_98230(__int64 a1, __int64 *a2)
{
  __int64 *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 *v13; // r15
  char v14; // al
  unsigned __int64 v15; // rdx
  __int64 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // rbx
  void (__fastcall *v23)(_QWORD *); // rdx
  void (__fastcall *v24)(_QWORD *); // rax
  _QWORD *v25; // rbp
  __int64 v26; // r14
  void *v27; // rdi
  __int64 v28; // rbp
  _QWORD *v29; // r14
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  bool v34; // [rsp+10h] [rbp-98h]
  unsigned __int64 v35; // [rsp+10h] [rbp-98h]
  __m128i v36; // [rsp+20h] [rbp-88h] BYREF
  __m128i v37; // [rsp+30h] [rbp-78h] BYREF
  __m128i v38; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-58h] BYREF
  char v40; // [rsp+58h] [rbp-50h]
  unsigned __int64 v41; // [rsp+68h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( (unsigned __int16)sub_97BF0((__int64)a2) == 33 )
  {
    v36 = 0;
    if ( sub_945B0(a2, &v36, 55) )
    {
      v5 = *(__int64 **)(a1 + 24);
      v6 = v5[1];
      v7 = *v5;
      if ( v5[2] < (unsigned __int64)(v6 + 1) )
      {
        v33 = qvector_reserve(v5, v7, v6 + 1, 24);
        *v5 = v33;
        v6 = v5[1];
        v7 = v33;
      }
      v8 = v7 + 24 * v6;
      v40 = 0;
      *(_OWORD *)v8 = 0;
      *(_BYTE *)(v8 + 16) = 0;
      ++v5[1];
      *(_OWORD *)v8 = 0;
      v39 = 0;
      if ( (unsigned __int8)sub_96D10((__int64)a2, (__int64)&v39, v36.m128i_i64) )
        *(_QWORD *)(v8 + 8) = v39 - 1;
      goto LABEL_8;
    }
    v37 = 0;
    if ( !sub_945B0(a2, &v37, 47) )
    {
      v16 = *(__int64 **)(a1 + 24);
      v17 = v16[1];
      v18 = *v16;
      if ( v16[2] < (unsigned __int64)(v17 + 1) )
      {
        v32 = qvector_reserve(*(_QWORD *)(a1 + 24), v18, v17 + 1, 24);
        *v16 = v32;
        v17 = v16[1];
        v18 = v32;
      }
      v19 = v18 + 24 * v17;
      *(_BYTE *)(v19 + 16) = 0;
      *(_OWORD *)v19 = 0;
      ++v16[1];
      *(_BYTE *)(v19 + 16) = 1;
      goto LABEL_23;
    }
    v9 = *(unsigned __int8 *)(a1 + 40);
    v38 = 0;
    v34 = sub_945B0(a2, &v38, 34);
    if ( v34 )
    {
      v39 = 0;
      sub_96D10((__int64)a2, (__int64)&v39, v38.m128i_i64);
      v9 = v39;
    }
    v10 = *(__int64 **)(a1 + 24);
    v40 = 0;
    v39 = 0;
    v11 = v10[1];
    v12 = *v10;
    if ( v10[2] < (unsigned __int64)(v11 + 1) )
    {
      v12 = qvector_reserve(v10, v12, v11 + 1, 24);
      *v10 = v12;
      v11 = v10[1];
    }
    v13 = (unsigned __int64 *)(v12 + 24 * v11);
    *((_BYTE *)v13 + 16) = 0;
    *(_OWORD *)v13 = 0;
    ++v10[1];
    v14 = sub_96D10((__int64)a2, (__int64)&v39, v37.m128i_i64);
    v15 = v39;
    *((_BYTE *)v13 + 16) = v14 ^ 1;
    if ( !v15 && !v34 )
      v9 = 0;
    *v13 = v9;
    if ( v15 == *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) )
    {
      *((_BYTE *)v13 + 16) = 1;
      v13[1] = v9;
LABEL_19:
      sub_84A10(&v38);
LABEL_23:
      sub_84A10(&v37);
LABEL_8:
      sub_84A10(&v36);
      return 0;
    }
    v20 = a2[31];
    if ( !v20 )
    {
      v35 = v15;
      v20 = sub_87C20(*(_QWORD **)(*a2 + 16), *(_QWORD *)(*a2 + 24));
      a2[31] = v20;
      v15 = v35;
    }
    v21 = *(_DWORD **)(v20 + 216);
    if ( v21 )
    {
      ++v21[2];
      v13[1] = v15 - (v21[31] == 8);
      if ( v21[2]-- == 1 )
      {
        v23 = **(void (__fastcall ***)(_QWORD *))v21;
        if ( v23 == sub_15E30 )
        {
          v24 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v21 + 16LL);
          if ( v24 == sub_15D70 )
          {
            v25 = *((_QWORD **)v21 + 16);
            *(_QWORD *)v21 = &off_C71D8;
            if ( v25 )
            {
              v26 = v25[2];
              while ( v26 )
              {
                sub_80300(*(_QWORD **)(v26 + 24));
                v27 = (void *)v26;
                v26 = *(_QWORD *)(v26 + 16);
                operator delete(v27, 0x30u);
              }
              operator delete(v25, 0x30u);
            }
            v28 = *((_QWORD *)v21 + 19);
            while ( v28 )
            {
              v29 = (_QWORD *)v28;
              sub_80A30(*(_QWORD **)(v28 + 24));
              v30 = *(_QWORD *)(v28 + 32);
              v28 = *(_QWORD *)(v28 + 16);
              if ( v30 )
              {
                v29[5] = 0;
                qfree(v30);
              }
              operator delete(v29, 0x48u);
            }
            v31 = *((_QWORD *)v21 + 12);
            if ( v31 )
            {
              *((_QWORD *)v21 + 13) = 0;
              qfree(v31);
            }
            operator delete(v21, 0xC0u);
            v15 = v13[1];
          }
          else
          {
            v24(v21);
            v15 = v13[1];
          }
          goto LABEL_41;
        }
        v23(v21);
      }
      v15 = v13[1];
    }
    else
    {
      v13[1] = v15;
    }
LABEL_41:
    if ( v15 < *v13 )
      *(__m128i *)v13 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)*v13);
    goto LABEL_19;
  }
  return 0;
}
