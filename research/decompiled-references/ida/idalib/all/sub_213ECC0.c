__int64 __fastcall sub_213ECC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  _DWORD *v14; // rax
  __m128 *v15; // rsi
  size_t v17; // rax
  const char *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rdi
  size_t v23; // rax
  size_t v24; // rax
  const char *v25; // rax
  const char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // [rsp+8h] [rbp-D0h]
  __int64 v43; // [rsp+8h] [rbp-D0h]
  __int64 v44; // [rsp+8h] [rbp-D0h]
  __int64 v45; // [rsp+8h] [rbp-D0h]
  char v46; // [rsp+17h] [rbp-C1h]
  __int64 v47; // [rsp+18h] [rbp-C0h]
  __int64 v48; // [rsp+18h] [rbp-C0h]
  const char *v49; // [rsp+18h] [rbp-C0h]
  char *v50; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+38h] [rbp-A0h]
  void *v53; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v54; // [rsp+48h] [rbp-90h]
  __int64 v55; // [rsp+50h] [rbp-88h] BYREF
  __int64 v56; // [rsp+58h] [rbp-80h]
  const char *v57; // [rsp+70h] [rbp-68h] BYREF
  __int64 v58; // [rsp+78h] [rbp-60h]
  __int16 v59; // [rsp+90h] [rbp-48h]

  v8 = a1;
  v9 = **(_DWORD **)(a1 + 48);
  if ( v9 == 13 )
  {
    a1 += 48;
    sub_21318A0(a1, a2, a3, a4, a5, a6);
    v46 = 1;
    v9 = **(_DWORD **)(v8 + 48);
    if ( v9 != 1 )
      goto LABEL_5;
LABEL_24:
    v59 = 260;
    v57 = (const char *)(v8 + 136);
    return (unsigned int)sub_21543E0(v8, &v57, 0, 0);
  }
  v46 = 0;
  if ( v9 == 12 )
  {
    a1 += 48;
    sub_21318A0(a1, a2, a3, a4, a5, a6);
    v9 = **(_DWORD **)(v8 + 48);
  }
  if ( v9 == 1 )
    goto LABEL_24;
