void __fastcall sub_1C4A890(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  __int64 v7; // rbp
  char *v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // r12
  __int64 v11; // r15
  char *v12; // r13
  _QWORD *v13; // r14
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  char *v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  char *v22; // r13
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 *v26; // r15
  char *v27; // r14
  unsigned __int64 v28; // r12
  __int64 v29; // rax
  char *v30; // rax
  char *v31; // r12
  __int64 v32; // rbp
  __int64 *v33; // r13
  __int64 *v34; // r15
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // r15
  char v38; // al
  __int64 v39; // r13
  unsigned __int64 v40; // rbp
  __int64 v41; // rax
  unsigned __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r10
  unsigned __int64 v46; // r11
  __int64 v47; // r13
  __int64 *v48; // r12
  __int64 v49; // rax
  char v50; // al
  char *v51; // r14
  __int64 v52; // rax
  unsigned __int64 v53; // rbx
  char v54; // al
  char *v55; // [rsp+18h] [rbp-70h]
  __int64 *v56; // [rsp+28h] [rbp-60h]
  __int64 *v57; // [rsp+30h] [rbp-58h]
  __int64 v58; // [rsp+38h] [rbp-50h]
  int v59; // [rsp+38h] [rbp-50h]
  __int64 v60; // [rsp+38h] [rbp-50h]
  __int64 v61; // [rsp+40h] [rbp-48h]
  __int64 v62; // [rsp+40h] [rbp-48h]
  __int64 v63; // [rsp+48h] [rbp-40h]

  while ( 1 )
  {
    v7 = a3;
    v8 = a6;
    v9 = a7;
    if ( a5 <= a7 )
      v9 = a5;
    if ( v9 >= a4 )
    {
      v10 = a2;
      v11 = a1;
      v12 = a6;
      v13 = (_QWORD *)a1;
      if ( (__int64)a2 - a1 > 0 )
      {
        v55 = a6;
        v14 = 0xAAAAAAAAAAAAAAABLL * (((__int64)a2 - a1) >> 3);
        do
        {
          if ( *((_DWORD *)v12 + 2) > 0x40u && *(_QWORD *)v12 )
            operator delete[](*(void **)v12);
          v15 = *v13;
          v12 += 24;
          v13 += 3;
          *((_QWORD *)v12 - 3) = v15;
          *((_DWORD *)v12 - 4) = *((_DWORD *)v13 - 4);
          LOBYTE(v15) = *((_BYTE *)v13 - 12);
          *((_DWORD *)v13 - 4) = 0;
          *(v12 - 12) = v15;
          *((_QWORD *)v12 - 1) = *(v13 - 1);
          --v14;
        }
        while ( v14 );
        v16 = v55;
        if ( v12 != v55 )
        {
          if ( a2 == (__int64 *)v7 )
          {
LABEL_63:
            v39 = v12 - v16;
            v40 = 0xAAAAAAAAAAAAAAABLL * (v39 >> 3);
            if ( v39 > 0 )
            {
              do
              {
                if ( *(_DWORD *)(v11 + 8) > 0x40u )
                {
                  if ( *(_QWORD *)v11 )
                    operator delete[](*(void **)v11);
                }
                v41 = *(_QWORD *)v16;
                v11 += 24;
                v16 += 24;
                *(_QWORD *)(v11 - 24) = v41;
                *(_DWORD *)(v11 - 16) = *((_DWORD *)v16 - 4);
                LOBYTE(v41) = *(v16 - 12);
                *((_DWORD *)v16 - 4) = 0;
                *(_BYTE *)(v11 - 12) = v41;
                *(_QWORD *)(v11 - 8) = *((_QWORD *)v16 - 1);
                --v40;
              }
              while ( v40 );
            }
          }
          else
          {
            while ( 1 )
            {
              v17 = *((_BYTE *)v10 + 12)
                  ? (unsigned int)sub_2205DB0(v10, v16) >> 31
                  : (unsigned int)sub_2205E20(v10, v16) >> 31;
              if ( !(_BYTE)v17
                && (!v16[12]
                  ? (v18 = (unsigned int)sub_2205E20(v16, v10) >> 31)
                  : (v18 = (unsigned int)sub_2205DB0(v16, v10) >> 31),
                    (_BYTE)v18 || (unsigned __int64)v10[2] >= *((_QWORD *)v16 + 2)) )
              {
                if ( *(_DWORD *)(v11 + 8) > 0x40u && *(_QWORD *)v11 )
                  operator delete[](*(void **)v11);
                v24 = *(_QWORD *)v16;
                v16 += 24;
                *(_QWORD *)v11 = v24;
                *(_DWORD *)(v11 + 8) = *((_DWORD *)v16 - 4);
                LOBYTE(v24) = *(v16 - 12);
                *((_DWORD *)v16 - 4) = 0;
                *(_BYTE *)(v11 + 12) = v24;
                *(_QWORD *)(v11 + 16) = *((_QWORD *)v16 - 1);
              }
              else
              {
                if ( *(_DWORD *)(v11 + 8) > 0x40u && *(_QWORD *)v11 )
                  operator delete[](*(void **)v11);
                v19 = *v10;
                v10 += 3;
                *(_QWORD *)v11 = v19;
                *(_DWORD *)(v11 + 8) = *((_DWORD *)v10 - 4);
                LOBYTE(v19) = *((_BYTE *)v10 - 12);
                *((_DWORD *)v10 - 4) = 0;
                *(_BYTE *)(v11 + 12) = v19;
                *(_QWORD *)(v11 + 16) = *(v10 - 1);
              }
              v11 += 24;
              if ( v12 == v16 )
                break;
              if ( v10 == (__int64 *)v7 )
                goto LABEL_63;
            }
          }
        }
      }
      return;
    }
    if ( a5 <= a7 )
      break;
    v61 = a4;
    if ( a5 < a4 )
    {
      v63 = a5;
      v60 = a4 / 2;
      v56 = (__int64 *)(a1 + 24 * (a4 / 2));
      v49 = sub_1C30090((__int64)a2, a3, (__int64)v56);
      v46 = v60;
      v44 = v61;
      v57 = (__int64 *)v49;
      v45 = v63;
      v42 = 0xAAAAAAAAAAAAAAABLL * ((v49 - (__int64)a2) >> 3);
    }
    else
    {
      v58 = a5;
      v42 = a5 / 2;
      v57 = &a2[3 * (a5 / 2)];
      v43 = sub_1C30160(a1, (__int64)a2, (__int64)v57);
      v44 = v61;
      v45 = v58;
      v56 = (__int64 *)v43;
      v46 = 0xAAAAAAAAAAAAAAABLL * ((v43 - a1) >> 3);
    }
    v62 = v45;
    v59 = v46;
    v47 = v44 - v46;
    v48 = sub_1C4A4A0(v56, a2, v57, v44 - v46, v42, v8, a7);
    sub_1C4A890(a1, (_DWORD)v56, (_DWORD)v48, v59, v42, (_DWORD)v8, a7);
    a6 = v8;
    a4 = v47;
    a2 = v57;
    a3 = v7;
    a1 = (__int64)v48;
    a5 = v62 - v42;
  }
  v25 = a3 - (_QWORD)a2;
  v26 = a2;
  if ( v25 <= 0 )
    return;
  v27 = a6;
  v28 = 0xAAAAAAAAAAAAAAABLL * (v25 >> 3);
  while ( 1 )
  {
    if ( *((_DWORD *)v27 + 2) > 0x40u && *(_QWORD *)v27 )
      operator delete[](*(void **)v27);
    v29 = *v26;
    v26 += 3;
    *(_QWORD *)v27 = v29;
    *((_DWORD *)v27 + 2) = *((_DWORD *)v26 - 4);
    LOBYTE(v29) = *((_BYTE *)v26 - 12);
    *((_DWORD *)v26 - 4) = 0;
    v27[12] = v29;
    *((_QWORD *)v27 + 2) = *(v26 - 1);
    v30 = v27 + 24;
    if ( !--v28 )
      break;
    v27 += 24;
  }
  v22 = v27 + 24;
  if ( a2 != (__int64 *)a1 )
  {
    if ( v8 == v30 )
      return;
    v31 = v27;
    v32 = v7 - 24;
    v33 = a2 - 3;
    v34 = a2 - 3;
    while ( 1 )
    {
      if ( v27[12] )
        v35 = (unsigned int)sub_2205DB0(v31, v34) >> 31;
      else
        v35 = (unsigned int)sub_2205E20(v31, v34) >> 31;
      if ( !(_BYTE)v35
        && (!*((_BYTE *)v33 + 12)
          ? (v36 = (unsigned int)sub_2205E20(v34, v31) >> 31)
          : (v36 = (unsigned int)sub_2205DB0(v34, v31) >> 31),
            (_BYTE)v36 || *((_QWORD *)v27 + 2) >= (unsigned __int64)v33[2]) )
      {
        if ( *(_DWORD *)(v32 + 8) > 0x40u && *(_QWORD *)v32 )
          operator delete[](*(void **)v32);
        *(_QWORD *)v32 = *(_QWORD *)v27;
        *(_DWORD *)(v32 + 8) = *((_DWORD *)v27 + 2);
        v50 = v27[12];
        *((_DWORD *)v27 + 2) = 0;
        *(_BYTE *)(v32 + 12) = v50;
        *(_QWORD *)(v32 + 16) = *((_QWORD *)v27 + 2);
        if ( v8 == v27 )
          return;
        v27 -= 24;
        v31 = v27;
      }
      else
      {
        v37 = v32;
        if ( *(_DWORD *)(v32 + 8) > 0x40u && *(_QWORD *)v32 )
          operator delete[](*(void **)v32);
        *(_QWORD *)v32 = *v33;
        *(_DWORD *)(v32 + 8) = *((_DWORD *)v33 + 2);
        v38 = *((_BYTE *)v33 + 12);
        *((_DWORD *)v33 + 2) = 0;
        *(_BYTE *)(v32 + 12) = v38;
        *(_QWORD *)(v32 + 16) = v33[2];
        if ( v33 == (__int64 *)a1 )
        {
          v51 = v27 + 24;
          v52 = v51 - v8;
          v53 = 0xAAAAAAAAAAAAAAABLL * ((v51 - v8) >> 3);
          if ( v52 > 0 )
          {
            do
            {
              v37 -= 24;
              v51 -= 24;
              if ( *(_DWORD *)(v37 + 8) > 0x40u && *(_QWORD *)v37 )
                operator delete[](*(void **)v37);
              *(_QWORD *)v37 = *(_QWORD *)v51;
              *(_DWORD *)(v37 + 8) = *((_DWORD *)v51 + 2);
              v54 = v51[12];
              *((_DWORD *)v51 + 2) = 0;
              *(_BYTE *)(v37 + 12) = v54;
              *(_QWORD *)(v37 + 16) = *((_QWORD *)v51 + 2);
              --v53;
            }
            while ( v53 );
          }
          return;
        }
        v33 -= 3;
        v34 = v33;
      }
      v32 -= 24;
    }
  }
  v20 = v30 - v8;
  v21 = 0xAAAAAAAAAAAAAAABLL * (v20 >> 3);
  if ( v20 > 0 )
  {
    do
    {
      v7 -= 24;
      v22 -= 24;
      if ( *(_DWORD *)(v7 + 8) > 0x40u && *(_QWORD *)v7 )
        operator delete[](*(void **)v7);
      *(_QWORD *)v7 = *(_QWORD *)v22;
      *(_DWORD *)(v7 + 8) = *((_DWORD *)v22 + 2);
      v23 = v22[12];
      *((_DWORD *)v22 + 2) = 0;
      *(_BYTE *)(v7 + 12) = v23;
      *(_QWORD *)(v7 + 16) = *((_QWORD *)v22 + 2);
      --v21;
    }
    while ( v21 );
  }
}
