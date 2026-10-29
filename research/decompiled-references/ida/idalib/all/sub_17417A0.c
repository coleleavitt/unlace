__int64 __fastcall sub_17417A0(
        _QWORD *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 a5,
        __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  char v15; // si
  char v16; // r8
  __int64 result; // rax
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // al
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  char v33; // r8
  unsigned int v34; // eax
  char v35; // r8
  unsigned __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  char v40; // al
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // [rsp+4h] [rbp-44h]
  char v44; // [rsp+4h] [rbp-44h]
  int v45; // [rsp+4h] [rbp-44h]
  char v46; // [rsp+4h] [rbp-44h]
  char v47; // [rsp+4h] [rbp-44h]
  int v48; // [rsp+8h] [rbp-40h]
  char v49; // [rsp+8h] [rbp-40h]
  int v50; // [rsp+8h] [rbp-40h]
  unsigned int v51; // [rsp+Ch] [rbp-3Ch]

  v12 = a4;
  v13 = a7;
  v14 = a8;
  v15 = (*(_BYTE *)(a7 + 1) >> 3) & 7;
  if ( a8 )
  {
    if ( (unsigned int)(a2 - 37) <= 1 )
    {
      if ( v15 != 3 )
      {
        v16 = 1;
        if ( ((*(_BYTE *)(a8 + 1) >> 3) & 7) != 3 )
          goto LABEL_12;
LABEL_38:
        v51 = v12;
        v48 = a2;
        v44 = v16;
        v32 = sub_1907C70(*a1, a8);
        if ( v32 == 1 )
          return 1;
        v12 = v51;
        a2 = v48;
        v14 = v32 & 0xFFFFFFFFFFFFFFFELL;
        v16 = v44;
        goto LABEL_6;
      }
      v33 = 1;
      goto LABEL_41;
    }
    if ( v15 != 3 )
    {
      v16 = 0;
LABEL_5:
      if ( ((*(_BYTE *)(a8 + 1) >> 3) & 7) != 3 )
        goto LABEL_6;
      goto LABEL_38;
    }
LABEL_40:
    v33 = 0;
LABEL_41:
    v49 = v33;
    v45 = a2;
    v34 = sub_BFAB60(a2);
    v35 = v49;
    if ( v34 - 21 <= 0xA )
      return sub_1C214B0(*(_QWORD *)(*a1 + 776LL), 0, a3, v34, a7, a8);
    v50 = v45;
    v46 = v35;
    v38 = sub_1907C70(*a1, a7);
    v16 = v46;
    a2 = v50;
    v12 = a4;
    if ( v38 == 1 )
      return 1;
    v13 = v38 & 0xFFFFFFFFFFFFFFFELL;
    if ( !a8 )
    {
LABEL_6:
      if ( a2 != 43 )
        goto LABEL_7;
LABEL_18:
      v22 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v23 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (*(_BYTE *)(v22 + 17) & 4) != 0 )
      {
        if ( (unsigned __int8)v23 > 0x2Au )
          goto LABEL_34;
        v24 = 0x4040600007CLL;
        if ( !_bittest64(&v24, v23) && (_BYTE)v23 != 33 )
          goto LABEL_34;
      }
      else if ( (unsigned __int8)(v23 - 47) <= 1u )
      {
        goto LABEL_34;
      }
      v25 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v26 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (*(_BYTE *)(v25 + 17) & 4) != 0 )
      {
        if ( (unsigned __int8)v26 <= 0x2Au )
        {
          v39 = 0x4040600007CLL;
          if ( _bittest64(&v39, v26) || (_BYTE)v26 == 33 )
            return sub_191AF90(*a1, v13, v12, v14, a3);
        }
      }
      else if ( (unsigned __int8)(v26 - 47) > 1u )
      {
        return sub_191AF90(*a1, v13, v12, v14, a3);
      }
LABEL_34:
      if ( v14 && !v16 )
        goto LABEL_36;
LABEL_15:
      v21 = sub_BF9700(a2, v16);
      return sub_1C09DA0(*a1, a3, v21, a6, v13, a5);
    }
    goto LABEL_5;
  }
  if ( v15 == 3 )
    goto LABEL_40;
  v16 = 0;
  if ( a2 == 43 )
    goto LABEL_18;
LABEL_7:
  if ( a2 != 41 )
  {
    if ( v14 && !v16 )
    {
      if ( (*(_DWORD *)v13 & 0x10000) == 0 && (*(_DWORD *)v14 & 0x10000) == 0 )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v19 = (*(_BYTE *)(v27 + 17) & 4) == 0;
        v28 = *(_QWORD *)(v27 + 8);
        if ( v19 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47) > 1u )
            goto LABEL_31;
        }
        else
        {
          v41 = *(unsigned __int8 *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( (unsigned __int8)v41 <= 0x2Au )
          {
            v42 = 0x4040600007CLL;
            if ( _bittest64(&v42, v41) || (_BYTE)v41 == 33 )
            {
LABEL_31:
              v43 = a2;
              v29 = sub_1741750(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL));
              a2 = v43;
              if ( !v29 )
              {
                v30 = sub_BFAB60(v43);
                return sub_1928110(*a1, a3, v30, v13, v14, 0);
              }
            }
          }
        }
      }
LABEL_36:
      v31 = sub_BFAB60(a2);
      result = sub_1C07820(*a1, a3, v31, a6, v13, v14, a5, 1, 0);
      if ( result == 1 )
        return 1;
      return result;
    }
LABEL_12:
    v18 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v19 = (*(_BYTE *)(v18 + 17) & 4) == 0;
    v20 = *(_QWORD *)(v18 + 8);
    if ( v19 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47) > 1u )
        goto LABEL_46;
    }
    else
    {
      v36 = *(unsigned __int8 *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned __int8)v36 <= 0x2Au )
      {
        v12 = 0x4040600007CLL;
        if ( _bittest64(&v12, v36) || (_BYTE)v36 == 33 )
          goto LABEL_46;
      }
    }
    if ( a2 != 11 )
      goto LABEL_15;
    v47 = v16;
    v40 = sub_18C3500(*a1, v13, v12);
    v16 = v47;
    a2 = 11;
    if ( !v40 )
      goto LABEL_15;
LABEL_46:
    v37 = sub_BF9700(a2, v16);
    return sub_19249E0(*a1, a3, v37, v13, 0);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 1;
  return sub_1C042D0(*a1, 0, v13, a3, 0);
}