LABEL_5:
  v10 = v9 & 0xFFFFFFFB;
  LOBYTE(v6) = v9 != 4 && (_DWORD)v10 != 2;
  if ( (_BYTE)v6 )
  {
    v57 = "unexpected token in directive";
    v59 = 259;
    return (unsigned int)sub_21543E0(v8, &v57, 0, 0);
  }
  v11 = sub_21F90D0(a1, a2, v10);
  if ( a2 == v11 )
    sub_21FFBD0(&v55, a2);
  else
    sub_21FBA00(&v55, a2);
  v12 = sub_2153C00(v8);
  v13 = *(_QWORD *)(v12 + 16);
  v51 = *(_QWORD *)(v12 + 8);
  v14 = *(_DWORD **)(v8 + 48);
  v52 = v13;
  if ( *v14 == 2 )
  {
    v17 = j__strlen("infinity");
    if ( (unsigned int)sub_22462B0(&v51, "infinity", v17) )
    {
      v23 = j__strlen("inf");
      if ( (unsigned int)sub_22462B0(&v51, "inf", v23) )
      {
        v24 = j__strlen("nan");
        if ( (unsigned int)sub_22462B0(&v51, "nan", v24) )
        {
          v59 = 259;
          v57 = "invalid floating point literal";
          v6 = sub_21543E0(v8, &v57, 0, 0);
          goto LABEL_18;
        }
        v54 = 64;
        v53 = (void *)-1LL;
        if ( a2 == v11 )
          sub_21FFC40(&v57, v11, 0);
        else
          sub_21FD1F0(&v57, a2, 0);
        if ( (const char *)v11 == v57 )
          sub_2200650(&v57, 0, 0, &v53);
        else
          sub_21F9270(&v57, 0, 0, &v53);
        if ( v54 > 0x40 && v53 )
          operator delete[](v53);
        v25 = v57;
        if ( v11 == v55 )
        {
          v37 = v56;
          if ( (const char *)v11 == v57 )
          {
            if ( v56 )
            {
              v40 = v56 + 24LL * *(_QWORD *)(v56 - 8);
              if ( v40 != v56 )
              {
                do
                {
                  while ( 1 )
                  {
                    v49 = v25;
                    v41 = v40 - 24;
                    v45 = v40 - 24;
                    if ( v25 == *(const char **)(v40 - 24) )
                      break;
                    sub_21F9830(v41);
                    v40 = v45;
                    v25 = v49;
                    if ( v45 == v56 )
                      goto LABEL_111;
                  }
                  sub_A4F010(v41);
                  v40 = v45;
                  v25 = v49;
                }
                while ( v56 != v45 );
LABEL_111:
                v37 = v40;
              }
              operator delete[]((void *)(v37 - 8), 24LL * *(_QWORD *)(v37 - 8) + 8);
            }
            v15 = (__m128 *)&v57;
            sub_21FFED0(&v55, &v57);
            goto LABEL_63;
          }
          if ( v56 )
          {
            v38 = v56 + 24LL * *(_QWORD *)(v56 - 8);
            if ( v38 != v56 )
            {
              do
              {
                while ( 1 )
                {
                  v39 = v38 - 24;
                  v44 = v38 - 24;
                  if ( v11 == *(_QWORD *)(v38 - 24) )
                    break;
                  sub_21F9830(v39);
                  v38 = v44;
                  if ( v44 == v56 )
                    goto LABEL_103;
                }
                sub_A4F010(v39);
                v38 = v44;
              }
              while ( v56 != v44 );
            }
LABEL_103:
            operator delete[]((void *)(v38 - 8), 24LL * *(_QWORD *)(v38 - 8) + 8);
          }
        }
        else
        {
          if ( (const char *)v11 != v57 )
          {
            v15 = (__m128 *)&v57;
            sub_21F9590(&v55, &v57);
LABEL_63:
            sub_9955A0(&v57);
            goto LABEL_11;
          }
          sub_21F9830(&v55);
        }
        v15 = (__m128 *)&v57;
        if ( (const char *)v11 == v57 )
          sub_21FFED0(&v55, &v57);
        else
          sub_21F97D0(&v55, &v57);
        goto LABEL_63;
      }
    }
    if ( a2 == v11 )
      sub_21FFC40(&v57, v11, 0);
    else
      sub_21FD1F0(&v57, a2, 0);
    if ( (const char *)v11 == v57 )
      sub_22000E0(&v57, 0);
    else
      sub_21FB4C0(&v57, 0);
    if ( v11 == v55 )
    {
      if ( (const char *)v11 == v57 )
      {
        sub_A4F010((__int64)&v55);
        v15 = (__m128 *)&v57;
        sub_21FFED0(&v55, &v57);
        goto LABEL_33;
      }
      v32 = v56;
      if ( !v56 )
      {
LABEL_67:
        v15 = (__m128 *)&v57;
        sub_21F97D0(&v55, &v57);
        goto LABEL_33;
      }
      v33 = 24LL * *(_QWORD *)(v56 - 8);
      v34 = v56 + v33;
      if ( v56 != v56 + v33 )
      {
        while ( 1 )
        {
          v48 = v34;
          v36 = v34 - 24;
          v43 = v34 - 24;
          if ( v11 == *(_QWORD *)(v34 - 24) )
          {
            sub_A4F010(v36);
            v32 = v43;
            v35 = v48;
            if ( v56 == v43 )
            {
LABEL_88:
              v33 = 24LL * *(_QWORD *)(v35 - 32);
              break;
            }
          }
          else
          {
            sub_21F9830(v36);
            v32 = v43;
            v35 = v48;
            if ( v43 == v56 )
              goto LABEL_88;
          }
          v34 = v32;
        }
      }
      operator delete[]((void *)(v32 - 8), v33 + 8);
      v26 = v57;
    }
    else
    {
      if ( (const char *)v11 != v57 )
      {
        v15 = (__m128 *)&v57;
        sub_21F9590(&v55, &v57);
LABEL_33:
        if ( (const char *)v11 != v57 )
        {
          sub_21F9830(&v57);
          if ( !v46 )
            goto LABEL_12;
LABEL_35:
          if ( v11 == v55 )
            sub_21FFF70(&v55);
          else
            sub_21FA410(&v55);
LABEL_12:
          sub_2132C70(v8, v15);
          if ( v11 == v55 )
            sub_22010F0(&v57, &v55);
          else
            sub_21FEE00(&v57, &v55);
          if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
            operator delete[](*(void **)a3);
          *(_QWORD *)a3 = v57;
          *(_DWORD *)(a3 + 8) = v58;
LABEL_18:
          if ( v11 == v55 )
            goto LABEL_41;
LABEL_19:
          sub_21F9830(&v55);
          return v6;
        }
        v27 = v58;
        if ( v58 )
        {
          v28 = 24LL * *(_QWORD *)(v58 - 8);
          v29 = v58 + v28;
          if ( v58 != v58 + v28 )
          {
            while ( 1 )
            {
              v47 = v29;
              v31 = v29 - 24;
              v42 = v29 - 24;
              if ( v11 == *(_QWORD *)(v29 - 24) )
              {
                sub_A4F010(v31);
                v27 = v42;
                v30 = v47;
                if ( v58 == v42 )
                {
LABEL_75:
                  v28 = 24LL * *(_QWORD *)(v30 - 32);
                  break;
                }
              }
              else
              {
                sub_21F9830(v31);
                v27 = v42;
                v30 = v47;
                if ( v42 == v58 )
                  goto LABEL_75;
              }
              v29 = v27;
            }
          }
          v15 = (__m128 *)(v28 + 8);
          operator delete[]((void *)(v27 - 8), (unsigned __int64)v15);
        }
LABEL_11:
        if ( !v46 )
          goto LABEL_12;
        goto LABEL_35;
      }
      sub_21F9830(&v55);
      v26 = v57;
    }
    if ( (const char *)v11 == v26 )
    {
      v15 = (__m128 *)&v57;
      sub_21FFED0(&v55, &v57);
      goto LABEL_33;
    }
    goto LABEL_67;
  }
  v15 = (__m128 *)&v55;
  sub_2203E70(&v57, &v55, v51, v52, 1);
  if ( (v58 & 1) == 0 || (v18 = v57, v57 = nullptr, !v18) )
  {
    sub_13E4420((__int64 *)&v57);
    goto LABEL_11;
  }
  v50 = (char *)v18;
  sub_A05760(&v53, (_QWORD **)&v50);
  if ( v50 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v50 + 8LL))(v50);
  sub_13E4420((__int64 *)&v57);
  v57 = "invalid floating point literal";
  v59 = 259;
  v6 = sub_21543E0(v8, &v57, 0, 0);
  if ( v11 != v55 )
    goto LABEL_19;
LABEL_41:
  v19 = v56;
  if ( v56 )
  {
    v20 = 24LL * *(_QWORD *)(v56 - 8);
    v21 = v56 + v20;
    if ( v56 != v56 + v20 )
    {
      while ( 1 )
      {
        v19 = v21 - 24;
        v22 = v21 - 24;
        if ( v11 == *(_QWORD *)(v21 - 24) )
        {
          sub_A4F010(v22);
          if ( v56 == v19 )
          {
LABEL_48:
            v20 = 24LL * *(_QWORD *)(v21 - 32);
            break;
          }
        }
        else
        {
          sub_21F9830(v22);
          if ( v56 == v19 )
            goto LABEL_48;
        }
        v21 -= 24;
      }
    }
    operator delete[]((void *)(v19 - 8), v20 + 8);
  }
  return v6;
}
