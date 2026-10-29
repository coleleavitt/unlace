void __fastcall sub_1E7C9B0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9,
        __m128 a10,
        double a11,
        double a12,
        double a13,
        __m128 a14)
{
  __int64 v15; // rax
  const void *v16; // r12
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  double v27; // xmm4_8
  double v28; // xmm5_8
  unsigned __int64 v29; // rbp
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  double v33; // xmm4_8
  double v34; // xmm5_8
  unsigned __int64 v35; // r13
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // r9
  double v39; // xmm4_8
  double v40; // xmm5_8
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __m128 v44; // [rsp+0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+18h] [rbp-40h] BYREF
  _OWORD v46[3]; // [rsp+20h] [rbp-38h] BYREF

  switch ( *(_BYTE *)(a2 + 16) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xE:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x17:
    case 0x19:
    case 0x1A:
    case 0x1D:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x32:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3A:
      sub_F6DC70(*(_QWORD **)(a1 + 8), a2, a3, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 192LL));
      break;
    case 7:
      sub_1E7C7A0(a1, a2, a3, a7, a8, a9, a10, a11, a12, a13, a14);
      break;
    case 8:
      sub_1E7BE50(a1, a2, (_QWORD *)a3, a7, a8, a9, a10, a11, a12, a13, a14);
      break;
    case 9:
      v29 = a3 + 1;
      v30 = sub_F6C520(*(_QWORD *)(a2 + 32));
      sub_1E7C400(
        a1,
        *(_QWORD *)(a2 + 32),
        v30 * ((v29 - (v29 != 0)) / v30 + (v29 != 0)),
        v30,
        v31,
        v32,
        a7,
        a8,
        a9,
        a10,
        v33,
        v34,
        a13,
        a14);
      break;
    case 0xD:
      sub_1E5E570(a1 + 24, a2, (unsigned int *)a3);
      break;
    case 0xF:
      v21 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)a3 = *(_DWORD *)(v21 + 192);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(v21 + 216);
      break;
    case 0x10:
      sub_1E5D5E0(a1, a2, a3, a4, a5, a6);
      break;
    case 0x14:
    case 0x16:
      v15 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)&v46[0] = 0;
      sub_1E5F010(*(_QWORD *)(v15 + 8), v46);
      v16 = (const void *)(*(_QWORD *)&v46[0] + 8LL);
      v17 = sub_F6C560(a2);
      memcpy((void *)a3, v16, v17);
      break;
    case 0x18:
      sub_1E7CD50(a1, a2, a3);
      break;
    case 0x1B:
      v35 = a3 + 16;
      v36 = sub_F6C520(*(_QWORD *)(a2 + 32));
      sub_1E7C400(
        a1,
        *(_QWORD *)(a2 + 32),
        v36 * ((v35 - (v35 != 0)) / v36 + (v35 != 0)),
        v36,
        v37,
        v38,
        a7,
        a8,
        a9,
        a10,
        v39,
        v40,
        a13,
        a14);
      *(_QWORD *)a3 = sub_19F9E80(*(_QWORD *)(**(_QWORD **)(a1 + 16) + 680LL), a2);
      *(_QWORD *)(a3 + 8) = v41;
      break;
    case 0x1C:
      return;
    case 0x1E:
      sub_1E7C890(a1, a2, (_DWORD *)a3, a7, a8, a9, a10, a11, a12, a13, a14);
      break;
    case 0x22:
    case 0x23:
      v44.m128_u64[0] = a3;
      v18 = *(_QWORD *)(a1 + 24);
      v45 = 0;
      v46[0] = _mm_loadh_ps((const double *)v44.m128_u64);
      sub_1E5F010(*(_QWORD *)(v18 + 8), &v45);
      sub_F6C7F0((__int64)v46, *(_QWORD *)v45, (const __m128i *)(v45 + 8));
      break;
    case 0x24:
      v42 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)a3 = *(_DWORD *)(v42 + 192);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(v42 + 164);
      break;
    case 0x27:
      *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 204LL);
      break;
    case 0x29:
      sub_1E5F180(*(_QWORD *)(a1 + 24), a2, (_DWORD *)a3);
      break;
    case 0x2A:
      v22 = *(_QWORD *)(a2 + 32);
      v23 = a3 + 4;
      v24 = sub_F6C520(v22);
      sub_1E7C400(
        a1,
        v22,
        v24 * ((v23 - (v23 != 0)) / v24 + (v23 != 0)),
        v24,
        v25,
        v26,
        a7,
        a8,
        a9,
        a10,
        v27,
        v28,
        a13,
        a14);
      break;
    case 0x2F:
    case 0x30:
      *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 208LL);
      break;
    case 0x31:
      v44.m128_u64[0] = a3;
      v44 = _mm_loadh_ps((const double *)v44.m128_u64);
      sub_1E5F050(a1 + 8, (__int64 *)(a1 + 24), v44.m128_u64[0], (void *)v44.m128_u64[1]);
      break;
    case 0x33:
      v43 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)a3 = *(_DWORD *)(v43 + 192);
      *(_QWORD *)(a3 + 4) = *(_QWORD *)(v43 + 212);
      break;
    case 0x34:
    case 0x36:
      v19 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)a3 = *(_DWORD *)(v19 + 192);
      *(_QWORD *)(a3 + 4) = *(_QWORD *)(v19 + 212);
      *(_QWORD *)&v46[0] = 0;
      sub_1E5F010(*(_QWORD *)(v19 + 8), v46);
      *(_QWORD *)(a3 + 16) = *(_QWORD *)&v46[0];
      break;
    case 0x35:
      *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 192LL);
      break;
    case 0x3B:
      v20 = sub_F6C520(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
      sub_1E7C9B0(a1, *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), v20 * ((a3 - (a3 != 0)) / v20 + (a3 != 0)));
      break;
  }
}
