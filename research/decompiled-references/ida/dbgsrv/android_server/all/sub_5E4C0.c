/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E4C0
// Address: 0x000000000005E4C0

//----- (000000000005E4C0) ----------------------------------------------------
__int64 __fastcall sub_5E4C0(__int64 a1, char *a2)
{
  __int64 *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x22
  const char *v7; // x0
  void *align; // x0
  int v9; // w0
  int v10; // w8
  int v11; // w23
  __int64 v12; // x8
  __int64 v13; // x1
  size_t v14; // x22
  int v15; // w8
  __int64 v16; // x0
  unsigned __int64 v17; // x25
  __int64 v18; // x26
  __int64 v19; // x27
  int v20; // w28
  const char *v21; // x0
  pthread_mutex_t src; // [xsp+8h] [xbp-88h] BYREF

  src.__list.__next = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_5E8FC(a1 + 112, 0);
  v4 = (__int64 *)(a1 + 136);
  sub_5E8FC(a1 + 136, 0);
  sub_5E8FC(a1 + 160, 0);
  if ( *(_QWORD *)(a1 + 432) )
  {
    src.__size[0] = 2;
    memset(&src.__align + 1, 0, 24);
    sub_65F94((pthread_mutex_t *)(a1 + 424), 0, (unsigned __int8 *)&src);
    free_idcv(&src.__align);
  }
  if ( *(_QWORD *)(a1 + 232) )
  {
    src.__lock = 0;
    sub_66184((pthread_mutex_t *)(a1 + 224), 0, (char *)&src);
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    src.__lock = 0;
    sub_66184((pthread_mutex_t *)(a1 + 248), 0, (char *)&src);
  }
  if ( *(_QWORD *)(a1 + 280) )
  {
    src.__lock = 0;
    sub_66184((pthread_mutex_t *)(a1 + 272), 0, (char *)&src);
  }
  if ( *(_QWORD *)(a1 + 304) )
  {
    src.__lock = 0;
    sub_66184((pthread_mutex_t *)(a1 + 296), 0, (char *)&src);
  }
  if ( *(_QWORD *)(a1 + 328) )
  {
    LOWORD(src.__lock) = 0;
    sub_6628C((pthread_mutex_t *)(a1 + 320), 0, (char *)&src);
  }
  if ( *(_QWORD *)(a1 + 352) )
  {
    src.__align = 0;
    sub_66394((pthread_mutex_t *)(a1 + 344), 0, (char *)&src);
  }
  if ( *(_QWORD *)(a1 + 376) )
  {
    *(_OWORD *)&src.__lock = 0u;
    sub_6649C((pthread_mutex_t *)(a1 + 368), 0, (char *)&src);
  }
  if ( *(_QWORD *)(a1 + 400) )
  {
    *(_OWORD *)&src.__lock = 0u;
    sub_6649C((pthread_mutex_t *)(a1 + 392), 0, (char *)&src);
  }
  v5 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 448) = -1;
  if ( !v5 )
  {
    align = (void *)sub_69A70(*(_QWORD *)(a1 + 104), a2);
    v6 = (__int64)align;
    if ( align != (void *)-1LL )
      goto LABEL_30;
LABEL_23:
    set_error_string(nullptr, a2);
    LODWORD(v4) = set_qerrno(0x28u);
    return (unsigned int)v4;
  }
  sub_39140(&src, a2);
  v6 = *(_QWORD *)(a1 + 184);
  if ( *(_QWORD *)(v6 + 40) )
    v7 = *(const char **)(v6 + 32);
  else
    v7 = &byte_F154B;
  v9 = strcmp(v7, a2);
  v10 = *(unsigned __int8 *)(a1 + 220);
  if ( !v9 )
    goto LABEL_33;
  if ( !*(_BYTE *)(a1 + 220) )
    goto LABEL_44;
  LODWORD(v4) = set_qerrno(0x630u);
  v11 = 0;
  align = (void *)src.__align;
  if ( src.__align )
    goto LABEL_58;
LABEL_28:
  if ( v11 )
  {
    while ( v6 != -1 )
    {
LABEL_30:
      v4 = nullptr;
      v12 = *(_QWORD *)(**(_QWORD **)(a1 + 104) + 8 * v6);
      *(_DWORD *)(a1 + 208) = 0;
      *(_BYTE *)(a1 + 212) = -90;
      *(_QWORD *)(a1 + 192) = v12;
      *(_QWORD *)(a1 + 200) = v12 + 32;
      if ( *(_DWORD *)(v12 + 136) == -1 )
        return (unsigned int)v4;
      if ( under_debugger )
      {
        __break(1u);
        sub_39134(align);
      }
      interr(484);
LABEL_33:
      if ( v10 )
      {
        v13 = src.__align;
        if ( *(&src.__align + 1) )
          v14 = *(&src.__align + 1) - 1;
        else
          v14 = 0;
        if ( *(&src.__align + 2) < v14 + 2 )
        {
          v13 = (__int64)qvector_reserve(&src, (void *)src.__align, v14 + 2, 1u);
          src.__align = v13;
        }
        *(&src.__align + 1) = v14 + 2;
        *(_BYTE *)(v13 + v14 + 1) = 0;
        if ( v14 )
          memmove((void *)(src.__align + 1), (const void *)src.__align, v14);
        *(_BYTE *)src.__align = 126;
        v6 = *(_QWORD *)(a1 + 184);
        v15 = 2;
      }
      else
      {
        v15 = 1;
      }
      *(_DWORD *)(a1 + 216) = v15;
LABEL_44:
      v16 = sub_6A738(v6, *(__int64 **)(a1 + 104), (__int64)&src);
      v6 = v16;
      if ( v16 != -1 )
      {
        if ( *(_DWORD *)(a1 + 216) == 2 )
          *(_DWORD *)(*(_QWORD *)(a1 + 184) + 64LL) = v16;
        v17 = *(_QWORD *)(a1 + 144);
        if ( !v17 )
          goto LABEL_56;
        v18 = *v4;
        v19 = 0;
        v20 = 1;
        while ( 1 )
        {
          v21 = *(_QWORD *)(v18 + 24 * v19 + 8) ? *(const char **)(v18 + 24 * v19) : &byte_F154B;
          if ( !strcmp(v21, "this") )
            break;
          v19 = v20;
          if ( v17 <= v20++ )
            goto LABEL_56;
        }
        if ( v19 == -1 )
LABEL_56:
          sub_62D40((__int64)v4, "this");
      }
      v11 = 1;
      align = (void *)src.__align;
      if ( !src.__align )
        goto LABEL_28;
LABEL_58:
      *(&src.__align + 1) = 0;
      qfree(align);
      src.__align = 0;
      *(&src.__align + 2) = 0;
      if ( !v11 )
        return (unsigned int)v4;
    }
    goto LABEL_23;
  }
  return (unsigned int)v4;
}
// 5E718: variable 'v10' is possibly undefined
// 5E8AC: variable 'align' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
