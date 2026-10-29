_QWORD *__fastcall sub_1CB57E0(__int64 a1, __int64 *a2, __int64 *a3, unsigned __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // r13
  __int64 *v12; // r15
  __int64 v13; // r12
  __int64 v14; // rbx
  _QWORD *v15; // rbx
  unsigned __int64 (__fastcall *v16)(__int64); // rax
  __int32 v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  __m128i v20; // xmm1
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rsi
  unsigned int v25; // edx
  unsigned int v26; // ecx
  __m128i v31; // [rsp+20h] [rbp-108h] BYREF
  __int64 v32; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-D8h]
  _OWORD v35[5]; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-80h]
  __int64 v37; // [rsp+B0h] [rbp-78h]
  __m128i v38; // [rsp+B8h] [rbp-70h]
  __int64 v39; // [rsp+C8h] [rbp-60h]
  __int64 v40; // [rsp+D0h] [rbp-58h]
  __int64 v41; // [rsp+D8h] [rbp-50h]
  bool v42; // [rsp+E0h] [rbp-48h]
  bool v43; // [rsp+E1h] [rbp-47h]
  char v44; // [rsp+E2h] [rbp-46h]
  bool v45; // [rsp+E3h] [rbp-45h]
  bool v46; // [rsp+E4h] [rbp-44h]
  char v47; // [rsp+E5h] [rbp-43h]
  __int16 v48; // [rsp+E6h] [rbp-42h]

  v9 = *(_QWORD *)(a1 + 544);
  v10 = *(_BYTE *)(sub_B8EAA0(v9) + 8) & 0x7F;
  if ( v10 && v10 != 24 )
  {
    v24 = (__int64 *)(a1 + 8);
    v25 = a6;
    v26 = 3446;
LABEL_16:
    sub_168B9F0((__int64)v33, v24, v25, v26, 0);
    v15 = nullptr;
    sub_15F7200(v33);
    return v15;
  }
  if ( a4 > 1 )
  {
    v24 = (__int64 *)(a1 + 8);
    v25 = a6;
    v26 = 3447;
    goto LABEL_16;
  }
  v11 = *a3;
  if ( (*(_DWORD *)(*a3 + 20) & 0x1FFFFFFF) == 0 )
  {
    v24 = (__int64 *)(a1 + 8);
    v25 = a6;
    v26 = 3449;
    goto LABEL_16;
  }
  v12 = (__int64 *)(v11 + 24);
  v13 = v11 + 8LL * (*(_DWORD *)(*a3 + 20) & 0x1FFFFFFF) + 24;
  while ( (__int64 *)v13 != v12 )
  {
    v14 = *v12++;
    if ( sub_B8BED0(v14) )
    {
      if ( (__int64 *)v13 != v12 )
      {
        v25 = *(_DWORD *)(v14 + 24);
        v24 = (__int64 *)(a1 + 8);
        v26 = 5147;
        goto LABEL_16;
      }
      break;
    }
  }
  v15 = (_QWORD *)sub_BBF2E0(*(_QWORD **)(a1 + 248), v9, a6, a5, v11, 0);
  if ( sub_BBDB80((__int64)v15) )
  {
    sub_168B9F0((__int64)v33, (__int64 *)(a1 + 8), a6, 0xD78u, 0);
    sub_15F7200(v33);
    sub_B88650((__int64)v15, 1);
  }
  v16 = *(unsigned __int64 (__fastcall **)(__int64))(*v15 + 16LL);
  if ( v16 == sub_BBC170 )
    v17 = *(_DWORD *)(v15[7] + 8LL);
  else
    v17 = v16((__int64)v15);
  v18 = v15[5];
  v31.m128i_i32[2] = v17;
  v31.m128i_i64[0] = v18;
  sub_B85890(&v32, v18);
  v19 = sub_1A3A250(a1);
  v20 = _mm_load_si128(&v31);
  v33[1] = v35;
  v42 = v19 != 0;
  v43 = v19 == 2;
  v35[4] = 0;
  v45 = v19 == 0;
  v46 = v19 == 0;
  v38 = v20;
  v34 = 0x800000000LL;
  v39 = v32;
  v48 = 0;
  v33[0] = 0;
  v36 = 0;
  v37 = a1;
  v40 = 0;
  v41 = 0;
  v44 = 1;
  v47 = 0;
  sub_1A395A0((__int64)v33);
  sub_1A49A10(a1, (__int64)v33, a2, 0, 0, v21, 0.0, *(double *)v20.m128i_i64);
  sub_17A32D0(a1, (int *)v33, *(_QWORD *)(a1 + 544), a2, 0, 0);
  if ( !(_DWORD)v34 )
    sub_17B7670(a1, (__int64)v15, (__int64)a2, 1, v22, v23);
  sub_169D230((__int64)v33);
  return v15;
}
