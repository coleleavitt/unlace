void __fastcall sub_AD0A70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 **v6; // r14
  unsigned __int64 **v7; // rbp
  unsigned __int64 v8; // rsi
  __int64 (__fastcall *v9)(_QWORD *, unsigned __int64, int); // rax
  __int64 v10; // rax
  int v11; // edi
  __int64 *v12; // rcx
  unsigned int v13; // edx
  __int64 *v14; // r11
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 *i; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdi
  char v21; // al
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // r15
  _QWORD *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-118h]
  unsigned __int64 v34; // [rsp+10h] [rbp-108h]
  __int64 v35; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v36; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-E0h]
  __m128i v38; // [rsp+40h] [rbp-D8h] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-C0h]
  _BYTE v41[184]; // [rsp+60h] [rbp-B8h] BYREF

  ptr = v41;
  v40 = 0x1000000000LL;
  sub_AC75E0(*(unsigned int **)(*(_QWORD *)(a1 + 32) + 32LL), a4, (__int64)&ptr);
  v33 = sub_ACDB80(
          a3,
          a3 + 88,
          a2,
          *(_DWORD *)(a1 + 44),
          *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 44)) + 80));
  v6 = (unsigned __int64 **)ptr;
  v7 = (unsigned __int64 **)((char *)ptr + 8 * (unsigned int)v40);
  if ( v7 != ptr )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = **v6;
        v9 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64, int))(*(_QWORD *)a3 + 16LL);
        if ( v9 == sub_AD0270 )
          break;
        v26 = v9((_QWORD *)a3, v8, 0);
LABEL_22:
        if ( !v26 )
          goto LABEL_14;
LABEL_23:
        if ( *(_WORD *)(v26 + 4) )
          goto LABEL_14;
        v27 = *(_QWORD **)(*(_QWORD *)(v26 + 16) + 24LL);
        if ( !v27 )
          goto LABEL_14;
        if ( *v27 != (*(unsigned int *)(a1 + 16) | 0xD00000000LL) )
          goto LABEL_14;
        v28 = sub_1684260(a1 + 16, v26);
        if ( !v28 )
          goto LABEL_14;
        v29 = sub_ACDB80(
                a3,
                a3 + 120,
                v28,
                *(_DWORD *)(a1 + 40) - 1,
                *(_QWORD *)(v28 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 40) - 1) + 48));
        sub_ACE1D0(v33, v29);
        if ( v7 == ++v6 )
          goto LABEL_15;
      }
      v10 = *(unsigned int *)(a3 + 208);
      v11 = *(_DWORD *)(v8 + 12);
      v12 = *(__int64 **)(a3 + 200);
      v13 = v10 - 1;
      v10 *= 16;
      v14 = (__int64 *)((char *)v12 + v10);
      v15 = 16LL * (v11 & v13);
      v16 = &v12[(unsigned __int64)v15 / 8];
      if ( v15 != v10 )
      {
        for ( i = &v12[(unsigned __int64)v15 / 8]; v14 != i; i += 2 )
        {
          v18 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v18 + 12) == v11 && v8 == v18 )
            {
LABEL_21:
              v26 = i[1];
              goto LABEL_22;
            }
          }
          else if ( !v18 )
          {
            goto LABEL_10;
          }
        }
      }
      for ( ; v16 != v12; v12 += 2 )
      {
        v30 = *v12;
        if ( (unsigned __int64)*v12 > 1 )
        {
          if ( *(_DWORD *)(v30 + 12) == v11 && v8 == v30 )
          {
            i = v12;
            goto LABEL_21;
          }
        }
        else if ( !v30 )
        {
          break;
        }
      }
LABEL_10:
      v19 = *(_QWORD *)(a3 + 8);
      v34 = **v6;
      v36 = 0;
      v20 = *(_QWORD *)(a3 + 192);
      v37 = v19;
      v21 = sub_C05810(v20, v8, &v36, 0);
      v22 = a3 + 200;
      if ( !v21 )
      {
        v38 = (__m128i)v34;
        sub_686B20(v22, &v38);
        v35 = 0;
        sub_AC8490((_QWORD *)(a3 + 256), &v35);
        goto LABEL_12;
      }
      v26 = v36;
      v38 = _mm_unpacklo_epi64((__m128i)v34, (__m128i)(unsigned __int64)v36);
      sub_686B20(v22, &v38);
      v35 = v26;
      if ( v26 )
      {
        ++*(_DWORD *)(v26 + 8);
        sub_AC8490((_QWORD *)(a3 + 256), &v35);
        v31 = v36;
        if ( v36 )
        {
          v32 = v37;
          v25 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v32, v31);
        }
        goto LABEL_23;
      }
      sub_AC8490((_QWORD *)(a3 + 256), &v35);
LABEL_12:
      v23 = v36;
      if ( v36 && (v24 = v37, v25 = *(_DWORD *)(v36 + 8) == 1, --*(_DWORD *)(v36 + 8), v25) )
      {
        sub_15D7BC0(v24, v23);
        if ( v7 == ++v6 )
        {
LABEL_15:
          v6 = (unsigned __int64 **)ptr;
          break;
        }
      }
      else
      {
LABEL_14:
        if ( v7 == ++v6 )
          goto LABEL_15;
      }
    }
  }
  if ( v6 )
  {
    if ( v6 != (unsigned __int64 **)v41 )
      sub_186B220(v6);
  }
}

