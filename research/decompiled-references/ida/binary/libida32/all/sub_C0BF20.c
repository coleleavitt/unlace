__int64 __fastcall sub_C0BF20(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r12
  const __m128i *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  unsigned int v12; // r15d
  int v13; // ebp
  int v14; // ebp
  __int64 v15; // rdx
  unsigned int v16; // r12d
  __int64 v17; // rbx
  __int64 v18; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rax
  __m128i v25; // xmm0
  unsigned __int32 v26; // eax
  unsigned __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rdx
  __int64 v32; // [rsp+10h] [rbp-A8h]
  _QWORD *v33; // [rsp+18h] [rbp-A0h]
  const __m128i *v34; // [rsp+20h] [rbp-98h]
  unsigned int v35; // [rsp+28h] [rbp-90h]
  int v36; // [rsp+2Ch] [rbp-8Ch]
  __m128i v37; // [rsp+40h] [rbp-78h] BYREF
  _QWORD *v38; // [rsp+50h] [rbp-68h] BYREF
  __int64 v39; // [rsp+58h] [rbp-60h]
  _QWORD v40[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD *v41; // [rsp+70h] [rbp-48h]
  __int64 v42; // [rsp+78h] [rbp-40h]

  v4 = a1;
  v5 = a4;
  v6 = sub_F3F530(*(_QWORD *)(a4[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v6
    || (v11 = v6,
        sub_6E4DB0((__int64 *)(*(_QWORD *)(v6 + 104) + 96LL), *(_QWORD *)(v6 + 104), v7, v8, v9, v10),
        *(_DWORD *)(*(_QWORD *)(v11 + 128) + 20LL))
    || (v12 = (unsigned __int32)v5[1].m128i_i32[2] >> 4,
        v33 = (_QWORD *)v5[3].m128i_i64[0],
        v35 = v5[3].m128i_u32[2],
        v35 < v12) )
  {
LABEL_12:
    sub_E0FED0(a2, a3, 108, 0);
    *(_BYTE *)(v4 + 16) = 0;
  }
  else
  {
    v39 = v12;
    v13 = *(_DWORD *)(a2 + 840);
    v37 = _mm_loadu_si128(v5);
    v38 = v33;
    if ( v13 )
    {
      v34 = v5;
      v32 = *(_QWORD *)(a2 + 824);
      while ( 2 )
      {
        v14 = v13 - 1;
        v40[0] = sub_A2B9D0();
        v40[1] = v15;
        v41 = nullptr;
        v42 = 0;
        v36 = 1;
        v16 = v14 & sub_C0B680((unsigned __int64 *)&v37, (__int64)&v38);
        while ( 1 )
        {
          v17 = v32 + 40LL * v16;
          if ( sub_A2B910(&v37, (_QWORD *)v17) && v39 == *(_QWORD *)(v17 + 24) )
          {
            v20 = v38;
            v21 = &v38[v39];
            if ( v38 == v21 )
              goto LABEL_20;
            v22 = *(_QWORD **)(v17 + 16);
            if ( *v22 == *v38 )
              break;
          }
LABEL_8:
          if ( sub_A2B910((_QWORD *)v17, v40) )
          {
            v18 = *(_QWORD *)(v17 + 24);
            if ( v18 == v42 )
            {
              v28 = *(_QWORD **)(v17 + 16);
              v29 = &v28[v18];
              if ( v28 == v29 )
                goto LABEL_25;
              v30 = v41;
              while ( *v28 == *v30 )
              {
                ++v28;
                ++v30;
                if ( v29 == v28 )
                  goto LABEL_25;
              }
            }
          }
          v16 = v14 & (v36 + v16);
          ++v36;
        }
        while ( 1 )
        {
          ++v20;
          ++v22;
          if ( v21 == v20 )
            break;
          if ( *v20 != *v22 )
            goto LABEL_8;
        }
LABEL_20:
        v23 = *(_DWORD *)(v17 + 32);
        if ( v23 <= 4 && ((1LL << v23) & 0x1D) != 0 )
        {
LABEL_25:
          v5 = v34;
          v4 = a1;
          v26 = (unsigned __int32)v34[1].m128i_i32[2] >> 4;
          goto LABEL_27;
        }
        v24 = v12 + 1;
        v12 = v24;
        if ( v35 < (unsigned int)v24 )
        {
          v4 = a1;
          goto LABEL_12;
        }
        v39 = v24;
        v13 = *(_DWORD *)(a2 + 840);
        v25 = _mm_loadu_si128(v34);
        v38 = v33;
        v37 = v25;
        if ( v13 )
        {
          v32 = *(_QWORD *)(a2 + 824);
          continue;
        }
        break;
      }
      v4 = a1;
      v5 = v34;
      v26 = (unsigned __int32)v34[1].m128i_i32[2] >> 4;
    }
    else
    {
      v26 = v12;
    }
LABEL_27:
    if ( v12 == v26 )
    {
      v27 = sub_F3F530(*(_QWORD *)(v5[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
    }
    else
    {
      v27 = *(_QWORD *)(v5[3].m128i_i64[0] + 8LL * (v12 - 1)) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v27 && (*(_BYTE *)(v27 + 28) & 0x7Fu) - 59 >= 3 )
        v27 = 0;
    }
    *(_QWORD *)v4 = v27;
    *(_DWORD *)(v4 + 8) = v12;
    *(_BYTE *)(v4 + 16) = 1;
  }
  return v4;
}

