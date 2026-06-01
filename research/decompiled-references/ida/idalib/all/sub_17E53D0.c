__int64 __fastcall sub_17E53D0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r13
  void *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9

  sub_17CB060(a1, (char *)a2, a4);
  if ( *(char *)(a2 + 28) < 0 )
    return 0;
  if ( *(_DWORD *)(a3 + 16) )
  {
LABEL_3:
    sub_17E3C00(a1, (_BYTE *)a2, a3);
    return 1;
  }
  v7 = *(_QWORD *)(a1 + 232);
  v8 = *(_QWORD *)(a2 + 16);
  v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  v10 = (v8 >> 2) & 1;
  if ( (*(_BYTE *)(v7 + 1) & 8) != 0 )
  {
    if ( v10 )
      v9 = (_QWORD *)*v9;
    if ( (*(_BYTE *)(sub_B8EAA0((__int64)v9) + 8) & 0x7F) == 0 )
    {
      v13 = sub_17BBCE0(a1, a2, 1, a3, v11, v12);
      goto LABEL_9;
    }
    if ( (unsigned __int8)sub_179DDB0(a1, a2) )
    {
      v13 = sub_17BBCE0(a1, a2, 0, a3, v20, v21);
LABEL_9:
      if ( !v13 )
        goto LABEL_11;
      goto LABEL_10;
    }
  }
  else
  {
    if ( v10 )
      v9 = (_QWORD *)*v9;
    if ( (*(_BYTE *)(sub_B8EAA0((__int64)v9) + 8) & 0x7F) == 0 )
    {
      v18 = sub_17A3FB0(a1, *(_QWORD *)(a2 + 40), v14, v15, v16, v17);
      if ( v18 )
      {
        v19 = *(void **)(a3 + 88);
        *(_DWORD *)a3 = 0;
        *(_DWORD *)(a3 + 16) = 0;
        if ( v19 )
          sub_1A39780(v19);
        *(_BYTE *)(a3 + 166) = 0;
        *(_OWORD *)(a3 + 88) = 0;
        sub_1743080(a3 + 8, v18 | (*(_BYTE *)(v18 + 29) >> 5) & 3);
        *(_DWORD *)a3 = 2;
LABEL_10:
        *(_BYTE *)(a3 + 166) = 1;
      }
    }
  }
LABEL_11:
  if ( *(_DWORD *)(a3 + 16) )
    goto LABEL_3;
  return 0;
}
