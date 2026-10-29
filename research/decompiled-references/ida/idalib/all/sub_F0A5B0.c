void __fastcall sub_F0A5B0(__int64 *a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned int v9; // ebp
  char *v10; // rsi
  __int64 v11; // r13
  _BYTE *v12; // rax
  const char *v13; // rax
  __int64 v14; // rax
  char *v15; // rsi
  __int64 v16; // r13
  const char *v17; // rax
  __int64 v18; // rax
  char *v19; // rsi
  __int64 v20; // rbx
  _BYTE *v21; // rax
  const char *v22; // rax
  char *v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  char v27; // al
  __int64 v28; // rsi
  char *v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // r14d
  char *v32; // rsi
  __int64 v33; // rdi
  char v34; // al
  __int64 v35; // rsi
  char *v36; // rdx
  __int64 v37; // r13
  const char *v38; // rax

  v9 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
  if ( v9 - 37 <= 1 )
  {
    if ( *(_DWORD *)(a2 + 16) == 1 )
    {
      v16 = *a1;
      v17 = (const char *)sub_FDF900((*(_BYTE *)(a2 + 3) >> 1) & 0x3F);
      v18 = sub_995540(v16, v17);
      a3 = *(_BYTE **)(v18 + 32);
      if ( *(_QWORD *)(v18 + 24) <= (unsigned __int64)a3 )
      {
LABEL_51:
        sub_227BA10(v18, 32);
LABEL_15:
        v15 = *(char **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
        if ( !v15 )
        {
LABEL_12:
          sub_F049C0(a1);
          return;
        }
        goto LABEL_16;
      }
LABEL_14:
      a4 = (__int64)(a3 + 1);
      *(_QWORD *)(v18 + 32) = a3 + 1;
      *a3 = 32;
      goto LABEL_15;
    }
    v19 = *(char **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
    if ( v19 )
      sub_F05430(a1, v19, (__int64)a3, a4, a5, a6, a7);
    else
      sub_F049C0(a1);
    v20 = *a1;
    v21 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v21 >= *(_QWORD *)(*a1 + 24) )
    {
      v20 = sub_227BA10(*a1, 32);
    }
    else
    {
      *(_QWORD *)(v20 + 32) = v21 + 1;
      *v21 = 32;
    }
    v22 = (const char *)sub_FDF900(v9);
    sub_995540(v20, v22);
  }
  else
  {
    if ( v9 == 41 )
      goto LABEL_15;
    if ( v9 - 42 > 1 )
    {
      if ( *(_DWORD *)(a2 + 16) != 1 )
      {
        v10 = *(char **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
        if ( v10 )
          sub_F05430(a1, v10, (__int64)a3, a4, a5, a6, a7);
        else
          sub_F049C0(a1);
        v11 = *a1;
        v12 = *(_BYTE **)(*a1 + 32);
        if ( (unsigned __int64)v12 >= *(_QWORD *)(*a1 + 24) )
        {
          v11 = sub_227BA10(*a1, 32);
        }
        else
        {
          *(_QWORD *)(v11 + 32) = v12 + 1;
          *v12 = 32;
        }
        v13 = (const char *)sub_FDF900(v9);
        v14 = sub_995540(v11, v13);
        a3 = *(_BYTE **)(v14 + 32);
        if ( (unsigned __int64)a3 >= *(_QWORD *)(v14 + 24) )
        {
          sub_227BA10(v14, 32);
        }
        else
        {
          a4 = (__int64)(a3 + 1);
          *(_QWORD *)(v14 + 32) = a3 + 1;
          *a3 = 32;
        }
        v15 = *(char **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
        if ( !v15 )
          goto LABEL_12;
LABEL_16:
        sub_F05430(a1, v15, (__int64)a3, a4, a5, a6, a7);
        return;
      }
      v37 = *a1;
      v38 = (const char *)sub_FDF900((*(_BYTE *)(a2 + 3) >> 1) & 0x3F);
      v18 = sub_995540(v37, v38);
      a3 = *(_BYTE **)(v18 + 32);
      if ( (unsigned __int64)a3 >= *(_QWORD *)(v18 + 24) )
        goto LABEL_51;
      goto LABEL_14;
    }
    v23 = *(char **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
    if ( v23 )
      sub_F05430(a1, v23, (__int64)a3, a4, a5, a6, a7);
    else
      sub_F049C0(a1);
    v26 = *a1;
    v27 = 40;
    if ( v9 != 42 )
      v27 = 91;
    v28 = 40;
    if ( v9 != 42 )
      v28 = 91;
    v29 = *(char **)(v26 + 32);
    if ( (unsigned __int64)v29 >= *(_QWORD *)(v26 + 24) )
    {
      sub_227BA10(v26, v28);
    }
    else
    {
      v30 = (__int64)(v29 + 1);
      *(_QWORD *)(v26 + 32) = v29 + 1;
      *v29 = v27;
    }
    v31 = 1;
    if ( *(_DWORD *)(a2 + 16) > 1u )
    {
      while ( 1 )
      {
        v32 = *(char **)(a2 + 8 * (v31 + (unsigned __int64)((*(_BYTE *)(a2 + 2) & 8) != 0)) + 40);
        if ( (*(_WORD *)v32 & 0x1FF) != 0x70 )
          sub_F05430(a1, v32, v31, v30, v24, v25, a7);
        if ( ++v31 >= *(_DWORD *)(a2 + 16) )
          break;
        if ( v31 > 1 )
          sub_995540(*a1, ", ");
      }
    }
    v33 = *a1;
    v34 = 41;
    if ( v9 != 42 )
      v34 = 93;
    v35 = 41;
    if ( v9 != 42 )
      v35 = 93;
    v36 = *(char **)(v33 + 32);
    if ( (unsigned __int64)v36 >= *(_QWORD *)(v33 + 24) )
    {
      sub_227BA10(v33, v35);
    }
    else
    {
      *(_QWORD *)(v33 + 32) = v36 + 1;
      *v36 = v34;
    }
  }
}
