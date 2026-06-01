/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38D60
// Address: 0x00038D60

//----- (00038D60) --------------------------------------------------------
unsigned int __cdecl sub_38D60(int *a1, __int64 a2, unsigned int a3)
{
  int v3; // esi
  __int64 v4; // rax
  __int64 v5; // kr00_8
  __int64 v6; // kr08_8
  void **v7; // ebx
  char *v8; // edx
  char *v9; // edi
  void *v10; // ecx
  void *v11; // eax
  void **v12; // eax
  void ***v13; // ecx
  void ***v14; // esi
  void ***v15; // edi
  void **v16; // eax
  int v17; // eax
  int v18; // edx
  signed __int64 v19; // kr18_8
  void ***v20; // esi
  void **v21; // ecx
  void **v22; // eax
  void **v23; // eax
  void ***v24; // ecx
  void ***v25; // edi
  _QWORD *v26; // eax
  int v27; // eax
  int v28; // edx
  signed __int64 v29; // kr20_8
  unsigned int v30; // esi
  __int64 v32; // [esp+8h] [ebp-84h]
  void ***v33; // [esp+8h] [ebp-84h]
  void ***v34; // [esp+Ch] [ebp-80h]
  char *v35; // [esp+10h] [ebp-7Ch]
  int v36; // [esp+14h] [ebp-78h]
  char *v37; // [esp+18h] [ebp-74h]
  unsigned int i; // [esp+24h] [ebp-68h]
  int v39; // [esp+30h] [ebp-5Ch]
  char v40[4]; // [esp+38h] [ebp-54h] BYREF
  int v41; // [esp+3Ch] [ebp-50h]
  int v42; // [esp+40h] [ebp-4Ch] BYREF
  void ***v43; // [esp+44h] [ebp-48h] BYREF
  int v44; // [esp+48h] [ebp-44h]
  int v45; // [esp+50h] [ebp-3Ch] BYREF
  unsigned __int16 v46; // [esp+56h] [ebp-36h]
  unsigned int v47; // [esp+5Ch] [ebp-30h]
  int v48; // [esp+60h] [ebp-2Ch]
  int v49; // [esp+68h] [ebp-24h] BYREF
  void **v50; // [esp+6Ch] [ebp-20h] BYREF
  int v51; // [esp+70h] [ebp-1Ch]
  int v52; // [esp+78h] [ebp-14h]

  v52 = __readgsdword(0x14u);
  v3 = a1[1];
  LODWORD(v4) = qlseek(*(_DWORD *)(v3 + 360), 0, 1);
  v36 = v3;
  v5 = v4 - *(_QWORD *)(v3 + 364);
  v6 = a2 + a3;
  v50 = nullptr;
  v51 = 0;
  v49 = (int)&v50;
  if ( a2 >= v6 )
    goto LABEL_48;
  v7 = nullptr;
  v39 = 0;
  v9 = (char *)HIDWORD(a2);
  v8 = (char *)a2;
  while ( 2 )
  {
    v37 = v9;
    if ( !v7 )
    {
      v13 = &v50;
      v14 = &v50;
      if ( v50 )
        break;
      goto LABEL_19;
    }
    v34 = &v50;
    while ( 1 )
    {
      v10 = v7[4];
      v11 = v7[5];
      if ( __SPAIR64__((unsigned int)v9, (unsigned int)v8) < __SPAIR64__((unsigned int)v11, (unsigned int)v10) )
      {
        v12 = (void **)*v7;
        v13 = (void ***)v7;
        if ( !*v7 )
        {
          v14 = (void ***)v7;
          v13 = (void ***)v7;
          if ( *v7 )
            goto LABEL_48;
          goto LABEL_19;
        }
        goto LABEL_6;
      }
      if ( __SPAIR64__((unsigned int)v11, (unsigned int)v10) >= __SPAIR64__((unsigned int)v9, (unsigned int)v8) )
        break;
      v13 = (void ***)(v7 + 1);
      v12 = (void **)v7[1];
      if ( !v12 )
        goto LABEL_18;
LABEL_6:
      v34 = v13;
      v7 = v12;
    }
    v13 = v34;
LABEL_18:
    v14 = (void ***)v7;
    if ( *v13 )
      break;
LABEL_19:
    v15 = v13;
    v35 = v8;
    v16 = (void **)operator new(0x18u);
    v16[4] = v35;
    v16[5] = v37;
    *v16 = nullptr;
    v16[1] = nullptr;
    v16[2] = v14;
    *v15 = v16;
    if ( *(_DWORD *)v49 )
    {
      v49 = *(_DWORD *)v49;
      v16 = *v15;
    }
    sub_2D500((int)v50, (int)v16);
    ++v51;
    v17 = qlseek(*(_DWORD *)(v36 + 360), __PAIR64__((unsigned int)v37, (unsigned int)v35) + *(_QWORD *)(v36 + 364), 0);
    if ( (v18 & v17) == 0xFFFFFFFF || !sub_43D80((char *)&v45, a1[1]) )
      break;
    (*(void (__cdecl **)(int *, int *, char *, _DWORD, int))*a1)(
      a1,
      &v45,
      &v35[-a2],
      (__PAIR64__((unsigned int)v37, (unsigned int)v35) - a2) >> 32,
      v39);
    v19 = (signed __int64)&v35[__PAIR64__((unsigned int)v37, v47)];
    v43 = nullptr;
    v44 = 0;
    v42 = (int)&v43;
    if ( v19 >= v6 )
      goto LABEL_47;
    v20 = nullptr;
    for ( i = 0; ; ++i )
    {
      HIDWORD(v32) = HIDWORD(v19);
      if ( v20 )
        break;
      v20 = (void ***)&v43;
      v24 = (void ***)&v43;
LABEL_36:
      if ( *v24 )
        goto LABEL_47;
LABEL_37:
      v25 = v24;
      LODWORD(v32) = v19;
      v26 = operator new(0x18u);
      v26[2] = v32;
      *(_DWORD *)v26 = 0;
      *((_DWORD *)v26 + 1) = 0;
      *((_DWORD *)v26 + 2) = v20;
      *v25 = (void **)v26;
      if ( *(_DWORD *)v42 )
      {
        v42 = *(_DWORD *)v42;
        v26 = *v25;
      }
      sub_2D500((int)v43, (int)v26);
      ++v44;
      if ( i >= v46 )
        goto LABEL_47;
      v27 = qlseek(*(_DWORD *)(v36 + 360), v32 + *(_QWORD *)(v36 + 364), 0);
      if ( (v28 & v27) == 0xFFFFFFFF )
        goto LABEL_47;
      if ( !sub_43F50(v40, a1[1]) )
        goto LABEL_47;
      (*(void (__cdecl **)(int *, char *, _DWORD, _DWORD, unsigned int))(*a1 + 4))(
        a1,
        v40,
        v19 - a2,
        (unsigned __int64)(v32 - a2) >> 32,
        i);
      v29 = (unsigned int)v41 + v32;
      v19 = v29;
      if ( v29 >= v6 )
        goto LABEL_47;
      v20 = v43;
    }
    v33 = (void ***)&v43;
    while ( 2 )
    {
      v21 = v20[4];
      v22 = v20[5];
      if ( v19 < __SPAIR64__((unsigned int)v22, (unsigned int)v21) )
      {
        v23 = *v20;
        v24 = v20;
        if ( !*v20 )
        {
          v24 = v20;
          if ( !*v20 )
            goto LABEL_37;
          goto LABEL_47;
        }
        goto LABEL_28;
      }
      if ( __SPAIR64__((unsigned int)v22, (unsigned int)v21) < v19 )
      {
        v24 = v20 + 1;
        v23 = v20[1];
        if ( !v23 )
          goto LABEL_36;
LABEL_28:
        v33 = v24;
        v20 = (void ***)v23;
        continue;
      }
      break;
    }
    v24 = v33;
    if ( !*v33 )
      goto LABEL_37;
LABEL_47:
    v30 = (unsigned int)&v35[v48];
    v9 = &v37[__CFADD__(v48, v35)];
    sub_43D30((int)&v42, (void **)v43);
    if ( __SPAIR64__((unsigned int)v9, v30) < v6 )
    {
      v8 = (char *)v30;
      ++v39;
      v7 = v50;
      continue;
    }
    break;
  }
LABEL_48:
  sub_43D30((int)&v49, v50);
  qlseek(*(_DWORD *)(v36 + 360), *(_QWORD *)(v36 + 364) + v5, 0);
  return __readgsdword(0x14u);
}
// 38DAC: variable 'v4' is possibly undefined
// 38F3A: variable 'v18' is possibly undefined
// 39103: variable 'v28' is possibly undefined
