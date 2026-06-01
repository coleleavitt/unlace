/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000230C0
// Address: 0x00000001000230C0

//----- (00000001000230C0) ----------------------------------------------------
const char *__fastcall sub_1000230C0(__int64 a1, char *__s)
{
  const char *v2; // x22
  __int64 v5; // x21
  size_t v6; // x21
  void *v7; // x0
  const char *v8; // x0
  int v9; // w23
  void *v10; // x0
  _BYTE *v11; // x1
  unsigned __int64 v12; // x23
  size_t v13; // x21
  __int64 v14; // x0
  unsigned __int64 v15; // x23
  unsigned __int64 v16; // x25
  __int64 v17; // x24
  int v18; // w26
  _QWORD *v19; // x8
  const char *v20; // x0
  __int64 v21; // x8
  __int128 __src; // [xsp+8h] [xbp-78h] BYREF
  unsigned __int64 v24; // [xsp+18h] [xbp-68h]
  __int64 v25; // [xsp+20h] [xbp-60h]

  if ( *(_QWORD *)(a1 + 120) )
  {
    __src = 0u;
    v24 = 0;
    sub_10002B6D4((void **)(a1 + 112), 0, (unsigned __int64)&__src);
    if ( (_QWORD)__src )
    {
      *((_QWORD *)&__src + 1) = 0;
      qfree((void *)__src);
    }
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
    __src = 0u;
    v24 = 0;
    sub_10002B6D4((void **)(a1 + 136), 0, (unsigned __int64)&__src);
    if ( (_QWORD)__src )
    {
      *((_QWORD *)&__src + 1) = 0;
      qfree((void *)__src);
    }
  }
  if ( *(_QWORD *)(a1 + 168) )
  {
    __src = 0u;
    v24 = 0;
    sub_10002B6D4((void **)(a1 + 160), 0, (unsigned __int64)&__src);
    if ( (_QWORD)__src )
    {
      *((_QWORD *)&__src + 1) = 0;
      qfree((void *)__src);
    }
  }
  if ( *(_QWORD *)(a1 + 432) )
  {
    LOBYTE(__src) = 2;
    v24 = 0;
    v25 = 0;
    *((_QWORD *)&__src + 1) = 0;
    sub_10002B940((unsigned __int8 **)(a1 + 424), nullptr, (unsigned __int8 *)&__src);
    free_idcv((unsigned __int8 *)&__src);
  }
  if ( *(_QWORD *)(a1 + 232) )
  {
    LODWORD(__src) = 0;
    sub_10001C1F0((_QWORD **)(a1 + 224), 0, &__src);
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    LODWORD(__src) = 0;
    sub_10001C1F0((_QWORD **)(a1 + 248), 0, &__src);
  }
  if ( *(_QWORD *)(a1 + 280) )
  {
    LODWORD(__src) = 0;
    sub_10001C1F0((_QWORD **)(a1 + 272), 0, &__src);
  }
  if ( *(_QWORD *)(a1 + 304) )
  {
    LODWORD(__src) = 0;
    sub_10001C1F0((_QWORD **)(a1 + 296), 0, &__src);
  }
  if ( *(_QWORD *)(a1 + 328) )
  {
    LOWORD(__src) = 0;
    sub_10001C2FC((_QWORD **)(a1 + 320), 0, &__src);
  }
  if ( *(_QWORD *)(a1 + 352) )
  {
    *(_QWORD *)&__src = 0;
    sub_10002BB1C((_QWORD **)(a1 + 344), 0, &__src);
  }
  if ( *(_QWORD *)(a1 + 376) )
  {
    __src = 0u;
    sub_10002BC28((_QWORD **)(a1 + 368), 0, &__src);
  }
  if ( *(_QWORD *)(a1 + 400) )
  {
    __src = 0u;
    sub_10002BC28((_QWORD **)(a1 + 392), 0, &__src);
  }
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 448) = -1;
  v5 = *(_QWORD *)(a1 + 184);
  if ( v5 )
  {
    __src = 0u;
    v24 = 0;
    if ( __s )
    {
      v6 = strlen(__s);
      v2 = (const char *)(v6 + 1);
      if ( v6 == -1 )
      {
        v7 = nullptr;
      }
      else
      {
        v7 = qvector_reserve(&__src, nullptr, (unsigned __int64)v2, 1u);
        *(_QWORD *)&__src = v7;
      }
      *((_QWORD *)&__src + 1) = v6 + 1;
      memmove(v7, __s, v6);
      *(_BYTE *)(__src + v6) = 0;
      v5 = *(_QWORD *)(a1 + 184);
    }
    if ( *(_QWORD *)(v5 + 40) )
      v8 = *(const char **)(v5 + 32);
    else
      v8 = &byte_10007AE40;
    if ( !strcmp(v8, __s) )
    {
      if ( *(_BYTE *)(a1 + 220) )
      {
        v12 = *((_QWORD *)&__src + 1);
        v11 = (_BYTE *)__src;
        if ( *((_QWORD *)&__src + 1) )
          v13 = *((_QWORD *)&__src + 1) - 1LL;
        else
          v13 = 0;
        v2 = (const char *)(v13 + 2);
        if ( v24 < v13 + 2 )
        {
          v11 = qvector_reserve(&__src, (_QWORD *)__src, v13 + 2, 1u);
          *(_QWORD *)&__src = v11;
        }
        *((_QWORD *)&__src + 1) = v13 + 2;
        v11[v13 + 1] = 0;
        if ( v12 >= 2 )
          memmove((void *)(__src + 1), (const void *)__src, v13);
        *(_BYTE *)__src = 126;
        *(_DWORD *)(a1 + 216) = 2;
        v5 = *(_QWORD *)(a1 + 184);
      }
      else
      {
        *(_DWORD *)(a1 + 216) = 1;
      }
    }
    else if ( *(_BYTE *)(a1 + 220) )
    {
      v2 = (const char *)set_qerrno();
      v9 = 0;
      v10 = (void *)__src;
      if ( !(_QWORD)__src )
        goto LABEL_67;
      goto LABEL_66;
    }
    v14 = sub_10002F68C(v5, *(_QWORD **)(a1 + 104), (__int64)&__src);
    v5 = v14;
    if ( v14 != -1 )
    {
      if ( *(_DWORD *)(a1 + 216) == 2 )
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 64LL) = v14;
      v15 = *(_QWORD *)(a1 + 144);
      if ( !v15 )
        goto LABEL_64;
      v16 = 0;
      v17 = *(_QWORD *)(a1 + 136);
      v18 = 1;
      v2 = "this";
      while ( 1 )
      {
        v19 = (_QWORD *)(v17 + 24 * v16);
        v20 = v19[1] ? (const char *)*v19 : &byte_10007AE40;
        if ( !strcmp(v20, "this") )
          break;
        v16 = v18++;
        if ( v15 <= v16 )
          goto LABEL_64;
      }
      if ( v16 == -1 )
LABEL_64:
        sub_1000285D0(a1 + 136, "this");
    }
    v9 = 1;
    v10 = (void *)__src;
    if ( !(_QWORD)__src )
    {
LABEL_67:
      if ( !v9 )
        return v2;
      goto LABEL_68;
    }
LABEL_66:
    *((_QWORD *)&__src + 1) = 0;
    qfree(v10);
    goto LABEL_67;
  }
  v5 = sub_10002ECAC(*(_QWORD **)(a1 + 104), __s);
LABEL_68:
  if ( v5 == -1 )
  {
LABEL_73:
    set_error_string(0);
    return (const char *)set_qerrno();
  }
  v2 = nullptr;
  v21 = *(_QWORD *)(**(_QWORD **)(a1 + 104) + 8 * v5);
  *(_QWORD *)(a1 + 192) = v21;
  *(_QWORD *)(a1 + 200) = v21 + 32;
  *(_DWORD *)(a1 + 208) = 0;
  *(_BYTE *)(a1 + 212) = -90;
  if ( *(_DWORD *)(v21 + 136) != -1 )
  {
    if ( under_debugger != 1 )
      interr(484);
    __break(1u);
    goto LABEL_73;
  }
  return v2;
}
// 100023528: variable 'v2' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A590D: using guessed type char under_debugger;
