unsigned __int64 __fastcall sub_1B67E0(__int64 *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __m128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v16; // r15
  __int64 v17; // rsi
  __m128 v18; // xmm0
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v26; // [rsp+0h] [rbp-C8h]
  __int64 v27; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+18h] [rbp-B0h]
  __m128 v29; // [rsp+50h] [rbp-78h] BYREF
  __int64 v30; // [rsp+60h] [rbp-68h]
  __m128 v31; // [rsp+70h] [rbp-58h] BYREF
  __int64 v32; // [rsp+80h] [rbp-48h]
  unsigned __int64 v33; // [rsp+88h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_64880(a4) || a4[3] )
  {
    v27 = 0;
    v28 = 0;
    v7 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
    v30 = 0;
    v29 = v7;
    sub_1B3C00(a3, &v27, (__int64)&v29);
    if ( sub_122C30((__int64)a4, (__int64)a3) )
    {
      sub_64640(a4, a3, v8, v9, v10, v11);
      sub_317C60(a4 + 2, a3 + 2);
      if ( !(unsigned __int8)sub_64880(a3) || a3[3] )
      {
        v22 = v28;
        v26 = 2;
        if ( (_QWORD)v28 )
        {
          v22 = v28 - 1;
          v26 = v28 + 1;
        }
        v23 = v27;
        if ( *((_QWORD *)&v28 + 1) < v26 )
        {
          v27 = qvector_reserve();
          v23 = v27;
        }
        *(_QWORD *)&v28 = v26;
        *(_BYTE *)(v23 + v22) = 44;
        *(_BYTE *)(v27 + v22 + 1) = 0;
      }
      v16 = v28;
      v25 = 2;
      if ( (_QWORD)v28 )
      {
        v16 = v28 - 1;
        v25 = v28 + 1;
      }
      v17 = v27;
      if ( *((_QWORD *)&v28 + 1) < v25 )
      {
        v27 = qvector_reserve();
        v17 = v27;
      }
      *(_QWORD *)&v28 = v25;
      *(_BYTE *)(v17 + v16) = 40;
      *(_BYTE *)(v27 + v16 + 1) = 0;
      v18 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
      v32 = 0;
      v31 = v18;
      sub_1B3C00(a4, &v27, (__int64)&v31);
      v19 = v28;
      v20 = 2;
      if ( (_QWORD)v28 )
      {
        v20 = v28 + 1;
        v19 = v28 - 1;
      }
      v21 = v27;
      if ( *((_QWORD *)&v28 + 1) < v20 )
      {
        v27 = qvector_reserve();
        v21 = v27;
      }
      *(_QWORD *)&v28 = v20;
      *(_BYTE *)(v21 + v19) = 41;
      *(_BYTE *)(v27 + v19 + 1) = 0;
    }
    v12 = a1[1];
    v13 = *a1;
    if ( a1[2] < (unsigned __int64)(v12 + 1) )
    {
      v24 = qvector_reserve();
      *a1 = v24;
      v12 = a1[1];
      v13 = v24;
    }
    v14 = v13 + 24 * v12;
    *(_QWORD *)v14 = 0;
    *(_OWORD *)(v14 + 8) = 0;
    ++a1[1];
    sub_6B870((__int64 *)v14);
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
  }
  return v33 - __readfsqword(0x28u);
}
