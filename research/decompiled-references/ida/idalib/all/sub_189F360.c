__int64 __fastcall sub_189F360(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 *v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  char v15; // cl
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  int v21; // eax
  unsigned __int64 v22; // rcx
  __int64 v23; // r13
  unsigned __int64 *v24; // rax
  __int64 *v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r14
  __int64 v36; // rax
  _QWORD *v37; // rax
  char v38; // al
  unsigned __int64 v39; // rdi
  unsigned __int8 v40; // cl
  __int64 v41; // [rsp+8h] [rbp-E0h]
  __int64 v42; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v43[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v45; // [rsp+40h] [rbp-A8h] BYREF
  char v46; // [rsp+98h] [rbp-50h]
  unsigned int v47; // [rsp+A0h] [rbp-48h]
  char v48; // [rsp+A4h] [rbp-44h]

  v2 = a2;
  v4 = sub_168B6C0((__int64)a1);
  v7 = *(_QWORD *)(a2 + 48);
  v8 = v4;
  v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v10 & 8) == 0 )
    goto LABEL_2;
  v10 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
  a2 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
  v12 = ((v10 | *(unsigned __int64 *)((char *)&qword_18 + a2)) >> 6) & 7;
  if ( (_DWORD)v12 == 4 )
  {
    v13 = *(_BYTE *)(v2 + 28) & 0x7F;
    v14 = (unsigned int)v13 - 40;
    if ( (unsigned int)v14 > 6 )
    {
      if ( v13 == 50 )
      {
        v23 = 3;
      }
      else
      {
        if ( (unsigned int)v13 - 49 > 2 )
          return 0;
        v23 = 2;
      }
      goto LABEL_35;
    }
    if ( (*(_BYTE *)(v2 + 29) & 1) == 0 )
    {
LABEL_12:
      v15 = *(_BYTE *)(v2 + 96);
      v16 = v15 & 7;
      if ( (v15 & 7) != 0 )
      {
        if ( v16 != 5 )
          goto LABEL_14;
        v38 = *(_BYTE *)(v2 + 28) & 0x7F;
        if ( v38 != 40 && v38 != 46 )
          goto LABEL_74;
        v39 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v2 + 16) & 4) != 0 )
          v39 = *(_QWORD *)(v39 + 8);
        if ( v39 )
        {
          v40 = *(_BYTE *)(sub_B8EAA0(v39) + 8) & 0x7F;
          if ( v40 > 0x12u )
          {
            if ( ((v40 + 94) & 0x7Fu) <= 5 )
              goto LABEL_73;
          }
          else if ( ((1LL << v40) & 0x40182) != 0 )
          {
LABEL_73:
            v16 = *(_BYTE *)(v2 + 96) & 7;
LABEL_14:
            if ( v16 > 3u )
            {
              v17 = *(_BYTE *)(v2 + 28) & 0x7F;
LABEL_16:
              if ( (unsigned int)v17 - 40 > 6 || !(unsigned int)sub_B73370(v2) )
                return 0;
              goto LABEL_9;
            }
            goto LABEL_34;
          }
          if ( (*(_BYTE *)(v2 + 28) & 0x7F) == 0x2B && (*(_BYTE *)(v2 + 96) & 7u) > 3 )
            goto LABEL_8;
        }
        else
        {
LABEL_74:
          if ( v38 == 43 )
            goto LABEL_8;
        }
        goto LABEL_34;
      }
      v19 = *(_QWORD *)&byte_8[*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v19 & 8) != 0
        && (*(_DWORD *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v19 & 7)) >> 9 == 3 )
      {
        goto LABEL_34;
      }
      v17 = *(_BYTE *)(v2 + 28) & 0x7F;
      if ( ((v17 + 85) & 0x7D) != 0 )
      {
        v20 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v2 + 16) & 4) != 0 )
          v20 = *(_QWORD *)(v20 + 8);
        v21 = *(_BYTE *)(sub_B8EAA0(v20) + 8) & 0x7F;
        if ( v21 == 24 || !v21 )
          goto LABEL_34;
        v17 = *(_BYTE *)(v2 + 28) & 0x7F;
        if ( v17 == 43 )
        {
          if ( (*(_BYTE *)(v2 + 96) & 0x18) == 0 )
            goto LABEL_8;
          goto LABEL_34;
        }
        v22 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v2 + 16) & 4) != 0 )
          v22 = *(_QWORD *)v22;
        if ( ((*(_BYTE *)(v22 + 8) + 70) & 0x7Fu) <= 3 )
        {
LABEL_34:
          v23 = 1;
          goto LABEL_35;
        }
        v15 = *(_BYTE *)(v2 + 96);
      }
      if ( (v15 & 0x18) == 0 )
        goto LABEL_16;
      goto LABEL_34;
    }
    v24 = sub_B8C3D0(v2, a2, v13, v14, v5, v6);
    v25 = (__int64 *)*v24;
    v26 = *v24 + 8LL * *((unsigned int *)v24 + 2);
    if ( *v24 < v26 )
    {
      v30 = *v24;
      while ( *(_WORD *)(*(_QWORD *)v30 + 36LL) != 148 )
      {
        v30 += 8LL;
        if ( v26 == v30 )
          goto LABEL_12;
      }
      if ( v26 == v30 )
        goto LABEL_12;
    }
    else
    {
      if ( v25 == (__int64 *)v26 )
        goto LABEL_12;
      if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 148 )
      {
        v27 = (__int64 *)(v26 + 8);
        while ( v25 != v27 )
        {
          v28 = *v27++;
          if ( *(_WORD *)(v28 + 36) == 148 )
            goto LABEL_59;
        }
        goto LABEL_12;
      }
    }
