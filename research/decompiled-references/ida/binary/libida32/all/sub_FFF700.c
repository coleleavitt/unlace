unsigned __int64 __fastcall sub_FFF700(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // r12d
  unsigned int v6; // esi
  unsigned __int64 result; // rax
  unsigned __int64 **v8; // rsi
  __m128 v9; // xmm0
  unsigned __int64 *v10; // rbx
  unsigned __int64 *v11; // rbp
  __int64 v12; // r12
  __int64 v13; // r8
  unsigned __int64 *v14; // r9
  __int64 v15; // rdx
  unsigned __int64 *v16; // r9
  int v17; // eax
  int v18; // esi
  __int64 v19; // rcx
  bool v20; // zf
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r10
  char v24; // dl
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v27; // dl
  char v28; // dl
  __int64 v29; // rsi
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 *v34; // rdx
  __int64 *v35; // rdi
  __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  unsigned __int64 **v38; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 *v39; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v40; // [rsp+10h] [rbp-B8h]
  __int64 v41; // [rsp+18h] [rbp-B0h]
  unsigned __int64 *v42; // [rsp+28h] [rbp-A0h] BYREF
  __m128 v43; // [rsp+30h] [rbp-98h]
  __int64 v44; // [rsp+40h] [rbp-88h]
  __int64 v45; // [rsp+48h] [rbp-80h]
  __int64 v46; // [rsp+50h] [rbp-78h]
  __m128 v47; // [rsp+60h] [rbp-68h] BYREF
  __int64 v48; // [rsp+70h] [rbp-58h]
  __int64 v49; // [rsp+78h] [rbp-50h]
  __int64 v50; // [rsp+80h] [rbp-48h]

  v4 = 0;
  v5 = *(_QWORD *)(a2 + 264);
  if ( v5 )
  {
    do
    {
      while ( ((1LL << v4) & *(_QWORD *)(*(_QWORD *)(a2 + 320) + 8LL * (v4 >> 6))) != 0 )
      {
        if ( v5 == ++v4 )
          goto LABEL_6;
      }
      v6 = v4++;
      sub_FFBBF0(a2, v6, nullptr);
    }
    while ( v5 != v4 );
  }
LABEL_6:
  result = *(unsigned int *)(a2 + 128);
  if ( (_DWORD)result )
  {
    v38 = (unsigned __int64 **)(*(_QWORD *)(a2 + 120) + 16LL * *(unsigned int *)(a2 + 136));
    v8 = v38;
    v9 = _mm_loadh_ps((const double *)&v38);
    v38 = (unsigned __int64 **)&v47;
    v47 = v9;
    result = (unsigned __int64)sub_FF8A30(&v47, v8);
    v11 = (unsigned __int64 *)v47.m128_u64[1];
    v10 = (unsigned __int64 *)v47.m128_u64[0];
    v12 = *(_QWORD *)(a2 + 120) + 16LL * *(unsigned int *)(a2 + 136);
    if ( v12 != v47.m128_u64[0] )
    {
      v41 = a1 + 24;
      while ( (unsigned __int8)sub_FFA4D0((__int64 *)(a1 + 120), v10, &v42) )
      {
        result = (unsigned __int64)v42;
        v14 = v42 + 1;
        if ( !v42[1] )
          goto LABEL_23;
LABEL_14:
        for ( v10 += 2; v11 != v10; v10 += 2 )
        {
          result = *v10;
          if ( *v10 != -4096 && result != -8192 )
            break;
        }
        if ( (unsigned __int64 *)v12 == v10 )
          return result;
      }
      v15 = *(unsigned int *)(a1 + 136);
      v16 = v42;
      v17 = *(_DWORD *)(a1 + 128) + 1;
      v18 = 2 * v15;
      v19 = (unsigned int)(3 * v15);
      v47.m128_u64[0] = (unsigned __int64)v42;
      if ( 4 * v17 < (unsigned int)v19 )
      {
        v19 = (unsigned int)(v15 - *(_DWORD *)(a1 + 132) - v17);
        if ( (unsigned int)v19 > (unsigned int)v15 >> 3 )
        {
LABEL_20:
          v20 = *v16 == -4096;
          *(_DWORD *)(a1 + 128) = v17;
          if ( !v20 )
            --*(_DWORD *)(a1 + 132);
          v21 = *v10;
          v14 = v16 + 1;
          *v14 = 0;
          *(v14 - 1) = v21;
LABEL_23:
          v22 = *(_QWORD *)(a1 + 24);
          v23 = v10[1];
          *(_QWORD *)(a1 + 104) += 56LL;
          result = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(a1 + 32) >= result + 56 && v22 )
          {
            *(_QWORD *)(a1 + 24) = result + 56;
          }
          else
          {
            v40 = (unsigned __int64)v14;
            v39 = (unsigned __int64 *)v23;
            result = sub_962430(v41, 56, 56, 3, v13, (__int64)v14);
            v14 = (unsigned __int64 *)v40;
            v23 = (unsigned __int64)v39;
          }
          v24 = *(_BYTE *)(result + 48);
          *(_QWORD *)(result + 8) = 0;
          *(_QWORD *)(result + 16) = 0;
          v24 &= 0xF0u;
          *(_QWORD *)result = 0;
          *(_BYTE *)(result + 48) = v24;
          v25 = *(_QWORD *)(v23 + 8);
          *(_QWORD *)(result + 24) = 0;
          *(_QWORD *)(result + 8) = v25;
          v26 = *(_QWORD *)(v23 + 16);
          *(_QWORD *)(result + 32) = 0;
          *(_QWORD *)(result + 40) = 0;
          *(_QWORD *)(result + 16) = v26;
          v27 = *(_BYTE *)(v23 + 48) & 1 | v24;
          *(_BYTE *)(result + 48) = v27;
          v28 = *(_BYTE *)(v23 + 48) & 2 | v27;
          *(_BYTE *)(result + 48) = v28;
          *(_BYTE *)(result + 48) = *(_BYTE *)(v23 + 48) & 4 | v28;
          v29 = *(_QWORD *)v23;
          if ( *(_QWORD *)v23 )
          {
            v40 = result;
            v39 = v14;
            sub_220CA20(v38, v29);
            LOBYTE(v46) = 1;
            v43 = v47;
            v44 = v48;
            v45 = v49;
            v50 = v46;
            sub_220C650((unsigned int)&v42, 1, v48, v49, v30, v31, v47.m128_i64[0], v47.m128_i64[1], v48, v49);
            result = v40;
            *(_BYTE *)(v40 + 48) &= ~8u;
            v34 = v42;
            v42 = nullptr;
            v35 = *(__int64 **)result;
            *(_QWORD *)result = v34;
            v14 = v39;
            if ( v35 )
            {
              v36 = *v35;
              v40 = result;
              (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, unsigned __int64 *))(v36 + 8))(
                v35,
                1,
                v36,
                v32,
                v33,
                v39);
              result = v40;
              v14 = v39;
            }
            if ( v42 )
            {
              v37 = *v42;
              v40 = result;
              v39 = v14;
              (*(void (__fastcall **)(unsigned __int64 *))(v37 + 8))(v42);
              result = v40;
              v14 = v39;
            }
          }
          *v14 = result;
          goto LABEL_14;
        }
        v18 = v15;
      }
      sub_FFF180(a1 + 120, v18, v15, v19, v13, (__int64)v42);
      sub_FFA4D0((__int64 *)(a1 + 120), v10, v38);
      v16 = (unsigned __int64 *)v47.m128_u64[0];
      v17 = *(_DWORD *)(a1 + 128) + 1;
      goto LABEL_20;
    }
  }
  return result;
}

