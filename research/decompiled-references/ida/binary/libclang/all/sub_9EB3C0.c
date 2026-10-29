__int64 __fastcall sub_9EB3C0(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  unsigned int v5; // r15d
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 *v31; // r14
  __int64 *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rdx
  char v35; // al
  unsigned __int8 v37; // [rsp+8h] [rbp-130h]
  int v42; // [rsp+2Ch] [rbp-10Ch]
  __int64 v43; // [rsp+30h] [rbp-108h]
  _BYTE v44[24]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-E0h]
  __int64 v46; // [rsp+60h] [rbp-D8h]
  int v47; // [rsp+70h] [rbp-C8h]
  __int64 v48; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v49; // [rsp+88h] [rbp-B0h]
  __int64 v50; // [rsp+98h] [rbp-A0h]
  __int64 v51; // [rsp+A0h] [rbp-98h]
  char v52; // [rsp+A8h] [rbp-90h]
  unsigned int v53; // [rsp+B0h] [rbp-88h]
  __int64 v54; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v55; // [rsp+C8h] [rbp-70h]
  __int64 v56; // [rsp+D8h] [rbp-60h]
  __int64 v57; // [rsp+E0h] [rbp-58h]
  char v58; // [rsp+E8h] [rbp-50h]
  int v59; // [rsp+F0h] [rbp-48h]

  v5 = a3;
  v7 = *(_QWORD *)(a1 + 184);
  v8 = sub_A1A5A0(v7, 56);
  sub_A1C070(v44, v8);
  sub_A1A5E0(v7, 56);
  v9 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( a5 )
  {
    v42 = a5 + v5;
    v10 = v9;
    while ( 1 )
    {
      if ( v47 == 1 )
      {
        v48 = v5;
        v53 = 1;
        v51 = v46;
        v49 = 0;
        v50 = v45;
      }
      else if ( v47 == 2 )
      {
        v48 = v5;
        v53 = 2;
        v50 = v45;
        v51 = 0;
        v52 = 1;
        v49 = 0;
      }
      else if ( (_DWORD)v46 == -1 )
      {
        if ( v47 == 3 )
          goto LABEL_72;
        sub_A1C030(&v48, v45, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v45 + 32) + 12LL));
      }
      else
      {
        if ( v47 )
        {
          if ( v47 == 3 )
            goto LABEL_71;
          v11 = v45;
          v13 = (unsigned int)v46;
          v12 = *(_QWORD *)(v45 + 32);
          v14 = *(unsigned int *)(v12 + 8) * (unsigned __int64)v5;
        }
        else
        {
          v11 = v45;
          if ( !v45 )
            goto LABEL_70;
          v12 = *(_QWORD *)(v45 + 32);
          v13 = (unsigned int)v46;
          if ( *(_DWORD *)(v12 + 16) != (_DWORD)v46 && (_DWORD)v46 )
          {
            v12 = *(_QWORD *)(v45 + (unsigned int)v46 + 32);
            v14 = *(unsigned int *)(v12 + 8) * (unsigned __int64)v5;
          }
          else
          {
            v14 = *(unsigned int *)(v12 + 8) * (unsigned __int64)v5;
          }
        }
        v15 = v14 + 32;
        if ( *(_QWORD *)(v12 + 32) )
          v15 = v14 + 16;
        sub_A1C030(&v48, v11, (unsigned int)v46, v13 + v15);
      }
      v16 = a2;
      if ( !(unsigned __int8)sub_9E82D0(a1, a2, (__int64)&v48) )
      {
        sub_A1C0C0(&v48);
        v35 = 0;
        goto LABEL_47;
      }
      v17 = a4 - a3 + v5;
      v18 = *(_DWORD *)(v10 + 48);
      if ( v18 == 1 )
        break;
      if ( v18 == 2 )
      {
        v28 = *(_QWORD *)(v10 + 24);
        v54 = a4 - a3 + v5;
        v58 = 1;
        v29 = v48;
        v56 = v28;
        v30 = v50;
        v59 = 2;
        v57 = 0;
        v55 = 0;
        if ( v53 )
        {
LABEL_53:
          v31 = (__int64 *)(v30 + v29 + 40);
LABEL_41:
          v32 = (__int64 *)(v28 + v17 + 40);
          goto LABEL_42;
        }
        goto LABEL_28;
      }
      v19 = *(_DWORD *)(v10 + 32);
      if ( v19 == -1 )
      {
        if ( v18 == 3 )
LABEL_72:
          BUG();
        v27 = *(_QWORD *)(v10 + 24);
        v25 = 0xFFFFFFFFLL;
        v26 = *(unsigned int *)(*(_QWORD *)(v27 + 32) + 12LL);
      }
      else
      {
        if ( v18 )
        {
          if ( v18 == 3 )
LABEL_71:
            BUG();
          v20 = *(_QWORD *)(v10 + 24);
          v22 = v19;
          v21 = *(_QWORD *)(v20 + 32);
          v23 = v17 * *(unsigned int *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(v10 + 24);
          if ( !v20 )
LABEL_70:
            BUG();
          v21 = *(_QWORD *)(v20 + 32);
          v22 = v19;
          if ( *(_DWORD *)(v21 + 16) != v19 && v19 )
          {
            v21 = *(_QWORD *)(v20 + v19 + 32);
            v23 = v17 * *(unsigned int *)(v21 + 8);
          }
          else
          {
            v23 = v17 * *(unsigned int *)(v21 + 8);
          }
        }
        v24 = v23 + 32;
        if ( *(_QWORD *)(v21 + 32) )
          v24 = v23 + 16;
        v25 = v19;
        v26 = v22 + v24;
        v27 = v20;
      }
      sub_A1C030(&v54, v27, v25, v26);
      v16 = v53;
      v18 = v59;
      v17 = v54;
      v28 = v56;
      v29 = v48;
      v30 = v50;
      if ( v53 )
      {
LABEL_34:
        v31 = (__int64 *)(v30 + v29 + 40);
        goto LABEL_35;
      }
      v16 = *(_QWORD *)(v50 + 32);
LABEL_29:
      if ( *(_DWORD *)(v16 + 16) != (_DWORD)v51 && (_DWORD)v51 )
        v16 = *(_QWORD *)(v30 + (unsigned int)v51 + 32);
      if ( !*(_BYTE *)(v16 + 51) )
        goto LABEL_34;
      v31 = (__int64 *)(v30 + v29 + 72);
      if ( v29 != (unsigned int)v51 )
        goto LABEL_34;
LABEL_35:
      if ( v18 )
        goto LABEL_41;
      v30 = *(_QWORD *)(v28 + 32);
      if ( *(_DWORD *)(v30 + 16) != (_DWORD)v57 && (_DWORD)v57 )
        v30 = *(_QWORD *)(v28 + (unsigned int)v57 + 32);
      if ( !*(_BYTE *)(v30 + 51) )
        goto LABEL_41;
      v32 = (__int64 *)(v28 + v17 + 72);
      if ( v17 != (unsigned int)v57 )
        goto LABEL_41;
LABEL_42:
      v33 = sub_2575D20(v30, v16, v17);
      v34 = *v31;
      if ( *v32 == v33 )
      {
        if ( *v32 != v34 )
        {
LABEL_49:
          if ( v31 != v32 )
          {
            v43 = v33;
            sub_5FF3B0(v32);
            if ( v43 == *v31 )
              sub_257CF50(v32, v31);
            else
              sub_25768A0(v32, v31);
          }
          goto LABEL_45;
        }
        sub_257D030(v32, v31);
      }
      else
      {
        if ( v33 == v34 )
          goto LABEL_49;
        sub_2576220(v32, v31);
      }
LABEL_45:
      ++v5;
      sub_A1DB00(&v54);
      sub_A1C0C0(&v54);
      sub_A1C0C0(&v48);
      if ( v5 == v42 )
        goto LABEL_46;
    }
    v28 = *(_QWORD *)(v10 + 24);
    v16 = *(_QWORD *)(v10 + 32);
    v54 = a4 - a3 + v5;
    v29 = v48;
    v59 = 1;
    v57 = v16;
    v30 = v50;
    v56 = v28;
    v55 = 0;
    if ( v53 )
      goto LABEL_53;
LABEL_28:
    v16 = *(_QWORD *)(v30 + 32);
    goto LABEL_29;
  }
LABEL_46:
  v35 = 1;
LABEL_47:
  v37 = v35;
  sub_A1C0C0(v44);
  return v37;
}

