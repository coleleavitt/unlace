void __fastcall sub_14504C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  unsigned int v6; // r15d
  unsigned __int16 v7; // r12
  char v8; // al
  char v9; // dl
  __int64 v10; // rax
  __int64 v11; // rax
  char i; // al
  __int64 v13; // rax
  unsigned int *v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // r15d
  unsigned __int64 v18; // rdx
  unsigned int v19; // r12d
  unsigned int *v20; // r15
  unsigned int *v21; // r12
  __int64 v22; // rax
  unsigned int v23; // [rsp+8h] [rbp-C0h]
  unsigned int v24; // [rsp+Ch] [rbp-BCh]
  __int64 v25; // [rsp+18h] [rbp-B0h] BYREF
  void *ptr; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+28h] [rbp-A0h]
  _BYTE v28[16]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int8 *v29[17]; // [rsp+40h] [rbp-88h] BYREF

  v5 = *(_QWORD *)(a2 + 1192);
  v6 = *(_DWORD *)a4;
  sub_14634E0(a2, a4);
  if ( *(_WORD *)(a4 + 16) != 22 )
  {
    sub_FC70B0((__int64)v29, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1411);
    sub_AE9DF0(v29, (__int64)"(", 1u);
    sub_AEA040((__int64)v29);
    return;
  }
  sub_14634E0(a2, a4);
  v7 = *(_WORD *)(a4 + 16);
  v8 = sub_141A630(v7);
  v9 = v8 | (v7 == 1);
  if ( v9 )
  {
    v9 = v8;
  }
  else
  {
    v10 = *(_QWORD *)(a4 + 8);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      if ( (unsigned int)*(_QWORD *)v11 == 4 )
      {
        if ( *(_DWORD *)(v11 + 16) == 1752397168 )
        {
          v19 = -1;
          sub_14634E0(a2, a4);
          if ( *(_WORD *)(a4 + 16) == 66 )
          {
            sub_14634E0(a2, a4);
            if ( *(_WORD *)(a4 + 16) != 7
              || !(unsigned __int8)sub_1463E50(a2, a4, &ptr)
              || (v19 = (unsigned int)ptr, (unsigned int)ptr > 4) )
            {
              sub_FC70B0((__int64)v29, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1413);
              sub_AEA040((__int64)v29);
              return;
            }
          }
          sub_FCE3B0(*(_QWORD **)(a2 + 48));
          if ( v5 )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 200LL))(v5, v6, v19);
          goto LABEL_48;
        }
      }
      else if ( (unsigned int)*(_QWORD *)v11 == 3 && *(_WORD *)(v11 + 16) == 28528 && *(_BYTE *)(v11 + 18) == 112 )
      {
        sub_14634E0(a2, a4);
        if ( (unsigned __int8)sub_FD0B50(*(__int64 **)(a2 + 48), v6) )
        {
          if ( v5 )
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 208LL))(v5, v6);
        }
        else
        {
          sub_FC70B0((__int64)v29, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1394);
          sub_AEA040((__int64)v29);
        }
