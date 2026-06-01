__int64 __fastcall sub_871EB0(_DWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned __int8 (*v4)(void); // rax
  __int64 v5; // rax
  char *v6; // rdx
  __int64 v8; // rdx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  char *v13; // rax
  unsigned int v14; // esi
  __int64 v15; // r13
  unsigned int *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  _DWORD *v19; // rax

  v3 = sub_7E4F00((__int64)a1, (unsigned int *)a2);
  v4 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 544LL);
  if ( (char *)v4 == (char *)sub_86A350 )
  {
    v5 = sub_7E4F00((__int64)a1, (unsigned int *)a2);
    if ( v5 )
    {
      v6 = (char *)(v5 + 88);
      if ( *(int *)(v5 + 88) >> 8 != -1 )
      {
        while ( *v6 != a1[3] )
        {
          v6 = *((char **)v6 + 1);
          if ( !v6 )
            goto LABEL_10;
        }
        if ( *(int *)v6 >> 8 != -1 )
          return 1;
      }
    }
  }
  else if ( v4() )
  {
    return 1;
  }
LABEL_10:
  if ( *(_BYTE *)(sub_7E4EB0((__int64)a1) + 429) )
    goto LABEL_11;
  v15 = *(_QWORD *)(a2 + 16);
  v16 = *(unsigned int **)(v15 + 24);
  if ( !v16 )
    goto LABEL_11;
  v17 = *v16;
  if ( (_DWORD)v17 == -1 )
    goto LABEL_11;
  v18 = sub_15D2690(*((_QWORD *)a1 + 9), v17);
  if ( !v18 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 160LL))(v18, v15) )
    goto LABEL_11;
  v8 = 1;
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_12;
  v19 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v19 || a1[32] != *v19 )
    goto LABEL_12;
  if ( v19[1] == 65 )
LABEL_11:
    v8 = 0;
  else
    LOBYTE(v8) = v19[1] != 66;
LABEL_12:
  if ( !v3 )
    v3 = sub_7E67D0((__int64)a1, a2, v8);
  (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, v3, v8);
  if ( (unsigned int)sub_87A620(a1, a2) == 1 )
  {
    sub_870E70((__int64)a1, a2, v9, v10, v11, v12);
    return 1;
  }
  v13 = (char *)(v3 + 88);
  if ( *(int *)(v3 + 88) >> 8 == -1 )
  {
LABEL_30:
    v14 = -1;
  }
  else
  {
    while ( a1[3] != *v13 )
    {
      v13 = *((char **)v13 + 1);
      if ( !v13 )
        goto LABEL_30;
    }
    v14 = *(int *)v13 >> 8;
  }
  sub_86BD80(a1, v14);
  return 1;
}

