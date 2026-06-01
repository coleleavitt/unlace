unsigned __int64 **__fastcall sub_AD13D0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v7; // r12
  __int64 (__fastcall *v8)(_QWORD *, unsigned __int64, int); // rax
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  int v11; // edi
  __int64 *v12; // rcx
  unsigned int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 *i; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  char v22; // al
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  unsigned __int64 **result; // rax
  __int64 v28; // r15
  _DWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 **v32; // r15
  __int64 *v33; // r14
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rax
  int v39; // r8d
  __m128i *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 **v43; // [rsp+0h] [rbp-128h]
  __int64 **v44; // [rsp+8h] [rbp-120h]
  unsigned __int64 **ptr; // [rsp+10h] [rbp-118h]
  __int64 v46; // [rsp+18h] [rbp-110h]
  __int64 v47; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v48; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v49; // [rsp+48h] [rbp-E0h]
  __m128i v50; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 **v51; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+68h] [rbp-C0h]
  _BYTE v53[184]; // [rsp+70h] [rbp-B8h] BYREF

  v51 = (unsigned __int64 **)v53;
  v52 = 0x1000000000LL;
  sub_AC75E0(*(unsigned int **)(*(_QWORD *)(a1 + 32) + 32LL), a4, (__int64)&v51);
  ptr = &v51[(unsigned int)v52];
  if ( v51 != ptr )
  {
    v43 = v51;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *v43;
        v8 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64, int))(*(_QWORD *)a3 + 16LL);
        v9 = **v43;
        if ( v8 == sub_AD0270 )
          break;
        v28 = v8((_QWORD *)a3, **v43, 0);
LABEL_23:
        if ( !v28 )
          goto LABEL_15;
LABEL_24:
        if ( *(_WORD *)(v28 + 4) )
          goto LABEL_15;
        v29 = *(_DWORD **)(*(_QWORD *)(v28 + 16) + 24LL);
        if ( !v29 )
          goto LABEL_15;
        if ( *(_DWORD *)(a1 + 16) != *v29 )
          goto LABEL_15;
        if ( v29[1] != 13 )
          goto LABEL_15;
        v30 = sub_1684260(a1 + 16, v28);
        if ( !v30 )
          goto LABEL_15;
        v31 = sub_ACDB80(
                a3,
                a3 + 120,
                v30,
                *(_DWORD *)(a1 + 40) - 1,
                *(_QWORD *)(v30 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 40) - 1) + 48));
        v32 = (__int64 **)v7[7];
        v46 = v31;
        if ( !v32 )
          goto LABEL_15;
        v44 = &v32[*((unsigned int *)v32 - 1)];
        if ( v44 == v32 )
          goto LABEL_15;
        do
        {
          v33 = *v32;
          v34 = **v32;
          if ( (!(unsigned int)sub_8E7030(a4)
             || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a4 + 7488) + 56LL))(
                  *(_QWORD *)(a4 + 7488),
                  v34))
            && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) == *(_QWORD *)(*v33 + 16) )
          {
            v38 = v33[*(unsigned int *)(a1 + 40) + 14];
            v39 = *(_DWORD *)(v38 + 36);
            v40 = *(__m128i **)v38;
            v41 = v46;
            do
            {
              v42 = v41;
              v41 = *(_QWORD *)(v41 + 8);
            }
            while ( v41 );
            sub_AD0E00(*(_QWORD *)(v42 + 56), v40, v39);
          }
          ++v32;
        }
        while ( v32 != v44 );
        if ( ptr == ++v43 )
        {
LABEL_16:
          ptr = v51;
          goto LABEL_17;
        }
      }
      v10 = *(unsigned int *)(a3 + 208);
      v11 = *(_DWORD *)(v9 + 12);
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
            if ( *(_DWORD *)(v18 + 12) == v11 && v9 == v18 )
            {
LABEL_22:
              v28 = i[1];
              goto LABEL_23;
            }
          }
          else if ( !v18 )
          {
            goto LABEL_11;
          }
        }
      }
      for ( ; v16 != v12; v12 += 2 )
      {
        v35 = *v12;
        if ( (unsigned __int64)*v12 > 1 )
        {
          if ( *(_DWORD *)(v35 + 12) == v11 && v9 == v35 )
          {
            i = v12;
            goto LABEL_22;
          }
        }
        else if ( !v35 )
        {
          break;
        }
      }
LABEL_11:
      v19 = *(_QWORD *)(a3 + 8);
      v20 = *(_QWORD *)(a3 + 192);
      v21 = **v43;
      v48 = 0;
      v49 = v19;
      v22 = sub_C05810(v20, v21, &v48, 0);
      v23 = a3 + 200;
      if ( !v22 )
      {
        v50 = (__m128i)v9;
        sub_686B20(v23, &v50);
        v47 = 0;
        sub_AC8490((_QWORD *)(a3 + 256), &v47);
        goto LABEL_13;
      }
      v28 = v48;
      v50 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)(unsigned __int64)v48);
      sub_686B20(v23, &v50);
      v47 = v28;
      if ( v28 )
      {
        ++*(_DWORD *)(v28 + 8);
        sub_AC8490((_QWORD *)(a3 + 256), &v47);
        v36 = v48;
        if ( v48 )
        {
          v37 = v49;
          v26 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v37, v36);
        }
        goto LABEL_24;
      }
      sub_AC8490((_QWORD *)(a3 + 256), &v47);
LABEL_13:
      v24 = v48;
      if ( v48 && (v25 = v49, v26 = *(_DWORD *)(v48 + 8) == 1, --*(_DWORD *)(v48 + 8), v26) )
      {
        sub_15D7BC0(v25, v24);
        if ( ptr == ++v43 )
          goto LABEL_16;
      }
      else
      {
LABEL_15:
        if ( ptr == ++v43 )
          goto LABEL_16;
      }
    }
  }
LABEL_17:
  result = ptr;
  if ( ptr )
  {
    if ( ptr != (unsigned __int64 **)v53 )
      return (unsigned __int64 **)sub_186B220(ptr);
  }
  return result;
}

