unsigned __int64 __fastcall sub_19E20(__int64 a1, __int64 *a2, char a3)
{
  __int64 v4; // r13
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // r8d
  int v10; // r9d
  const char *v11; // rax
  unsigned __int64 v12; // rdi
  char v13; // dl
  unsigned __int64 v14; // r14
  _BYTE *v15; // rsi
  unsigned __int64 v16; // rdi
  char *v17; // rdx
  char v18; // al
  const char *v19; // rdx
  const char *v21; // rcx
  char v22; // [rsp+0h] [rbp-498h]
  const char *v23; // [rsp+8h] [rbp-490h]
  __int64 v24; // [rsp+10h] [rbp-488h]
  void *ptr; // [rsp+30h] [rbp-468h] BYREF
  __int128 v27; // [rsp+38h] [rbp-460h]
  char v28[1024]; // [rsp+50h] [rbp-448h] BYREF
  char v29; // [rsp+450h] [rbp-48h] BYREF
  _BYTE v30[7]; // [rsp+451h] [rbp-47h] BYREF
  unsigned __int64 v31; // [rsp+458h] [rbp-40h]

  v4 = 80 * a2[1];
  v31 = __readfsqword(0x28u);
  v24 = *a2 + v4;
  if ( *a2 != v24 )
  {
    v5 = *a2;
    while ( 1 )
    {
      v6 = sub_64080(*(unsigned __int8 *)(v5 + 72));
      v7 = *(unsigned int *)(v5 + 64);
      v8 = *(unsigned int *)(v5 + 60);
      v23 = (const char *)v6;
      ptr = nullptr;
      v27 = 0;
      sub_65C10(&ptr, v8, v7);
      v11 = haystack;
      if ( (_QWORD)v27 )
        v11 = (const char *)ptr;
      v12 = (unsigned __int64)v28;
      while ( 1 )
      {
        v13 = *v11++;
        *(_BYTE *)v12 = v13;
        if ( !v13 )
          break;
        if ( (char *)++v12 == &v29 )
        {
          v29 = 0;
          break;
        }
      }
      if ( *(_BYTE *)(v5 + 72) == 2 )
        break;
      v16 = (int)sub_9A810(
                   v12,
                   (unsigned int)&v30[-v12],
                   (unsigned int)" (size %llu",
                   *(_QWORD *)(v5 + 40),
                   v9,
                   v10,
                   v22)
          + v12;
      if ( a3 )
      {
        if ( v16 >= (unsigned __int64)v30 )
        {
LABEL_41:
          if ( !byte_1671A1 )
            sub_96F80(518);
LABEL_45:
          BUG();
        }
        v14 = v16 + 1;
        *(_BYTE *)v16 = 32;
        v15 = &v30[-v16 - 1];
        if ( v16 + 1 >= (unsigned __int64)v30 )
          goto LABEL_38;
        goto LABEL_14;
      }
LABEL_15:
      if ( v16 >= (unsigned __int64)v30 )
      {
        if ( !byte_1671A1 )
          sub_96F80(520);
        goto LABEL_45;
      }
      v17 = ")";
      if ( (char *)v16 == &v29 )
      {
LABEL_39:
        v29 = 0;
        v16 = (unsigned __int64)&v29;
      }
      else
      {
        while ( 1 )
        {
          v18 = *v17++;
          *(_BYTE *)v16 = v18;
          if ( !v18 )
            break;
          if ( (char *)++v16 == &v29 )
            goto LABEL_39;
        }
      }
      if ( *(_DWORD *)(v5 + 60) != *(_DWORD *)(v5 + 64) )
        sub_976E0(v16, " UNSYNCED", &v30[-v16]);
      if ( !a3 )
        goto LABEL_32;
      v19 = haystack;
      if ( *(_QWORD *)(v5 + 8) )
        v19 = *(const char **)v5;
      sub_19CE0(a1, (__int64)"%s%s\n", v19, v28);
LABEL_26:
      if ( ptr )
      {
        *(_QWORD *)&v27 = 0;
        j__free(ptr);
      }
      v5 += 80;
      if ( v24 == v5 )
        return v31 - __readfsqword(0x28u);
    }
    if ( !a3 )
    {
      if ( *(_DWORD *)(v5 + 60) != *(_DWORD *)(v5 + 64) )
        sub_976E0(v12, " UNSYNCED", &v30[-v12]);
LABEL_32:
      v21 = haystack;
      if ( *(_QWORD *)(v5 + 8) )
        v21 = *(const char **)v5;
      sub_19CE0(a1, (__int64)"%-4s %s%s\n", v23, v21, v28);
      goto LABEL_26;
    }
    if ( v12 >= (unsigned __int64)v30 )
      goto LABEL_41;
    *(_BYTE *)v12 = 32;
    if ( v12 + 1 >= (unsigned __int64)v30 || (v14 = v12 + 2, *(_BYTE *)(v12 + 1) = 40, v12 + 2 >= (unsigned __int64)v30) )
    {
LABEL_38:
      v29 = 0;
      LODWORD(v15) = 1;
      v14 = (unsigned __int64)&v29;
    }
    else
    {
      v15 = &v30[-v14];
    }
LABEL_14:
    v16 = v14 + (int)sub_9A810(v14, (_DWORD)v15, (unsigned int)"CL%d/%s", *(_DWORD *)(v5 + 68), (_DWORD)v23, v10, v22);
    goto LABEL_15;
  }
  return v31 - __readfsqword(0x28u);
}

