__int64 __fastcall sub_DAF180(__int64 a1, __int64 *a2, unsigned int a3, int a4, int a5)
{
  __int64 v9; // rbp
  __int64 v10; // rbp
  int v11; // r15d
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  char v30; // al
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned __int8 v36; // [rsp+8h] [rbp-F0h]
  int v37; // [rsp+14h] [rbp-E4h]
  int v38; // [rsp+20h] [rbp-D8h]
  unsigned int v39; // [rsp+24h] [rbp-D4h]
  _BYTE v40[24]; // [rsp+30h] [rbp-C8h] BYREF
  int v41; // [rsp+48h] [rbp-B0h]
  __int64 v42; // [rsp+50h] [rbp-A8h]
  __int64 v43; // [rsp+58h] [rbp-A0h]
  __int64 v44; // [rsp+60h] [rbp-98h] BYREF
  __int128 v45; // [rsp+68h] [rbp-90h]
  int v46; // [rsp+78h] [rbp-80h]
  __int64 v47; // [rsp+80h] [rbp-78h]
  __int64 v48; // [rsp+88h] [rbp-70h]
  __int64 v49; // [rsp+90h] [rbp-68h] BYREF
  __int128 v50; // [rsp+98h] [rbp-60h]
  int v51; // [rsp+A8h] [rbp-50h]
  __int64 v52; // [rsp+B0h] [rbp-48h]
  __int64 v53; // [rsp+B8h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v9, 48);
  sub_DFF520(v40);
  sub_DFDA50(v9, 48);
  v10 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v37 = a5 + a3;
  if ( a5 )
  {
    v11 = a4 - a3;
    do
    {
      if ( v41 == 1 )
      {
        v44 = a3;
        v46 = 1;
        v48 = v43;
        v45 = 0;
        v47 = v42;
      }
      else if ( v41 == 2 )
      {
        v44 = a3;
        v45 = 0;
        v46 = 2;
        v47 = v42;
      }
      else if ( (_DWORD)v43 == -1 )
      {
        if ( v41 == 3 )
          goto LABEL_61;
        sub_DFF4E0(&v44, v42, (unsigned int)v43, *(unsigned int *)(*(_QWORD *)(v42 + 32) + 20LL));
      }
      else
      {
        if ( v41 )
        {
          if ( v41 == 3 )
            BUG();
          v12 = v42;
          v13 = (unsigned int)v43;
          v14 = *(_QWORD *)(v42 + 32);
          v15 = *(unsigned int *)(v14 + 16) * (unsigned __int64)a3;
        }
        else
        {
          v12 = v42;
          v14 = *(_QWORD *)(v42 + 32);
          if ( *(_DWORD *)(v14 + 24) != (_DWORD)v43 && (_DWORD)v43 )
          {
            v13 = (unsigned int)v43;
            v15 = *(unsigned int *)(*(_QWORD *)(v42 + (unsigned int)v43 + 32) + 16LL) * (unsigned __int64)a3;
          }
          else
          {
            v13 = (unsigned int)v43;
            v15 = *(unsigned int *)(v14 + 16) * (unsigned __int64)a3;
          }
          if ( *(_DWORD *)(v14 + 24) != (_DWORD)v43 && (_DWORD)v43 )
            v14 = *(_QWORD *)(v42 + v13 + 32);
        }
        v16 = v15 + 32;
        if ( *(_QWORD *)(v14 + 40) )
          v16 = v15 + 16;
        sub_DFF4E0(&v44, v12, (unsigned int)v43, v13 + v16);
      }
      if ( !(unsigned __int8)sub_DA8420(a1, a2, (__int64)&v44, 0) )
      {
        sub_DFF560(&v44);
        v30 = 0;
        goto LABEL_29;
      }
      v17 = *(_DWORD *)(v10 + 24);
      v18 = v11 + a3;
      if ( v17 == 1 )
      {
        v27 = *(_QWORD *)(v10 + 32);
        v32 = *(_QWORD *)(v10 + 40);
        v49 = v11 + a3;
        v50 = 0;
        v51 = 1;
        v53 = v32;
        v52 = v27;
      }
      else if ( v17 == 2 )
      {
        v27 = *(_QWORD *)(v10 + 32);
        v49 = v11 + a3;
        v50 = 0;
        v51 = 2;
        v52 = v27;
      }
      else
      {
        v19 = *(unsigned int *)(v10 + 40);
        if ( (_DWORD)v19 == -1 )
        {
          if ( v17 == 3 )
LABEL_61:
            BUG();
          v22 = *(_QWORD *)(v10 + 32);
          v26 = *(unsigned int *)(*(_QWORD *)(v22 + 32) + 20LL);
        }
        else
        {
          v39 = *(_DWORD *)(v10 + 40);
          v38 = *(_DWORD *)(v10 + 24);
          v20 = sub_CDA220(v10);
          v19 = v39;
          v21 = (v11 + a3) * (unsigned __int64)*(unsigned int *)(v20 + 16);
          if ( v38 )
          {
            if ( v38 == 3 )
              BUG();
            v22 = *(_QWORD *)(v10 + 32);
            v23 = v39;
            v24 = *(_QWORD *)(v22 + 32);
          }
          else
          {
            v22 = *(_QWORD *)(v10 + 32);
            v23 = v39;
            v24 = *(_QWORD *)(v22 + 32);
            if ( *(_DWORD *)(v24 + 24) != v39 && v39 )
              v24 = *(_QWORD *)(v22 + v39 + 32);
          }
          v25 = v21 + 32;
          if ( *(_QWORD *)(v24 + 40) )
            v25 = v21 + 16;
          v26 = v23 + v25;
        }
        sub_DFF4E0(&v49, v22, v19, v26);
        v17 = v51;
        v18 = v49;
        v27 = v52;
      }
      if ( v46 )
        goto LABEL_25;
      v33 = *(_QWORD *)(v47 + 32);
      if ( *(_DWORD *)(v33 + 24) != (_DWORD)v48 && (_DWORD)v48 )
        v33 = *(_QWORD *)(v47 + (unsigned int)v48 + 32);
      if ( *(_BYTE *)(v33 + 60) && (unsigned int)v48 == v44 )
      {
        v28 = v47 + v44 + 72;
        if ( v17 )
          goto LABEL_26;
      }
      else
      {
LABEL_25:
        v28 = v47 + v44 + 40;
        if ( v17 )
          goto LABEL_26;
      }
      v34 = *(_QWORD *)(v27 + 32);
      if ( *(_DWORD *)(v34 + 24) != (_DWORD)v53 && (_DWORD)v53 )
        v34 = *(_QWORD *)(v27 + (unsigned int)v53 + 32);
      if ( *(_BYTE *)(v34 + 60) && v18 == (unsigned int)v53 )
      {
        v29 = v27 + v18 + 72;
        goto LABEL_27;
      }
LABEL_26:
      v29 = v27 + v18 + 40;
LABEL_27:
      ++a3;
      *(_QWORD *)v29 = *(_QWORD *)v28;
      *(_DWORD *)(v29 + 8) = *(_DWORD *)(v28 + 8);
      sub_E00FC0(&v49);
      sub_DFF560(&v49);
      sub_DFF560(&v44);
    }
    while ( v37 != a3 );
  }
  v30 = 1;
LABEL_29:
  v36 = v30;
  sub_DFF560(v40);
  return v36;
}

