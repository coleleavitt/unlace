void __fastcall sub_B6C890(_QWORD *a1, unsigned int *a2, char a3, double a4, double a5, __m128 a6)
{
  char **v6; // r12
  __int64 v7; // rdx
  _QWORD *v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  char **exception; // rbp
  __int64 v13; // rdx
  __int64 v14; // rdx
  _DWORD *v15; // rax
  int v16; // eax
  unsigned int *v17; // rbx
  __int64 v18; // rax
  unsigned int *v19; // r12
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned int v24; // ebx
  __int64 v25; // rax
  char v26; // r12
  _DWORD *v27; // rax
  char v28; // dl
  _DWORD *v29; // rax
  _DWORD *v30; // rax
  char v31; // al
  unsigned __int8 v32; // dl
  unsigned int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // xmm0_8
  bool v36; // [rsp+Bh] [rbp-CDh]
  __int64 v38[4]; // [rsp+10h] [rbp-C8h] BYREF
  char *v39[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v40[4]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v41[2]; // [rsp+70h] [rbp-68h] BYREF
  char v42[88]; // [rsp+80h] [rbp-58h] BYREF

  if ( *((_WORD *)a2 + 2) )
    goto LABEL_7;
  v14 = *((_QWORD *)a2 + 2);
  v15 = *(_DWORD **)(v14 + 24);
  if ( !v15 || *v15 )
    goto LABEL_7;
  v16 = v15[1];
  if ( v16 == 2 )
  {
    if ( (unsigned __int8)sub_15D2CB0(a1[13], *((_QWORD *)a2 + 4)) )
      goto LABEL_6;
    if ( *((_WORD *)a2 + 2) )
      goto LABEL_7;
    v14 = *((_QWORD *)a2 + 2);
  }
  else if ( (unsigned int)(v16 - 4) <= 2 )
  {
LABEL_6:
    v36 = 1;
    goto LABEL_8;
  }
  v29 = *(_DWORD **)(v14 + 24);
  if ( !v29 || *v29 )
  {
LABEL_7:
    v36 = 0;
    goto LABEL_8;
  }
  v36 = v29[1] == 8;
LABEL_8:
  v17 = a2 + 8;
  v18 = 2LL * a2[6];
  v19 = &a2[v18 + 8];
  if ( v18 * 4 )
  {
    do
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)v17;
        if ( *(_WORD *)(*(_QWORD *)v17 + 4LL) == 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(v41, "Formulas should not contain unbound variables", v13);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v41);
          sub_233E40((__int64)v41);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        if ( !(unsigned __int8)sub_15D2CB0(a1[13], *(_QWORD *)v17) )
          break;
        v17 += 2;
        sub_B6CE00((int)a1);
        if ( v19 == v17 )
          goto LABEL_16;
      }
      if ( *(_WORD *)(v20 + 4) == 2 && *(_DWORD *)(v20 + 16) == 2 )
        sub_B6D160((int)a1);
      else
        sub_B6E0D0((int)a1);
      v17 += 2;
    }
    while ( v19 != v17 );
  }
