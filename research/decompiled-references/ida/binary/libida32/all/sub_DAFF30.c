__int64 __fastcall sub_DAFF30(__int64 a1, __int64 *a2, unsigned int a3, int a4, int a5)
{
  __int64 v8; // rbp
  __int64 v9; // rbp
  int v10; // r15d
  unsigned int v11; // r14d
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rsi
  unsigned int v19; // r14d
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r15
  unsigned int v29; // ecx
  int v30; // edx
  char v31; // al
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int8 v38; // [rsp+0h] [rbp-F8h]
  int v40; // [rsp+14h] [rbp-E4h]
  int v41; // [rsp+20h] [rbp-D8h]
  int v42; // [rsp+24h] [rbp-D4h]
  _BYTE v43[24]; // [rsp+30h] [rbp-C8h] BYREF
  int v44; // [rsp+48h] [rbp-B0h]
  __int64 v45; // [rsp+50h] [rbp-A8h]
  __int64 v46; // [rsp+58h] [rbp-A0h]
  __int64 v47; // [rsp+60h] [rbp-98h] BYREF
  __int128 v48; // [rsp+68h] [rbp-90h]
  int v49; // [rsp+78h] [rbp-80h]
  __int64 v50; // [rsp+80h] [rbp-78h]
  __int64 v51; // [rsp+88h] [rbp-70h]
  __int64 v52; // [rsp+90h] [rbp-68h] BYREF
  __int128 v53; // [rsp+98h] [rbp-60h]
  int v54; // [rsp+A8h] [rbp-50h]
  __int64 v55; // [rsp+B0h] [rbp-48h]
  __int64 v56; // [rsp+B8h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v8, 48);
  sub_DFF520(v43);
  sub_DFDA50(v8, 48);
  v9 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v40 = a5 + a3;
  if ( a5 )
  {
    v41 = a4 - a3;
    while ( 1 )
    {
      v10 = v44;
      if ( v44 == 1 )
      {
        v47 = a3;
        v48 = 0;
        v51 = v46;
        v49 = 1;
        v50 = v45;
      }
      else if ( v44 == 2 )
      {
        v47 = a3;
        v48 = 0;
        v49 = 2;
        v50 = v45;
      }
      else
      {
        v11 = v46;
        if ( (_DWORD)v46 == -1 )
        {
          if ( v44 == 3 )
            goto LABEL_62;
          sub_DFF4E0(&v47, v45, (unsigned int)v46, *(unsigned int *)(*(_QWORD *)(v45 + 32) + 20LL));
        }
        else
        {
          v12 = a3 * (unsigned __int64)*(unsigned int *)(sub_CDA220((__int64)v43) + 16);
          if ( v10 )
          {
            if ( v10 == 3 )
              goto LABEL_61;
            v13 = v45;
            v14 = v11;
            v15 = *(_QWORD *)(v45 + 32);
          }
          else
          {
            v13 = v45;
            v14 = v11;
            v15 = *(_QWORD *)(v45 + 32);
            if ( *(_DWORD *)(v15 + 24) != v11 && v11 )
              v15 = *(_QWORD *)(v45 + v11 + 32);
          }
          v16 = v12 + 32;
          if ( *(_QWORD *)(v15 + 40) )
            v16 = v12 + 16;
          sub_DFF4E0(&v47, v13, v11, v14 + v16);
        }
      }
      if ( !(unsigned __int8)sub_DA8420(a1, a2, (__int64)&v47, 0) )
        break;
      v17 = *(_DWORD *)(v9 + 24);
      v18 = v41 + a3;
      if ( v17 == 1 )
      {
        v26 = *(_QWORD *)(v9 + 32);
        v33 = *(_QWORD *)(v9 + 40);
        v52 = v41 + a3;
        v53 = 0;
        v54 = 1;
        v56 = v33;
        v55 = v26;
      }
      else if ( v17 == 2 )
      {
        v26 = *(_QWORD *)(v9 + 32);
        v52 = v41 + a3;
        v53 = 0;
        v54 = 2;
        v55 = v26;
      }
      else
      {
        v19 = *(_DWORD *)(v9 + 40);
        if ( v19 == -1 )
        {
          if ( v17 == 3 )
LABEL_62:
            BUG();
          v21 = *(_QWORD *)(v9 + 32);
          v25 = *(unsigned int *)(*(_QWORD *)(v21 + 32) + 20LL);
        }
        else
        {
          v42 = *(_DWORD *)(v9 + 24);
          v20 = (v41 + a3) * (unsigned __int64)*(unsigned int *)(sub_CDA220(v9) + 16);
          if ( v42 )
          {
            if ( v42 == 3 )
LABEL_61:
              BUG();
            v21 = *(_QWORD *)(v9 + 32);
            v22 = v19;
            v23 = *(_QWORD *)(v21 + 32);
          }
          else
          {
            v21 = *(_QWORD *)(v9 + 32);
            v22 = v19;
            v23 = *(_QWORD *)(v21 + 32);
            if ( *(_DWORD *)(v23 + 24) != v19 && v19 )
              v23 = *(_QWORD *)(v21 + v19 + 32);
          }
          v24 = v20 + 32;
          if ( *(_QWORD *)(v23 + 40) )
            v24 = v20 + 16;
          v25 = v24 + v22;
        }
        sub_DFF4E0(&v52, v21, v19, v25);
        v18 = v52;
        v26 = v55;
        v17 = v54;
      }
      if ( v49 )
        goto LABEL_24;
      v36 = *(_QWORD *)(v50 + 32);
      if ( *(_DWORD *)(v36 + 24) != (_DWORD)v51 && (_DWORD)v51 )
        v36 = *(_QWORD *)(v50 + (unsigned int)v51 + 32);
      if ( !*(_BYTE *)(v36 + 60) || (v27 = v50 + v47 + 72, v47 != (unsigned int)v51) )
LABEL_24:
        v27 = v50 + v47 + 40;
      if ( v17 )
        goto LABEL_26;
      v35 = *(_QWORD *)(v26 + 32);
      if ( *(_DWORD *)(v35 + 24) != (_DWORD)v56 && (_DWORD)v56 )
        v35 = *(_QWORD *)(v26 + (unsigned int)v56 + 32);
      if ( !*(_BYTE *)(v35 + 60) || (v28 = v26 + v18 + 72, (unsigned int)v56 != v18) )
LABEL_26:
        v28 = v26 + v18 + 40;
      if ( *(_DWORD *)(v28 + 8) <= 0x40u && (v29 = *(_DWORD *)(v27 + 8), v29 <= 0x40) )
      {
        v34 = *(_QWORD *)v27;
        *(_DWORD *)(v28 + 8) = v29;
        *(_QWORD *)v28 = v34;
      }
      else
      {
        sub_21E1960(v28, v27);
      }
      v30 = *(_DWORD *)(v27 + 16);
      ++a3;
      *(_BYTE *)(v28 + 12) = *(_BYTE *)(v27 + 12);
      *(_DWORD *)(v28 + 16) = v30;
      sub_E00FC0(&v52);
      sub_DFF560(&v52);
      sub_DFF560(&v47);
      if ( v40 == a3 )
        goto LABEL_31;
    }
    sub_DFF560(&v47);
    v31 = 0;
  }
  else
  {
LABEL_31:
    v31 = 1;
  }
  v38 = v31;
  sub_DFF560(v43);
  return v38;
}

