void __fastcall sub_F0AE80(__int64 a1, __int64 *a2, double a3)
{
  __int64 v5; // rdi
  char *v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // r12d
  unsigned __int64 v9; // rax
  _BYTE *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  char v19; // r13
  char *v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  _BOOL8 v23; // rdx
  char *v24; // rsi
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // r8
  __int64 v28; // r9
  _BOOL8 v29; // rdx
  char *v30; // rsi
  _BYTE *v31; // rax
  _BYTE *v32; // rax
  size_t v33; // rax
  char *v34; // [rsp+18h] [rbp-B0h]
  __int64 v35; // [rsp+28h] [rbp-A0h] BYREF
  void *v36[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v37[16]; // [rsp+40h] [rbp-88h] BYREF
  void **v38; // [rsp+50h] [rbp-78h] BYREF
  int v39; // [rsp+58h] [rbp-70h]
  __int128 v40; // [rsp+60h] [rbp-68h]
  _BYTE *v41; // [rsp+70h] [rbp-58h]
  char v42; // [rsp+78h] [rbp-50h]
  int v43; // [rsp+7Ch] [rbp-4Ch]
  void **v44; // [rsp+80h] [rbp-48h]

  v5 = *(_QWORD *)a1;
  if ( (*a2 & 0x80000) != 0 )
  {
    sub_995540(v5, "::");
    v5 = *(_QWORD *)a1;
  }
  v6 = "new ";
  sub_995540(v5, "new ");
  v8 = *((_DWORD *)a2 + 1);
  v9 = *a2;
  if ( !v8
    || (v6 = (char *)(v9 >> 20),
        v7 = BYTE3(v9) & 1,
        (*(_WORD *)a2[(unsigned int)v7 + 7 + ((v9 & 0x100000) != 0)] & 0x1FF) == 0x70) )
  {
    if ( (v9 & 0x8000000) == 0 )
      goto LABEL_6;
    goto LABEL_30;
  }
  sub_995540(*(_QWORD *)a1, "(");
  v23 = (*a2 & 0x100000) != 0;
  v24 = (char *)a2[v23 + 7 + (BYTE3(*a2) & 1)];
  if ( v24 )
    sub_F05430((_QWORD *)a1, v24, v23, (unsigned __int64)*a2 >> 24, v21, v22, a3);
  else
    sub_F049C0((__int64 *)a1);
  if ( v8 > 1
    && (*(_WORD *)a2[(((unsigned __int64)*a2 >> 20) & 1) + 8 + (((unsigned __int64)*a2 >> 24) & 1)] & 0x1FF) != 0x70 )
  {
    v25 = 8;
    v26 = 8LL * (v8 - 2) + 8;
    do
    {
      sub_995540(*(_QWORD *)a1, ", ");
      v29 = (*a2 & 0x100000) != 0;
      v30 = (char *)a2[v29 + 7 + (BYTE3(*a2) & 1) + (unsigned __int64)v25 / 8];
      if ( v30 )
      {
        sub_F05430((_QWORD *)a1, v30, v29, (unsigned __int64)*a2 >> 24, v27, v28, a3);
        if ( v25 == v26 )
          break;
      }
      else
      {
        sub_F049C0((__int64 *)a1);
        if ( v25 == v26 )
          break;
      }
      v25 += 8;
    }
    while ( (*(_WORD *)a2[(((unsigned __int64)*a2 >> 20) & 1)
                        + 7
                        + (((unsigned __int64)*a2 >> 24) & 1)
                        + (unsigned __int64)v25 / 8]
           & 0x1FF) != 0x70 );
  }
  v6 = (char *)") ";
  sub_995540(*(_QWORD *)a1, ") ");
  v9 = *a2;
  if ( (*a2 & 0x8000000) != 0 )
  {
LABEL_30:
    v6 = "(";
    sub_995540(*(_QWORD *)a1, "(");
    v9 = *a2;
  }
LABEL_6:
  v37[0] = 0;
  v10 = v37;
  v36[1] = nullptr;
  v36[0] = v37;
  if ( (v9 & 0x100000) == 0 )
    goto LABEL_7;
  a3 = 0.0;
  v6 = nullptr;
  v39 = 0;
  v42 = 0;
  v38 = (void **)&off_2BEBE68;
  v43 = 1;
  v41 = nullptr;
  v40 = 0;
  v44 = v36;
  sub_227B8B0(&v38, 0, 0, 0);
  v31 = v41;
  if ( (unsigned __int64)v41 >= *((_QWORD *)&v40 + 1) )
  {
    v6 = (_BYTE *)(&qword_58 + 3);
    sub_227BA10(&v38, 91);
  }
  else
  {
    ++v41;
    *v31 = 91;
  }
  if ( (*a2 & 0x100000) != 0 && a2[7] )
  {
    v34 = (char *)a2[7];
    v33 = j__strlen("\n");
    v6 = (char *)&v38;
    sub_F07C00(v34, (__int64)&v38, *(_QWORD *)(a1 + 16), (const __m128i *)(a1 + 24), 0, 0, "\n", v33);
    v32 = v41;
    if ( (unsigned __int64)v41 >= *((_QWORD *)&v40 + 1) )
      goto LABEL_44;
  }
  else
  {
    v32 = v41;
    if ( (unsigned __int64)v41 >= *((_QWORD *)&v40 + 1) )
    {
LABEL_44:
      v6 = (_BYTE *)(&qword_58 + 5);
      sub_227BA10(&v38, 93);
      goto LABEL_36;
    }
  }
  v41 = v32 + 1;
  *v32 = 93;
LABEL_36:
  v38 = (void **)&off_2BEBE68;
  sub_227B7A0(&v38);
LABEL_7:
  v11 = *(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) != 42 )
    v11 = sub_F63050(*(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL), v6, v10, v7);
  v12 = *(_QWORD *)(v11 + 32);
  v13 = *(_QWORD *)a1;
  LOWORD(v41) = 260;
  v35 = v12;
  v38 = v36;
  sub_F74830(&v35, v13, a1 + 24, &v38, 0);
  if ( (*a2 & 0x8000000) != 0 )
    sub_995540(*(_QWORD *)a1, ")");
  if ( ((*((_BYTE *)a2 + 3) >> 1) & 3) != 0 )
  {
    v18 = *a2;
    if ( ((*((_BYTE *)a2 + 3) >> 1) & 3) != 1 )
      goto LABEL_13;
    if ( (v18 & 0x1000000) == 0 )
      BUG();
    v14 = *(unsigned __int16 *)a2[((v18 >> 20) & 1) + 7];
    LOWORD(v14) = v14 & 0x1FF;
    if ( (_WORD)v14 == 19 )
    {
LABEL_13:
      v19 = 0;
    }
    else
    {
      v19 = 1;
      sub_995540(*(_QWORD *)a1, "(");
      v18 = *a2;
    }
    if ( (v18 & 0x1000000) != 0 && (v20 = (char *)a2[((v18 >> 20) & 1) + 7]) != nullptr )
    {
      sub_F05430((_QWORD *)a1, v20, v14, v15, v16, v17, a3);
      if ( !v19 )
        goto LABEL_17;
    }
    else
    {
      sub_F049C0((__int64 *)a1);
      if ( !v19 )
        goto LABEL_17;
    }
    sub_995540(*(_QWORD *)a1, ")");
  }
LABEL_17:
  if ( v36[0] != v37 )
    operator delete(v36[0]);
}