LABEL_48:
        if ( *(_WORD *)(a4 + 16) == 23 )
        {
          sub_14634E0(a2, a4);
          if ( *(_WORD *)(a4 + 16) != 2 )
          {
            sub_FC70B0((__int64)v29, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1239);
            sub_AE9DF0(v29, (__int64)"pragma warning", 1u);
            sub_AEA040((__int64)v29);
          }
        }
        else
        {
          sub_FC70B0((__int64)v29, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1411);
          sub_AE9DF0(v29, (__int64)")", 1u);
          sub_AEA040((__int64)v29);
        }
        return;
      }
    }
  }
  v23 = v6;
  for ( i = v9; ; i = sub_141A630(v7) )
  {
    if ( !i )
    {
      if ( v7 == 1 )
        goto LABEL_38;
      v13 = *(_QWORD *)(a4 + 8);
      if ( v13 )
      {
        v14 = *(unsigned int **)(v13 + 16);
        v15 = *v14;
        switch ( v15 )
        {
          case 7LL:
            if ( v14[4] == 1634100580 && *((_WORD *)v14 + 10) == 27765 && *((_BYTE *)v14 + 22) == 116 )
            {
              v16 = 0;
            }
            else
            {
              if ( v14[4] != 1634953572 || *((_WORD *)v14 + 10) != 27746 || *((_BYTE *)v14 + 22) != 101 )
                goto LABEL_38;
              v16 = 1;
            }
            break;
          case 5LL:
            if ( v14[4] != 1869771365 || *((_BYTE *)v14 + 20) != 114 )
              goto LABEL_38;
            v16 = 2;
            break;
          case 4LL:
            if ( v14[4] != 1701015151 )
              goto LABEL_38;
            v16 = 3;
            break;
          default:
            if ( v15 != 8 || *((_QWORD *)v14 + 2) != 0x7373657270707573LL )
              goto LABEL_38;
            v24 = 4;
            goto LABEL_19;
        }
        v24 = v16;
LABEL_19:
        sub_14634E0(a2, a4);
        goto LABEL_20;
      }
    }
    if ( v7 != 7 || !(unsigned __int8)sub_1463E50(a2, a4, v29) || (unsigned __int64)(v29[0] - 1) > 3 )
    {
LABEL_38:
      sub_FC70B0((__int64)v29, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1414);
      sub_AEA040((__int64)v29);
      return;
    }
    v24 = LODWORD(v29[0]) + 4;
LABEL_20:
    if ( *(_WORD *)(a4 + 16) != 62 )
    {
      sub_FC70B0((__int64)v29, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1411);
      sub_AE9DF0(v29, (__int64)":", 1u);
      sub_AEA040((__int64)v29);
      return;
    }
    ptr = v28;
    v27 = 0x400000000LL;
    sub_14634E0(a2, a4);
    if ( *(_WORD *)(a4 + 16) == 7 )
      break;
LABEL_28:
    if ( v24 == 1 )
    {
      v20 = (unsigned int *)((char *)ptr + 4 * (unsigned int)v27);
      if ( ptr != v20 )
      {
        v21 = (unsigned int *)ptr;
        do
        {
          while ( 1 )
          {
            v22 = sub_FBF0C0(*v21);
            if ( BYTE4(v22) )
              break;
            if ( v20 == ++v21 )
              goto LABEL_29;
          }
          ++v21;
          sub_FD0B10(*(_QWORD *)(a2 + 48), 0, v22, 1u);
        }
        while ( v20 != v21 );
      }
    }
LABEL_29:
    if ( v5 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, void *, _QWORD))(*(_QWORD *)v5 + 192LL))(
        v5,
        v23,
        v24,
        ptr,
        (unsigned int)v27);
    if ( *(_WORD *)(a4 + 16) != 63 )
    {
      if ( ptr != v28 )
        free(ptr);
      goto LABEL_48;
    }
    sub_14634E0(a2, a4);
    if ( ptr != v28 )
      free(ptr);
    v7 = *(_WORD *)(a4 + 16);
  }
  while ( (unsigned __int8)sub_1463E50(a2, a4, &v25) )
  {
    v17 = v25;
    if ( (unsigned __int64)(v25 - 1) > 0x7FFFFFFE )
      break;
    v18 = (unsigned int)v27 + 1LL;
    if ( v18 <= HIDWORD(v27) )
    {
      *((_DWORD *)ptr + (unsigned int)v27) = v25;
      LODWORD(v27) = v27 + 1;
      if ( *(_WORD *)(a4 + 16) != 7 )
        goto LABEL_28;
    }
    else
    {
      sub_2237220(&ptr, v28, v18, 4);
      *((_DWORD *)ptr + (unsigned int)v27) = v17;
      LODWORD(v27) = v27 + 1;
      if ( *(_WORD *)(a4 + 16) != 7 )
        goto LABEL_28;
    }
  }
  sub_FC70B0((__int64)v29, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1412);
  sub_AEA040((__int64)v29);
  if ( ptr != v28 )
    free(ptr);
}
