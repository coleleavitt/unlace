_BYTE *__fastcall sub_2038AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  char v7; // al
  __int64 v8; // rdi
  char v9; // bl
  int v10; // r12d
  char *v11; // rax
  _BYTE *result; // rax
  _BYTE *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // r13
  void (__fastcall *v20)(void *); // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // r13
  void (__fastcall *v28)(void *); // rax

  v6 = a1;
  if ( (*(_BYTE *)(a2 + 7) & 0x10) != 0 )
    return sub_2032640(a1, (_BYTE *)a2);
  v7 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 <= 0x15u )
  {
    if ( (unsigned __int8)(v7 - 13) > 3u )
      return (_BYTE *)sub_2038DE0();
    v8 = *(_QWORD *)(a3 + 16);
    if ( v8 )
    {
      v9 = 64;
      v10 = sub_2038930(v8, a2, a3, a4, a5, a6);
      goto LABEL_6;
    }
    goto LABEL_31;
  }
  if ( v7 != 25 )
  {
    if ( v7 == 24 )
      return (_BYTE *)sub_20399E0(a1, *(_QWORD *)(a2 + 24), a3, 1);
    v21 = *(_QWORD *)(a3 + 16);
    if ( v21 )
    {
      v10 = sub_2038650(v21, a2, a3, a4, a5, a6);
      if ( v10 != -1 )
      {
        v9 = 37;
        goto LABEL_7;
      }
      v22 = sub_2032BF0(a2);
      v27 = (void *)v22;
      if ( !v22 )
        return (_BYTE *)sub_995540(v6, "<badref>");
      v10 = sub_2038650(v22, a2, v23, v24, v25, v26);
      v28 = *(void (__fastcall **)(void *))(*(_QWORD *)v27 + 8LL);
      if ( v28 == sub_202F1B0 )
      {
        sub_202EF80((__int64)v27);
        v9 = 37;
        operator delete(v27, 0x168u);
      }
      else
      {
        v28(v27);
        v9 = 37;
      }
LABEL_6:
      if ( v10 != -1 )
      {
LABEL_7:
        v11 = *(char **)(v6 + 32);
        if ( (unsigned __int64)v11 >= *(_QWORD *)(v6 + 24) )
        {
          v6 = sub_227BA10(v6, (unsigned int)v9);
        }
        else
        {
          *(_QWORD *)(v6 + 32) = v11 + 1;
          *v11 = v9;
        }
        return (_BYTE *)sub_227B930(v6, v10);
      }
      return (_BYTE *)sub_995540(v6, "<badref>");
    }
LABEL_31:
    v14 = sub_2032BF0(a2);
    v19 = (void *)v14;
    if ( !v14 )
      return (_BYTE *)sub_995540(v6, "<badref>");
    if ( (unsigned __int8)(*(_BYTE *)a2 - 13) > 3u )
    {
      v9 = 37;
      v10 = sub_2038650(v14, a2, v15, v16, v17, v18);
    }
    else
    {
      v9 = 64;
      v10 = sub_2038930(v14, a2, v15, v16, v17, v18);
    }
    v20 = *(void (__fastcall **)(void *))(*(_QWORD *)v19 + 8LL);
    if ( v20 == sub_202F1B0 )
    {
      sub_202EF80((__int64)v19);
      operator delete(v19, 0x168u);
    }
    else
    {
      v20(v19);
    }
    goto LABEL_6;
  }
  sub_995540(a1, "asm ");
  if ( *(_BYTE *)(a2 + 96) )
    sub_995540(a1, "sideeffect ");
  if ( *(_BYTE *)(a2 + 97) )
    sub_995540(a1, "alignstack ");
  if ( *(_DWORD *)(a2 + 100) == 1 )
    sub_995540(a1, "inteldialect ");
  if ( *(_BYTE *)(a2 + 104) )
    sub_995540(a1, "unwind ");
  v13 = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 24) )
  {
    sub_227BA10(a1, 34);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v13 + 1;
    *v13 = 34;
  }
  sub_22449A0(*(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), a1);
  sub_995540(a1, "\", \"");
  sub_22449A0(*(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), a1);
  result = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a1 + 24) )
    return (_BYTE *)sub_227BA10(a1, 34);
  *(_QWORD *)(a1 + 32) = result + 1;
  *result = 34;
  return result;
}
