__int64 __fastcall sub_A893E0(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebp
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 i; // rdx
  unsigned int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdi
  char v15; // al
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // al
  __int64 result; // rax
  char *v23; // rdi
  int v24; // ecx
  char *v25; // rdx
  unsigned int v26; // esi
  char *v27; // rax
  unsigned int v28; // ebx
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rsi
  unsigned int v37; // edx
  int v38; // r14d
  int v39; // ebp
  int v40; // edx
  int v41; // r13d
  int v42; // r12d
  __int64 *v43; // rbp
  unsigned int v44; // ebx
  unsigned int v45; // esi
  _QWORD *v46; // rdx
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rbx
  unsigned __int64 v52; // r13
  int *v53; // r13
  void *v54; // rdi
  unsigned int v55; // eax
  __int64 v56; // r14
  int *v57; // r14
  bool v58; // al
  void *v59; // r14
  void *v60; // r14
  void *v61; // rbx
  unsigned int v62; // ebp
  size_t v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rdi
  _DWORD *v66; // r8
  __int64 v67; // r9
  unsigned __int64 v68; // rax
  __int64 v69; // r9
  _QWORD *v70; // rax
  char **exception; // rbx
  _QWORD *v72; // [rsp+8h] [rbp-F0h]
  __int64 v73; // [rsp+10h] [rbp-E8h]
  int v74; // [rsp+18h] [rbp-E0h]
  void *v75; // [rsp+18h] [rbp-E0h]
  void *v76; // [rsp+18h] [rbp-E0h]
  int v77; // [rsp+24h] [rbp-D4h]
  bool v78; // [rsp+24h] [rbp-D4h]
  unsigned int v79; // [rsp+28h] [rbp-D0h]
  unsigned int v80; // [rsp+28h] [rbp-D0h]
  _QWORD *v81; // [rsp+30h] [rbp-C8h]
  _DWORD *v82; // [rsp+38h] [rbp-C0h]
  _QWORD v83[2]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v84[2]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v85[2]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v86[2]; // [rsp+70h] [rbp-88h] BYREF
  char *v87[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v88[2]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v89[2]; // [rsp+A0h] [rbp-58h] BYREF
  _QWORD v90[9]; // [rsp+B0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 280);
  v3 = *(_DWORD *)(a1 + 288);
  if ( v2 )
    v4 = *(_DWORD *)(v2 - 4);
  else
    v4 = 0;
  if ( v3 != v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    v6 = sub_180C100(v5 + 8400, 24);
    *(_QWORD *)(v6 + 8) = a1 + 288;
    *(_QWORD *)v6 = &off_1C4C070;
    *(_DWORD *)(v6 + 16) = v3;
    v87[0] = (char *)v6;
    sub_A73EF0((_QWORD *)(v5 + 9456), v87);
    for ( i = *(_QWORD *)(a1 + 280); i; i = *(_QWORD *)(a1 + 280) )
    {
      v8 = *(_DWORD *)(a1 + 288);
      if ( v8 >= *(_DWORD *)(i - 4) )
        break;
      v9 = *(_QWORD *)(i + 8LL * v8);
      v10 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
      v11 = v9 >> 32;
      v72 = *(_QWORD **)(v10 + 8LL * (unsigned int)v9);
      v12 = HIDWORD(v9);
      v13 = *(_QWORD *)(v10 + 8LL * HIDWORD(v9));
      v14 = *(_QWORD *)(a1 + 328);
      *(_DWORD *)(a1 + 288) = v8 + 1;
      v73 = v13;
      if ( v14 && (v15 = sub_1021D60(v14, v10), v12 = HIDWORD(v9), v11 = v9 >> 32, v15) )
      {
        v16 = sub_1021D80(*(_QWORD *)(a1 + 328));
        v17 = sub_1021DB0(*(_QWORD *)(a1 + 328));
        v18 = sub_A87B40((_QWORD *)a1, HIDWORD(v9), v17);
        v19 = sub_1021DA0(*(_QWORD *)(a1 + 328));
        v20 = sub_A87B40((_QWORD *)a1, (unsigned int)v9, v19);
        v21 = sub_17B44D0(v16, v20, v18);
      }
      else
      {
        v51 = *(_QWORD *)(a1 + 504);
        v52 = 0x3FFFFFFFC0LL;
        if ( (_DWORD)v11 != -1 )
          v52 = (unsigned __int64)(unsigned int)sub_FF9FB0(*(_QWORD *)(a1 + 504), v12) << 6;
        v53 = (int *)(*(_QWORD *)(sub_FF9B20(v51) + 48) + v52);
        v83[0] = 0;
        v83[1] = 0;
        v84[0] = 1;
        v84[1] = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v83, v53);
        v85[0] = 0;
        v85[1] = 0;
        v86[0] = 1;
        v86[1] = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v85, v53 + 8);
        v54 = *(void **)(a1 + 504);
        if ( (_DWORD)v9 == -1 )
        {
          v56 = 0xFFFFFFFFLL;
        }
        else
        {
          v75 = *(void **)(a1 + 504);
          v55 = sub_FF9FB0(v54, (unsigned int)v9);
          v54 = v75;
          v56 = v55;
        }
        v57 = (int *)(*(_QWORD *)(sub_FF9B20(v54) + 48) + (v56 << 6));
        v87[0] = nullptr;
        v87[1] = nullptr;
        v88[0] = 1;
        v88[1] = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v87, v57);
        v89[0] = 0;
        v89[1] = 0;
        v90[0] = 1;
        v90[1] = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v89, v57 + 8);
        v58 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v83, (__int64)v87);
        if ( v58 )
          v58 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v85, (__int64)v89);
        v78 = v58;
        v76 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v89);
        sub_182CBA0(v76, v90);
        v59 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v87);
        sub_182CBA0(v59, v88);
        v60 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v85);
        sub_182CBA0(v60, v86);
        v61 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v83);
        sub_182CBA0(v61, v84);
        v21 = v78;
      }
      if ( v21 )
      {
        if ( v72[1] != *(_QWORD *)(v73 + 8) )
        {
          result = sub_966370(*(_QWORD *)a1, (__int64)v72, v73);
          if ( (_BYTE)result )
          {
            ++*(_DWORD *)(a1 + 484);
            return result;
          }
        }
      }
    }
  }
  sub_A88900(a1);
  if ( *(_DWORD *)(a1 + 412) || *(_DWORD *)(a1 + 416) )
  {
    v23 = *(char **)(a1 + 400);
    v24 = 0;
    v25 = &v23[8 * *(unsigned int *)(a1 + 408)];
    v26 = *(_DWORD *)(a1 + 408);
    v27 = v23;
    if ( v23 == v25 )
      goto LABEL_27;
    do
    {
      while ( *((_DWORD *)v27 + 1) != 0x80000000 )
      {
        *((_DWORD *)v27 + 1) = 0x80000000;
        v27 += 8;
        if ( v25 == v27 )
          goto LABEL_19;
      }
      v27 += 8;
      ++v24;
    }
    while ( v25 != v27 );
LABEL_19:
    if ( v26 <= 0x10 || 3 * v26 >= 4 * v24 )
      goto LABEL_27;
    if ( v23 )
    {
      sub_186B220(v23);
      v28 = *(_DWORD *)(a1 + 408);
      *(_QWORD *)(a1 + 400) = 0;
      v28 >>= 1;
      *(_DWORD *)(a1 + 408) = v28;
      v29 = v28;
      v30 = sub_186B270(8LL * v28);
      if ( !v28 )
      {
LABEL_26:
        *(_QWORD *)(a1 + 400) = v30;
LABEL_27:
        *(_QWORD *)(a1 + 412) = 0;
        goto LABEL_28;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 400) = 0;
      *(_DWORD *)(a1 + 408) = v26 >> 1;
      v29 = v26 >> 1;
      v30 = sub_186B270(8 * v29);
    }
    v31 = v30 + 8 * v29;
    v32 = v30;
    if ( (v29 & 1) == 0 || (v32 = v30 + 8, *(_DWORD *)(v30 + 4) = 0x80000000, v30 + 8 != v31) )
    {
      do
      {
        *(_DWORD *)(v32 + 4) = 0x80000000;
        v32 += 16;
        *(_DWORD *)(v32 - 4) = 0x80000000;
      }
      while ( v32 != v31 );
    }
    goto LABEL_26;
  }
