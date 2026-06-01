__int64 __fastcall sub_9ECF50(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // r15
  unsigned int v12; // ebx
  int v13; // r12d
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // esi
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // r8
  _BYTE *v35; // r8
  __int64 v36; // rsi
  _BYTE *v37; // rax
  char v38; // al
  unsigned __int8 v41; // [rsp+0h] [rbp-118h]
  __int64 v43; // [rsp+8h] [rbp-110h]
  _BYTE v45[24]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v46; // [rsp+38h] [rbp-E0h]
  __int64 v47; // [rsp+40h] [rbp-D8h]
  int v48; // [rsp+50h] [rbp-C8h]
  __int64 v49; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v50; // [rsp+68h] [rbp-B0h]
  __int64 v51; // [rsp+78h] [rbp-A0h]
  __int64 v52; // [rsp+80h] [rbp-98h]
  char v53; // [rsp+88h] [rbp-90h]
  int v54; // [rsp+90h] [rbp-88h]
  __int64 v55; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-70h]
  __int64 v57; // [rsp+B8h] [rbp-60h]
  __int64 v58; // [rsp+C0h] [rbp-58h]
  char v59; // [rsp+C8h] [rbp-50h]
  int v60; // [rsp+D0h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 184);
  v8 = sub_A1A5A0(v7, 56);
  sub_A1C070(v45, v8);
  sub_A1A5E0(v7, 56);
  v9 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v10 = a5 + a3;
  if ( a5 )
  {
    v11 = v9;
    v12 = a3;
    v43 = a1;
    v13 = v10;
    while ( 1 )
    {
      if ( v48 == 1 )
      {
        v49 = v12;
        v54 = 1;
        v52 = v47;
        v50 = 0;
        v51 = v46;
      }
      else if ( v48 == 2 )
      {
        v49 = v12;
        v54 = 2;
        v51 = v46;
        v52 = 0;
        v53 = 1;
        v50 = 0;
      }
      else if ( (_DWORD)v47 == -1 )
      {
        if ( v48 == 3 )
          goto LABEL_64;
        sub_A1C030(&v49, v46, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v46 + 32) + 12LL));
      }
      else
      {
        if ( v48 )
        {
          if ( v48 == 3 )
            goto LABEL_63;
          v14 = v46;
          v16 = (unsigned int)v47;
          v15 = *(_QWORD *)(v46 + 32);
          v17 = *(unsigned int *)(v15 + 8) * (unsigned __int64)v12;
        }
        else
        {
          v14 = v46;
          if ( !v46 )
            goto LABEL_62;
          v15 = *(_QWORD *)(v46 + 32);
          v16 = (unsigned int)v47;
          if ( *(_DWORD *)(v15 + 16) != (_DWORD)v47 && (_DWORD)v47 )
          {
            v15 = *(_QWORD *)(v46 + (unsigned int)v47 + 32);
            v17 = *(unsigned int *)(v15 + 8) * (unsigned __int64)v12;
          }
          else
          {
            v17 = *(unsigned int *)(v15 + 8) * (unsigned __int64)v12;
          }
        }
        v18 = v17 + 32;
        if ( *(_QWORD *)(v15 + 32) )
          v18 = v17 + 16;
        sub_A1C030(&v49, v14, (unsigned int)v47, v16 + v18);
      }
      if ( !(unsigned __int8)sub_9E82D0(v43, a2, (__int64)&v49) )
      {
        sub_A1C0C0(&v49);
        v38 = 0;
        goto LABEL_44;
      }
      v19 = a4 - a3 + v12;
      v20 = *(_DWORD *)(v11 + 48);
      if ( v20 == 1 )
        break;
      if ( v20 == 2 )
      {
        v30 = *(_QWORD *)(v11 + 24);
        v55 = a4 - a3 + v12;
        v60 = 2;
        v32 = v49;
        v57 = v30;
        v33 = v51;
        v58 = 0;
        v59 = 1;
        v56 = 0;
        if ( v54 )
        {
LABEL_47:
          v35 = (_BYTE *)(v33 + v32 + 40);
          goto LABEL_41;
        }
        goto LABEL_28;
      }
      v21 = *(_DWORD *)(v11 + 32);
      if ( v21 == -1 )
      {
        if ( v20 == 3 )
LABEL_64:
          BUG();
        v29 = *(_QWORD *)(v11 + 24);
        v27 = 0xFFFFFFFFLL;
        v28 = *(unsigned int *)(*(_QWORD *)(v29 + 32) + 12LL);
      }
      else
      {
        if ( v20 )
        {
          if ( v20 == 3 )
LABEL_63:
            BUG();
          v22 = *(_QWORD *)(v11 + 24);
          v24 = v21;
          v23 = *(_QWORD *)(v22 + 32);
          v25 = v19 * *(unsigned int *)(v23 + 8);
        }
        else
        {
          v22 = *(_QWORD *)(v11 + 24);
          if ( !v22 )
LABEL_62:
            BUG();
          v23 = *(_QWORD *)(v22 + 32);
          v24 = v21;
          if ( *(_DWORD *)(v23 + 16) != v21 && v21 )
          {
            v23 = *(_QWORD *)(v22 + v21 + 32);
            v25 = v19 * *(unsigned int *)(v23 + 8);
          }
          else
          {
            v25 = v19 * *(unsigned int *)(v23 + 8);
          }
        }
        v26 = v25 + 32;
        if ( *(_QWORD *)(v23 + 32) )
          v26 = v25 + 16;
        v27 = v21;
        v28 = v24 + v26;
        v29 = v22;
      }
      sub_A1C030(&v55, v29, v27, v28);
      v20 = v60;
      v19 = v55;
      v30 = v57;
      v32 = v49;
      v33 = v51;
      if ( v54 )
      {
LABEL_34:
        v35 = (_BYTE *)(v33 + v32 + 40);
        goto LABEL_35;
      }
      v34 = *(_QWORD *)(v51 + 32);
