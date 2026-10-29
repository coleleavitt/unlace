__int64 __fastcall sub_85DCF0(__int64 a1, unsigned int *a2, double a3)
{
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  char *v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // r14
  __int64 v13; // r12
  char *v14; // rax
  _BYTE *v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  char v18; // al

  v4 = sub_7E4F00(a1, a2);
  if ( !v4 )
    v4 = sub_7E67D0(a1, (__int64)a2, 0);
  v7 = *(unsigned int *)(a1 + 12);
  v8 = (char *)(v4 + 88);
  v9 = (unsigned int)(*(int *)(v4 + 88) >> 8);
  if ( (_DWORD)v9 == -1 )
    goto LABEL_24;
  while ( 1 )
  {
    v9 = (unsigned int)*v8;
    if ( (_DWORD)v7 == (_DWORD)v9 )
      break;
    v8 = *((char **)v8 + 1);
    if ( !v8 )
      goto LABEL_24;
  }
  if ( *(int *)v8 >> 8 == -1 )
LABEL_24:
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, v4, v9, v7);
  v10 = (__int64 *)(v4 + 176);
  v11 = 8LL * *(unsigned int *)(v4 + 152);
  v12 = (__int64 *)(v4 + 176 + v11);
  if ( v11 )
  {
    do
    {
      v13 = *v10;
      v7 = *(unsigned int *)(a1 + 12);
      v14 = (char *)(*v10 + 88);
      v9 = (unsigned int)(*(int *)v14 >> 8);
      if ( (_DWORD)v9 == -1 )
        goto LABEL_18;
      while ( 1 )
      {
        v9 = (unsigned int)*v14;
        if ( (_DWORD)v7 == (_DWORD)v9 )
          break;
        v14 = *((char **)v14 + 1);
        if ( !v14 )
          goto LABEL_18;
      }
      if ( *(int *)v14 >> 8 == -1 )
      {
LABEL_18:
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, *v10, v9, v7);
        if ( *(_WORD *)(*(_QWORD *)v13 + 4LL) == 2 && *(_DWORD *)(*(_QWORD *)v13 + 16LL) == 2 )
          sub_85D4B0(a1, v13, v9, v7, v5, v6);
      }
      ++v10;
    }
    while ( v12 != v10 );
  }
  sub_85D760(a1, v4, a3, v9, v7, v5, v6);
  v15 = *(_BYTE **)(a1 + 80);
  v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 488LL);
  if ( v16 == sub_795570 )
  {
    if ( !v15[168] )
    {
LABEL_17:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 440LL))(a1, v4);
      return 1;
    }
    v18 = *(_BYTE *)(v4 + 16);
  }
  else
  {
    v18 = v16((__int64)v15, v4);
  }
  if ( v18 )
    goto LABEL_17;
  return 1;
}

