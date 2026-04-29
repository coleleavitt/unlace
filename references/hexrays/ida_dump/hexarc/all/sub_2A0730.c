__int64 __fastcall sub_2A0730(__int64 a1, int a2, unsigned int *a3, int a4, int a5)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // ebp
  __int64 v17; // rcx
  __int64 v18; // r15
  int v19; // edx
  unsigned int *v20; // rbp
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int *v24; // rax
  __m128i *v25; // rbp
  unsigned __int64 *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rax
  int v29; // r14d
  unsigned __int64 v30; // r15
  int v31; // eax
  _QWORD *v32; // rax
  unsigned __int64 v33; // r14
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v39; // [rsp+34h] [rbp-F4h]
  __int64 v40; // [rsp+38h] [rbp-F0h]
  _QWORD *v41; // [rsp+38h] [rbp-F0h]
  __int64 v42; // [rsp+40h] [rbp-E8h]
  _QWORD *v43; // [rsp+48h] [rbp-E0h]
  __m128i v44; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 *v45; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-C0h]
  _QWORD v47[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+88h] [rbp-A0h]
  unsigned int v50[4]; // [rsp+90h] [rbp-98h] BYREF
  _DWORD v51[4]; // [rsp+A0h] [rbp-88h] BYREF
  int v52; // [rsp+B0h] [rbp-78h]
  _QWORD v53[2]; // [rsp+C0h] [rbp-68h] BYREF
  _DWORD v54[4]; // [rsp+D0h] [rbp-58h] BYREF
  int v55; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v56; // [rsp+E8h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  v53[0] = 0;
  v53[1] = 0;
  v48 = 0;
  v49 = 0;
  v50[0] = 0;
  sub_2983F0((__int64)v50, (unsigned int *)&v48);
  v51[0] = 0;
  sub_2983F0((__int64)v51, (unsigned int *)v53);
  v52 = 0;
  sub_2978B0((__int64)&v48);
  sub_2978B0((__int64)v53);
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 || !*(_QWORD *)(a1 + 24) || (v7 = *(_QWORD *)(v6 + 8), v6 == v7) )
  {
LABEL_15:
    v15 = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v8 = v7 + 24;
    v9 = v7 + 40;
    if ( !a4 )
      v9 = v7 + 24;
    if ( *(_DWORD *)v9 == 6 && (v10 = *(_QWORD *)(v9 + 8), *(_DWORD *)(v10 + 8) == 65) )
      v11 = *(_DWORD *)(v10 + 32);
    else
      v11 = -1;
    if ( a2 != v11 )
      goto LABEL_10;
    v48 = 0;
    v49 = 0;
    v47[0] = 0;
    v47[1] = 0;
    LODWORD(v53[0]) = 0;
    sub_2983F0((__int64)v53, (unsigned int *)v47);
    v54[0] = 0;
    sub_2983F0((__int64)v54, (unsigned int *)&v48);
    v55 = 0;
    sub_2978B0((__int64)v47);
    sub_2978B0((__int64)&v48);
    v39 = 1 - a4;
    if ( a4 == 1 )
    {
      v17 = (__int64)a3;
      v18 = v7 + 24;
      if ( *(_DWORD *)(v7 + 28) != a3[1] )
        goto LABEL_19;
    }
    else
    {
      v18 = v7 + 40;
      v17 = (__int64)(a3 + 4);
      if ( *(_DWORD *)(v7 + 44) != a3[5] )
        goto LABEL_19;
    }
    v40 = v17;
    v42 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( !(unsigned int)sub_297370(v18, v17) )
      break;
    v19 = *(_DWORD *)v18;
    if ( *(_DWORD *)v40 != 2 )
    {
      if ( a3[8] == *(_DWORD *)(v7 + 56) && v19 == 1 && *(_DWORD *)v40 == 1 )
      {
        if ( (unsigned __int8)compare_tinfo(*(_QWORD *)(v18 + 8), *(_QWORD *)(v40 + 8), 0) )
          goto LABEL_64;
        sub_2961D0((__int64 *)&v45, *(_QWORD *)(v42 + 1496), (_QWORD *)(v18 + 8), (_QWORD *)(v40 + 8));
        if ( (_BYTE)v45 )
        {
          sub_2983F0((__int64)v50, a3);
          v20 = v51;
          sub_2983F0((__int64)v51, a3 + 4);
          if ( !v39 )
            v20 = v50;
          v52 = a3[8];
          copy_tinfo_t(v20 + 2, &v45);
          clear_tinfo_t(&v45);
          goto LABEL_57;
        }
        clear_tinfo_t(&v45);
      }
      goto LABEL_19;
    }
    v22 = *(_QWORD *)(v40 + 8);
    if ( !*(_DWORD *)v22 )
    {
      if ( v19 == 2 )
        goto LABEL_64;
      goto LABEL_19;
    }
    if ( v19 == 2 )
    {
      v23 = *(_QWORD *)(v18 + 8);
      if ( !*(_DWORD *)v23 )
        goto LABEL_71;
      if ( *(_DWORD *)(v7 + 56) == a3[8] && *(_DWORD *)v23 == 3 )
      {
        v41 = *(_QWORD **)(v23 + 8);
        if ( *(_DWORD *)v22 == 3 )
        {
          v43 = *(_QWORD **)(v22 + 8);
          if ( v43 )
          {
            if ( v41 )
            {
              sub_2981E0(v44.m128i_i64, (__int64)v41);
              if ( !(unsigned __int8)sub_29F140(&v44, v42, v43, (__int64)v53) )
              {
                if ( v44.m128i_i64[0] )
                {
                  sub_2977B0((unsigned __int64 **)&v44);
                  if ( v44.m128i_i64[0] )
                    qfree(v44.m128i_i64[0]);
                }
                goto LABEL_19;
              }
              if ( (unsigned int)sub_297160(&v44, v41) )
              {
                sub_2983F0((__int64)v50, a3);
                sub_2983F0((__int64)v51, a3 + 4);
                v52 = a3[8];
                v24 = v51;
                if ( !v39 )
                  v24 = v50;
                v25 = *(__m128i **)(*((_QWORD *)v24 + 1) + 8LL);
                if ( v25 != &v44 )
                {
                  sub_2981E0((__int64 *)&v45, (__int64)&v44);
                  v26 = (unsigned __int64 *)v25->m128i_i64[0];
                  v25->m128i_i64[0] = (__int64)v45;
                  v45 = v26;
                  v27 = v25->m128i_i64[1];
                  v25->m128i_i64[1] = v46;
                  v46 = v27;
                  if ( v26 )
                  {
                    sub_2977B0(&v45);
                    if ( v45 )
                      qfree(v45);
                  }
                }
                if ( v44.m128i_i64[0] )
                {
                  sub_2977B0((unsigned __int64 **)&v44);
                  if ( v44.m128i_i64[0] )
                    qfree(v44.m128i_i64[0]);
                }
LABEL_57:
                v28 = *(_QWORD **)(a1 + 16);
                v29 = *(_DWORD *)(v7 + 64) + a5;
                a5 += *(_DWORD *)(v8 + 40);
                if ( v28 )
                {
                  v30 = *v28 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( v30 )
                  {
LABEL_59:
                    if ( (*(_BYTE *)v30 & 2) != 0 )
                      goto LABEL_63;
                    while ( 1 )
                    {
                      v31 = sub_297370(v8, v30 + 24);
                      if ( v31 || (v31 = sub_297370(v8 + 16, v30 + 40)) != 0 )
                      {
                        if ( v31 >= 0 )
                          goto LABEL_90;
                      }
                      else if ( *(_DWORD *)(v8 + 32) >= *(_DWORD *)(v30 + 56) )
                      {
LABEL_90:
                        v36 = sub_297370(v30 + 24, v8);
                        if ( v36 || (v36 = sub_297370(v30 + 40, v8 + 16)) != 0 )
                        {
                          if ( v36 < 0 )
                            goto LABEL_92;
LABEL_86:
                          if ( *(_QWORD *)(a1 + 16) == v30 )
                            goto LABEL_63;
                          break;
                        }
                        if ( *(_DWORD *)(v30 + 56) >= *(_DWORD *)(v8 + 32) )
                          goto LABEL_86;
LABEL_92:
                        v30 = *(_QWORD *)(v30 + 16);
                        goto LABEL_59;
                      }
                      v30 = *(_QWORD *)(v30 + 8);
                      if ( (*(_BYTE *)v30 & 2) != 0 )
                        goto LABEL_63;
                    }
                  }
                  sub_29DCB0((unsigned __int64 **)(a1 + 16), (__int64 *)v30);
                }
LABEL_63:
                sub_2A0470(a1, v50, v29);
              }
              else if ( v44.m128i_i64[0] )
              {
                sub_2977B0((unsigned __int64 **)&v44);
                if ( v44.m128i_i64[0] )
                  qfree(v44.m128i_i64[0]);
              }
LABEL_64:
              v15 = 1;
              goto LABEL_65;
            }
          }
        }
      }
    }
LABEL_19:
    v55 = -1;
    sub_2978B0((__int64)v54);
    sub_2978B0((__int64)v53);
LABEL_10:
    if ( (*(_QWORD *)v7 & 2) != 0 )
    {
LABEL_14:
      if ( *(_QWORD *)(a1 + 16) == v7 )
        goto LABEL_15;
    }
    else
    {
      v12 = *(_QWORD *)(v7 + 16);
      if ( (*(_BYTE *)v12 & 2) != 0 )
      {
        v13 = (_QWORD *)(*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL);
        v14 = *v13;
        if ( (*v13 & 2) != 0 || v7 != v13[2] )
        {
LABEL_13:
          v7 = (unsigned __int64)v13;
        }
        else
        {
          while ( 1 )
          {
            v7 = v14 & 0xFFFFFFFFFFFFFFFCLL;
            v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v14 & 2) != 0 )
              break;
            v21 = v13;
            v13 = (_QWORD *)v7;
            if ( v21 != *(_QWORD **)(v7 + 16) )
              goto LABEL_13;
          }
        }
        goto LABEL_14;
      }
      do
      {
        v7 = v12;
        v12 = *(_QWORD *)(v12 + 8);
      }
      while ( (*(_BYTE *)v12 & 2) == 0 );
      if ( *(_QWORD *)(a1 + 16) == v7 )
        goto LABEL_15;
    }
  }
  if ( (*(_DWORD *)(v18 + 4) & 0xFFFFFF7B) != 0 )
    goto LABEL_19;
  if ( *(_DWORD *)(v7 + 56) >= (signed int)a3[8] )
    goto LABEL_64;