LABEL_16:
  v21 = a1[1104];
  if ( v21 )
  {
    v22 = *a2;
    if ( *a2 < *(_DWORD *)(v21 - 4) )
    {
      v23 = v22;
      v24 = *(_DWORD *)(v21 + 4LL * v22);
      if ( v24 != 0x7FFFFFFF )
      {
        v25 = a1[1082];
        if ( v25 )
        {
          v26 = 0;
          if ( v22 >= *(_DWORD *)(v25 - 4) )
          {
            if ( a3 )
            {
              if ( v36 )
                return;
              goto LABEL_58;
            }
LABEL_32:
            v28 = 1;
            if ( v36 )
              goto LABEL_33;
            goto LABEL_50;
          }
LABEL_21:
          if ( *(_QWORD *)(v25 + 8 * v23) )
            goto LABEL_22;
          if ( a3 )
          {
            if ( v36 )
              goto LABEL_22;
            v36 = v26;
LABEL_58:
            v26 = v36;
            if ( !a2[6] )
            {
LABEL_22:
              if ( !v26 )
                return;
              goto LABEL_23;
            }
            goto LABEL_50;
          }
          goto LABEL_32;
        }
        if ( !a3 )
        {
          v26 = 0;
          goto LABEL_32;
        }
        if ( v36 || !a2[6] )
          return;
        v26 = 0;
LABEL_50:
        v28 = 0;
        if ( !*((_WORD *)a2 + 2) )
        {
          v30 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
          if ( v30 )
          {
            if ( !*v30 )
              v28 = v30[1] == 8;
          }
        }
LABEL_33:
        sub_B68280((__int64)a1, a2, v28, a3 ^ 1, 1u, a4, a5, a6);
        sub_B66DE0((__int64)a1, v24, v26);
        if ( !v26 )
          return;
        goto LABEL_23;
      }
    }
  }
  v24 = sub_B67520((__int64)a1, a2);
  v25 = a1[1082];
  if ( v25 )
  {
    v23 = *a2;
    v26 = 1;
    if ( (unsigned int)v23 < *(_DWORD *)(v25 - 4) )
      goto LABEL_21;
    if ( !a3 )
      goto LABEL_32;
    if ( !v36 )
    {
      v36 = a3;
      goto LABEL_58;
    }
  }
  else
  {
    if ( !a3 )
    {
      v26 = 1;
      goto LABEL_32;
    }
    if ( !v36 && a2[6] )
    {
      v26 = a3;
      goto LABEL_50;
    }
  }
LABEL_23:
  v27 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( v27 && !*v27 )
  {
    switch ( v27[1] )
    {
      case 2:
        if ( !*((_WORD *)a2 + 2) )
        {
          v31 = sub_15D2CB0(a1[13], *((_QWORD *)a2 + 4));
          v32 = 0;
          if ( v31 )
            goto LABEL_66;
        }
        return;
      case 3:
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_1606360(v41, a2, a1[13], 0, 0, 0);
        sub_14E142(v38, "formula has not been simplified", v7);
        v8 = (_QWORD *)sub_2B3190((__int64)v38, " : ");
        sub_2333C0(v39, v8);
        sub_B6FC40((unsigned int)v40, (unsigned int)v39, (unsigned int)v41, v9, v10, v11);
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v40);
        sub_233E40((__int64)v40);
        sub_233E40((__int64)v39);
        sub_233E40((__int64)v38);
        sub_18572D0(v42);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      case 4:
        sub_B6B8E0((__int64)a1, a2);
        sub_B656A0((__int64)a1, (__int64)a2);
        return;
      case 5:
        sub_B6C470((__int64)a1, a2);
        sub_B65400(a1, (__int64)a2);
        return;
      case 6:
        sub_B6C240((__int64)a1, a2);
        sub_B65500(a1, (__int64)a2);
        return;
      case 7:
        v32 = 1;
LABEL_66:
        sub_B6C790((__int64)a1, (__int64)a2, v32);
        break;
      case 8:
        v33 = sub_B645B0((__int64)a1, *((unsigned int **)a2 + 4));
        v34 *= 2;
        HIDWORD(v41[0]) = v33 ^ 1;
        v35 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v34), _mm_cvtsi32_si128(v33)).m128i_u64[0];
        LODWORD(v41[0]) = v34 ^ 1;
        sub_B6BA00((__int64)a1, (unsigned int *)v41);
        v41[0] = v35;
        sub_B6BA00((__int64)a1, (unsigned int *)v41);
        break;
      case 9:
        sub_B6C040((__int64)a1, (__int64)a2);
        sub_B65600((__int64)a1, (__int64)a2);
        break;
      case 0xA:
        sub_1872CE0("");
        sub_1873130(114, 720);
      default:
        return;
    }
  }
}

