unsigned __int64 __fastcall sub_372480(__int64 a1)
{
  int v2; // ebp
  unsigned __int64 v3; // rax
  int *v4; // r12
  int v5; // edx
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  _DWORD *v10; // r13
  __int64 v11; // r15
  _DWORD *v12; // rsi
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // r11d
  int *v18; // r8
  int *v19; // r11
  __int64 v20; // rax
  char v21; // al
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned int tinfo_size; // eax
  char v27; // al
  char v28; // al
  unsigned __int64 v29; // [rsp+8h] [rbp-140h]
  __int64 v30; // [rsp+20h] [rbp-128h]
  int *v31; // [rsp+28h] [rbp-120h]
  signed int v32; // [rsp+28h] [rbp-120h]
  int v33; // [rsp+28h] [rbp-120h]
  int v34; // [rsp+28h] [rbp-120h]
  int v35; // [rsp+28h] [rbp-120h]
  int v36; // [rsp+28h] [rbp-120h]
  int v37; // [rsp+28h] [rbp-120h]
  int v38; // [rsp+28h] [rbp-120h]
  int *v39; // [rsp+30h] [rbp-118h]
  int v40; // [rsp+38h] [rbp-110h]
  signed int v41; // [rsp+3Ch] [rbp-10Ch]
  __int64 v42; // [rsp+40h] [rbp-108h]
  __int64 v43; // [rsp+48h] [rbp-100h]
  signed __int64 v44; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v47; // [rsp+68h] [rbp-E0h]
  __int64 v48; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+88h] [rbp-C0h]
  __int64 v50; // [rsp+90h] [rbp-B8h]
  __int64 v51; // [rsp+A0h] [rbp-A8h]
  __int64 v52; // [rsp+A8h] [rbp-A0h]
  __int64 v53; // [rsp+D8h] [rbp-70h]
  __int64 v54; // [rsp+E0h] [rbp-68h]
  __int64 v55; // [rsp+F0h] [rbp-58h]
  __int64 v56; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v57; // [rsp+108h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)(a1 + 72) - 208) > 0x2F )
    return v57 - __readfsqword(0x28u);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 604LL) & 0x100000;
  if ( v2 )
    return v57 - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 464);
  v4 = *(int **)(a1 + 456);
  *(_QWORD *)(a1 + 456) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  v29 = v3;
  if ( v3 )
  {
    v42 = a1 + 456;
    *(_QWORD *)(a1 + 456) = qvector_reserve(a1 + 456, 0, v3, 4);
    v30 = *(_QWORD *)(a1 + 144);
    v7 = *(_DWORD *)(a1 + 4) & 0x40;
    *(_DWORD *)(a1 + 4) &= ~0x40u;
    v8 = 0;
    v40 = v7;
    while ( 1 )
    {
      v9 = v4[v8];
      v10 = (_DWORD *)(104 * v9 + *(_QWORD *)(a1 + 432));
      if ( (unsigned __int8)sub_1C2F20((__int64)v10, &v45, &v44, v10[22]) )
      {
        if ( *v10 == 1 )
          sub_36E100(a1, v30, v45, v9, 0);
        v30 = v44;
      }
      v11 = *(_QWORD *)(a1 + 432) + 104 * v9;
      if ( sub_11C4C0(*(_DWORD *)(v11 + 88))
        || *(_DWORD *)(v11 + 88) == 16
        || (*(_BYTE *)(v11 + 24) & 2) != 0
        || (unsigned int)(*(_DWORD *)v11 - 3) > 1
        || (get_tinfo_property(*(_QWORD *)(v11 + 80), 2) & 0x2F) == 0xD
        || (get_tinfo_property(*(_QWORD *)(v11 + 80), 2) & 0xF) == 9 )
      {
        goto LABEL_19;
      }
      v17 = *(_DWORD *)(v11 + 88);
      v41 = 16;
      v43 = *(_QWORD *)(a1 + 1504);
      if ( v17 < *(_DWORD *)(v43 + 88) )
      {
        v41 = sub_11C4D0(v17);
        v17 = *(_DWORD *)(v11 + 88);
      }
      if ( v41 > v17 )
        break;
LABEL_41:
      if ( v41 >= v17 || *(_DWORD *)v11 == 1 )
        goto LABEL_43;
      v33 = v17;
      sub_D0AF0((__int64)&v48, *(_QWORD *)(a1 + 1496), 0xF0u);
      v25 = *(_QWORD *)(v11 + 80);
      v46 = 0;
      v47 = 0;
      tinfo_size = get_tinfo_size(0, v25, 0);
      v27 = sub_D25E0((__int64)&v48, &v46, (__int64 *)v11, tinfo_size, 0);
      v17 = v33;
      if ( !v27
        || !(_QWORD)v47
        || (sub_D0CD0((__int64)&v48, (__int64)&v46, 240), v28 = sub_D29C0((__int64)&v48, a1, v9), v17 = v33, !v28) )
      {
        if ( v46 )
        {
          v34 = v17;
          *(_QWORD *)&v47 = 0;
          qfree(v46);
          v17 = v34;
        }
        if ( v55 )
        {
          v35 = v17;
          v56 = 0;
          qfree(v55);
          v17 = v35;
        }
        if ( v53 )
        {
          v36 = v17;
          v54 = 0;
          qfree(v53);
          v17 = v36;
        }
        if ( v51 )
        {
          v37 = v17;
          v52 = 0;
          qfree(v51);
          v17 = v37;
        }
        if ( v49 )
        {
          v38 = v17;
          v50 = 0;
          qfree(v49);
          v17 = v38;
        }
LABEL_43:
        v32 = v17;
        v22 = sub_1EFA40((_DWORD *)v11, (_QWORD *)v43, v41, 2);
        if ( v32 > v41 && v22 )
        {
          sub_1F4970(a1, *(_QWORD *)(v11 + 16), v11);
          *(_DWORD *)(v11 + 24) |= 0x400u;
        }
LABEL_19:
        v12 = *(_DWORD **)(a1 + 456);
        v13 = *(_QWORD *)(a1 + 464);
        v14 = &v12[v13];
        if ( v12 != v14 )
        {
          v15 = *(_DWORD **)(a1 + 456);
          while ( (_DWORD)v9 != *v15 )
          {
            if ( v14 == ++v15 )
              goto LABEL_25;
          }
          if ( v14 != v15 )
            sub_36A3B0();
        }
LABEL_25:
        v16 = v13 + 1;
        if ( *(_QWORD *)(a1 + 472) < v16 )
        {
          v23 = qvector_reserve(v42, v12, v16, 4);
          v24 = *(_QWORD *)(a1 + 464);
          *(_QWORD *)(a1 + 456) = v23;
          v14 = (_DWORD *)(v23 + 4 * v24);
        }
        *v14 = v9;
        ++*(_QWORD *)(a1 + 464);
        goto LABEL_28;
      }
      if ( v46 )
      {
        *(_QWORD *)&v47 = 0;
        qfree(v46);
      }
      sub_CFB70(&v48);
LABEL_28:
      v8 = ++v2;
      if ( v2 >= v29 )
        goto LABEL_5;
    }
    v18 = &v4[v29];
    if ( v4 == v18 )
      goto LABEL_43;
    v19 = v4;
    while ( 1 )
    {
      v20 = *v19;
      if ( (_DWORD)v9 != (_DWORD)v20 )
      {
        v39 = v19;
        v31 = v18;
        v21 = sub_1C4520(
                (int *)(*(_QWORD *)(a1 + 432) + 104 * v20),
                *(int *)(*(_QWORD *)(a1 + 432) + 104 * v20 + 88),
                (int *)v11,
                v41);
        v18 = v31;
        v19 = v39;
        if ( v21 )
          goto LABEL_19;
      }
      if ( v18 == ++v19 )
      {
        v17 = *(_DWORD *)(v11 + 88);
        goto LABEL_41;
      }
    }
  }
  v5 = *(_DWORD *)(a1 + 4) & 0x40;
  *(_DWORD *)(a1 + 4) &= ~0x40u;
  v40 = v5;
LABEL_5:
  if ( v40 )
    *(_DWORD *)(a1 + 4) |= 0x40u;
  if ( v4 )
    qfree(v4);
  return v57 - __readfsqword(0x28u);
}