LABEL_71:
  v32 = *(_QWORD **)(a1 + 16);
  a5 += *(_DWORD *)(v7 + 64);
  if ( v32 )
  {
    v33 = *v32 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v33 )
    {
LABEL_73:
      if ( (*(_BYTE *)v33 & 2) != 0 )
        goto LABEL_77;
      while ( 1 )
      {
        v34 = sub_297370(v8, v33 + 24);
        if ( v34 || (v34 = sub_297370(v8 + 16, v33 + 40)) != 0 )
        {
          if ( v34 >= 0 )
            goto LABEL_95;
        }
        else if ( *(_DWORD *)(v8 + 32) >= *(_DWORD *)(v33 + 56) )
        {
LABEL_95:
          v35 = sub_297370(v33 + 24, v8);
          if ( v35 || (v35 = sub_297370(v33 + 40, v8 + 16)) != 0 )
          {
            if ( v35 < 0 )
              goto LABEL_97;
LABEL_80:
            if ( *(_QWORD *)(a1 + 16) == v33 )
              goto LABEL_77;
            break;
          }
          if ( *(_DWORD *)(v33 + 56) >= *(_DWORD *)(v8 + 32) )
            goto LABEL_80;
LABEL_97:
          v33 = *(_QWORD *)(v33 + 16);
          goto LABEL_73;
        }
        v33 = *(_QWORD *)(v33 + 8);
        if ( (*(_BYTE *)v33 & 2) != 0 )
          goto LABEL_77;
      }
    }
    sub_29DCB0((unsigned __int64 **)(a1 + 16), (__int64 *)v33);
    v15 = 0;
  }
  else
  {
LABEL_77:
    v15 = 0;
  }
LABEL_65:
  if ( v55 )
    sub_2A0470(a1, (unsigned int *)v53, a5);
  v55 = -1;
  sub_2978B0((__int64)v54);
  sub_2978B0((__int64)v53);
LABEL_16:
  v52 = -1;
  sub_2978B0((__int64)v51);
  sub_2978B0((__int64)v50);
  return v15;
}
