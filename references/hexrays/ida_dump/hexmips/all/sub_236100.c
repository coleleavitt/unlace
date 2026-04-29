unsigned __int64 __fastcall sub_236100(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // r11
  int v6; // r13d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 *v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  int v13; // eax
  int v14; // r15d
  __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 i; // rdi
  _BYTE *v21; // rdi
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rdi
  _QWORD *v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rdx
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  _DWORD *v33; // r15
  int v34; // eax
  int v35; // eax
  int v36; // eax
  char v37; // al
  __int64 *v38; // rdi
  __int64 v39; // rdx
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  char v45; // al
  __int64 *v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rsi
  int v49; // eax
  __int64 v50; // [rsp+0h] [rbp-68h]
  unsigned __int64 v51; // [rsp+0h] [rbp-68h]
  int v52; // [rsp+Ch] [rbp-5Ch]
  __int64 v53; // [rsp+10h] [rbp-58h]
  unsigned int v54; // [rsp+10h] [rbp-58h]
  __int64 v55; // [rsp+10h] [rbp-58h]
  __int64 v56; // [rsp+10h] [rbp-58h]
  __int64 v57; // [rsp+10h] [rbp-58h]
  __int64 v58; // [rsp+18h] [rbp-50h]
  __int64 v59; // [rsp+18h] [rbp-50h]
  __int64 v60; // [rsp+18h] [rbp-50h]
  __int64 v61; // [rsp+18h] [rbp-50h]
  __int64 v62; // [rsp+20h] [rbp-48h]
  __int64 v63; // [rsp+20h] [rbp-48h]
  __int64 v64; // [rsp+20h] [rbp-48h]
  __int64 v65; // [rsp+20h] [rbp-48h]
  __int64 v66; // [rsp+28h] [rbp-40h]

  v3 = a3;
  v6 = *(_DWORD *)(*(_QWORD *)a3 + 76LL);
  v7 = *(_QWORD *)a3 + 24LL;
  if ( v6 <= 0 )
    v6 = 1;
  v8 = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  v9 = v8 + v6;
  if ( !a2->m128i_i64[1] )
  {
    v10 = (__int64 *)a2->m128i_i64[0];
    goto LABEL_5;
  }
  v10 = (__int64 *)a2->m128i_i64[0];
  v16 = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  if ( !v10 )
  {
    v17 = unk_0;
    v11 = 0;
    goto LABEL_19;
  }
  v17 = *v10;
  v18 = *v10 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v18 )
  {
    v11 = 0;
    if ( v8 >= 0 )
      goto LABEL_44;
LABEL_30:
    if ( v10[1] == v11 )
      goto LABEL_44;
    v17 = *(_QWORD *)v11;
LABEL_19:
    if ( (v17 & 2) != 0 )
    {
      v11 = *(_QWORD *)(v11 + 16);
    }
    else
    {
      v19 = *(_QWORD *)(v11 + 8);
      if ( (*(_BYTE *)v19 & 2) != 0 )
      {
        v38 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
        v39 = *v38;
        if ( (*v38 & 2) == 0 )
        {
          while ( v38[1] == v11 )
          {
            v11 = (unsigned __int64)v38;
            v40 = v39 & 0xFFFFFFFFFFFFFFFCLL;
            v39 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v39 & 2) != 0 )
            {
              v11 = v40;
              goto LABEL_43;
            }
            v38 = (__int64 *)v40;
          }
        }
        v11 = (unsigned __int64)v38;
      }
      else
      {
        for ( i = *(_QWORD *)(v19 + 16); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 16) )
          v19 = i;
        v11 = v19;
      }
    }
LABEL_43:
    if ( (__int64 *)v11 != v10 )
      goto LABEL_44;
