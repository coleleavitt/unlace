__int64 __fastcall sub_18F09E0(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  __m128 v5; // xmm0
  __int16 v6; // ax
  __int64 v7; // rsi
  unsigned int v8; // ebx
  unsigned int v10; // eax
  __int64 v11; // r13
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+0h] [rbp-188h] BYREF
  __int64 v23[2]; // [rsp+8h] [rbp-180h] BYREF
  int v24; // [rsp+1Ch] [rbp-16Ch] BYREF
  __int64 v25; // [rsp+20h] [rbp-168h] BYREF
  __int64 v26; // [rsp+28h] [rbp-160h] BYREF
  void *v27; // [rsp+30h] [rbp-158h] BYREF
  signed __int64 v28; // [rsp+38h] [rbp-150h]
  __int64 v29; // [rsp+40h] [rbp-148h] BYREF
  char v30; // [rsp+50h] [rbp-138h] BYREF
  __m128 v31; // [rsp+60h] [rbp-128h]
  unsigned int v32; // [rsp+90h] [rbp-F8h] BYREF
  char v33; // [rsp+94h] [rbp-F4h]
  _BYTE v34[184]; // [rsp+D0h] [rbp-B8h] BYREF

  v23[0] = a2;
  v22 = a4;
  sub_1BCD530(&v30);
  v5 = _mm_loadh_ps((const double *)v23);
  v6 = *a3 & 0x1FF;
  v31 = v5;
  if ( v6 == 79 )
    __asm { jmp     rax }
  v7 = *(_QWORD *)(a1 + 248);
  v33 &= ~1u;
  v32 = 0;
  v25 = 0;
  switch ( sub_1BD78E0(&v30, v7, a3, &v32, &v25, 1) )
  {
    case 0LL:
    case 4LL:
      v8 = 0;
      break;
    case 1LL:
    case 3LL:
      v12 = sub_EEB7E0((unsigned __int64)a3, v7, *(double *)v5.m128_u64);
      v8 = 1;
      sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), v12, 0x1388u, 0);
      LODWORD(v27) = 0;
      v13 = sub_1587D10((__int64)v34, (int *)&v27);
      v14 = sub_1605D30(v13, &v22);
      sub_1605D30(v14, v23);
      sub_15F7200(v34);
      break;
    case 2LL:
      v10 = sub_EEB7E0((unsigned __int64)a3, v7, *(double *)v5.m128_u64);
      sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), v10, 0x1388u, 0);
      v24 = 1;
      v11 = sub_1587D10((__int64)v34, &v24);
      sub_A53AF0((__int64)&v27, &v32, *(_QWORD *)(a1 + 248), v25);
      if ( *(_BYTE *)(v11 + 120) )
      {
        sub_AEC220((unsigned __int8 **)(v11 + 32), v27, v28);
      }
      else if ( *(_BYTE *)(v11 + 132) )
      {
        v17 = sub_168B9E0((_QWORD *)v11);
        v20 = *(_QWORD *)(v11 + 16);
        if ( v20 )
          v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 32LL))(*(_QWORD *)(v11 + 16));
        v26 = v20;
        v21 = sub_1587BC0(v17, &v26, v15, v16, v18, v19);
        sub_AEC220((unsigned __int8 **)(*v21 + 32LL * *(unsigned int *)(v11 + 128) + 8), v27, v28);
      }
      sub_1605D30(v11, v23);
      if ( v27 != &v29 )
        operator delete(v27);
      v8 = 1;
      sub_15F7200(v34);
      break;
    default:
      BUG();
  }
  if ( v32 > 1 )
    sub_A4F8E0((int *)&v32);
  return v8;
}
