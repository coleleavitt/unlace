unsigned __int64 __fastcall sub_371F40(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // r12
  int v5; // edx
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  _DWORD *v10; // r13
  __int64 v11; // r15
  __int64 v12; // rsi
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
  unsigned int tinfo_size; // eax
  char v26; // al
  char v27; // al
  unsigned __int64 v28; // [rsp+8h] [rbp-140h]
  __int64 v29; // [rsp+20h] [rbp-128h]
  int *v30; // [rsp+28h] [rbp-120h]
  signed int v31; // [rsp+28h] [rbp-120h]
  int v32; // [rsp+28h] [rbp-120h]
  int v33; // [rsp+28h] [rbp-120h]
  int v34; // [rsp+28h] [rbp-120h]
  int v35; // [rsp+28h] [rbp-120h]
  int v36; // [rsp+28h] [rbp-120h]
  int v37; // [rsp+28h] [rbp-120h]
  int *v38; // [rsp+30h] [rbp-118h]
  int v39; // [rsp+38h] [rbp-110h]
  signed int v40; // [rsp+3Ch] [rbp-10Ch]
  __int64 v41; // [rsp+40h] [rbp-108h]
  __int64 v42; // [rsp+48h] [rbp-100h]
  signed __int64 v43; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v45; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v46; // [rsp+68h] [rbp-E0h]
  __int64 v47; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+88h] [rbp-C0h]
  __int64 v49; // [rsp+90h] [rbp-B8h]
  __int64 v50; // [rsp+A0h] [rbp-A8h]
  __int64 v51; // [rsp+A8h] [rbp-A0h]
  __int64 v52; // [rsp+D8h] [rbp-70h]
  __int64 v53; // [rsp+E0h] [rbp-68h]
  __int64 v54; // [rsp+F0h] [rbp-58h]
  __int64 v55; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v56; // [rsp+108h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)(a1 + 72) - 208) > 0x2F )
    return v56 - __readfsqword(0x28u);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 604LL) & 0x100000;
  if ( v2 )
    return v56 - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 464);
  v4 = *(_QWORD *)(a1 + 456);
  *(_QWORD *)(a1 + 456) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  v28 = v3;
  if ( v3 )
  {
    v41 = a1 + 456;
    *(_QWORD *)(a1 + 456) = qvector_reserve(a1 + 456, 0, v3, 4);
    v29 = *(_QWORD *)(a1 + 144);
    v7 = *(_DWORD *)(a1 + 4) & 0x40;
    *(_DWORD *)(a1 + 4) &= ~0x40u;
    v8 = 0;
    v39 = v7;
    while ( 1 )
    {
      v9 = *(int *)(v4 + 4 * v8);
      v10 = (_DWORD *)(104 * v9 + *(_QWORD *)(a1 + 432));
      if ( (unsigned __int8)sub_1C34E0((__int64)v10, &v44, &v43, v10[22]) )
      {
        if ( *v10 == 1 )
          sub_36DBC0(a1, v29, v44, v9, 0);
        v29 = v43;
      }
      v11 = *(_QWORD *)(a1 + 432) + 104 * v9;
      if ( sub_11CA80(*(_DWORD *)(v11 + 88))
        || *(_DWORD *)(v11 + 88) == 16
        || (*(_BYTE *)(v11 + 24) & 2) != 0
        || (unsigned int)(*(_DWORD *)v11 - 3) > 1
        || (get_tinfo_property() & 0x2F) == 0xD
        || (get_tinfo_property() & 0xF) == 9 )
      {
        goto LABEL_19;
      }
      v17 = *(_DWORD *)(v11 + 88);
      v40 = 16;
      v42 = *(_QWORD *)(a1 + 1504);
      if ( v17 < *(_DWORD *)(v42 + 88) )
      {
        v40 = sub_11CA90(v17);
        v17 = *(_DWORD *)(v11 + 88);
      }
      if ( v40 > v17 )
        break;
LABEL_41:
      if ( v40 >= v17 || *(_DWORD *)v11 == 1 )
        goto LABEL_43;
      v32 = v17;
      sub_D10B0((__int64)&v47, *(_QWORD *)(a1 + 1496), 0xF0u);
      v45 = 0;
      v46 = 0;
      tinfo_size = get_tinfo_size();
      v26 = sub_D2BA0((__int64)&v47, (__int64)&v45, (_DWORD *)v11, tinfo_size, 0);
      v17 = v32;
      if ( !v26
        || !(_QWORD)v46
        || (sub_D1290((__int64)&v47, (__int64)&v45, 240), v27 = sub_D2F80((__int64)&v47, a1, v9), v17 = v32, !v27) )
      {
        if ( v45 )
        {
          v33 = v17;
          *(_QWORD *)&v46 = 0;
          qfree(v45);
          v17 = v33;
        }
        if ( v54 )
        {
          v34 = v17;
          v55 = 0;
          qfree(v54);
          v17 = v34;
        }
        if ( v52 )
        {
          v35 = v17;
          v53 = 0;
          qfree(v52);
          v17 = v35;
        }
        if ( v50 )
        {
          v36 = v17;
          v51 = 0;
          qfree(v50);
          v17 = v36;
        }
        if ( v48 )
        {
          v37 = v17;
          v49 = 0;
          qfree(v48);
          v17 = v37;
        }
LABEL_43:
        v31 = v17;
        v22 = sub_1EF680((_DWORD *)v11, (_QWORD *)v42, v40, 2);
        if ( v31 > v40 && v22 )
        {
          sub_1F45B0(a1, *(_QWORD *)(v11 + 16), v11);
          *(_DWORD *)(v11 + 24) |= 0x400u;
        }
LABEL_19:
        v12 = *(_QWORD *)(a1 + 456);
        v13 = *(_QWORD *)(a1 + 464);
        v14 = (_DWORD *)(v12 + 4 * v13);
        if ( (_DWORD *)v12 != v14 )
        {
          v15 = *(_DWORD **)(a1 + 456);
          while ( (_DWORD)v9 != *v15 )
          {
            if ( v14 == ++v15 )
              goto LABEL_25;
          }
          if ( v14 != v15 )
            sub_369E70();
        }
LABEL_25:
        v16 = v13 + 1;
        if ( *(_QWORD *)(a1 + 472) < v16 )
        {
          v23 = qvector_reserve(v41, v12, v16, 4);
          v24 = *(_QWORD *)(a1 + 464);
          *(_QWORD *)(a1 + 456) = v23;
          v14 = (_DWORD *)(v23 + 4 * v24);
        }
        *v14 = v9;
        ++*(_QWORD *)(a1 + 464);
        goto LABEL_28;
      }
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45);
      }
      sub_D0130(&v47);
LABEL_28:
      v8 = ++v2;
      if ( v2 >= v28 )
        goto LABEL_5;
    }
    v18 = (int *)(v4 + 4 * v28);
    if ( (int *)v4 == v18 )
      goto LABEL_43;
    v19 = (int *)v4;
    while ( 1 )
    {
      v20 = *v19;
      if ( (_DWORD)v9 != (_DWORD)v20 )
      {
        v38 = v19;
        v30 = v18;
        v21 = sub_1C4AE0(
                (int *)(*(_QWORD *)(a1 + 432) + 104 * v20),
                *(int *)(*(_QWORD *)(a1 + 432) + 104 * v20 + 88),
                (int *)v11,
                v40);
        v18 = v30;
        v19 = v38;
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
  v39 = v5;
LABEL_5:
  if ( v39 )
    *(_DWORD *)(a1 + 4) |= 0x40u;
  if ( v4 )
    qfree(v4);
  return v56 - __readfsqword(0x28u);
}
