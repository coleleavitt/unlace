__int64 __fastcall sub_9EB9B0(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // r12
  __int64 v30; // rdi
  __int64 v31; // r13
  char v32; // al
  unsigned __int8 v35; // [rsp+8h] [rbp-120h]
  int v40; // [rsp+24h] [rbp-104h]
  _BYTE v41[24]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+48h] [rbp-E0h]
  __int64 v43; // [rsp+50h] [rbp-D8h]
  int v44; // [rsp+60h] [rbp-C8h]
  __int64 v45; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+78h] [rbp-B0h]
  __int64 v47; // [rsp+88h] [rbp-A0h]
  __int64 v48; // [rsp+90h] [rbp-98h]
  char v49; // [rsp+98h] [rbp-90h]
  unsigned int v50; // [rsp+A0h] [rbp-88h]
  __int64 v51; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-70h]
  __int64 v53; // [rsp+C8h] [rbp-60h]
  __int64 v54; // [rsp+D0h] [rbp-58h]
  char v55; // [rsp+D8h] [rbp-50h]
  int v56; // [rsp+E0h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v41, v7);
  sub_A1A5E0(v6, 56);
  v8 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( a5 )
  {
    v40 = a5 + a3;
    v9 = a3;
    v10 = v8;
    do
    {
      if ( v44 == 1 )
      {
        v45 = v9;
        v50 = 1;
        v48 = v43;
        v46 = 0;
        v47 = v42;
      }
      else if ( v44 == 2 )
      {
        v45 = v9;
        v50 = 2;
        v47 = v42;
        v48 = 0;
        v49 = 1;
        v46 = 0;
      }
      else if ( (_DWORD)v43 == -1 )
      {
        if ( v44 == 3 )
          goto LABEL_63;
        sub_A1C030(&v45, v42, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v42 + 32) + 12LL));
      }
      else
      {
        if ( v44 )
        {
          if ( v44 == 3 )
            goto LABEL_62;
          v11 = v42;
          v13 = (unsigned int)v43;
          v12 = *(_QWORD *)(v42 + 32);
          v14 = *(unsigned int *)(v12 + 8) * (unsigned __int64)v9;
        }
        else
        {
          v11 = v42;
          if ( !v42 )
            goto LABEL_61;
          v12 = *(_QWORD *)(v42 + 32);
          v13 = (unsigned int)v43;
          if ( *(_DWORD *)(v12 + 16) != (_DWORD)v43 && (_DWORD)v43 )
          {
            v12 = *(_QWORD *)(v42 + (unsigned int)v43 + 32);
            v14 = *(unsigned int *)(v12 + 8) * (unsigned __int64)v9;
          }
          else
          {
            v14 = *(unsigned int *)(v12 + 8) * (unsigned __int64)v9;
          }
        }
        v15 = v14 + 32;
        if ( *(_QWORD *)(v12 + 32) )
          v15 = v14 + 16;
        sub_A1C030(&v45, v11, (unsigned int)v43, v13 + v15);
      }
      if ( !(unsigned __int8)sub_9E82D0(a1, a2, (__int64)&v45) )
      {
        sub_A1C0C0(&v45);
        v32 = 0;
        goto LABEL_44;
      }
      v16 = a3;
      v17 = a4 - a3 + v9;
      v18 = *(_DWORD *)(v10 + 48);
      if ( v18 == 1 )
      {
        v26 = *(_QWORD *)(v10 + 24);
        v16 = *(_QWORD *)(v10 + 32);
        v51 = a4 - a3 + v9;
        v27 = v45;
        v56 = 1;
        v54 = v16;
        v28 = v47;
        v53 = v26;
        v52 = 0;
        if ( !v50 )
          goto LABEL_28;
      }
      else
      {
        if ( v18 != 2 )
        {
          v19 = *(unsigned int *)(v10 + 32);
          if ( (_DWORD)v19 == -1 )
          {
            if ( v18 == 3 )
LABEL_63:
              BUG();
            v20 = *(_QWORD *)(v10 + 24);
            v25 = *(unsigned int *)(*(_QWORD *)(v20 + 32) + 12LL);
          }
          else
          {
            if ( v18 )
            {
              if ( v18 == 3 )
LABEL_62:
                BUG();
              v20 = *(_QWORD *)(v10 + 24);
              v22 = (unsigned int)v19;
              v21 = *(_QWORD *)(v20 + 32);
              v23 = v17 * *(unsigned int *)(v21 + 8);
            }
            else
            {
              v20 = *(_QWORD *)(v10 + 24);
              if ( !v20 )
LABEL_61:
                BUG();
              v21 = *(_QWORD *)(v20 + 32);
              v22 = (unsigned int)v19;
              if ( *(_DWORD *)(v21 + 16) != (_DWORD)v19 && (_DWORD)v19 )
              {
                v21 = *(_QWORD *)(v20 + (unsigned int)v19 + 32);
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
            v25 = v22 + v24;
          }
          sub_A1C030(&v51, v20, v19, v25);
          v16 = v50;
          v18 = v56;
          v17 = v51;
          v26 = v53;
          v27 = v45;
          v28 = v47;
          if ( !v50 )
          {
            v16 = *(_QWORD *)(v47 + 32);
            goto LABEL_29;
          }
          goto LABEL_34;
        }
        v26 = *(_QWORD *)(v10 + 24);
        v51 = a4 - a3 + v9;
        v56 = 2;
        v27 = v45;
        v53 = v26;
        v28 = v47;
        v54 = 0;
        v55 = 1;
        v52 = 0;
        if ( !v50 )
        {
LABEL_28:
          v16 = *(_QWORD *)(v28 + 32);
LABEL_29:
          if ( *(_DWORD *)(v16 + 16) != (_DWORD)v48 && (_DWORD)v48 )
            v16 = *(_QWORD *)(v28 + (unsigned int)v48 + 32);
          if ( !*(_BYTE *)(v16 + 51) || (v29 = v28 + v27 + 72, v27 != (unsigned int)v48) )
LABEL_34:
            v29 = v28 + v27 + 40;
          if ( !v18 )
          {
            v30 = *(_QWORD *)(v26 + 32);
            if ( *(_DWORD *)(v30 + 16) != (_DWORD)v54 && (_DWORD)v54 )
              v30 = *(_QWORD *)(v26 + (unsigned int)v54 + 32);
            if ( *(_BYTE *)(v30 + 51) )
            {
              v31 = v26 + v17 + 72;
              if ( v17 == (unsigned int)v54 )
                goto LABEL_42;
            }
          }
          goto LABEL_41;
        }
      }
      v29 = v28 + v27 + 40;
LABEL_41:
      v31 = v26 + v17 + 40;
LABEL_42:
      ++v9;
      sub_A1C120(v31, v29, v16);
      *(_QWORD *)(v31 + 56) = *(_QWORD *)(v29 + 56);
      *(_DWORD *)(v31 + 64) = *(_DWORD *)(v29 + 64);
      sub_A1DB00(&v51);
      sub_A1C0C0(&v51);
      sub_A1C0C0(&v45);
    }
    while ( v9 != v40 );
  }
  v32 = 1;
LABEL_44:
  v35 = v32;
  sub_A1C0C0(v41);
  return v35;
}