LABEL_5:
    if ( v10 )
    {
      v11 = (unsigned __int64)v10;
      if ( a2->m128i_i64[1] )
        v11 = v10[1];
      goto LABEL_8;
    }
    goto LABEL_14;
  }
  v11 = (unsigned __int64)v10;
  if ( (*(_BYTE *)v18 & 2) != 0 )
    goto LABEL_19;
  while ( 1 )
  {
    v21 = *(_BYTE **)(v18 + 8);
    if ( v8 <= *(_QWORD *)(v18 + 24) )
      break;
    v21 = *(_BYTE **)(v18 + 16);
    if ( (*v21 & 2) != 0 )
      goto LABEL_28;
LABEL_25:
    v18 = (unsigned __int64)v21;
  }
  v11 = v18;
  if ( (*v21 & 2) == 0 )
    goto LABEL_25;
LABEL_28:
  if ( v10 == (__int64 *)v11 )
  {
    v17 = *v10;
    goto LABEL_19;
  }
  if ( v8 < *(_QWORD *)(v11 + 24) )
    goto LABEL_30;
LABEL_44:
  v25 = *(_QWORD **)(a1 + 8);
  v26 = *(_QWORD *)(v11 + 24);
  v52 = *(_DWORD *)(v25[188] + 80LL);
  v51 = v11 + 24;
  v27 = v25[117];
  if ( v27 )
  {
    v66 = v3;
    v62 = v8 + v6;
    v53 = *(_QWORD *)(v7 + 32);
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
    v29 = v25[18];
    v16 = v53;
    v9 = v62;
    v3 = v66;
    if ( v28 != -1 && v29 > v28 )
      v29 = v28;
    v8 = *(_QWORD *)(v7 + 32);
    v25 = *(_QWORD **)(a1 + 8);
  }
  else
  {
    v29 = v25[18];
  }
  if ( v16 < v29 == v26 < v29 )
  {
    if ( v8 < *(_QWORD *)v51 && *(_QWORD *)v51 < v9 )
    {
      v41 = *(_QWORD *)v51;
      v42 = v25[117];
      if ( v42 )
      {
        v64 = v3;
        v60 = v9;
        v56 = *(_QWORD *)v51;
        v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 40LL))(v42);
        v44 = v25[18];
        v41 = v56;
        v9 = v60;
        v3 = v64;
        if ( v43 != -1 && v44 > v43 )
          v44 = v43;
        v8 = *(_QWORD *)(v7 + 32);
        v25 = *(_QWORD **)(a1 + 8);
      }
      else
      {
        v44 = v25[18];
      }
      if ( v9 < v44 == v41 < v44 )
        v9 = *(_QWORD *)v51;
    }
    v30 = v25;
    if ( v8 < *(_QWORD *)v51 )
      goto LABEL_51;
    v33 = (_DWORD *)(v25[54] + 104LL * *(int *)(v11 + 32));
    v54 = v33[22];
    if ( *v33 == 1 )
    {
      v65 = v3;
      v61 = v9;
      v45 = getinf_flag(67, 2);
      v9 = v61;
      v3 = v65;
      if ( v45 )
      {
        v30 = *(_QWORD **)(a1 + 8);
      }
      else
      {
        v57 = v52 - 1 + (__int64)(int)sub_1BF200(v33, v33[22]);
        v49 = sub_1BF140(v33);
        v3 = v65;
        v9 = v61;
        v30 = *(_QWORD **)(a1 + 8);
        v54 = (v57 & -v52) - v49;
      }
    }
    v63 = v3;
    v58 = v9;
    v34 = sub_223290((__int64 *)(v7 + 24), (unsigned int)v6, v52, *((_DWORD *)v30 + 18));
    v35 = sub_1BF2F0(
            (__int64)v33,
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL),
            *(_QWORD *)(v7 + 32) & -v34,
            v6 + *(_QWORD *)(v7 + 32) - (*(_QWORD *)(v7 + 32) & -v34),
            v54,
            nullptr,
            nullptr);
    v9 = v58;
    v3 = v63;
    if ( !v35 )
    {
      v37 = sub_2248A0(v33, *(_QWORD *)(a1 + 8), *(_QWORD *)(v7 + 32), v6);
      v9 = v58;
      v3 = v63;
      if ( !v37 )
        goto LABEL_75;
    }
    v59 = v3;
    v14 = *(_DWORD *)(v11 + 32);
    v55 = v9;
    v36 = sub_22CBB0(*(_QWORD *)(a1 + 8), v14, *(_QWORD *)(v7 + 32), v6, nullptr, 0);
    v9 = v55;
    v3 = v59;
    if ( !v36 )
    {
      if ( !under_debugger )
        sub_37E160(52293);
      BUG();
    }
    if ( v14 == -1 )
    {
LABEL_75:
      v30 = *(_QWORD **)(a1 + 8);
      v8 = *(_QWORD *)(v7 + 32);
      goto LABEL_51;
    }
  }
  else
  {
    v30 = v25;
LABEL_51:
    if ( !*((_BYTE *)v30 + 320) )
      goto LABEL_62;
    if ( v8 < (*(_QWORD *)v51 & -v52) )
    {
      v31 = a2->m128i_i64[0];
      if ( a2->m128i_i64[0] && a2->m128i_i64[1] )
        v31 = *(_QWORD *)(v31 + 8);
      if ( v31 != v11 )
      {
        if ( (*(_QWORD *)v11 & 2) != 0 )
        {
          v11 = *(_QWORD *)(v11 + 16);
          v51 = v11 + 24;
        }
        else
        {
          v32 = *(_QWORD *)(v11 + 8);
          if ( (*(_BYTE *)v32 & 2) != 0 )
          {
            v46 = (__int64 *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL);
            v47 = *v46;
            if ( (*v46 & 2) == 0 )
            {
              while ( v46[1] == v11 )
              {
                v11 = (unsigned __int64)v46;
                v48 = v47 & 0xFFFFFFFFFFFFFFFCLL;
                v47 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v47 & 2) != 0 )
                {
                  v11 = v48;
                  v51 = v48 + 24;
                  goto LABEL_61;
                }
                v46 = (__int64 *)v48;
              }
            }
            v11 = (unsigned __int64)v46;
          }
          else
          {
            do
            {
              v11 = v32;
              v32 = *(_QWORD *)(v32 + 16);
            }
            while ( (*(_BYTE *)v32 & 2) == 0 );
          }
          v51 = v11 + 24;
        }
      }
    }
