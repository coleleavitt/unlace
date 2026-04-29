__int64 __fastcall sub_3D0B90(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebp
  int v5; // eax
  __m128i v7; // xmm0
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  int *v11; // r15
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 (__fastcall **v32)(); // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v33[28]; // [rsp+8h] [rbp-D0h]
  __int128 v34; // [rsp+28h] [rbp-B0h]
  __int128 v35; // [rsp+38h] [rbp-A0h]
  _QWORD v36[5]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v37; // [rsp+78h] [rbp-60h]
  __int128 v38; // [rsp+88h] [rbp-50h]
  unsigned __int64 v39; // [rsp+98h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v2 = a2->m128i_i64[0];
  if ( !a2->m128i_i64[0] )
    return 0;
  v3 = 0;
  if ( (unsigned int)(*(_DWORD *)(v2 + 60) - 1) > 1 )
    return v3;
  *(_QWORD *)&v33[20] = 0x4900000000LL;
  *(_QWORD *)((char *)&v36[3] + 4) = 0x4900000000LL;
  v35 = -1;
  v38 = -1;
  v5 = *(_DWORD *)(v2 + 60);
  v32 = off_4C97D0;
  *(_QWORD *)&v33[4] = 3;
  *(_QWORD *)&v33[12] = 0;
  v36[0] = off_4C97D0;
  *(_QWORD *)((char *)&v36[1] + 4) = 3;
  *(_QWORD *)((char *)&v36[2] + 4) = 0;
  v34 = -1;
  v37 = -1;
  if ( (unsigned int)(v5 - 1) > 1 )
    return 0;
  if ( *(int *)(*(_QWORD *)(v2 + 64) + 64LL) <= 0 )
    return 0;
  *(_DWORD *)v33 = 0;
  sub_3CFE30(a1, (__int64)&v32, v2, NAN);
  v3 = sub_3D01E0(a1, v36, a2->m128i_i64[0], NAN);
  if ( !(_BYTE)v3 )
    return 0;
  v7 = _mm_loadu_si128(a2);
  *a2 = 0;
  v8 = *(volatile signed __int32 **)(a1 + 72);
  v9 = v7.m128i_i64[0];
  *(__m128i *)(a1 + 64) = v7;
  if ( v8 )
  {
    sub_3D07E0(v8);
    v9 = *(_QWORD *)(a1 + 64);
  }
  v10 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(v9 + 56);
  v11 = *(int **)(v9 + 64);
  v12 = reg_int_op(*(_QWORD *)(v10 + 344), 0, *(unsigned __int8 *)(v10 + 356), "Microcode");
  v13 = *v11;
  if ( v12 )
    v14 = *(_DWORD *)(v10 + 352) | v13;
  else
    v14 = ~*(_DWORD *)(v10 + 352) & v13;
  *v11 = v14;
  v15 = reg_int_op(*(_QWORD *)(v10 + 408), 0, *(unsigned __int8 *)(v10 + 420), "Microcode");
  v16 = *v11;
  if ( v15 )
    v17 = *(_DWORD *)(v10 + 416) | v16;
  else
    v17 = ~*(_DWORD *)(v10 + 416) & v16;
  *v11 = v17;
  v18 = reg_int_op(*(_QWORD *)(v10 + 472), 0, *(unsigned __int8 *)(v10 + 484), "Microcode");
  v19 = *v11;
  if ( v18 )
    v20 = *(_DWORD *)(v10 + 480) | v19;
  else
    v20 = ~*(_DWORD *)(v10 + 480) & v19;
  *v11 = v20;
  v21 = reg_int_op(*(_QWORD *)(v10 + 536), 0, *(unsigned __int8 *)(v10 + 548), "Microcode");
  v24 = *v11;
  if ( v21 )
    v25 = *(_DWORD *)(v10 + 544) | v24;
  else
    v25 = ~*(_DWORD *)(v10 + 544) & v24;
  *v11 = v25;
  v26 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = 0;
  if ( v26 )
    qfree(v26);
  v27 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)(), _QWORD *, __int64, __int64))callui)(
    74,
    v27,
    &v32,
    v36,
    v22,
    v23);
  callui(67, *(_QWORD *)a1, v28, v29, v30, v31, v32, *(_QWORD *)v33, *(_QWORD *)&v33[8], *(_QWORD *)&v33[16]);
  return v3;
}
