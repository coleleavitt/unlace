__int64 __fastcall sub_1007A0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v7; // r14
  __int64 *v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rsi
  _DWORD *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  _DWORD *v17; // rdi
  __int64 (*v18)(void); // rax
  int v19; // eax
  _DWORD *v20; // rbp
  __int64 v21; // rax
  unsigned int v22; // r14d
  unsigned __int64 v23; // xmm0_8
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-A0h]
  unsigned int v33; // [rsp+14h] [rbp-94h]
  __int64 v37; // [rsp+38h] [rbp-70h]
  int v38; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v39; // [rsp+44h] [rbp-64h] BYREF
  int v40; // [rsp+48h] [rbp-60h] BYREF
  char v41; // [rsp+4Ch] [rbp-5Ch]
  __int64 v42; // [rsp+50h] [rbp-58h] BYREF
  __int128 v43; // [rsp+58h] [rbp-50h]
  unsigned __int64 v44; // [rsp+68h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v33 = a5;
  sub_163160(a1, a2, a3, a4, a5, 1);
  v7 = *a2;
  v8 = (__int64 *)sub_90BB0((__int64)a2, a3, a1);
  if ( *(_BYTE *)(a1 + 1248) )
  {
    v42 = 0;
    v37 = (__int64)(a2 + 1);
    v32 = 0;
    v43 = 0;
    while ( 1 )
    {
      sub_907C0((__int64)v8, &v42, v37, byte_1D57C8[4 * v32], 0);
      if ( (_QWORD)v43 )
      {
        v9 = 0;
        do
        {
          v12 = v8[9];
          v13 = (_DWORD *)(v42 + 8 * v9);
          v14 = v8[10];
          if ( v8[11] < (unsigned __int64)(v14 + 1) )
          {
            v15 = qvector_reserve();
            v8[9] = v15;
            v12 = v15;
            v14 = v8[10];
          }
          ++v9;
          v10 = v12 + 16 * v14;
          *(_QWORD *)v10 = -1;
          *(_DWORD *)(v10 + 8) = -1;
          *(_BYTE *)(v10 + 12) = 0;
          ++v8[10];
          *(_DWORD *)v10 = *v13;
          v11 = v13[1];
          *(_DWORD *)(v10 + 8) = (unsigned __int8)v32 == 1 ? 33023 : 4210816;
          *(_DWORD *)(v10 + 4) = v11;
          *(_BYTE *)(v10 + 12) = 1;
        }
        while ( v9 < (unsigned __int64)v43 );
      }
      if ( v32 == 1 )
        break;
      *(_QWORD *)&v43 = 0;
      v32 = 1;
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree();
    }
  }
  else
  {
    v17 = *(_DWORD **)(a1 + 760);
    v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 104LL);
    if ( (char *)v18 == (char *)sub_FE150 )
      v19 = v17[9];
    else
      v19 = v18();
    if ( (unsigned int)(v19 - 2) > 2 )
    {
      v20 = (_DWORD *)(*(_QWORD *)(a1 + 760) + 16LL);
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 416LL))(a1, 0);
      if ( (unsigned __int8)sub_1005F0(v20, (unsigned int *)&v38, &v39, v7, v21, 1u) )
      {
        v22 = v38;
        v40 = -1;
        v41 = 0;
        LODWORD(v42) = -1;
        BYTE4(v42) = 0;
        if ( (unsigned __int8)sub_90900(v8, (__int64)&v40, (__int64)&v42, v38) )
        {
          v23 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v39 - v22)).m128i_u64[0];
          if ( v41 )
          {
            v27 = v8[13];
            v28 = v8[12];
            if ( v8[14] < (unsigned __int64)(v27 + 1) )
            {
              v31 = qvector_reserve();
              v8[12] = v31;
              v28 = v31;
              v27 = v8[13];
            }
            v29 = v28 + 16 * v27;
            *(_QWORD *)v29 = -1;
            *(_DWORD *)(v29 + 8) = -1;
            *(_BYTE *)(v29 + 12) = 0;
            ++v8[13];
            *(_QWORD *)v29 = v23;
            *(_DWORD *)(v29 + 8) = v40;
            *(_BYTE *)(v29 + 12) = v41;
          }
          if ( !BYTE4(v42) )
          {
            LODWORD(v42) = -1;
            BYTE4(v42) = 1;
          }
          v24 = v8[10];
          v25 = v8[9];
          if ( v8[11] < (unsigned __int64)(v24 + 1) )
          {
            v30 = qvector_reserve();
            v8[9] = v30;
            v25 = v30;
            v24 = v8[10];
          }
          v26 = v25 + 16 * v24;
          *(_QWORD *)v26 = -1;
          *(_DWORD *)(v26 + 8) = -1;
          *(_BYTE *)(v26 + 12) = 0;
          ++v8[10];
          *(_QWORD *)v26 = v23;
          *(_DWORD *)(v26 + 8) = v42;
          *(_BYTE *)(v26 + 12) = BYTE4(v42);
        }
      }
    }
  }
  return sub_163160(a1, a2, a3, a4, v33, 62);
}

