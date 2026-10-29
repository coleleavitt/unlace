__int64 __fastcall sub_9EC9B0(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 v31; // rdi
  __int64 v32; // r12
  char v33; // al
  unsigned __int8 v36; // [rsp+8h] [rbp-120h]
  int v40; // [rsp+20h] [rbp-108h]
  unsigned int v41; // [rsp+24h] [rbp-104h]
  _BYTE v42[24]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-E0h]
  __int64 v44; // [rsp+50h] [rbp-D8h]
  int v45; // [rsp+60h] [rbp-C8h]
  __int64 v46; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v47; // [rsp+78h] [rbp-B0h]
  __int64 v48; // [rsp+88h] [rbp-A0h]
  __int64 v49; // [rsp+90h] [rbp-98h]
  char v50; // [rsp+98h] [rbp-90h]
  int v51; // [rsp+A0h] [rbp-88h]
  __int64 v52; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-70h]
  __int64 v54; // [rsp+C8h] [rbp-60h]
  __int64 v55; // [rsp+D0h] [rbp-58h]
  char v56; // [rsp+D8h] [rbp-50h]
  int v57; // [rsp+E0h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v42, v7);
  sub_A1A5E0(v6, 56);
  v8 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( a5 )
  {
    v40 = a5 + a3;
    v9 = v8;
    v10 = a3;
    v41 = a3;
    do
    {
      if ( v45 == 1 )
      {
        v46 = v10;
        v51 = 1;
        v49 = v44;
        v47 = 0;
        v48 = v43;
      }
      else if ( v45 == 2 )
      {
        v46 = v10;
        v51 = 2;
        v48 = v43;
        v49 = 0;
        v50 = 1;
        v47 = 0;
      }
      else if ( (_DWORD)v44 == -1 )
      {
        if ( v45 == 3 )
          goto LABEL_67;
        sub_A1C030(&v46, v43, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v43 + 32) + 12LL));
      }
      else
      {
        if ( v45 )
        {
          if ( v45 == 3 )
            goto LABEL_66;
          v11 = v43;
          v13 = (unsigned int)v44;
          v12 = *(_QWORD *)(v43 + 32);
          v14 = *(unsigned int *)(v12 + 8) * (unsigned __int64)v10;
        }
        else
        {
          v11 = v43;
          if ( !v43 )
            goto LABEL_65;
          v12 = *(_QWORD *)(v43 + 32);
          v13 = (unsigned int)v44;
          if ( *(_DWORD *)(v12 + 16) != (_DWORD)v44 && (_DWORD)v44 )
          {
            v12 = *(_QWORD *)(v43 + (unsigned int)v44 + 32);
            v14 = *(unsigned int *)(v12 + 8) * (unsigned __int64)v10;
          }
          else
          {
            v14 = *(unsigned int *)(v12 + 8) * (unsigned __int64)v10;
          }
        }
        v15 = v14 + 32;
        if ( *(_QWORD *)(v12 + 32) )
          v15 = v14 + 16;
        sub_A1C030(&v46, v11, (unsigned int)v44, v13 + v15);
      }
      if ( !(unsigned __int8)sub_9E82D0(a1, a2, (__int64)&v46) )
      {
        sub_A1C0C0(&v46);
        v33 = 0;
        goto LABEL_47;
      }
      v16 = a4 - v41 + v10;
      v17 = *(_DWORD *)(v9 + 48);
      if ( v17 == 1 )
      {
        v25 = *(_QWORD *)(v9 + 24);
        v26 = *(_QWORD *)(v9 + 32);
        v52 = a4 - v41 + v10;
        v27 = v46;
        v57 = 1;
        v55 = v26;
        v28 = v48;
        v54 = v25;
        v53 = 0;
        if ( !v51 )
          goto LABEL_28;
      }
      else
      {
        if ( v17 != 2 )
        {
          v18 = *(unsigned int *)(v9 + 32);
          if ( (_DWORD)v18 == -1 )
          {
            if ( v17 == 3 )
LABEL_67:
              BUG();
            v19 = *(_QWORD *)(v9 + 24);
            v24 = *(unsigned int *)(*(_QWORD *)(v19 + 32) + 12LL);
          }
          else
          {
            if ( v17 )
            {
              if ( v17 == 3 )
LABEL_66:
                BUG();
              v19 = *(_QWORD *)(v9 + 24);
              v21 = (unsigned int)v18;
              v20 = *(_QWORD *)(v19 + 32);
              v22 = v16 * *(unsigned int *)(v20 + 8);
            }
            else
            {
              v19 = *(_QWORD *)(v9 + 24);
              if ( !v19 )
LABEL_65:
                BUG();
              v20 = *(_QWORD *)(v19 + 32);
              v21 = (unsigned int)v18;
              if ( *(_DWORD *)(v20 + 16) != (_DWORD)v18 && (_DWORD)v18 )
              {
                v20 = *(_QWORD *)(v19 + (unsigned int)v18 + 32);
                v22 = v16 * *(unsigned int *)(v20 + 8);
              }
              else
              {
                v22 = v16 * *(unsigned int *)(v20 + 8);
              }
            }
            v23 = v22 + 32;
            if ( *(_QWORD *)(v20 + 32) )
              v23 = v22 + 16;
            v24 = v21 + v23;
          }
          sub_A1C030(&v52, v19, v18, v24);
          v17 = v57;
          v16 = v52;
          v25 = v54;
          v27 = v46;
          v28 = v48;
          if ( !v51 )
          {
            v29 = *(_QWORD *)(v48 + 32);
            goto LABEL_29;
          }
          goto LABEL_34;
        }
        v25 = *(_QWORD *)(v9 + 24);
        v52 = a4 - v41 + v10;
        v57 = 2;
        v27 = v46;
        v54 = v25;
        v28 = v48;
        v55 = 0;
        v56 = 1;
        v53 = 0;
        if ( !v51 )
        {
LABEL_28:
          v29 = *(_QWORD *)(v28 + 32);
LABEL_29:
          if ( *(_DWORD *)(v29 + 16) != (_DWORD)v49 && (_DWORD)v49 )
            v29 = *(_QWORD *)(v28 + (unsigned int)v49 + 32);
          if ( !*(_BYTE *)(v29 + 51) || (v30 = v28 + v27 + 72, v27 != (unsigned int)v49) )
LABEL_34:
            v30 = v28 + v27 + 40;
          if ( !v17 )
          {
            v31 = *(_QWORD *)(v25 + 32);
            if ( *(_DWORD *)(v31 + 16) != (_DWORD)v55 && (_DWORD)v55 )
              v31 = *(_QWORD *)(v25 + (unsigned int)v55 + 32);
            if ( *(_BYTE *)(v31 + 51) )
            {
              v32 = v25 + v16 + 72;
              if ( v16 == (unsigned int)v55 )
                goto LABEL_42;
            }
          }
          goto LABEL_41;
        }
      }
      v30 = v28 + v27 + 40;
LABEL_41:
      v32 = v25 + v16 + 40;
LABEL_42:
      if ( *(_DWORD *)(v32 + 8) <= 0x40u && *(_DWORD *)(v30 + 8) <= 0x40u )
      {
        *(_QWORD *)v32 = *(_QWORD *)v30;
        *(_DWORD *)(v32 + 8) = *(_DWORD *)(v30 + 8);
      }
      else
      {
        sub_2585EA0(v32, v30);
      }
      ++v10;
      *(_BYTE *)(v32 + 12) = *(_BYTE *)(v30 + 12);
      *(_DWORD *)(v32 + 16) = *(_DWORD *)(v30 + 16);
      sub_A1DB00(&v52);
      sub_A1C0C0(&v52);
      sub_A1C0C0(&v46);
    }
    while ( v10 != v40 );
  }
  v33 = 1;
LABEL_47:
  v36 = v33;
  sub_A1C0C0(v42);
  return v36;
}

