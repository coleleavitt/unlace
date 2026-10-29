void __fastcall sub_983BA0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v5; // edx
  __int64 v6; // rax
  __int16 v7; // bp
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rdx
  _WORD *v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rdx
  unsigned int *v18; // rax
  __int64 v19; // rdx
  void *v20; // rax
  __int64 v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rbp
  unsigned int v28; // edx
  __int64 v29; // rax
  char v30; // bp
  unsigned int v31; // eax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rdx
  __int64 *v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rax
  char v38; // r13
  __int64 v39; // rdx
  void *v40; // rax
  __int64 v41; // r13
  __int64 v42; // r12
  _BYTE *v43; // rax
  __int64 v44; // r12
  __int64 v45; // rbp
  _BYTE *v46; // rax
  __int64 v47; // rdx
  void *v48; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v49; // [rsp+8h] [rbp-60h]
  void *v50; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v51; // [rsp+18h] [rbp-50h]
  void *v52; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v53; // [rsp+28h] [rbp-40h]
  void *v54; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v55; // [rsp+38h] [rbp-30h]

  v3 = a2;
  switch ( v3 )
  {
    case 0LL:
      v36 = *(_DWORD *)(a3 + 8);
      v37 = *(_QWORD *)a3;
      if ( *(_BYTE *)(a3 + 12) )
      {
        if ( v36 > 0x40 )
          v37 = *(_QWORD *)v37;
        v38 = v37;
      }
      else if ( v36 > 0x40 )
      {
        v38 = *(_BYTE *)v37;
      }
      else
      {
        v38 = 0;
        if ( v36 )
          v38 = v37 << (64 - (unsigned __int8)v36) >> (64 - (unsigned __int8)v36);
      }
      v44 = *(_QWORD *)(a1 + 24);
      v45 = *(_QWORD *)a1;
      if ( !*(_DWORD *)(a1 + 48) && *(_BYTE *)(sub_8E5480(a1) + 51) && v45 == *(_DWORD *)(a1 + 32) )
        v46 = (_BYTE *)(v44 + v45 + 72);
      else
        v46 = (_BYTE *)(v44 + v45 + 40);
      *v46 = v38;
      return;
    case 1LL:
      v28 = *(_DWORD *)(a3 + 8);
      v29 = *(_QWORD *)a3;
      if ( *(_BYTE *)(a3 + 12) )
      {
        if ( v28 > 0x40 )
          v29 = *(_QWORD *)v29;
        v30 = v29;
      }
      else if ( v28 > 0x40 )
      {
        v30 = *(_BYTE *)v29;
      }
      else
      {
        v30 = 0;
        if ( v28 )
          v30 = v29 << (64 - (unsigned __int8)v28) >> (64 - (unsigned __int8)v28);
      }
      v41 = *(_QWORD *)(a1 + 24);
      v42 = *(_QWORD *)a1;
      if ( *(_DWORD *)(a1 + 48)
        || !*(_BYTE *)(sub_8E5480(a1) + 51)
        || (v47 = *(unsigned int *)(a1 + 32), v43 = (_BYTE *)(v41 + v47 + 72), v47 != v42) )
      {
        v43 = (_BYTE *)(v41 + v42 + 40);
      }
      *v43 = v30;
      return;
    case 2LL:
    case 3LL:
      v5 = *(_DWORD *)(a3 + 8);
      v6 = *(_QWORD *)a3;
      if ( *(_BYTE *)(a3 + 12) )
      {
        if ( v5 > 0x40 )
          v6 = *(_QWORD *)v6;
        v7 = v6;
      }
      else if ( v5 > 0x40 )
      {
        v7 = *(_WORD *)v6;
      }
      else
      {
        v7 = 0;
        if ( v5 )
          v7 = v6 << (64 - (unsigned __int8)v5) >> (64 - (unsigned __int8)v5);
      }
      v8 = *(_QWORD *)(a1 + 24);
      v9 = *(_QWORD *)a1;
      if ( *(_DWORD *)(a1 + 48)
        || !*(_BYTE *)(sub_8E5480(a1) + 51)
        || (v10 = *(unsigned int *)(a1 + 32), v11 = (_WORD *)(v8 + v10 + 72), v10 != v9) )
      {
        v11 = (_WORD *)(v8 + v9 + 40);
      }
      *v11 = v7;
      return;
    case 4LL:
      v12 = *(_DWORD *)(a3 + 8);
      v13 = *(_QWORD *)a3;
      if ( !*(_BYTE *)(a3 + 12) )
      {
        if ( v12 > 0x40 )
          goto LABEL_17;
        v14 = 0;
        if ( v12 )
          v14 = v13 << (64 - (unsigned __int8)v12) >> (64 - (unsigned __int8)v12);
        goto LABEL_18;
      }
      if ( v12 <= 0x40 )
        goto LABEL_74;
      goto LABEL_73;
    case 5LL:
      v14 = *(_DWORD *)(a3 + 8);
      v13 = *(_QWORD *)a3;
      if ( *(_BYTE *)(a3 + 12) )
      {
        if ( v14 > 0x40 )
LABEL_73:
          v13 = *(_QWORD *)v13;
LABEL_74:
        v14 = v13;
      }
      else if ( v14 > 0x40 )
      {
LABEL_17:
        v14 = *(_DWORD *)v13;
      }
      else if ( v14 )
      {
        v14 = v13 << (64 - (unsigned __int8)v14) >> (64 - (unsigned __int8)v14);
      }
LABEL_18:
      v15 = *(_QWORD *)(a1 + 24);
      v16 = *(_QWORD *)a1;
      if ( *(_DWORD *)(a1 + 48)
        || !*(_BYTE *)(sub_8E5480(a1) + 51)
        || (v17 = *(unsigned int *)(a1 + 32), v18 = (unsigned int *)(v15 + v17 + 72), v17 != v16) )
      {
        v18 = (unsigned int *)(v15 + v16 + 40);
      }
      *v18 = v14;
      return;
    case 6LL:
      v25 = *(_DWORD *)(a3 + 8);
      v26 = *(_QWORD *)a3;
      if ( *(_BYTE *)(a3 + 12) )
      {
        if ( v25 > 0x40 )
          v26 = *(_QWORD *)v26;
        v27 = v26;
      }
      else if ( v25 > 0x40 )
      {
        v27 = *(_QWORD *)v26;
      }
      else
      {
        v27 = 0;
        if ( v25 )
          v27 = v26 << (64 - (unsigned __int8)v25) >> (64 - (unsigned __int8)v25);
      }
      goto LABEL_56;
    case 7LL:
      v31 = *(_DWORD *)(a3 + 8);
      v27 = *(_QWORD *)a3;
      if ( *(_BYTE *)(a3 + 12) )
      {
        if ( v31 > 0x40 )
          goto LABEL_55;
      }
      else
      {
        if ( v31 > 0x40 )
        {
LABEL_55:
          v27 = *(_QWORD *)v27;
          goto LABEL_56;
        }
        if ( v31 )
          v27 = v27 << (64 - (unsigned __int8)v31) >> (64 - (unsigned __int8)v31);
        else
          v27 = 0;
      }
LABEL_56:
      v32 = *(_QWORD *)(a1 + 24);
      v33 = *(_QWORD *)a1;
      if ( *(_DWORD *)(a1 + 48)
        || !*(_BYTE *)(sub_8E5480(a1) + 51)
        || (v34 = *(unsigned int *)(a1 + 32), v35 = (__int64 *)(v32 + v34 + 72), v34 != v33) )
      {
        v35 = (__int64 *)(v32 + v33 + 40);
      }
      *v35 = v27;
      return;
    case 8LL:
      v39 = *(unsigned int *)(a3 + 8);
      v49 = v39;
      if ( (unsigned int)v39 <= 0x40 )
      {
        v40 = *(void **)a3;
        v51 = v39;
        v48 = v40;
LABEL_67:
        v50 = v40;
        goto LABEL_68;
      }
      sub_2585B30(&v48);
      v39 = v49;
      v51 = v49;
      if ( v49 <= 0x40 )
      {
        v40 = v48;
        goto LABEL_67;
      }
      sub_2585B30(&v50);
      v39 = v51;
LABEL_68:
      sub_2587E20(&v54, &v50, v39);
      v53 = v55;
      if ( v55 > 0x40 )
        goto LABEL_69;
      goto LABEL_31;
    case 9LL:
      v19 = *(unsigned int *)(a3 + 8);
      v49 = v19;
      if ( (unsigned int)v19 <= 0x40 )
      {
        v20 = *(void **)a3;
        v51 = v19;
        v48 = v20;
LABEL_29:
        v50 = v20;
        goto LABEL_30;
      }
      sub_2585B30(&v48);
      v19 = v49;
      v51 = v49;
      if ( v49 <= 0x40 )
      {
        v20 = v48;
        goto LABEL_29;
      }
      sub_2585B30(&v50);
      v19 = v51;
LABEL_30:
      sub_2587E80(&v54, &v50, v19);
      v53 = v55;
      if ( v55 > 0x40 )
      {
LABEL_69:
        sub_2585B30(&v52);
        if ( v55 > 0x40 && v54 )
          operator delete[](v54);
      }
      else
      {
LABEL_31:
        v52 = v54;
      }
      v21 = *(_QWORD *)(a1 + 24);
      v22 = *(_QWORD *)a1;
      if ( *(_DWORD *)(a1 + 48)
        || !*(_BYTE *)(sub_8E5480(a1) + 51)
        || (v23 = *(unsigned int *)(a1 + 32), v24 = v21 + v23 + 72, v23 != v22) )
      {
        v24 = v21 + v22 + 40;
      }
      if ( *(_DWORD *)(v24 + 8) > 0x40u && *(_QWORD *)v24 )
        operator delete[](*(void **)v24);
      *(_QWORD *)v24 = v52;
      *(_DWORD *)(v24 + 8) = v53;
      v53 = 0;
      if ( v51 > 0x40 && v50 )
        operator delete[](v50);
      if ( v49 > 0x40 && v48 )
        operator delete[](v48);
      return;
  }
}