LABEL_28:
  v33 = *(_QWORD *)a1;
  v34 = *(_QWORD *)(a1 + 280);
  v35 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v36 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v37 = 214013 * *(_DWORD *)(v35 + 7504) + 2531011;
  if ( v36 )
  {
    v38 = *(_DWORD *)(v36 - 4);
    if ( v34 )
      v39 = *(_DWORD *)(v34 - 4);
    else
      v39 = 0;
    *(_DWORD *)(v35 + 7504) = v37;
    v40 = HIWORD(v37) & 0x7FFF;
    v41 = v40;
    if ( v38 > 0 )
    {
      v77 = v39;
      v42 = v40 + v38;
      v74 = 0;
      while ( 1 )
      {
        v43 = *(__int64 **)(v36 + 8LL * (v41 % v38));
        v44 = v41 % v38;
        if ( (unsigned __int8)sub_966310(v33, v43) )
        {
          if ( !(unsigned __int8)sub_FFAE60(*(_QWORD *)(a1 + 504)) )
            sub_A7A1D0((_QWORD *)a1, v44);
          if ( (unsigned __int8)sub_FFAE60(*(_QWORD *)(a1 + 504)) )
          {
            LODWORD(v83[0]) = v41 % v38;
            v87[0] = nullptr;
            sub_A755C0(a1 + 384, (unsigned int *)v83, v87);
            v45 = *((_DWORD *)v87[0] + 1);
            if ( v44 != v45 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 8LL * v45) + 8LL) != v43[1] )
            {
              v46 = *(_QWORD **)(a1 + 280);
              if ( v46 )
              {
                v47 = *((unsigned int *)v46 - 1);
                if ( (_DWORD)v47 == *((_DWORD *)v46 - 2) )
                {
                  v62 = (unsigned int)(3 * v47 + 1) >> 1;
                  v63 = 8 * v62 + 8;
                  if ( 8 * (int)v47 + 8 >= (unsigned int)v63 || (unsigned int)v47 >= v62 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_137C7A(v87);
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v87);
                    sub_233E40((__int64)v87);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v79 = *((_DWORD *)v87[0] + 1);
                  v64 = sub_186B270(v63);
                  v65 = *(_QWORD *)(a1 + 280);
                  v45 = v79;
                  v66 = (_DWORD *)v64;
                  v46 = (_QWORD *)(v64 + 8);
                  if ( v65 )
                  {
                    v67 = *(unsigned int *)(v65 - 4);
                    *(_DWORD *)(v64 + 4) = v67;
                    v68 = 0;
                    v69 = 8 * v67;
                    if ( v69 )
                    {
                      do
                      {
                        *(_QWORD *)&v66[v68 / 4 + 2] = *(_QWORD *)(v65 + v68);
                        v68 += 8LL;
                      }
                      while ( v69 != v68 );
                    }
                    v82 = v66;
                    v81 = v46;
                    sub_186B220((void *)(v65 - 8));
                    v66 = v82;
                    v46 = v81;
                    v48 = &v81[v82[1]];
                  }
                  else
                  {
                    *(_DWORD *)(v64 + 4) = 0;
                    v48 = (_QWORD *)(v64 + 8);
                  }
                  *(_QWORD *)(a1 + 280) = v46;
                  *v66 = v62;
                }
                else
                {
                  v48 = &v46[v47];
                }
              }
              else
              {
                v80 = *((_DWORD *)v87[0] + 1);
                v70 = (_QWORD *)sub_186B270(0x18u);
                v45 = v80;
                v46 = v70 + 1;
                *v70 = 2;
                *(_QWORD *)(a1 + 280) = v70 + 1;
                v48 = v70 + 1;
              }
              ++v74;
              *v48 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v44), _mm_cvtsi32_si128(v45)).m128i_u64[0];
              ++*((_DWORD *)v46 - 1);
            }
          }
        }
        if ( v42 == ++v41 )
          break;
        v33 = *(_QWORD *)a1;
        v36 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
      }
      if ( v74 )
      {
        v49 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v50 = sub_180C100(v49 + 8400, 24);
        *(_QWORD *)v50 = off_1C55298;
        *(_QWORD *)(v50 + 8) = a1 + 280;
        *(_DWORD *)(v50 + 16) = v77;
        v87[0] = (char *)v50;
        sub_A73EF0((_QWORD *)(v49 + 9456), v87);
      }
    }
  }
  else
  {
    *(_DWORD *)(v35 + 7504) = v37;
  }
  return sub_A886E0(a1);
}

