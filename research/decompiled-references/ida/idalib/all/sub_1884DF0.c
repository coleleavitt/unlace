void __fastcall sub_1884DF0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 *v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rax
  __int64 i; // rbx
  int v18; // r14d
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 *v28; // rax
  __int64 *v29; // rax
  int v30; // eax
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  bool v34; // al
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rax
  int v37; // eax
  __int64 *ptr; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v39; // [rsp+10h] [rbp-B8h]
  __int64 *v40; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+28h] [rbp-A0h]
  _BYTE v42[32]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v43; // [rsp+50h] [rbp-78h]
  __int64 v44; // [rsp+58h] [rbp-70h]
  __int64 v45; // [rsp+60h] [rbp-68h]
  __int64 v46; // [rsp+68h] [rbp-60h]
  __int64 v47; // [rsp+70h] [rbp-58h]
  __int64 v48; // [rsp+78h] [rbp-50h]
  __int64 v49; // [rsp+80h] [rbp-48h]
  __int64 v50; // [rsp+88h] [rbp-40h]

  v6 = *(unsigned int *)(a1 + 3592);
  v7 = (__int64)v42;
  v40 = (__int64 *)v42;
  v41 = 0x400000000LL;
  if ( v6 <= 4 )
  {
    v8 = (__int64 *)v42;
    v9 = 0;
    v10 = 0;
    if ( v6 )
    {
LABEL_3:
      v11 = *(_QWORD *)(a1 + 3584);
      a3 = 8 * v6;
      a5 = 8 * v10;
      a4 = v9;
      v7 = v11 + 8 * v10;
      if ( v7 != 8 * v6 + v11 )
      {
        memcpy(&v8[v9], (const void *)v7, a3 - a5);
        a4 = (unsigned int)v41;
        v8 = v40;
      }
      *(_DWORD *)(a1 + 3592) = v10;
      LODWORD(v41) = a4 + v6 - v9;
      ptr = &v8[(unsigned int)v41];
      goto LABEL_6;
    }
    goto LABEL_93;
  }
  sub_2237220(&v40, v42, v6, 8);
  v35 = *(unsigned int *)(a1 + 3592);
  v6 = (unsigned int)v41;
  v10 = (unsigned int)v41;
  if ( v35 <= (unsigned int)v41 )
    v10 = *(unsigned int *)(a1 + 3592);
  if ( v10 )
  {
    a5 = 8 * v10;
    v36 = 0;
    do
    {
      a3 = (unsigned __int64)&v40[v36 / 8];
      a4 = v36 + *(_QWORD *)(a1 + 3584);
      v36 += 8LL;
      v7 = *(_QWORD *)a4;
      *(_QWORD *)a4 = *(_QWORD *)a3;
      *(_QWORD *)a3 = v7;
    }
    while ( a5 != v36 );
  }
  v8 = v40;
  if ( v35 > v6 )
  {
    v9 = v6;
    v6 = v35;
    goto LABEL_3;
  }
  if ( v35 >= v6 )
  {
LABEL_93:
    ptr = &v8[v6];
    goto LABEL_6;
  }
  a3 = 8 * v6;
  a4 = 8 * v10;
  v37 = v35;
  a6 = (__int64)&v40[v10];
  v7 = (__int64)&v40[v6];
  ptr = (__int64 *)a6;
  if ( a6 != v7 )
  {
    memcpy((void *)(*(_QWORD *)(a1 + 3584) + 8 * v35), &v40[v10], a3 - a4);
    a4 = 8 * v10;
    v8 = v40;
    v37 = *(_DWORD *)(a1 + 3592);
    v7 = (__int64)&v40[v10];
    ptr = (__int64 *)v7;
  }
  LODWORD(v41) = v10;
  *(_DWORD *)(a1 + 3592) = v6 - v35 + v37;
LABEL_6:
  if ( v8 == ptr )
    goto LABEL_19;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = *v8;
        if ( (*(_BYTE *)(*v8 + 29) & 1) != 0 )
        {
          v13 = sub_B8C3D0(*v8, v7, a3, a4, a5, a6);
          a3 = *v13;
          v14 = *v13 + 8LL * *((unsigned int *)v13 + 2);
          if ( a3 >= v14 )
          {
            if ( a3 != v14 )
            {
              while ( 1 )
              {
                a4 = *(_QWORD *)v14;
                if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) == 197 )
                  break;
                v14 += 8LL;
                if ( a3 == v14 )
                  goto LABEL_12;
              }
LABEL_23:
              for ( i = *(_QWORD *)a3; *(_WORD *)(*(_QWORD *)a3 + 36LL) != 197; i = *(_QWORD *)a3 )
                a3 += 8LL;
              goto LABEL_25;
            }
          }
          else
          {
            a4 = a3;
            while ( 1 )
            {
              v7 = *(_QWORD *)a4;
              if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 197 )
                break;
              a4 += 8;
              if ( v14 == a4 )
                goto LABEL_12;
            }
            if ( v14 != a4 )
              goto LABEL_23;
          }
LABEL_12:
          if ( (*(_BYTE *)(v12 + 29) & 1) != 0 )
            break;
        }
