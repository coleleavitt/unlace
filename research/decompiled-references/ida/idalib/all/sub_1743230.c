unsigned __int64 __fastcall sub_1743230(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  char v7; // dl
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rax
  int *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r15
  char *v29; // rdi
  __int64 v30; // r14
  __int64 v31; // rbp
  void **v32; // rax
  __int64 *v34; // [rsp+10h] [rbp-1D8h]
  void **v35; // [rsp+10h] [rbp-1D8h]
  unsigned int v36; // [rsp+1Ch] [rbp-1CCh]
  int v37; // [rsp+20h] [rbp-1C8h]
  char v38; // [rsp+26h] [rbp-1C2h]
  char v39; // [rsp+27h] [rbp-1C1h]
  _BYTE v40[16]; // [rsp+30h] [rbp-1B8h] BYREF
  __int128 v41; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v42; // [rsp+50h] [rbp-198h]
  __int128 v43; // [rsp+60h] [rbp-188h] BYREF
  __int128 v44; // [rsp+70h] [rbp-178h]
  __int128 v45; // [rsp+80h] [rbp-168h]
  void *ptr; // [rsp+90h] [rbp-158h] BYREF
  int v47; // [rsp+98h] [rbp-150h]
  __int64 v48; // [rsp+A0h] [rbp-148h] BYREF
  _QWORD v49[27]; // [rsp+110h] [rbp-D8h] BYREF

  v4 = *(_QWORD *)a2;
  LOBYTE(v49[2]) = 0;
  if ( v4 )
  {
    v5 = (_QWORD *)(*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
      v5 = (_QWORD *)*v5;
  }
  else
  {
    v5 = *(_QWORD **)(a2 + 8);
  }
  sub_1DBA4B0((unsigned int)&ptr, a1, v4, (_DWORD)v5, 0, 1);
  if ( v47 )
  {
    v36 = *(_DWORD *)(a1 + 11200);
    v38 = *(_BYTE *)(a1 + 12592);
    v39 = *(_BYTE *)(a1 + 11248);
    v37 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
    sub_1DBADC0(a1);
    if ( !v7 )
      *(_BYTE *)(a1 + 12592) = 1;
    *(_BYTE *)(a1 + 11248) = 0;
    v8 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
      v9 = *(unsigned int *)(v8 + 24);
    else
      v9 = *(unsigned int *)(a2 + 24);
    sub_1DC3800(v40, a1, v9, v8, 0);
    if ( v40[8] )
    {
      a3 = 0;
LABEL_32:
      sub_1DBADA0(v40);
      *(_DWORD *)(a1 + 11200) = v36;
      *(_BYTE *)(a1 + 12592) = v38;
      *(_BYTE *)(a1 + 11248) = v39;
      v20 = *(_QWORD *)(a1 + 264);
      if ( *(_DWORD *)(v20 + 204) == 5 )
        *(_BYTE *)(v20 + 194) = 1;
      v21 = 3;
      if ( !v37 )
        v21 = 0;
      *(_DWORD *)(v20 + 204) = v21;
      goto LABEL_5;
    }
    memset(v49, 0, 0x98u);
    v10 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      v11 = *(_BYTE *)(v10 + 28) & 0x7F;
      if ( ((v11 + 94) & 0x7Fu) > 5 && v11 != 71 )
      {
        v41 = 0;
        v42 = 0;
        v43 = 0;
        v44 = 0;
        v45 = 0;
LABEL_17:
        v12 = *(_QWORD *)(v10 + 16);
        v13 = (int *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
        v14 = (v12 >> 2) & 1;
        if ( (*(_WORD *)(v10 + 30) & 0x180) != 0 )
        {
          if ( v14 )
            v13 = *((int **)v13 + 1);
        }
        else if ( v14 )
        {
          v13 = *(int **)v13;
        }
        goto LABEL_20;
      }
      v49[0] = a1;
      v22 = &v49[2];
      v49[1] = 1;
      do
      {
        *v22 = -4096;
        v22 += 2;
      }
      while ( v22 != &v49[10] );
      BYTE2(v49[14]) = 0;
      v49[10] = &v49[12];
      v49[11] = 0x100000000LL;
      v23 = *(_QWORD *)(a1 + 11280);
      *(_QWORD *)(a1 + 11280) = v49;
      v49[13] = v23;
      LOWORD(v49[14]) = 256;
      v49[15] = 0;
      LOBYTE(v49[18]) = 1;
      v24 = sub_B8BF30(v10);
      v25 = *(__int64 **)(v24 + 120);
      v34 = &v25[(unsigned int)sub_B76070(v24, a1, v26, v27)];
      while ( v34 != v25 )
      {
        while ( 1 )
        {
          v28 = *v25;
          if ( !sub_B799A0(*v25) )
            break;
          ++v25;
          sub_1DC29F0(v49, v28);
          sub_1DC26A0(v49, v28, v28);
          if ( v34 == v25 )
            goto LABEL_45;
        }
        ++v25;
        sub_1DC20B0(v49, v28, v28);
      }
LABEL_45:
      v10 = *(_QWORD *)a2;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      if ( v10 )
        goto LABEL_17;
    }
    else
    {
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
    }
    v13 = *(int **)(a2 + 8);
LABEL_20:
    if ( (v13[2] & 0x7Fu) - 59 <= 2 && v13 != &dword_40 )
    {
      sub_19A2CD0(&v41, a1, v13 - 16, 0, 1);
      BYTE8(v42) = 1;
      if ( BYTE8(v45) && *((_QWORD *)&v43 + 1) )
      {
        v15 = v43;
        *(_QWORD *)(v43 + 544) = *((_QWORD *)&v43 + 1);
        *(_QWORD *)(v15 + 512) = v44;
        *(_QWORD *)(v15 + 9944) = *((_QWORD *)&v44 + 1);
        *(_DWORD *)(v15 + 80) = v45;
        *(_DWORD *)(v15 + 2632) = DWORD1(v45);
      }
      v16 = *(_QWORD *)(a1 + 544);
      *(_QWORD *)&v43 = a1;
      *(_QWORD *)(a1 + 544) = v13;
      *((_QWORD *)&v43 + 1) = v16;
      v17 = *(_QWORD *)(a1 + 512);
      BYTE8(v45) = 1;
      *(_QWORD *)&v44 = v17;
      v18 = *(_QWORD *)(a1 + 9944);
      *(_QWORD *)(a1 + 512) = 0;
      *((_QWORD *)&v44 + 1) = v18;
      LODWORD(v45) = *(_DWORD *)(a1 + 80);
      DWORD1(v45) = *(_DWORD *)(a1 + 2632);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
    }
    sub_18C79B0(a1, 0, 0, 4);
    v19 = sub_1DCD7F0(a1, a3, &ptr);
    if ( *(_DWORD *)(a1 + 11200) <= v36 && v19 > 1 )
      a3 = v19 & 0xFFFFFFFFFFFFFFFELL;
    else
      a3 = 0;
    sub_190D5E0(a1);
    sub_17431E0(&v43);
    if ( BYTE8(v42) )
      sub_19A2DA0(&v41);
    if ( LOBYTE(v49[18]) )
    {
      v29 = (char *)v49[10];
      if ( !LOBYTE(v49[14]) )
      {
        if ( LODWORD(v49[11]) )
        {
          v30 = 0;
          v31 = 8LL * (unsigned int)(LODWORD(v49[11]) - 1) + 8;
          do
          {
            v32 = *(void ***)&v29[v30];
            if ( v32 )
            {
              if ( *v32 != v32 + 2 )
              {
                v35 = *(void ***)&v29[v30];
                free(*v32);
                v32 = v35;
              }
              operator delete(v32, 0x30u);
              v29 = (char *)v49[10];
            }
            v30 += 8;
          }
          while ( v30 != v31 );
        }
        *(_QWORD *)(v49[0] + 11280LL) = v49[13];
        LOBYTE(v49[14]) = 1;
      }
      if ( v29 != (char *)&v49[12] )
        free(v29);
      if ( (v49[1] & 1) == 0 )
        operator delete(v49[2], 16LL * LODWORD(v49[3]), 8);
    }
    goto LABEL_32;
  }
LABEL_5:
  if ( ptr != &v48 )
    free(ptr);
  return a3;
}