LABEL_29:
      if ( *(_DWORD *)(v34 + 16) != (_DWORD)v52 && (_DWORD)v52 )
        v34 = *(_QWORD *)(v33 + (unsigned int)v52 + 32);
      if ( !*(_BYTE *)(v34 + 51) )
        goto LABEL_34;
      v35 = (_BYTE *)(v33 + v32 + 72);
      if ( v32 != (unsigned int)v52 )
        goto LABEL_34;
LABEL_35:
      if ( !v20 )
      {
        v36 = *(_QWORD *)(v30 + 32);
        if ( *(_DWORD *)(v36 + 16) != (_DWORD)v58 && (_DWORD)v58 )
          v36 = *(_QWORD *)(v30 + (unsigned int)v58 + 32);
        if ( *(_BYTE *)(v36 + 51) && v19 == (unsigned int)v58 )
        {
          v37 = (_BYTE *)(v30 + v19 + 72);
          goto LABEL_42;
        }
      }
LABEL_41:
      v37 = (_BYTE *)(v30 + v19 + 40);
LABEL_42:
      ++v12;
      *v37 = *v35;
      sub_A1DB00(&v55);
      sub_A1C0C0(&v55);
      sub_A1C0C0(&v49);
      if ( v12 == v13 )
        goto LABEL_43;
    }
    v30 = *(_QWORD *)(v11 + 24);
    v31 = *(_QWORD *)(v11 + 32);
    v55 = a4 - a3 + v12;
    v32 = v49;
    v60 = 1;
    v58 = v31;
    v33 = v51;
    v57 = v30;
    v56 = 0;
    if ( v54 )
      goto LABEL_47;
LABEL_28:
    v34 = *(_QWORD *)(v33 + 32);
    goto LABEL_29;
  }
LABEL_43:
  v38 = 1;
LABEL_44:
  v41 = v38;
  sub_A1C0C0(v45);
  return v41;
}

