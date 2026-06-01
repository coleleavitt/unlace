void __fastcall sub_1E7C400(
        __int64 a1,
        __int64 a2,
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
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  const void *v20; // r12
  unsigned int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  unsigned int v30; // eax
  __m128 v31; // [rsp+0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+18h] [rbp-40h] BYREF
  _OWORD v33[3]; // [rsp+20h] [rbp-38h] BYREF

  v16 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( a2 & 7 | (a2 >> 3) & 1 )
  {
LABEL_5:
    v17 = sub_F6C520(v16 & 0xFFFFFFFFFFFFFFF0LL);
    sub_1E7C9B0(a1, *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), v17 * ((a3 - (a3 != 0)) / v17 + (a3 != 0)));
  }
  else
  {
    switch ( *(_BYTE *)(v16 + 16) )
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
        sub_1E7C7A0(a1, a2, a3);
        break;
      case 8:
        sub_1E7BE50(a1, a2, (_QWORD *)a3, a7, a8, a9, a10, a11, a12, a13, a14);
        break;
      case 9:
        v25 = sub_F6C520(*(_QWORD *)(a2 + 32));
        sub_1E7C400(a1, *(_QWORD *)(a2 + 32), v25 * ((a3 + 1 - (a3 != -1)) / v25 + (a3 != -1)));
        break;
      case 0xD:
        sub_1E5E570(a1 + 24, a2, (unsigned int *)a3);
        break;
      case 0xF:
        v28 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)a3 = *(_DWORD *)(v28 + 192);
        *(_DWORD *)(a3 + 4) = *(_DWORD *)(v28 + 216);
        break;
      case 0x10:
        sub_1E5D5E0(a1, a2, a3, a4, a5, a6);
        break;
      case 0x14:
      case 0x16:
        v19 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)&v33[0] = 0;
        sub_1E5F010(*(_QWORD *)(v19 + 8), v33);
        v20 = (const void *)(*(_QWORD *)&v33[0] + 8LL);
        v21 = sub_F6C560(a2);
        memcpy((void *)a3, v20, v21);
        break;
      case 0x18:
        sub_1E7CD50(a1, a2, a3);
        break;
      case 0x1B:
        v23 = sub_F6C520(*(_QWORD *)(a2 + 32));
        sub_1E7C400(a1, *(_QWORD *)(a2 + 32), v23 * ((a3 + 16 - (a3 != -16)) / v23 + (a3 != -16)));
        *(_QWORD *)a3 = sub_19F9E80(*(_QWORD *)(**(_QWORD **)(a1 + 16) + 680LL), a2);
        *(_QWORD *)(a3 + 8) = v24;
        break;
      case 0x1C:
        return;
      case 0x1E:
        sub_1E7C890(a1, a2, a3);
        break;
      case 0x22:
      case 0x23:
        v31.m128_u64[0] = a3;
        v22 = *(_QWORD *)(a1 + 24);
        v32 = 0;
        v33[0] = _mm_loadh_ps((const double *)v31.m128_u64);
        sub_1E5F010(*(_QWORD *)(v22 + 8), &v32);
        sub_F6C7F0((__int64)v33, *(_QWORD *)v32, (const __m128i *)(v32 + 8));
        break;
      case 0x24:
        v27 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)a3 = *(_DWORD *)(v27 + 192);
        *(_DWORD *)(a3 + 4) = *(_DWORD *)(v27 + 164);
        break;
      case 0x27:
        *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 204LL);
        break;
      case 0x29:
        sub_1E5F180(*(_QWORD *)(a1 + 24), a2, (_DWORD *)a3);
        break;
      case 0x2A:
        v29 = *(_QWORD *)(a2 + 32);
        v30 = sub_F6C520(v29);
        sub_1E7C400(a1, v29, v30 * ((a3 + 4 - (a3 != -4)) / v30 + (a3 != -4)));
        break;
      case 0x2F:
      case 0x30:
        *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 208LL);
        break;
      case 0x31:
        v31.m128_u64[0] = a3;
        v31 = _mm_loadh_ps((const double *)v31.m128_u64);
        sub_1E5F050(a1 + 8, (__int64 *)(a1 + 24), v31.m128_u64[0], (void *)v31.m128_u64[1]);
        break;
      case 0x33:
        v26 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)a3 = *(_DWORD *)(v26 + 192);
        *(_QWORD *)(a3 + 4) = *(_QWORD *)(v26 + 212);
        break;
      case 0x34:
      case 0x36:
        v18 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)a3 = *(_DWORD *)(v18 + 192);
        *(_QWORD *)(a3 + 4) = *(_QWORD *)(v18 + 212);
        *(_QWORD *)&v33[0] = 0;
        sub_1E5F010(*(_QWORD *)(v18 + 8), v33);
        *(_QWORD *)(a3 + 16) = *(_QWORD *)&v33[0];
        break;
      case 0x35:
        *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 192LL);
        break;
      case 0x3B:
        goto LABEL_5;
    }
  }
}
