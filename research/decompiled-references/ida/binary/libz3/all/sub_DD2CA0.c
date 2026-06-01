__int64 __fastcall sub_DD2CA0(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *exception; // rbx
  __int64 result; // rax
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rbp
  int v8; // eax
  void *v9; // rax
  unsigned int v10; // esi
  unsigned __int64 *v11; // rdi
  unsigned __int64 *v12; // rax
  __int64 *v13; // rax
  const double *v14; // rdx
  __int64 *v15; // r14
  __int64 v16; // rax
  __int64 *v17; // rax
  void *v18; // r14
  __int64 *v19; // r15
  unsigned int v20; // eax
  __int64 v21; // rax
  _DWORD *v22; // r15
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  int v26; // eax
  __int64 *v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rax
  unsigned int v30; // edx
  bool v31; // zf
  int v32; // eax
  __int64 v33; // rax
  int v34; // esi
  __int64 *v35; // rax
  __int64 *v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // r14
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rbp
  void *v51; // rdi
  __int64 v52; // r15
  unsigned int v53; // eax
  __int64 v54; // rax
  __m128 v55; // xmm0
  double v56; // rax
  __int64 *v57; // rax
  __int64 *v58; // rax
  const double *v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbp
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rdx
  int v65; // edx
  __int64 v66; // r14
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rdx
  int v70; // edx
  int v71; // eax
  unsigned int v72; // [rsp+0h] [rbp-C8h]
  _QWORD *v73; // [rsp+0h] [rbp-C8h]
  void *v74; // [rsp+0h] [rbp-C8h]
  _DWORD *v75; // [rsp+0h] [rbp-C8h]
  _DWORD *v76; // [rsp+0h] [rbp-C8h]
  _QWORD *v77; // [rsp+0h] [rbp-C8h]
  __int64 *v78; // [rsp+0h] [rbp-C8h]
  const double *v79; // [rsp+0h] [rbp-C8h]
  const double *v80; // [rsp+0h] [rbp-C8h]
  int v81; // [rsp+8h] [rbp-C0h]
  int v82[2]; // [rsp+8h] [rbp-C0h]
  int v83[2]; // [rsp+8h] [rbp-C0h]
  void *v84; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v85; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v86; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v87; // [rsp+30h] [rbp-98h] BYREF
  int v88; // [rsp+38h] [rbp-90h]
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __int64 v90; // [rsp+48h] [rbp-80h]
  int v91; // [rsp+50h] [rbp-78h] BYREF
  char v92; // [rsp+54h] [rbp-74h]
  __int64 v93; // [rsp+58h] [rbp-70h]

  v2 = *((unsigned int *)a1 + 356);
  *((_DWORD *)a1 + 406) = 0;
  if ( (_DWORD)v2 == 2 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid expression, unexpected ')'");
    goto LABEL_3;
  }
LABEL_5:
  switch ( v2 )
  {
    case 1LL:
      v7 = 0;
      if ( *((_DWORD *)a1 + 406) )
      {
        v7 = sub_1875940(a1 + 180);
        if ( *((_DWORD *)a1 + 356) == 9 )
          goto LABEL_76;
      }
      sub_DC0980(a1);
      v8 = *((_DWORD *)a1 + 356);
      if ( v8 != 4 )
      {
        if ( v8 != 1 )
        {
LABEL_76:
          exception = __cxa_allocate_exception(0x30u);
          sub_305660(exception, "invalid expression, '(' or symbol expected");
          goto LABEL_3;
        }
        goto LABEL_101;
      }
      v41 = a1[6];
      if ( v41 == a1[215] )
      {
        sub_DC0980(a1);
        sub_DBF660((__int64)a1, "invalid let declaration, '(' expected");
        v61 = sub_1875960(a1 + 180, 16, 0);
        v62 = sub_DC2710(a1)[1];
        if ( v62 )
          v63 = *(_DWORD *)(v62 - 4);
        else
          v63 = 0;
        v64 = a1[206];
        if ( v64 )
          v65 = *(_DWORD *)(v64 - 4);
        else
          v65 = 0;
        *(_DWORD *)(v61 + 8) = v65;
        *(_QWORD *)v61 = 0x100000001LL;
        *(_DWORD *)(v61 + 12) = v63;
        result = (unsigned int)(*((_DWORD *)a1 + 406) + 1);
        *((_DWORD *)a1 + 406) = result;
      }
      else
      {
        if ( v41 == a1[217] )
        {
          sub_DCEC00(a1, 0);
          result = *((unsigned int *)a1 + 406);
          break;
        }
        if ( v41 == a1[218] )
        {
          sub_DCEC00(a1, 1);
          result = *((unsigned int *)a1 + 406);
        }
        else if ( v41 == a1[219] )
        {
          sub_DCEC00(a1, 2);
          result = *((unsigned int *)a1 + 406);
        }
        else if ( v41 == a1[216] )
        {
          sub_DC0980(a1);
          v66 = sub_1875960(a1 + 180, 32, 0);
          v67 = sub_DC2710(a1)[1];
          if ( v67 )
            v68 = *(_DWORD *)(v67 - 4);
          else
            v68 = 0;
          v69 = a1[206];
          if ( v69 )
            v70 = *(_DWORD *)(v69 - 4);
          else
            v70 = 0;
          *(_DWORD *)(v66 + 16) = v70;
          *(_DWORD *)(v66 + 20) = v68;
          v71 = *((_DWORD *)a1 + 406);
          *(_DWORD *)v66 = 5;
          result = (unsigned int)(v71 + 1);
          *(_QWORD *)(v66 + 8) = v7;
          *(_QWORD *)(v66 + 24) = 0;
          *((_DWORD *)a1 + 406) = result;
        }
        else if ( v41 == a1[220] || v41 == a1[254] )
        {
          sub_DC6530(a1);
          result = *((unsigned int *)a1 + 406);
        }
        else
        {
          if ( v41 != a1[222] )
          {
            if ( v41 == a1[252] )
            {
              sub_DD1AE0(a1);
              result = *((unsigned int *)a1 + 406);
              break;
            }
            goto LABEL_101;
          }
          sub_DC56B0(a1);
          result = *((unsigned int *)a1 + 406);
        }
      }
      break;
    case 3LL:
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid expression, unexpected keyword");
      goto LABEL_3;
    case 4LL:
      v9 = (void *)a1[6];
      v10 = *((_DWORD *)a1 + 370);
      v87 = 0;
      v11 = (unsigned __int64 *)a1[184];
      v88 = 0;
      v84 = v9;
      ptr = v9;
      v12 = sub_DBF240(v11, v10, (unsigned __int64 *)&ptr);
      if ( v12 )
      {
        v87 = v12[1];
        v88 = *((_DWORD *)v12 + 4);
        sub_DC2D80(a1, &v87);
      }
      else
      {
        v45 = *a1;
        sub_DFBCB0(*a1);
        v46 = *a1;
        v47 = *(_QWORD *)(v45 + 296);
        ptr = nullptr;
        v90 = v47;
        sub_E0D7F0(v46, &v84, &ptr);
        v48 = sub_DC2710(a1);
        v85 = (__int64)ptr;
        if ( ptr )
          ++*((_DWORD *)ptr + 2);
        sub_DBF5A0(v48 + 1, &v85);
        sub_DBF390((__int64)ptr, v90);
      }
      goto LABEL_21;
    case 5LL:
      sub_18007F0(&ptr, a1[173]);
      v13 = sub_DC2710(a1);
      v14 = (const double *)a1[212];
      v15 = v13;
      if ( !v14 )
      {
        *(_QWORD *)v82 = sub_186B270(0x88u);
        v77 = (_QWORD *)*a1;
        sub_DFBCB0(*a1);
        v52 = v77[37];
        **(_QWORD **)v82 = v52;
        sub_180C5A0(&v87, "seq");
        v53 = sub_15DA4C0(v52 + 560, &v87);
        v54 = sub_15D2690(v52, v53);
        v14 = *(const double **)v82;
        *(__m128 *)(*(_QWORD *)v82 + 8LL) = _mm_loadh_ps((const double *)(v54 + 88));
        LODWORD(v54) = *(_DWORD *)(v54 + 16);
        v55 = _mm_loadh_ps(*(const double **)v82);
        *(_QWORD *)(*(_QWORD *)v82 + 80LL) = 0;
        *(_DWORD *)(*(_QWORD *)v82 + 24LL) = v54;
        *(_DWORD *)(*(_QWORD *)v82 + 48LL) = v54;
        *(_DWORD *)(*(_QWORD *)v82 + 72LL) = v54;
        v56 = **(double **)v82;
        *(_QWORD *)(*(_QWORD *)v82 + 96LL) = 0;
        *(double *)(*(_QWORD *)v82 + 88LL) = v56;
        *(_QWORD *)(*(_QWORD *)v82 + 120LL) = 0xFFFFFFFFLL;
        v57 = (__int64 *)a1[212];
        *(_QWORD *)(*(_QWORD *)v82 + 104LL) = 0;
        *(_QWORD *)(*(_QWORD *)v82 + 112LL) = 0;
        *(_QWORD *)(*(_QWORD *)v82 + 128LL) = 0;
        *(__m128 *)(*(_QWORD *)v82 + 32LL) = v55;
        *(__m128 *)(*(_QWORD *)v82 + 56LL) = v55;
        if ( *(__int64 **)v82 != v57 )
        {
          if ( v57 )
          {
            v78 = v57;
            sub_2334C0(v57 + 11);
            v58 = v78;
            v59 = *(const double **)v82;
            v60 = v78[10];
            if ( v60 )
            {
              *(_QWORD *)v83 = v78;
              v79 = v59;
              sub_186B220((void *)(v60 - 8));
              v58 = *(__int64 **)v83;
              v59 = v79;
            }
            v80 = v59;
            sub_186B220(v58);
            v14 = v80;
          }
          a1[212] = v14;
        }
      }
      v16 = sub_1648610(v14 + 4, &ptr);
      v85 = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      sub_DBF5A0(v15 + 1, &v85);
      if ( *((_DWORD *)a1 + 356) != 9 )
        sub_DC0980(a1);
      if ( ptr && ptr != &v91 )
        sub_186B220(ptr);
      goto LABEL_23;
    case 6LL:
      sub_DC2BA0(a1, 1u);
      result = *((unsigned int *)a1 + 406);
      break;
    case 7LL:
      v17 = sub_DC2710(a1);
      v18 = (void *)a1[209];
      v19 = v17;
      if ( !v18 )
      {
        v49 = sub_186B270(0x18u);
        v50 = *a1;
        v18 = (void *)v49;
        sub_DFBCB0(*a1);
        sub_16744A0(v18, *(_QWORD *)(v50 + 296));
        v51 = (void *)a1[209];
        if ( v18 != v51 )
        {
          if ( v51 )
            sub_186B220(v51);
          a1[209] = v18;
        }
      }
      v20 = *((_DWORD *)a1 + 22);
      BYTE4(ptr) &= 0xFCu;
      v92 &= 0xFCu;
      v72 = v20;
      LODWORD(ptr) = 0;
      v90 = 0;
      v91 = 1;
      v93 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&ptr, (int *)a1 + 14);
      v21 = sub_1674520(v18, &ptr, v72);
      v87 = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      sub_DBF5A0(v19 + 1, &v87);
      sub_25A130((char *)&ptr);
LABEL_21:
      if ( *((_DWORD *)a1 + 356) != 9 )
        sub_DC0980(a1);
LABEL_23:
      result = *((unsigned int *)a1 + 406);
      break;
    case 8LL:
      sub_DC2BA0(a1, 0);
      result = *((unsigned int *)a1 + 406);
      break;
    default:
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid expression, unexpected input");
      goto LABEL_3;
  }
