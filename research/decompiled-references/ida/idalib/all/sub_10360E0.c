char __fastcall sub_10360E0(_DWORD *a1, __int64 a2, unsigned __int8 *a3, __int64 a4, unsigned int a5)
{
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 *v7; // r12
  __int64 v8; // r9
  char result; // al
  char v10; // al
  char v13; // al
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64); // r13
  size_t v15; // rax
  char v16; // al
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64); // r13
  size_t v18; // rax
  char v19; // al
  size_t v20; // rax
  char v21; // al
  __int64 (__fastcall *v22)(__int64, __int64, __int64, __int64); // r13
  size_t v23; // rax
  __int64 (__fastcall *v24)(__int64, __int64, __int64, __int64); // r15
  size_t v25; // rax
  size_t v26; // r13
  unsigned int v27; // eax
  int v28; // eax
  __int64 *v29; // rsi
  __int64 *v30; // r15
  char v31; // al
  __int64 (__fastcall *v32)(__int64, __int64, __int64, __int64); // r13
  size_t v33; // rax
  char v34; // al
  size_t v35; // rax
  size_t v36; // r15
  unsigned int v37; // eax
  int v38; // eax
  __int64 *v39; // rsi
  __int64 *v40; // r12
  char v41; // al
  __int64 *v42[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( (unsigned __int8)(*a3 - 65) <= 0x30u )
  {
    v8 = 0x1000F00070008LL;
    if ( _bittest64(&v8, (unsigned int)*a3 - 65) )
      return a5 <= 0x20;
    if ( *a3 == 65 )
      return a5 <= 0x40;
  }
  v10 = *a3 - 89;
  v42[4] = v7;
  v42[3] = v6;
  v42[2] = v5;
  switch ( v10 )
  {
    case 0:
      v13 = a3[1];
      if ( v13 == 107 )
        return a5 <= 0x40;
      if ( v13 <= 107 )
      {
        if ( v13 != 50 && v13 != 105 )
          return 0;
        return a1[128] > 1;
      }
      if ( v13 == 116 )
        return a1[128] > 1;
      if ( v13 != 122 )
      {
        if ( v13 == 109 )
          return a5 <= 0x40;
        return 0;
      }
      v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL);
      v15 = j__strlen("avx512f");
      if ( v14 == sub_FF8820 )
        v16 = sub_1068030(a2, "avx512f", v15);
      else
        v16 = v14((__int64)a1, a2, (__int64)"avx512f", v15);
      v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL);
      if ( v16 )
      {
        v18 = j__strlen("evex512");
        if ( v17 == sub_FF8820 )
          v19 = sub_1068030(a2, "evex512", v18);
        else
          v19 = v17((__int64)a1, a2, (__int64)"evex512", v18);
        if ( v19 )
          return a5 <= 0x200;
        v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL);
      }
      v20 = j__strlen("avx");
      if ( v17 == sub_FF8820 )
        v21 = sub_1068030(a2, "avx", v20);
      else
        v21 = v17((__int64)a1, a2, (__int64)"avx", v20);
      if ( v21 )
        return a5 <= 0x100;
      v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL);
      v23 = j__strlen("sse");
      if ( v22 == sub_FF8820 )
        result = sub_1068030(a2, "sse", v23);
      else
        result = v22((__int64)a1, a2, (__int64)"sse", v23);
      if ( result )
        return a5 <= 0x80;
      return result;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 14:
    case 15:
    case 16:
    case 17:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 30:
      return 1;
    case 13:
    case 27:
    case 28:
      return a5 <= 0x80;
    case 18:
    case 32:
      return a5 <= 0x40;
    case 29:
    case 31:
      v24 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL);
      v25 = j__strlen("avx512f");
      v26 = v25;
      if ( v24 == sub_FF8820 )
      {
        v27 = sub_2244B30("avx512f", v25);
        v28 = sub_2244E60(a2, "avx512f", v26, v27);
        if ( v28 == -1 )
          v29 = (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8));
        else
          v29 = (__int64 *)(*(_QWORD *)a2 + 8LL * v28);
        sub_EC0F90(v42, v29, 1);
        v30 = v42[0];
        sub_EC0F90(v42, (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8)), 1);
        if ( v30 == v42[0] )
          goto LABEL_38;
        v31 = *(_BYTE *)(*v30 + 8);
      }
      else
      {
        v31 = v24((__int64)a1, a2, (__int64)"avx512f", v25);
      }
      v32 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL);
      if ( !v31 )
        goto LABEL_39;
      v33 = j__strlen("evex512");
      if ( v32 == sub_FF8820 )
        v34 = sub_1068030(a2, "evex512", v33);
      else
        v34 = v32((__int64)a1, a2, (__int64)"evex512", v33);
      if ( v34 )
        return a5 <= 0x200;
LABEL_38:
      v32 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL);
LABEL_39:
      v35 = j__strlen("avx");
      v36 = v35;
      if ( v32 == sub_FF8820 )
      {
        v37 = sub_2244B30("avx", v35);
        v38 = sub_2244E60(a2, "avx", v36, v37);
        if ( v38 == -1 )
          v39 = (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8));
        else
          v39 = (__int64 *)(*(_QWORD *)a2 + 8LL * v38);
        sub_EC0F90(v42, v39, 1);
        v40 = v42[0];
        sub_EC0F90(v42, (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8)), 1);
        if ( v42[0] == v40 )
          return a5 <= 0x80;
        v41 = *(_BYTE *)(*v40 + 8);
      }
      else
      {
        v41 = v32((__int64)a1, a2, (__int64)"avx", v35);
      }
      if ( v41 )
        return a5 <= 0x100;
      return a5 <= 0x80;
    default:
      return 1;
  }
}
