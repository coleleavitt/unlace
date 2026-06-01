__int64 __fastcall sub_8DF560(__int64 a1, unsigned int *a2, double a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // r14d
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rsi
  bool v11; // zf
  _DWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  unsigned int v17; // r15d
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // r13d
  __int64 v23; // rdx
  unsigned int *v24; // rcx
  unsigned int *i; // r8
  unsigned __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rax
  void *v29; // r8
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // r15d
  __int64 v33; // rbx
  size_t v34; // r12
  __int64 v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // edx
  int v40; // eax
  char *v41; // rcx
  __int64 v42; // r15
  unsigned int v43; // eax
  unsigned int v44; // ebx
  unsigned int v45; // ecx
  unsigned int *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rdx
  void *v49; // rdi
  int v50; // ecx
  _QWORD *v51; // rdx
  char **exception; // r12
  __int64 v53; // rdx
  void *v54; // [rsp+8h] [rbp-1C0h]
  void *v55; // [rsp+8h] [rbp-1C0h]
  bool v56; // [rsp+18h] [rbp-1B0h]
  int v57; // [rsp+18h] [rbp-1B0h]
  void *v58; // [rsp+18h] [rbp-1B0h]
  unsigned int v59; // [rsp+24h] [rbp-1A4h]
  unsigned int *v60; // [rsp+28h] [rbp-1A0h]
  unsigned int v61; // [rsp+28h] [rbp-1A0h]
  int v62; // [rsp+28h] [rbp-1A0h]
  char v63; // [rsp+28h] [rbp-1A0h]
  unsigned int *v64; // [rsp+30h] [rbp-198h]
  void *v65; // [rsp+38h] [rbp-190h]
  int v66; // [rsp+4Ch] [rbp-17Ch] BYREF
  int v67[2]; // [rsp+50h] [rbp-178h] BYREF
  __int64 v68; // [rsp+58h] [rbp-170h]
  __int64 v69; // [rsp+60h] [rbp-168h]
  __int64 v70; // [rsp+68h] [rbp-160h]
  _QWORD v71[4]; // [rsp+70h] [rbp-158h] BYREF
  int v72; // [rsp+90h] [rbp-138h]
  _QWORD v73[4]; // [rsp+A0h] [rbp-128h] BYREF
  int v74; // [rsp+C0h] [rbp-108h]
  _QWORD v75[2]; // [rsp+D0h] [rbp-F8h] BYREF
  _QWORD v76[2]; // [rsp+E0h] [rbp-E8h] BYREF
  int v77; // [rsp+F0h] [rbp-D8h]
  _BYTE v78[36]; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+124h] [rbp-A4h]
  __int64 v80; // [rsp+12Ch] [rbp-9Ch]
  _QWORD v81[4]; // [rsp+134h] [rbp-94h] BYREF
  __int64 v82; // [rsp+154h] [rbp-74h]
  _QWORD v83[4]; // [rsp+15Ch] [rbp-6Ch] BYREF
  __int64 v84; // [rsp+17Ch] [rbp-4Ch]

  if ( !*(_BYTE *)(a1 + 584) )
    return 0;
  if ( *((_WORD *)a2 + 2)
    || (v5 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) == nullptr
    || *v5 != 5
    || (v8 = v5[1], v8 != 2) && v8 != 3 )
  {
    sub_8ACA70(a1, (__int64)a2, a3);
    return 0;
  }
  v9 = *((_QWORD *)a2 + 5);
  v10 = *((_QWORD *)a2 + 4);
  *(_QWORD *)v67 = 0;
  v69 = 1;
  v68 = 0;
  v11 = *(_WORD *)(v9 + 4) == 0;
  v70 = 0;
  if ( v11 && (v12 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL)) != nullptr && *v12 == 5 && !v12[1] )
  {
    v11 = v8 == 3;
    v13 = v9;
    v9 = v10;
    v56 = v11;
    v10 = v13;
  }
  else
  {
    v56 = v8 != 3;
  }
  v6 = sub_1666AE0(a1 + 112, v10, v67, v75);
  if ( (_BYTE)v6 )
  {
    v71[0] = 0;
    v71[1] = 0;
    v71[2] = 1;
    v71[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v71, v67);
    v72 = 0;
    sub_41D160((__int64 *)(a1 + 640));
    v14 = *(_QWORD *)(a1 + 656);
    if ( v14 )
      *(_DWORD *)(v14 - 4) = 0;
    *(_QWORD *)v78 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    sub_892DF0((_QWORD *)(a1 + 648), v78);
    v78[0] = 1;
    sub_893820((_QWORD *)(a1 + 656), v78);
    v6 = sub_8B8A80(a1, a1 + 640, (unsigned int **)(a1 + 656));
    if ( !(_BYTE)v6 )
    {
      sub_8ACA70(a1, (__int64)a2, a3);
      goto LABEL_31;
    }
    v15 = *(__int64 **)(a1 + 648);
    v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 392LL);
    if ( v15 && *((_DWORD *)v15 - 1) == 2 && (v41 = *(char **)(a1 + 656), v63 = *v41, *v41 != v41[1]) )
    {
      v42 = v15[1];
      v59 = v16(a1, *v15);
      v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 392LL))(a1, v42);
      if ( v63 )
      {
        v43 = v59;
        v59 = v17;
        v17 = v43;
      }
    }
    else
    {
      v17 = v16(a1, v9);
      if ( (unsigned __int8)sub_892DC0(v9) )
        v59 = *(_DWORD *)(a1 + 588);
      else
        v59 = *(_DWORD *)(a1 + 592);
    }
    if ( v56 )
    {
      sub_1831620(qword_1C7F2C0, v71);
      v21 = v59;
      v72 = -v72;
      v59 = v17;
      v17 = v21;
    }
    v18 = *(_QWORD *)(a1 + 16);
    v19 = *(_QWORD *)(v18 + 8832);
    if ( !v19 || (v20 = *a2, (unsigned int)v20 >= *(_DWORD *)(v19 - 4)) || *(_DWORD *)(v19 + 4 * v20) == 0x7FFFFFFF )
    {
      v22 = sub_B67520(v18, a2);
      sub_8F1CE0(*(_QWORD *)(a1 + 16), v22, *(unsigned int *)(a1 + 8));
      v57 = 2 * v22;
      v66 = 2 * v22;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 104) + 356LL) )
      {
        v73[0] = 0;
        v73[1] = 0;
        *(_QWORD *)&v78[4] = 0xFFFFFFFEFFFFFFFELL;
        *(_OWORD *)&v78[12] = 0xFFFFFFFE;
        *(_QWORD *)&v78[28] = 0x100000000LL;
        v81[2] = 0x100000000LL;
        v83[2] = 0x100000000LL;
        v73[2] = 1;
        v73[3] = 0;
        v74 = 0;
        v79 = 0;
        v80 = 0;
        v81[0] = 0;
        v81[1] = 0;
        v81[3] = 0;
        v82 = 0;
        v83[0] = 0;
        v83[1] = 0;
        v83[3] = 0;
        v84 = 0;
        v75[0] = 0;
        v75[1] = 0;
        v76[0] = 1;
        v76[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v76);
        BYTE4(v76[0]) &= ~1u;
        *(_WORD *)v78 = 0;
        *(_QWORD *)&v78[4] = 0xFFFFFFFEFFFFFFFELL;
        LODWORD(v76[0]) = 1;
        v77 = 0;
        v78[2] = 0;
        *(_DWORD *)&v78[12] = -2;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v83 + 4, (int *)v75);
        HIDWORD(v84) = v77;
        v65 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v75);
        sub_182CBA0(v65, v76);
        *(_WORD *)v78 = 0;
        *(_QWORD *)&v78[4] = 0xFFFFFFFEFFFFFFFELL;
        v78[2] = 0;
        *(_DWORD *)&v78[12] = -2;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v83 + 4, (int *)v71);
        v23 = *(_QWORD *)(a1 + 264);
        HIDWORD(v84) = v72;
        v24 = *(unsigned int **)(v23 + 8LL * v59);
        if ( v24 )
        {
          for ( i = &v24[*(v24 - 1)]; i != v24; ++v24 )
          {
            v26 = *(_QWORD *)(a1 + 256) + ((unsigned __int64)*v24 << 6);
            if ( v17 == *(_DWORD *)(v26 + 4) )
            {
              v64 = v24;
              v60 = i;
              sub_8C1CD0((__int64)v78, v26 + 8, *(_DWORD *)(v26 + 52));
              v24 = v64;
              i = v60;
            }
          }
        }
        if ( v78[2] )
        {
          v61 = *(_DWORD *)&v78[12];
          sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), *(_DWORD *)&v78[12] ^ 1u, (unsigned int)v66, 0, 0);
          sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v57 ^ 1u, v61, 0, 0);
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v73, (int *)&v78[16]);
          v74 = HIDWORD(v80);
          if ( v78[0] )
            sub_B6A470(
              *(_QWORD *)(a1 + 16),
              *(unsigned int *)(a1 + 8),
              *(_DWORD *)&v78[4] ^ 1u,
              (unsigned int)v66,
              0,
              0);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v73, (int *)v81 + 1);
          v74 = HIDWORD(v82);
          if ( v78[1] )
            sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v57 ^ 1u, *(unsigned int *)&v78[8], 0, 0);
        }
        sub_8A86F0((__int64)v78);
        sub_25A130((char *)v73);
      }
      v62 = sub_8AD5A0(a1 + 216, v59, v17, (int *)v71, &v66);
      sub_1831620(qword_1C7F2C0, v71);
      v72 = -v72;
      if ( (unsigned __int8)sub_892DC0(v9) )
      {
        *(_QWORD *)v78 = 1;
        *(_QWORD *)&v78[8] = 0;
        *(_QWORD *)&v78[16] = 1;
        *(_QWORD *)&v78[24] = 0;
        sub_182CBA0(qword_1C7F2C0, &v78[16]);
        *(_DWORD *)&v78[16] = 1;
        v78[20] &= ~1u;
        *(_DWORD *)&v78[32] = 0;
        sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v71, (__int64)v78, (__int64)v71);
        v72 -= *(_DWORD *)&v78[32];
        sub_25A130(v78);
      }
      else
      {
        sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v71, a1 + 64, (__int64)v71);
        v72 -= *(_DWORD *)(a1 + 96);
      }
      *(_DWORD *)v78 = v57 ^ 1;
      v27 = sub_8AD5A0(a1 + 216, v17, v59, (int *)v71, (int *)v78);
      v28 = sub_186B270(0x10u);
      *(_DWORD *)v28 = v22;
      v29 = (void *)v28;
      v30 = *(_QWORD **)(a1 + 664);
      *(_BYTE *)(v28 + 4) = 0;
      *(_DWORD *)(v28 + 12) = v27;
      *(_DWORD *)(v28 + 8) = v62;
      if ( v30 )
      {
        v31 = *((_DWORD *)v30 - 1);
        if ( v31 == *((_DWORD *)v30 - 2) )
        {
          v44 = (3 * v31 + 1) >> 1;
          v45 = 8 * v44 + 8;
          if ( 8 * v31 + 8 >= v45 || v31 >= v44 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_12D192((__int64 *)v78, "Overflow encountered when expanding vector", v53);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v78);
            sub_233E40((__int64)v78);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v54 = v29;
          v46 = (unsigned int *)sub_186B300(v30 - 1, v45);
          v30 = v46 + 2;
          *v46 = v44;
          v29 = v54;
          *(_QWORD *)(a1 + 664) = v46 + 2;
          v31 = v46[1];
        }
      }
      else
      {
        v55 = (void *)v28;
        v51 = (_QWORD *)sub_186B270(0x18u);
        *v51 = 2;
        v29 = v55;
        v31 = 0;
        v30 = v51 + 1;
        *(_QWORD *)(a1 + 664) = v30;
      }
      v30[v31] = v29;
      *((_DWORD *)v30 - 1) = v31 + 1;
      v32 = *(_DWORD *)(a1 + 696);
      if ( 3 * v32 < 4 * (*(_DWORD *)(a1 + 700) + *(_DWORD *)(a1 + 704)) )
      {
        v58 = v29;
        v34 = 48LL * v32;
        v47 = (_QWORD *)sub_186B270(v34);
        v33 = (__int64)v47;
        if ( 2 * v32 )
        {
          v48 = &v47[6 * (v32 & 0x7FFFFFFF)];
          do
          {
            *v47 = 0;
            v47 += 6;
            *(v47 - 3) = 0;
          }
          while ( v48 != v47 );
        }
        sub_8DF450(*(const __m128i **)(a1 + 688), *(_DWORD *)(a1 + 696), v33, 2 * v32);
        v49 = *(void **)(a1 + 688);
        v50 = 2 * v32;
        v29 = v58;
        if ( v49 )
        {
          sub_186B220(v49);
          v50 = 2 * v32;
          v29 = v58;
        }
        *(_QWORD *)(a1 + 688) = v33;
        v32 = v50;
        *(_DWORD *)(a1 + 696) = v50;
        *(_DWORD *)(a1 + 704) = 0;
      }
      else
      {
        v33 = *(_QWORD *)(a1 + 688);
        v34 = 24LL * v32;
      }
      v35 = v22 & (v32 - 1);
      v36 = v33 + 24 * v35;
      if ( 24 * v35 != v34 )
      {
        v37 = v33 + 24 * v35;
        v38 = 0;
        while ( 1 )
        {
          v39 = *(_DWORD *)(v37 + 4);
          if ( v39 == 2 )
          {
            if ( v22 == *(_DWORD *)v37 && v22 == *(_DWORD *)(v37 + 8) )
            {
              *(_DWORD *)(v37 + 8) = v22;
              *(_QWORD *)(v37 + 16) = v29;
              *(_DWORD *)(v37 + 4) = 2;
              goto LABEL_31;
            }
          }
          else
          {
            if ( !v39 )
            {
              if ( v38 )
                goto LABEL_77;
              v38 = v37;
              goto LABEL_78;
            }
            v38 = v37;
          }
          v37 += 24;
          if ( v33 + v34 == v37 )
            goto LABEL_63;
        }
      }
      v38 = 0;
      while ( 1 )
      {
LABEL_63:
        if ( v36 == v33 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v40 = *(_DWORD *)(v33 + 4);
        if ( v40 == 2 )
        {
          if ( v22 == *(_DWORD *)v33 && v22 == *(_DWORD *)(v33 + 8) )
          {
            *(_DWORD *)(v33 + 8) = v22;
            *(_QWORD *)(v33 + 16) = v29;
            *(_DWORD *)(v33 + 4) = 2;
            break;
          }
        }
        else
        {
          if ( !v40 )
          {
            if ( v38 )
LABEL_77:
              --*(_DWORD *)(a1 + 704);
            else
              v38 = v33;
LABEL_78:
            *(_DWORD *)(v38 + 8) = v22;
            *(_QWORD *)(v38 + 16) = v29;
            *(_DWORD *)(v38 + 4) = 2;
            *(_DWORD *)v38 = v22;
            ++*(_DWORD *)(a1 + 700);
            break;
          }
          v38 = v33;
        }
        v33 += 24;
      }
    }
LABEL_31:
    sub_25A130((char *)v71);
  }
  else
  {
    sub_8ACA70(a1, (__int64)a2, a3);
  }
  sub_25A130((char *)v67);
  return v6;
}

