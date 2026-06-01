__int64 __fastcall sub_9EC470(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
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
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // rsi
  __int64 v35; // rdi
  char v36; // al
  unsigned __int8 v39; // [rsp+0h] [rbp-118h]
  _BYTE v43[24]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v44; // [rsp+38h] [rbp-E0h]
  __int64 v45; // [rsp+40h] [rbp-D8h]
  int v46; // [rsp+50h] [rbp-C8h]
  __int64 v47; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v48; // [rsp+68h] [rbp-B0h]
  __int64 v49; // [rsp+78h] [rbp-A0h]
  __int64 v50; // [rsp+80h] [rbp-98h]
  char v51; // [rsp+88h] [rbp-90h]
  int v52; // [rsp+90h] [rbp-88h]
  __int64 v53; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-70h]
  __int64 v55; // [rsp+B8h] [rbp-60h]
  __int64 v56; // [rsp+C0h] [rbp-58h]
  char v57; // [rsp+C8h] [rbp-50h]
  int v58; // [rsp+D0h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v43, v7);
  sub_A1A5E0(v6, 56);
  v8 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v9 = a5 + a3;
  if ( a5 )
  {
    v10 = a3;
    v11 = v9;
    do
    {
      if ( v46 == 1 )
      {
        v47 = v10;
        v52 = 1;
        v50 = v45;
        v48 = 0;
        v49 = v44;
      }
      else if ( v46 == 2 )
      {
        v47 = v10;
        v52 = 2;
        v49 = v44;
        v50 = 0;
        v51 = 1;
        v48 = 0;
      }
      else if ( (_DWORD)v45 == -1 )
      {
        if ( v46 == 3 )
          goto LABEL_63;
        sub_A1C030(&v47, v44, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v44 + 32) + 12LL));
      }
      else
      {
        if ( v46 )
        {
          if ( v46 == 3 )
            goto LABEL_62;
          v12 = v44;
          v14 = (unsigned int)v45;
          v13 = *(_QWORD *)(v44 + 32);
          v15 = *(unsigned int *)(v13 + 8) * (unsigned __int64)v10;
        }
        else
        {
          v12 = v44;
          if ( !v44 )
            goto LABEL_61;
          v13 = *(_QWORD *)(v44 + 32);
          v14 = (unsigned int)v45;
          if ( *(_DWORD *)(v13 + 16) != (_DWORD)v45 && (_DWORD)v45 )
          {
            v13 = *(_QWORD *)(v44 + (unsigned int)v45 + 32);
            v15 = *(unsigned int *)(v13 + 8) * (unsigned __int64)v10;
          }
          else
          {
            v15 = *(unsigned int *)(v13 + 8) * (unsigned __int64)v10;
          }
        }
        v16 = v15 + 32;
        if ( *(_QWORD *)(v13 + 32) )
          v16 = v15 + 16;
        sub_A1C030(&v47, v12, (unsigned int)v45, v14 + v16);
      }
      if ( !(unsigned __int8)sub_9E82D0(a1, a2, (__int64)&v47) )
      {
        sub_A1C0C0(&v47);
        v36 = 0;
        goto LABEL_44;
      }
      v17 = a4 - a3 + v10;
      v18 = *(_DWORD *)(v8 + 48);
      if ( v18 == 1 )
      {
        v28 = *(_QWORD *)(v8 + 24);
        v29 = *(_QWORD *)(v8 + 32);
        v53 = a4 - a3 + v10;
        v30 = v47;
        v58 = 1;
        v56 = v29;
        v31 = v49;
        v55 = v28;
        v54 = 0;
        if ( !v52 )
          goto LABEL_28;
      }
      else
      {
        if ( v18 != 2 )
        {
          v19 = *(_DWORD *)(v8 + 32);
          if ( v19 == -1 )
          {
            if ( v18 == 3 )
LABEL_63:
              BUG();
            v27 = *(_QWORD *)(v8 + 24);
            v25 = 0xFFFFFFFFLL;
            v26 = *(unsigned int *)(*(_QWORD *)(v27 + 32) + 12LL);
          }
          else
          {
            if ( v18 )
            {
              if ( v18 == 3 )
LABEL_62:
                BUG();
              v20 = *(_QWORD *)(v8 + 24);
              v22 = v19;
              v21 = *(_QWORD *)(v20 + 32);
              v23 = v17 * *(unsigned int *)(v21 + 8);
            }
            else
            {
              v20 = *(_QWORD *)(v8 + 24);
              if ( !v20 )
LABEL_61:
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
          sub_A1C030(&v53, v27, v25, v26);
          v18 = v58;
          v17 = v53;
          v28 = v55;
          v30 = v47;
          v31 = v49;
          if ( !v52 )
          {
            v32 = *(_QWORD *)(v49 + 32);
            goto LABEL_29;
          }
          goto LABEL_34;
        }
        v28 = *(_QWORD *)(v8 + 24);
        v53 = a4 - a3 + v10;
        v58 = 2;
        v30 = v47;
        v55 = v28;
        v31 = v49;
        v56 = 0;
        v57 = 1;
        v54 = 0;
        if ( !v52 )
        {
LABEL_28:
          v32 = *(_QWORD *)(v31 + 32);
LABEL_29:
          if ( *(_DWORD *)(v32 + 16) != (_DWORD)v50 && (_DWORD)v50 )
            v32 = *(_QWORD *)(v31 + (unsigned int)v50 + 32);
          if ( !*(_BYTE *)(v32 + 51) || (v33 = v31 + v30 + 72, v30 != (unsigned int)v50) )
LABEL_34:
            v33 = v31 + v30 + 40;
          if ( !v18 )
          {
            v34 = *(_QWORD *)(v28 + 32);
            if ( *(_DWORD *)(v34 + 16) != (_DWORD)v56 && (_DWORD)v56 )
              v34 = *(_QWORD *)(v28 + (unsigned int)v56 + 32);
            if ( *(_BYTE *)(v34 + 51) )
            {
              v35 = v28 + v17 + 72;
              if ( v17 == (unsigned int)v56 )
                goto LABEL_42;
            }
          }
          goto LABEL_41;
        }
      }
      v33 = v31 + v30 + 40;
LABEL_41:
      v35 = v28 + v17 + 40;
LABEL_42:
      ++v10;
      sub_A1C120(v35, v33, v17);
      sub_A1DB00(&v53);
      sub_A1C0C0(&v53);
      sub_A1C0C0(&v47);
    }
    while ( v10 != v11 );
  }
  v36 = 1;
LABEL_44:
  v39 = v36;
  sub_A1C0C0(v43);
  return v39;
}