LABEL_59:
    v23 = 0;
LABEL_35:
    sub_168B9F0((__int64)v43, a1, *(_DWORD *)(v2 + 24), 0xBC8u, 0);
    if ( v46 )
    {
      sub_AE9DF0(&v45, v23, 3u);
    }
    else if ( v48 )
    {
      v35 = sub_168B9E0(v43);
      v36 = v44;
      if ( v44 )
        v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44);
      v42 = v36;
      v37 = sub_1587BC0(v35, &v42, v31, v32, v33, v34);
      sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v47 + 8), v23, 3u);
    }
    sub_15F7200(v43);
    if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 40 > 6 || !(unsigned int)sub_B73370(v2) )
      return 0;
    goto LABEL_9;
  }
  if ( !(_DWORD)v12 )
  {
LABEL_2:
    v41 = *(_QWORD *)(v2 + 48) & 7LL;
    if ( !sub_F6ACC0(*v9, a2, v7 & 7, v10, v5) )
      return 0;
    LODWORD(v12) = sub_F68130(*v9);
    if ( (_DWORD)v12 << 6 )
    {
      v29 = (int)((_DWORD)v12 << 6) | (unsigned __int64)v41;
      if ( (v7 & 8) != 0 )
      {
        v29 |= *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
        v9 = (__int64 *)*v9;
      }
      v18 = sub_A70C40(v8, (__int64)v9, v29);
    }
    else
    {
      v18 = v41 | v7 & 0xFFFFFFFFFFFFFFF8LL;
    }
    *(_QWORD *)(v2 + 48) = v18;
  }
  if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 40 > 6 || (unsigned int)v12 <= 1 )
    return 0;
LABEL_8:
  if ( !(unsigned int)sub_B73370(v2) )
    return 0;
LABEL_9:
  sub_168B9F0((__int64)v43, a1, *(_DWORD *)(v2 + 24), 0xBE3u, 0);
  v42 = *(_QWORD *)(v2 + 48);
  sub_162B6D0((__int64)v43, &v42);
  sub_15F7200(v43);
  return 1;
}