LABEL_61:
    v14 = *(_DWORD *)(v51 + 8);
    if ( v14 == -1 )
    {
LABEL_62:
      v10 = (__int64 *)a2->m128i_i64[0];
      if ( a2->m128i_i64[0] == v11 )
        goto LABEL_5;
      while ( 1 )
      {
LABEL_9:
        if ( v8 <= *(_QWORD *)(v11 + 24) )
          goto LABEL_33;
        if ( (*(_QWORD *)v11 & 2) != 0 )
        {
          while ( *(_QWORD *)(v11 + 24) < v8 )
            ;
LABEL_33:
          if ( v9 > *(_QWORD *)(v11 + 24) )
            v9 = *(_QWORD *)(v11 + 24);
          goto LABEL_14;
        }
        v12 = *(_QWORD *)(v11 + 16);
        if ( (*(_BYTE *)v12 & 2) != 0 )
          break;
        do
        {
          v11 = v12;
          v12 = *(_QWORD *)(v12 + 8);
        }
        while ( (*(_BYTE *)v12 & 2) == 0 );
        if ( v10 == (__int64 *)v11 )
          goto LABEL_14;
      }
      v22 = (_QWORD *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL);
      v23 = *v22;
      if ( (*v22 & 2) != 0 || v22[2] != v11 )
      {
LABEL_37:
        v11 = (unsigned __int64)v22;
      }
      else
      {
        while ( 1 )
        {
          v11 = v23 & 0xFFFFFFFFFFFFFFFCLL;
          v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v23 & 2) != 0 )
            break;
          v24 = v22;
          v22 = (_QWORD *)v11;
          if ( *(_QWORD **)(v11 + 16) != v24 )
            goto LABEL_37;
        }
      }
LABEL_8:
      if ( v10 != (__int64 *)v11 )
        goto LABEL_9;
LABEL_14:
      v50 = v3;
      v13 = sub_235D20(a1, a2, v7, (int)v9 - (int)v8);
      v3 = v50;
      v14 = v13;
    }
  }
  return sub_235000(a1, v3, v14, 1);
}
