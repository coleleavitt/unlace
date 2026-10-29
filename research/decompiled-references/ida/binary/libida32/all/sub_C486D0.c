__int64 __fastcall sub_C486D0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // r13d
  unsigned __int64 v11; // rbp
  __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // r12
  unsigned int v18; // ebp
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // r13
  __int64 v24; // rsi
  int *v25; // r8
  __int64 *v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r9d
  __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r15
  __int64 *v38; // rbp
  unsigned __int8 **v39; // rax
  unsigned __int8 **v40; // rbp
  __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  __int32 v43; // eax
  __int64 v44; // rdi
  __int64 v45; // rsi
  unsigned __int64 v46; // rdx
  __m128i *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 *v50; // r15
  __int64 v51; // rdi
  __int64 *v52; // rax
  __int64 *v53; // r15
  __int32 v54; // eax
  __int32 v55; // [rsp+0h] [rbp-1D8h]
  __int64 *v56; // [rsp+0h] [rbp-1D8h]
  signed __int64 v57; // [rsp+8h] [rbp-1D0h]
  int *v58; // [rsp+8h] [rbp-1D0h]
  void *v59; // [rsp+10h] [rbp-1C8h] BYREF
  unsigned int v60; // [rsp+18h] [rbp-1C0h]
  __int8 v61; // [rsp+1Ch] [rbp-1BCh]
  unsigned int v62; // [rsp+30h] [rbp-1A8h] BYREF
  char v63; // [rsp+34h] [rbp-1A4h]
  __int64 v64; // [rsp+38h] [rbp-1A0h]
  __m128i v65; // [rsp+70h] [rbp-168h] BYREF
  int v66; // [rsp+80h] [rbp-158h]
  __int64 *v67; // [rsp+B0h] [rbp-128h] BYREF
  unsigned __int64 v68; // [rsp+B8h] [rbp-120h]
  __int64 v69; // [rsp+C0h] [rbp-118h] BYREF
  char v70; // [rsp+C8h] [rbp-110h]
  __int64 v71; // [rsp+D8h] [rbp-100h]
  void *ptr; // [rsp+E0h] [rbp-F8h]
  __int64 v73; // [rsp+E8h] [rbp-F0h]
  _BYTE v74[232]; // [rsp+F0h] [rbp-E8h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = (unsigned int)*(unsigned __int8 *)(v8 + 16) - 57;
  if ( (unsigned int)v9 > 1 )
    v8 = sub_F3F310(v8, a2, v9, a4);
  v10 = *(_DWORD *)(v8 + 20);
  v11 = *(_QWORD *)(a2 + 16);
  v12 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  v13 = *(_QWORD *)(v11 + 8);
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x1A )
  {
    v63 &= ~1u;
    v27 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    v62 = 0;
    if ( sub_9C8B50(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), a2, v13, a4, a5) )
    {
      v31 = *a1;
      v60 = 1;
      v59 = nullptr;
      v61 = 0;
      v18 = sub_C23520(v11, (__int64)&v59, v31, v28, v29, v30);
      if ( !(_BYTE)v18 )
      {
        if ( v60 > 0x40 && v59 )
          operator delete[](v59);
        goto LABEL_29;
      }
      v43 = v60;
      v60 = 0;
      v65.m128i_i32[2] = v43;
      v65.m128i_i64[0] = (__int64)v59;
      v65.m128i_i8[12] = v61;
      sub_B72A30((__int64)&v67, v65.m128i_i64);
      sub_A2BFE0((__int64)&v62, (__int64)&v67);
      if ( (unsigned int)v67 > 1 )
        sub_A2BBA0((int *)&v67);
      if ( v65.m128i_i32[2] > 0x40u && v65.m128i_i64[0] )
        operator delete[]((void *)v65.m128i_i64[0]);
      if ( v60 > 0x40 && v59 )
        operator delete[](v59);
LABEL_36:
      v37 = v10;
      v67 = &v69;
      v68 = 0x400000000LL;
      if ( v10 > 4uLL )
      {
        v38 = (__int64 *)sub_22136C0(&v67, &v69, v10, 56, &v65);
        v50 = v38;
        do
        {
          v51 = (__int64)v50;
          v50 += 7;
          sub_A2FF00(v51, (int *)&v62);
        }
        while ( v50 != &v38[7 * v10] );
        v52 = v67;
        v53 = &v67[7 * (unsigned int)v68];
        if ( v67 != v53 )
        {
          do
          {
            while ( 1 )
            {
              v53 -= 7;
              if ( *(_DWORD *)v53 > 1u )
                break;
              if ( v52 == v53 )
                goto LABEL_86;
            }
            v56 = v52;
            sub_A2BBA0((int *)v53);
            v52 = v56;
          }
          while ( v56 != v53 );
LABEL_86:
          v53 = v67;
        }
        v54 = v65.m128i_i32[0];
        if ( v53 != &v69 )
        {
          v55 = v65.m128i_i32[0];
          free(v53);
          v54 = v55;
        }
        v67 = v38;
        v68 = __PAIR64__(v54, v10);
      }
      else
      {
        v38 = &v69;
        if ( v10 )
        {
          do
          {
            v44 = (__int64)v38;
            v38 += 7;
            sub_A2FF00(v44, (int *)&v62);
            --v37;
          }
          while ( v37 );
          v38 = v67;
        }
        LODWORD(v68) = v10;
      }
      v65.m128i_i8[4] &= ~1u;
      v65.m128i_i64[1] = 0;
      v66 = 0;
      v65.m128i_i32[0] = 8;
      sub_BF50C0((__int64)&v65, (int *)v38, v10);
      sub_A2BFE0(a1[1], (__int64)&v65);
      if ( v65.m128i_i32[0] > 1u )
        sub_A2BBA0(v65.m128i_i32);
      v18 = 1;
      sub_BFF870((__int64)&v67);
      goto LABEL_29;
    }
    if ( (unsigned __int8)sub_F343C0(*v27) )
    {
      sub_BED320((__int64)&v59);
      v32 = (__int64 *)*a1;
      v68 = (unsigned __int64)&v59;
      v67 = v32;
      v18 = sub_C46FB0(&v67, v11, v33, v34, v35, v36);
      if ( (_BYTE)v18 )
      {
        sub_BF2EE0((__int64)&v65, &v59);
        sub_BF4E50((__int64)&v67, &v65);
        sub_A2BFE0((__int64)&v62, (__int64)&v67);
        if ( (unsigned int)v67 > 1 )
          sub_A2BBA0((int *)&v67);
        sub_971860(&v65);
        sub_971860(&v59);
        goto LABEL_36;
      }
      sub_971860(&v59);
    }
    else
    {
      v18 = sub_BF05D0(*a1, a2);
    }
