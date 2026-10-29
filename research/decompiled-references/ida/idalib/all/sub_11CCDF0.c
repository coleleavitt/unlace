void __fastcall sub_11CCDF0(__int64 *a1, __m128i *a2, __int64 *a3, __int64 a4, __m128i *a5, void *a6)
{
  char v6; // r12
  void *v8; // rsi
  signed __int64 v9; // rdx
  __int64 *v10; // r13
  __int64 *v11; // r14
  char *v12; // rax
  char *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-A0h]
  void *v19[2]; // [rsp+8h] [rbp-98h] BYREF
  __int64 v20; // [rsp+18h] [rbp-88h]
  __int64 *v21; // [rsp+28h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+30h] [rbp-70h]
  __int64 v23; // [rsp+38h] [rbp-68h] BYREF

  v6 = (char)a6;
  *(_OWORD *)v19 = 0;
  v20 = 0;
  switch ( a2[2].m128i_i32[0] )
  {
    case 1:
    case 2:
    case 0x23:
    case 0x24:
      sub_1142E00(a1, a2, a3, v19, (unsigned __int8)a5, 0);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 3:
    case 4:
    case 5:
      sub_1139CE0(a1, a2, a3, (__int64)v19, (unsigned __int8)a5, 0);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0xA:
      sub_1148850(a1, (__int64)a2, (__int64)a3, a4, (__int64 *)v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0xC:
      sub_12478B0(a1, a2, a3, v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0xD:
    case 0xE:
      sub_114E160(a1, a2, a3, (__int64 *)v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0xF:
      sub_1151BC0((__int64)a1, (__int64)a2, (__int64)a3, (__int64)v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      sub_1154D10(a1, a2, (__int64)a3, (__int64)v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0x14:
      sub_12807D0(a1, a3, v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      sub_11579E0(a1, a2, (__int64)a3, (__int64)v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0x19:
    case 0x1A:
      sub_1170F90((__int64)a1, (__int64)a2, (__int64)a3, (__int64)v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0x1B:
    case 0x1C:
      sub_115A4C0(a1, a2->m128i_i64, (__int64)a3, v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0x1D:
    case 0x1E:
    case 0x1F:
      sub_115D790(a1, a2, (__int64)a3, (__int64)v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0x20:
      sub_115FA10(a1, (__int64)a3, (__int64)v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0x25:
    case 0x26:
      sub_1160A20((__int64)a1, a2, a3, (__int64)v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0x29:
    case 0x2A:
      sub_11E0750(a1, a2, a3, v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0x37:
    case 0x38:
      sub_11CC730(a1, a2, (__int64)a3, (__int64)v19, 61);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    case 0x3B:
      sub_1160000((__int64)a1, (__int64)a3, (__int64)v19);
      v8 = v19[0];
      v9 = ((char *)v19[1] - (char *)v19[0]) >> 4;
      break;
    default:
      v9 = 0;
      v8 = nullptr;
      break;
  }
  sub_11C2BD0(&v21, (__int64)v8, v9, a4, a5, a6);
  v10 = v21;
  v11 = &v21[2 * v22];
  if ( v21 != v11 )
  {
    v12 = "-target-feature";
    if ( v6 )
      v12 = "-aux-target-feature";
    v18 = a4 + 16;
    v13 = v12;
    v14 = *(unsigned int *)(a4 + 8);
    do
    {
      v15 = *v10;
      if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
      {
        sub_2237220(a4, v18, v14 + 1, 8);
        v14 = *(unsigned int *)(a4 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a4 + 8 * v14) = v13;
      v16 = *(unsigned int *)(a4 + 12);
      v17 = (unsigned int)(*(_DWORD *)(a4 + 8) + 1);
      *(_DWORD *)(a4 + 8) = v17;
      if ( v17 + 1 > v16 )
      {
        sub_2237220(a4, v18, v17 + 1, 8);
        *(_QWORD *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8)) = v15;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)a4 + 8 * v17) = v15;
      }
      v10 += 2;
      v14 = (unsigned int)(*(_DWORD *)(a4 + 8) + 1);
      *(_DWORD *)(a4 + 8) = v14;
    }
    while ( v11 != v10 );
    v11 = v21;
  }
  if ( v11 != &v23 )
    free(v11);
  if ( v19[0] )
    operator delete(v19[0]);
}