LABEL_7:
  while ( (_DWORD)result )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)a1 + 356) == 2 )
      {
        v22 = (_DWORD *)sub_1875940(a1 + 180);
        switch ( *v22 )
        {
          case 0:
            sub_DC74B0(a1, v22);
            goto LABEL_42;
          case 1:
            sub_DCFC50(a1, (__int64)v22);
            goto LABEL_42;
          case 2:
          case 3:
            goto LABEL_41;
          case 4:
            sub_DD0080(a1, v22);
            goto LABEL_42;
          case 5:
            sub_DC7120(a1, (__int64)v22);
            v23 = sub_DC2710(a1)[1];
            if ( v23 )
              v24 = *(_DWORD *)(v23 - 4);
            else
              v24 = 0;
            if ( v22[5] + 1 == v24 )
              goto LABEL_41;
            exception = __cxa_allocate_exception(0x30u);
            sub_305660(exception, "invalid expression");
            goto LABEL_3;
          case 6:
            v25 = sub_DC2710(a1)[1];
            if ( v25 )
              v26 = *(_DWORD *)(v25 - 4);
            else
              v26 = 0;
            if ( v22[1] == v26 )
            {
              if ( !*((_BYTE *)a1 + 2065) )
              {
                exception = __cxa_allocate_exception(0x30u);
                sub_305660(exception, "invalid empty pattern");
                goto LABEL_3;
              }
              v27 = sub_DC2710(a1);
              sub_39BEE0(v27, v22[1]);
            }
            else
            {
              v33 = sub_DC2710(a1)[1];
              if ( v33 )
                v34 = *(_DWORD *)(v33 - 4);
              else
                v34 = 0;
              v81 = v34 - v22[1];
              v73 = (_QWORD *)*a1;
              sub_DFBCB0(*a1);
              v74 = (void *)v73[37];
              v35 = sub_DC2710(a1);
              v75 = (_DWORD *)sub_15E1EC0((int)v74, v81, (unsigned int)v35[1] + 8 * v22[1]);
              v36 = sub_DC2710(a1);
              sub_39BEE0(v36, v22[1]);
              v37 = sub_DC2710(a1);
              ptr = v75;
              if ( v75 )
                ++v75[2];
              sub_DBF5A0(v37 + 1, &ptr);
            }
LABEL_41:
            sub_1875B10(a1 + 180);
            --*((_DWORD *)a1 + 406);
LABEL_42:
            if ( *((_DWORD *)a1 + 356) != 9 )
            {
              sub_DC0980(a1);
              result = *((unsigned int *)a1 + 406);
              goto LABEL_7;
            }
            break;
          default:
            sub_1872CE0("");
            sub_1873130(114, 2111);
        }
        goto LABEL_13;
      }
      v5 = sub_1875940(a1 + 180);
      if ( *(_DWORD *)v5 == 1 )
        break;
      if ( *(_DWORD *)v5 != 5 )
        goto LABEL_4;
      v6 = sub_DCA410(a1, v5);
      if ( v6 == 2 )
      {
        if ( *((_DWORD *)a1 + 356) != 1 )
        {
          if ( *((_BYTE *)a1 + 2065) )
          {
            sub_DC10E0(a1);
            goto LABEL_55;
          }
          exception = __cxa_allocate_exception(0x30u);
          sub_305660(exception, "invalid pattern, '(' expected");
LABEL_3:
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        sub_DC0980(a1);
        v32 = *((_DWORD *)a1 + 356);
        if ( v32 == 1 )
        {
          v76 = (_DWORD *)sub_1875960(a1 + 180, 8, 0);
          v38 = sub_DC2710(a1)[1];
          if ( v38 )
            v39 = *(_DWORD *)(v38 - 4);
          else
            v39 = 0;
          v76[1] = v39;
          v40 = *((_DWORD *)a1 + 406);
          *v76 = 6;
          result = (unsigned int)(v40 + 1);
          *((_DWORD *)a1 + 406) = result;
        }
        else
        {
          if ( v32 != 2 )
          {
            if ( v32 != 4 )
            {
LABEL_67:
              exception = __cxa_allocate_exception(0x30u);
              sub_305660(exception, "invalid pattern, '(' or identifier expected");
              goto LABEL_3;
            }
            v42 = *a1;
            v86 = a1[6];
            v43 = sub_DFC0A0(v42, &v86);
            if ( !v43 || *(_DWORD *)(v43 + 32) )
            {
              v44 = *((_DWORD *)a1 + 356);
              if ( v44 != 1 && v44 != 4 )
                goto LABEL_67;
LABEL_101:
              sub_DC6AF0((__int64)a1);
              result = *((unsigned int *)a1 + 406);
              goto LABEL_7;
            }
            if ( !*((_BYTE *)a1 + 2065) )
            {
              exception = __cxa_allocate_exception(0x30u);
              sub_305660(exception, "invalid constant pattern");
              goto LABEL_3;
            }
            while ( *((_DWORD *)a1 + 356) != 2 )
              sub_DC10E0(a1);
          }
          sub_DC0980(a1);
LABEL_55:
          v28 = sub_DC2710(a1);
          ptr = nullptr;
          sub_DBF5A0(v28 + 1, &ptr);
          result = *((unsigned int *)a1 + 406);
        }
        goto LABEL_7;
      }
      if ( v6 != 3 )
        goto LABEL_4;
LABEL_13:
      result = *((unsigned int *)a1 + 406);
      if ( !(_DWORD)result )
        return result;
    }
    if ( !*(_BYTE *)(v5 + 4) )
    {
LABEL_4:
      v2 = *((unsigned int *)a1 + 356);
      goto LABEL_5;
    }
    sub_DBF660((__int64)a1, "invalid let declaration, '(' expected");
    sub_DBF580(*((unsigned int *)a1 + 356), (__int64)"invalid let declaration, symbol expected");
    v29 = a1[206];
    if ( !v29 || (v30 = *(_DWORD *)(v29 - 4), v30 == *(_DWORD *)(v29 - 8)) )
    {
      sub_41E8A0((unsigned int **)a1 + 206);
      v29 = a1[206];
      v30 = *(_DWORD *)(v29 - 4);
    }
    v31 = *((_DWORD *)a1 + 356) == 9;
    *(_QWORD *)(v29 + 8LL * v30) = a1[6];
    *(_DWORD *)(v29 - 4) = v30 + 1;
    if ( !v31 )
      sub_DC0980(a1);
    *(_DWORD *)sub_1875960(a1 + 180, 4, 0) = 2;
    result = (unsigned int)(*((_DWORD *)a1 + 406) + 1);
    *((_DWORD *)a1 + 406) = result;
  }
  return result;
}