LABEL_29:
    if ( v62 > 1 )
      sub_A2BBA0((int *)&v62);
    return v18;
  }
  if ( (_BYTE)v12 != 65 )
  {
    if ( (_BYTE)v12 != 1 )
    {
      switch ( ((_BYTE)v12 + 125) & 0x7F )
      {
        case 0:
          v45 = *a1;
          v46 = *(_QWORD *)(a2 + 16);
          v65.m128i_i8[4] &= ~1u;
          BYTE4(v67) &= ~1u;
          v65.m128i_i32[0] = 0;
          LODWORD(v67) = 0;
          if ( (unsigned __int8)sub_C15CD0((__int64)&v67, v45, v46, a4, a5)
            && (v18 = sub_C12C20(*a1, (__int64)&v65, (__int64)&v67, a2), (_BYTE)v18) )
          {
            sub_A30FE0(a1[1], v65.m128i_i32);
          }
          else
          {
            v18 = 0;
          }
          if ( (unsigned int)v67 > 1 )
            sub_A2BBA0((int *)&v67);
          if ( v65.m128i_i32[0] > 1u )
            sub_A2BBA0(v65.m128i_i32);
          break;
        case 1:
          v47 = *(__m128i **)(a2 + 16);
          v67 = nullptr;
          v68 = 0;
          ptr = v74;
          v73 = 0x800000000LL;
          v48 = *a1;
          v69 = 0;
          v70 |= 1u;
          v71 = 0;
          v74[65] = 0;
          v65.m128i_i64[0] = v48;
          v65.m128i_i64[1] = (__int64)&v67;
          LOBYTE(v66) = 0;
          v18 = sub_C38AE0(&v65, v47, v13, a4, a5, a6);
          if ( (_BYTE)v18 )
          {
            v49 = *(_QWORD *)(a2 + 16);
            v65.m128i_i8[4] &= ~1u;
            v65.m128i_i32[0] = 0;
            v18 = sub_C12830(*a1, (_DWORD *)a2, *(_QWORD *)(v49 + 8), (__int64)&v67, (__int64)&v65, 0);
            if ( (_BYTE)v18 )
              sub_A30FE0(a1[1], v65.m128i_i32);
            if ( v65.m128i_i32[0] > 1u )
              sub_A2BBA0(v65.m128i_i32);
          }
          if ( ptr != v74 )
            free(ptr);
          break;
        case 2:
        case 0x10:
          v18 = sub_C49020(a1, *(_QWORD *)(a2 + 16));
          break;
        case 0x37:
        case 0x3C:
          v41 = *a1;
          v42 = *(_QWORD *)(a2 + 16);
          LODWORD(v67) = 0;
          BYTE4(v67) &= ~1u;
          v18 = sub_C15CD0((__int64)&v67, v41, v42, a4, a5);
          if ( (_BYTE)v18 )
            sub_A30FE0(a1[1], (int *)&v67);
          goto LABEL_12;
        default:
          v18 = sub_BF05D0(*a1, a2);
          break;
      }
      return v18;
    }
    v14 = *a1;
    v15 = *(_QWORD *)(a2 + 16);
    BYTE4(v67) &= ~1u;
    LODWORD(v67) = 0;
    if ( (unsigned __int8)sub_C15CD0((__int64)&v67, v14, v15, a4, a5) )
    {
      v16 = *a1;
      if ( (unsigned int)((_DWORD)v67 - 2) <= 1 || (_DWORD)v67 == 8 )
      {
        v17 = a1[1];
        if ( (unsigned __int8)sub_C02A00((unsigned int *)*a1, *(_QWORD **)(v16 + 16), a2) )
        {
          v18 = sub_C08F40(v16, v17, (__int64)&v67, a2);
          goto LABEL_12;
        }
      }
      else
      {
        v39 = (unsigned __int8 **)sub_E0FED0(*a1, a2, 2417, 0);
        v40 = v39;
        if ( v39 )
        {
          sub_BED5E0(v39, 2);
          sub_AC60B0(v40, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 2320LL) + 1LL) & 8) != 0, 3u);
        }
      }
    }
    v18 = 0;
