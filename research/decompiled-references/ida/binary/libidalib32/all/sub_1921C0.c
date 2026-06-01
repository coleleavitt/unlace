__int64 __fastcall sub_1921C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  void (*v6)(void); // rax
  size_t v7; // r13
  int v8; // edx
  int v9; // eax
  bool v10; // zf
  int v11; // edx
  unsigned __int64 v13; // rax
  _QWORD *v14; // r12
  __int64 v15; // r15
  size_t v16; // r13
  const char *v17; // rdx
  int v18; // [rsp+0h] [rbp-58h]
  unsigned __int8 v19; // [rsp+7h] [rbp-51h]
  void *v20; // [rsp+8h] [rbp-50h]
  int v21; // [rsp+10h] [rbp-48h]
  unsigned int v22; // [rsp+14h] [rbp-44h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v6 = *(void (**)(void))(*(_QWORD *)a1 + 392LL);
  if ( v6 != nullsub_121 )
    v6();
  v20 = nullptr;
  v7 = *(_QWORD *)(a3 + 8);
  if ( v7 )
  {
    v20 = (void *)qalloc_or_throw();
    memcpy(v20, *(const void **)a3, v7);
    if ( v7 != 1 )
      qstrlwr();
  }
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 2600) + 96LL);
  v9 = v8 + (a4 & 1);
  v10 = v8 == -1;
  v11 = 0;
  if ( !v10 )
    v11 = v9;
  v21 = v11;
  v19 = sub_17EFE0(a1 + 160);
  if ( v19 && *((_DWORD *)sub_182CC0((_QWORD *)(a1 + 160), 0xFFFFFFFFFFFFFFFELL) + 4) )
  {
    if ( (unsigned __int8)sub_17EFE0(a1 + 160) )
    {
      if ( v21 >= *((_DWORD *)sub_182CC0((_QWORD *)(a1 + 160), 0xFFFFFFFFFFFFFFFELL) + 4) )
        goto LABEL_16;
      v18 = v21;
      if ( v21 >= 0 )
        goto LABEL_17;
    }
    else if ( v21 >= 0 )
    {
LABEL_16:
      v18 = 0;
LABEL_17:
      v23 = (a4 >> 1) & 1;
      v24 = (a4 & 4) != 0 ? -1 : 1;
      while ( 1 )
      {
        v13 = sub_17A590(*(_QWORD *)(a1 + 2600), v18);
        v14 = (_QWORD *)sub_181B80((__int64 *)(a1 + 160), v13);
        if ( !v14 )
          goto LABEL_7;
        v15 = 0;
        v16 = *(_DWORD *)(a1 + 1224) + v23;
        v22 = *(_DWORD *)(a1 + 1224) + v23;
        if ( *(int *)(*(_QWORD *)(a1 + 2520) + 48LL) > 0 )
        {
          while ( 1 )
          {
            sub_17F7F0(a1 + 160, (unsigned int *)(*v14 + 24 * v15), 1);
            if ( !strncmp(v17, (const char *)(a1 + 200), v16) )
              break;
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 2520) + 48LL) <= (int)++v15 )
              goto LABEL_24;
          }
          sub_17AA40(*(_QWORD *)(a1 + 2600), (unsigned int)v18, (unsigned int)v15, v22);
          goto LABEL_8;
        }
LABEL_24:
        v18 += v24;
        if ( !(unsigned __int8)sub_17EFE0(a1 + 160) )
          break;
        if ( v18 >= *((_DWORD *)sub_182CC0((_QWORD *)(a1 + 160), 0xFFFFFFFFFFFFFFFELL) + 4) )
          goto LABEL_28;
        if ( v18 < 0 )
        {
LABEL_26:
          v18 = -1;
          if ( (unsigned __int8)sub_17EFE0(a1 + 160) )
            v18 = sub_182CC0((_QWORD *)(a1 + 160), 0xFFFFFFFFFFFFFFFELL)[2] - 1;
        }
LABEL_29:
        if ( v21 == v18 )
          goto LABEL_7;
      }
      if ( v18 < 0 )
        goto LABEL_26;
LABEL_28:
      v18 = 0;
      goto LABEL_29;
    }
    v18 = -1;
    if ( (unsigned __int8)sub_17EFE0(a1 + 160) )
      v18 = sub_182CC0((_QWORD *)(a1 + 160), 0xFFFFFFFFFFFFFFFELL)[2] - 1;
    goto LABEL_17;
  }
LABEL_7:
  v19 = 0;
LABEL_8:
  if ( v20 )
    qfree();
  return v19;
}

