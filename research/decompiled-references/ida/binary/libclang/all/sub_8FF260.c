__int64 __fastcall sub_8FF260(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // r9d
  __int64 v10; // r15
  unsigned int v11; // ebx
  int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rdi
  char v37; // al
  unsigned __int8 v40; // [rsp+0h] [rbp-118h]
  _BYTE v44[24]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v45; // [rsp+38h] [rbp-E0h]
  __int64 v46; // [rsp+40h] [rbp-D8h]
  int v47; // [rsp+50h] [rbp-C8h]
  __int64 v48; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v49; // [rsp+68h] [rbp-B0h]
  __int64 v50; // [rsp+78h] [rbp-A0h]
  __int64 v51; // [rsp+80h] [rbp-98h]
  char v52; // [rsp+88h] [rbp-90h]
  int v53; // [rsp+90h] [rbp-88h]
  __int64 v54; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v55; // [rsp+A8h] [rbp-70h]
  __int64 v56; // [rsp+B8h] [rbp-60h]
  __int64 v57; // [rsp+C0h] [rbp-58h]
  char v58; // [rsp+C8h] [rbp-50h]
  int v59; // [rsp+D0h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v44, v7);
  sub_A1A5E0(v6, 56);
  v8 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v9 = a5 + a3;
  if ( a5 )
  {
    v10 = v8;
    v11 = a3;
    v12 = v9;
    do
    {
      if ( v47 == 1 )
      {
        v48 = v11;
        v53 = 1;
        v51 = v46;
        v49 = 0;
        v50 = v45;
      }
      else if ( v47 == 2 )
      {
        v48 = v11;
        v53 = 2;
        v50 = v45;
        v51 = 0;
        v52 = 1;
        v49 = 0;
      }
      else if ( (_DWORD)v46 == -1 )
      {
        if ( v47 == 3 )
          goto LABEL_67;
        sub_A1C030(&v48, v45, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v45 + 32) + 12LL));
      }
      else
      {
        if ( v47 )
        {
          if ( v47 == 3 )
            goto LABEL_66;
          v13 = v45;
          v15 = (unsigned int)v46;
          v14 = *(_QWORD *)(v45 + 32);
          v16 = *(unsigned int *)(v14 + 8) * (unsigned __int64)v11;
        }
        else
        {
          v13 = v45;
          if ( !v45 )
            goto LABEL_65;
          v14 = *(_QWORD *)(v45 + 32);
          v15 = (unsigned int)v46;
          if ( *(_DWORD *)(v14 + 16) != (_DWORD)v46 && (_DWORD)v46 )
          {
            v14 = *(_QWORD *)(v45 + (unsigned int)v46 + 32);
            v16 = *(unsigned int *)(v14 + 8) * (unsigned __int64)v11;
          }
          else
          {
            v16 = *(unsigned int *)(v14 + 8) * (unsigned __int64)v11;
          }
        }
        v17 = v16 + 32;
        if ( *(_QWORD *)(v14 + 32) )
          v17 = v16 + 16;
        sub_A1C030(&v48, v13, (unsigned int)v46, v15 + v17);
      }
      if ( !(unsigned __int8)sub_9E4580(a1, a2, &v48, 0) )
      {
        sub_A1C0C0(&v48);
        v37 = 0;
        goto LABEL_47;
      }
      v18 = a4 - a3 + v11;
      v19 = *(_DWORD *)(v10 + 48);
      if ( v19 == 1 )
      {
        v29 = *(_QWORD *)(v10 + 24);
        v30 = *(_QWORD *)(v10 + 32);
        v54 = a4 - a3 + v11;
        v31 = v48;
        v59 = 1;
        v57 = v30;
        v32 = v50;
        v56 = v29;
        v55 = 0;
        if ( !v53 )
          goto LABEL_28;
      }
      else
      {
        if ( v19 != 2 )
        {
          v20 = *(_DWORD *)(v10 + 32);
          if ( v20 == -1 )
          {
            if ( v19 == 3 )
LABEL_67:
              BUG();
            v28 = *(_QWORD *)(v10 + 24);
            v26 = 0xFFFFFFFFLL;
            v27 = *(unsigned int *)(*(_QWORD *)(v28 + 32) + 12LL);
          }
          else
          {
            if ( v19 )
            {
              if ( v19 == 3 )
LABEL_66:
                BUG();
              v21 = *(_QWORD *)(v10 + 24);
              v23 = v20;
              v22 = *(_QWORD *)(v21 + 32);
              v24 = v18 * *(unsigned int *)(v22 + 8);
            }
            else
            {
              v21 = *(_QWORD *)(v10 + 24);
              if ( !v21 )
LABEL_65:
                BUG();
              v22 = *(_QWORD *)(v21 + 32);
              v23 = v20;
              if ( *(_DWORD *)(v22 + 16) != v20 && v20 )
              {
                v22 = *(_QWORD *)(v21 + v20 + 32);
                v24 = v18 * *(unsigned int *)(v22 + 8);
              }
              else
              {
                v24 = v18 * *(unsigned int *)(v22 + 8);
              }
            }
            v25 = v24 + 32;
            if ( *(_QWORD *)(v22 + 32) )
              v25 = v24 + 16;
            v26 = v20;
            v27 = v23 + v25;
            v28 = v21;
          }
          sub_A1C030(&v54, v28, v26, v27);
          v19 = v59;
          v18 = v54;
          v29 = v56;
          v31 = v48;
          v32 = v50;
          if ( !v53 )
          {
            v33 = *(_QWORD *)(v50 + 32);
            goto LABEL_29;
          }
          goto LABEL_34;
        }
        v29 = *(_QWORD *)(v10 + 24);
        v54 = a4 - a3 + v11;
        v59 = 2;
        v31 = v48;
        v56 = v29;
        v32 = v50;
        v57 = 0;
        v58 = 1;
        v55 = 0;
        if ( !v53 )
        {
LABEL_28:
          v33 = *(_QWORD *)(v32 + 32);
LABEL_29:
          if ( *(_DWORD *)(v33 + 16) != (_DWORD)v51 && (_DWORD)v51 )
            v33 = *(_QWORD *)(v32 + (unsigned int)v51 + 32);
          if ( !*(_BYTE *)(v33 + 51) || (v34 = v32 + v31 + 72, v31 != (unsigned int)v51) )
LABEL_34:
            v34 = v32 + v31 + 40;
          if ( !v19 )
          {
            v35 = *(_QWORD *)(v29 + 32);
            if ( *(_DWORD *)(v35 + 16) != (_DWORD)v57 && (_DWORD)v57 )
              v35 = *(_QWORD *)(v29 + (unsigned int)v57 + 32);
            if ( *(_BYTE *)(v35 + 51) )
            {
              v36 = v29 + v18 + 72;
              if ( v18 == (unsigned int)v57 )
                goto LABEL_42;
            }
          }
          goto LABEL_41;
        }
      }
      v34 = v32 + v31 + 40;
LABEL_41:
      v36 = v29 + v18 + 40;
LABEL_42:
      if ( *(_DWORD *)(v36 + 8) <= 0x40u && *(_DWORD *)(v34 + 8) <= 0x40u )
      {
        *(_QWORD *)v36 = *(_QWORD *)v34;
        *(_DWORD *)(v36 + 8) = *(_DWORD *)(v34 + 8);
      }
      else
      {
        sub_2585EA0(v36, v34);
      }
      ++v11;
      sub_A1DB00(&v54);
      sub_A1C0C0(&v54);
      sub_A1C0C0(&v48);
    }
    while ( v11 != v12 );
  }
  v37 = 1;
LABEL_47:
  v40 = v37;
  sub_A1C0C0(v44);
  return v40;
}