LABEL_12:
    if ( (unsigned int)v67 > 1 )
      sub_A2BBA0((int *)&v67);
    return v18;
  }
  v20 = *(_QWORD *)(a2 + 16);
  v62 = 0;
  v63 &= ~1u;
  v67 = &v69;
  v68 = 0x400000000LL;
  v65.m128i_i64[0] = *a1;
  v65.m128i_i64[1] = (__int64)&v62;
  v18 = sub_C49020(&v65, v20);
  if ( (_BYTE)v18 )
  {
    v21 = (unsigned int)v68;
    if ( v10 )
    {
      v22 = 0;
      v23 = 56 * (v10 - 1 + 1LL);
      do
      {
        v24 = v21 + 1;
        v25 = (int *)(v22 + v64);
        v26 = &v67[7 * v21];
        if ( v21 + 1 > (unsigned __int64)HIDWORD(v68) )
        {
          if ( v67 > (__int64 *)v25 || v26 <= (__int64 *)v25 )
          {
            v58 = (int *)(v22 + v64);
            sub_C021C0((__int64)&v67, v24);
            v25 = v58;
            v26 = &v67[7 * (unsigned int)v68];
          }
          else
          {
            v57 = (char *)v25 - (char *)v67;
            sub_C021C0((__int64)&v67, v24);
            v25 = (int *)((char *)v67 + v57);
            v26 = &v67[7 * (unsigned int)v68];
          }
        }
        v22 += 56;
        sub_A2FF00((__int64)v26, v25);
        v21 = (unsigned int)(v68 + 1);
        LODWORD(v68) = v68 + 1;
      }
      while ( v23 != v22 );
    }
    v65.m128i_i8[4] &= ~1u;
    v65.m128i_i64[1] = 0;
    v66 = 0;
    v65.m128i_i32[0] = 8;
    sub_BF50C0((__int64)&v65, (int *)v67, v21);
    sub_A2BFE0(a1[1], (__int64)&v65);
    if ( v65.m128i_i32[0] > 1u )
      sub_A2BBA0(v65.m128i_i32);
  }
  else
  {
    v18 = sub_BF05D0(*a1, a2);
  }
  sub_BFF870((__int64)&v67);
  if ( v62 > 1 )
    sub_A2BBA0((int *)&v62);
  return v18;
}