LABEL_17:
        if ( ptr == ++v8 )
          goto LABEL_18;
      }
      v15 = sub_B8C3D0(v12, v7, a3, a4, a5, a6);
      a3 = *v15;
      v16 = *v15 + 8LL * *((unsigned int *)v15 + 2);
      if ( a3 >= v16 )
        break;
      a4 = a3;
      while ( 1 )
      {
        v7 = *(_QWORD *)a4;
        if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 195 )
          break;
        a4 += 8;
        if ( v16 == a4 )
          goto LABEL_17;
      }
      if ( v16 == a4 )
        goto LABEL_17;
LABEL_69:
      for ( i = *(_QWORD *)a3; *(_WORD *)(*(_QWORD *)a3 + 36LL) != 195; i = *(_QWORD *)a3 )
        a3 += 8LL;
LABEL_25:
      v18 = sub_B97260(v12);
      if ( v18 == 3 )
        goto LABEL_17;
      v19 = *(_DWORD *)(i + 24);
      LODWORD(v48) = 0;
      v46 = 0;
      LODWORD(v44) = v19;
      v47 = 0;
      v49 = 0;
      v50 = 0;
      LODWORD(v43) = 22;
      WORD2(v43) = 0;
      v45 = v12;
      sub_1DBA9B0(a1, v7, 0, a4, a5, a6, v43, v44, v12, 0, 0, v48, 0, 0);
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
      if ( *(_DWORD *)(v22 + 260) == 15 )
      {
        v33 = *(_DWORD *)(v22 + 264);
        if ( v33 == 29 || v33 == 1 )
        {
          v7 = *(unsigned int *)(v12 + 24);
          sub_1884910(a1, v7, (__int64 *)v12, 1, v20, v21);
        }
      }
      v27 = sub_B8E970(v12 + 64);
      if ( v27 )
      {
        do
        {
          while ( 1 )
          {
            if ( (*(_BYTE *)(v27 + 29) & 1) != 0 )
            {
              v28 = sub_B8C3D0(v27, v7, v23, v24, v25, v26);
              v23 = *v28;
              v24 = *v28 + 8LL * *((unsigned int *)v28 + 2);
              if ( *v28 >= v24 )
              {
                if ( v23 == v24 )
                  goto LABEL_29;
                while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 195 )
                {
                  v24 += 8LL;
                  if ( v23 == v24 )
                    goto LABEL_29;
                }
              }
              else
              {
                v29 = (__int64 *)*v28;
                while ( 1 )
                {
                  v23 = *v29;
                  if ( *(_WORD *)(*v29 + 36) == 195 )
                    break;
                  if ( (__int64 *)v24 == ++v29 )
                    goto LABEL_29;
                }
                if ( (__int64 *)v24 == v29 )
                  goto LABEL_29;
              }
              v30 = *(_BYTE *)(v27 + 28) & 0x7F;
              v23 = (unsigned int)(v30 - 40);
              if ( (unsigned int)v23 <= 6 )
              {
                if ( (*(_BYTE *)(v27 + 96) & 7) != 2 || v18 != 1 )
                  goto LABEL_29;
                v7 = *(unsigned int *)(v27 + 24);
                sub_1907590(a1, v7, v27);
                v30 = *(_BYTE *)(v27 + 28) & 0x7F;
              }
              if ( (unsigned int)(v30 - 35) <= 3 )
                break;
            }
LABEL_29:
            v25 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v27 = v25;
            if ( !v25 )
              goto LABEL_48;
          }
          v7 = 1;
          v31 = sub_B7D580(v27, 1, v23, v24);
          if ( !v31 )
            v31 = v27;
          v39 = v31;
          if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v31 + 32LL))(v31) + 82) & 0x40) != 0
            || (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v39 + 32LL))(v39) + 83) & 2) != 0 )
          {
            v32 = *(_QWORD *)(v27 + 80);
            if ( (v32 & 0x4000000) != 0 )
            {
              v7 = *(unsigned int *)(v12 + 24);
              sub_1910D40(a1, v7, v27, 1);
              if ( v18 == 4 )
                goto LABEL_29;
            }
            else
            {
              if ( (v32 & 0x800000) != 0 && !sub_B98230((_QWORD *)v27, 1) && !sub_B98360((_QWORD *)v27, 1) )
                goto LABEL_29;
              sub_1910D40(a1, *(unsigned int *)(v12 + 24), v27, 1);
            }
            v7 = v27;
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 256) + 24LL))(*(_QWORD *)(a1 + 256), v27);
            goto LABEL_29;
          }
          if ( v18 == 1 && (*(_BYTE *)(i + 38) & 1) == 0 )
            goto LABEL_29;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL) == 10
            && (*(_BYTE *)(v27 + 28) & 0x7F) == 0x26 )
          {
            v34 = sub_B98FC0(v27, 1);
            if ( !v18 && v34 )
              sub_1E01910(a1, v27);
          }
          v7 = *(unsigned int *)(v12 + 24);
          sub_1910D40(a1, v7, v27, 1);
          v25 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v27 = v25;
        }
        while ( v25 );
      }
LABEL_48:
      ++v8;
      sub_1DBAAE0(a1, v7);
      if ( ptr == v8 )
        goto LABEL_18;
    }
    if ( a3 == v16 )
      goto LABEL_17;
    do
    {
      a4 = *(_QWORD *)v16;
      if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 195 )
        goto LABEL_69;
      v16 += 8LL;
    }
    while ( a3 != v16 );
    ++v8;
  }
  while ( ptr != v8 );
LABEL_18:
  ptr = v40;
LABEL_19:
  if ( ptr != (__int64 *)v42 )
    free(ptr);
}
