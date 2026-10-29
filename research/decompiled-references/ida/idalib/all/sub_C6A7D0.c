__int64 __fastcall sub_C6A7D0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // r12
  __int64 v8; // kr00_8
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // r12d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  void *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rsi
  __m128i *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  __m128i v31; // [rsp+0h] [rbp-F8h] BYREF
  char v32; // [rsp+10h] [rbp-E8h]
  void *v33; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-A8h]
  __int64 v36; // [rsp+58h] [rbp-A0h]
  int v37; // [rsp+60h] [rbp-98h]
  char v38; // [rsp+64h] [rbp-94h]
  __int64 v39; // [rsp+68h] [rbp-90h] BYREF
  void *ptr; // [rsp+70h] [rbp-88h]
  __int64 v41; // [rsp+78h] [rbp-80h]
  _BYTE v42[120]; // [rsp+80h] [rbp-78h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  v8 = (((*(_WORD *)(a2 + 2) >> 3) & 0x7F) + 99) & 0x7F;
  switch ( (char)v8 )
  {
    case 0:
      v13 = *(_QWORD *)a1;
      LODWORD(v34) = 1;
      v33 = nullptr;
      BYTE4(v34) = 0;
      v14 = *(_QWORD *)(v13 + 16);
      v15 = *(_QWORD *)(v14 + 2320);
      if ( (*(_QWORD *)a2 & 0x8000000LL) != 0 )
      {
        sub_BFA6D0(a2);
        sub_BF6C80((unsigned int *)&v31, v15);
      }
      else
      {
        sub_FEAD90(*(_QWORD *)(v14 + 2320));
      }
      v11 = sub_C47260(v7, (__int64)&v33, *(_QWORD *)a1, v16, v17, v18);
      if ( (_BYTE)v11 )
        v11 = sub_C18050(*(_QWORD *)a1, a2, (__int64)&v33, *(_QWORD *)(a2 + 8), *(_QWORD **)(a1 + 8));
      if ( (unsigned int)v34 > 0x40 )
      {
        v19 = v33;
        if ( v33 )
          goto LABEL_13;
      }
      break;
    case 2:
      LODWORD(v33) = sub_AAE100(*(_QWORD *)(*(_QWORD *)a1 + 16LL), *(_QWORD *)(v7 + 8), v8, a4);
      sub_C16A40((__int64)&v31, 0, &v33);
      v11 = sub_C69980(v7, (__int64)&v31, *(_QWORD *)a1, v20, v21, v22);
      if ( (_BYTE)v11 )
      {
        v23 = sub_A62D20(*(_QWORD **)(*(_QWORD *)a1 + 16LL), *(_QWORD *)(a2 + 8));
        sub_21F6CB0(&v33, &v31, v23);
        sub_C177C0(*(__int64 **)(a1 + 8), (__int64 *)&v33);
        sub_9955A0(&v33);
      }
      if ( v31.m128i_i32[2] > 0x40u )
      {
        v19 = (void *)v31.m128i_i64[0];
        if ( v31.m128i_i64[0] )
LABEL_13:
          operator delete[](v19);
      }
      break;
    case 10:
      v11 = sub_C6ACF0(a1, *(_QWORD *)(a2 + 16));
      if ( (_BYTE)v11 )
        v11 = sub_C17F00(*(_QWORD *)a1, a2, *(_QWORD *)(a2 + 8), *(_QWORD **)(a1 + 8));
      break;
    case 16:
      LODWORD(v35) = 1;
      v34 = 0;
      BYTE4(v35) = 0;
      v37 = 1;
      v36 = 0;
      v38 = 0;
      v24 = sub_21F90F0();
      if ( v24 == sub_21F90D0() )
      {
        sub_21FFBD0(&v39, v24);
        sub_21FFBD0(v42, v24);
      }
      else
      {
        sub_21FBA00(&v39, v24);
        sub_21FBA00(v42, v24);
      }
      v25 = *(_QWORD *)a1;
      v31.m128i_i64[1] = (__int64)&v33;
      v31.m128i_i64[0] = v25;
      v11 = sub_C72E70(&v31, v7);
      if ( (_BYTE)v11 )
        sub_C17220(*(__int64 **)(a1 + 8), &v39);
      sub_C17D80((__int64)&v33);
      break;
    case 36:
      v9 = *(_QWORD *)a1;
      v10 = *(_QWORD *)(a2 + 16);
      LODWORD(v33) = 0;
      BYTE4(v33) &= ~1u;
      v31.m128i_i64[0] = v9;
      v31.m128i_i64[1] = (__int64)&v33;
      v11 = sub_C6CD60(&v31, v10);
      if ( (_BYTE)v11 )
        sub_C17220(*(__int64 **)(a1 + 8), (__int64 *)(v34 + 8));
      else
        v11 = sub_C14310(*(_QWORD *)a1, a2);
LABEL_4:
      if ( (unsigned int)v33 > 1 )
        sub_A4F8E0((int *)&v33);
      break;
    default:
      switch ( (((*(_WORD *)(a2 + 2) >> 3) & 0x7F) + 125) & 0x7F )
      {
        case 0:
          v30 = *(_QWORD *)a1;
          v31.m128i_i8[4] &= ~1u;
          BYTE4(v33) &= ~1u;
          v31.m128i_i32[0] = 0;
          LODWORD(v33) = 0;
          if ( (unsigned __int8)sub_C39A10((__int64)&v33, v30, v7, a4, a5)
            && (v11 = sub_C36960(*(_QWORD *)a1, (__int64)&v31, (__int64)&v33, a2), (_BYTE)v11) )
          {
            sub_C17220(*(__int64 **)(a1 + 8), &v31.m128i_i64[1]);
          }
          else
          {
            v11 = 0;
          }
          if ( (unsigned int)v33 > 1 )
            sub_A4F8E0((int *)&v33);
          if ( v31.m128i_i32[0] > 1u )
            sub_A4F8E0(v31.m128i_i32);
          break;
        case 1:
          v27 = *(__m128i **)(a2 + 16);
          LOBYTE(v36) = v36 | 1;
          v33 = nullptr;
          ptr = v42;
          v41 = 0x800000000LL;
          v28 = *(_QWORD *)a1;
          v34 = 0;
          v35 = 0;
          v39 = 0;
          v42[65] = 0;
          v31.m128i_i64[0] = v28;
          v31.m128i_i64[1] = (__int64)&v33;
          v32 = 0;
          v11 = sub_C5C820(&v31, v27, v8, a4, a5, a6);
          if ( (_BYTE)v11 )
          {
            v29 = *(_QWORD *)(a2 + 16);
            v31.m128i_i8[4] &= ~1u;
            v31.m128i_i32[0] = 0;
            v11 = sub_C36570(*(_QWORD *)a1, (_DWORD *)a2, *(_QWORD *)(v29 + 8), (__int64)&v33, (__int64)&v31, 0);
            if ( (_BYTE)v11 )
              sub_C17220(*(__int64 **)(a1 + 8), &v31.m128i_i64[1]);
            if ( v31.m128i_i32[0] > 1u )
              sub_A4F8E0(v31.m128i_i32);
          }
          if ( ptr != v42 )
            free(ptr);
          break;
        case 2:
        case 0x10:
          v11 = sub_C6ACF0(a1, *(_QWORD *)(a2 + 16));
          break;
        case 0x37:
        case 0x3C:
          v26 = *(_QWORD *)a1;
          LODWORD(v33) = 0;
          BYTE4(v33) &= ~1u;
          v11 = sub_C39A10((__int64)&v33, v26, v7, a4, a5);
          if ( (_BYTE)v11 )
            sub_C17220(*(__int64 **)(a1 + 8), &v34);
          goto LABEL_4;
        default:
          v11 = sub_C14310(*(_QWORD *)a1, a2);
          break;
      }
      break;
  }
  return v11;
}
