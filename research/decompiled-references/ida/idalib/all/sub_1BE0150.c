__int64 __fastcall sub_1BE0150(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 *v6; // rbx
  __int64 *v7; // rcx
  __int16 v8; // dx
  __int64 v9; // rax
  __int64 v10; // r12
  char v11; // r13
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r14d
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r14d
  unsigned __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned __int8 v22; // al
  int v23; // edx
  _BYTE *v24; // rdi
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 *v28; // r14
  __int64 v29; // r15
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 *v39; // [rsp+0h] [rbp-88h]
  int v40; // [rsp+0h] [rbp-88h]
  char v41; // [rsp+Fh] [rbp-79h]
  unsigned __int64 v42; // [rsp+10h] [rbp-78h]
  __int64 v43; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int64 v46; // [rsp+38h] [rbp-50h]
  _BYTE v47[72]; // [rsp+40h] [rbp-48h] BYREF

  v4 = sub_BFB9F0(a2);
  if ( (*(_WORD *)v4 & 0x1FF) == 4 )
    v4 = sub_BFB9F0(*(_QWORD *)(v4 + 16));
  v6 = (__int64 *)(v4 + 80);
  v46 = 0x200000000LL;
  v7 = (__int64 *)(v4 + 64);
  ptr = v47;
  v8 = *(_WORD *)v4;
  v9 = *(unsigned int *)(v4 + 4);
  if ( (v8 & 0x1FF) == 0x18 )
    v6 = v7;
  v10 = 0;
  v39 = &v6[v9];
  if ( v39 == v6 )
    return v10;
  v41 = 0;
  do
  {
    while ( 1 )
    {
      v21 = *v6 & 0xFFFFFFFFFFFFFFF8LL;
      v22 = *(_BYTE *)(v21 + 28) & 0x7F;
      v23 = v22;
      if ( ((v22 + 52) & 0x7Fu) <= 1 || (unsigned int)v22 - 53 <= 1 )
      {
        v21 = sub_B72ED0(*v6 & 0xFFFFFFFFFFFFFFF8LL);
        v23 = *(_BYTE *)(v21 + 28) & 0x7F;
      }
      if ( (unsigned int)(v23 - 34) > 5 )
        goto LABEL_19;
      v11 = sub_1BDFA80(a1, (__int128 *)v21, 0, 0, 0, v5);
      if ( !v11 )
        goto LABEL_14;
      if ( !v10 )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
      {
        v42 = sub_15F1640(a1, 1);
        v15 = sub_178F000(*(_QWORD *)(a1 + 664), v42, v21, v12, v13, v14);
        v18 = v15 - sub_178F000(*(_QWORD *)(a1 + 664), v42, v10, v42, v16, v17);
        if ( v18 )
        {
          if ( v18 <= 0 )
            goto LABEL_14;
          break;
        }
      }
      v19 = sub_B77AF0(v21);
      if ( v19 | sub_B77AF0(v10) )
        goto LABEL_35;
      v20 = sub_1BD4060(a1, v21, v10, 0, 0);
      if ( v21 == v20 )
        break;
      if ( !v20 )
      {
LABEL_35:
        v37 = (unsigned int)v46;
        v38 = (unsigned int)v46 + 1LL;
        if ( v38 > HIDWORD(v46) )
        {
          sub_2237220(&ptr, v47, v38, 8);
          v37 = (unsigned int)v46;
        }
        v41 = v11;
        *((_QWORD *)ptr + v37) = v21;
        LODWORD(v46) = v46 + 1;
      }
LABEL_14:
      if ( v39 == ++v6 )
        goto LABEL_25;
    }
    v26 = *v6;
    v10 = v21;
    v41 = 0;
    ++v6;
    v43 = v26;
  }
  while ( v39 != v6 );
LABEL_25:
  v24 = ptr;
  if ( v41 == 1 || !v10 )
  {
    v10 = 0;
  }
  else
  {
    v27 = (__int64 *)((char *)ptr + 8 * (unsigned int)v46);
    if ( v27 != ptr )
    {
      v28 = (__int64 *)ptr;
      while ( 1 )
      {
        v29 = *v28;
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) == 0
          || (v30 = sub_15F1640(a1, 1),
              v40 = sub_178F000(*(_QWORD *)(a1 + 664), v30, v29, v31, v32, v33),
              v40 == (unsigned int)sub_178F000(*(_QWORD *)(a1 + 664), v30, v10, v34, v35, v36)) )
        {
          if ( !sub_1D3B1F0(a1, v29, v10) )
            break;
        }
        if ( v27 == ++v28 )
        {
          v24 = ptr;
          goto LABEL_34;
        }
      }
LABEL_19:
      v24 = ptr;
      v10 = 0;
      goto LABEL_20;
    }
LABEL_34:
    *a3 = v43;
  }
LABEL_20:
  if ( v24 != v47 )
    free(v24);
  return v10;
}
