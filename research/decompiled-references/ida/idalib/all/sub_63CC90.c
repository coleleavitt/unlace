void *__fastcall sub_63CC90(__int64 a1, unsigned __int64 a2, int a3)
{
  void *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // edx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // edx

  v4 = (void *)a2;
  v5 = switch_dbctx(*(int *)(a1 + 8));
  v6 = *(_QWORD **)(v5 + 1672);
  if ( a3 )
  {
    if ( (unsigned int)(a3 - 1) <= 1 )
      goto LABEL_3;
  }
  else
  {
    if ( (sub_3BE900(*(_QWORD **)(v5 + 1672), a2, 4) & 0x2000) == 0 )
      goto LABEL_3;
    v11 = sub_3BDD60(v6, a2);
    v12 = netnode_supnext(v11, *(_DWORD *)(a1 + 40) - 1, 83);
    v13 = *(_DWORD *)(a1 + 40);
    if ( v13 == 1000 && v12 > 0xBB7 )
      goto LABEL_18;
    if ( v12 >= v13 + 1000 )
    {
LABEL_3:
      if ( a3 != 2 )
      {
LABEL_4:
        v4 = (void *)sub_3C1900(
                       v6,
                       (__int64)v4,
                       0xFFFFFFFFFFFFFFFFLL,
                       (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_3996A0,
                       nullptr);
        goto LABEL_5;
      }
      while ( 1 )
      {
        v4 = (void *)sub_3C19F0(
                       (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))v6,
                       (unsigned __int64)v4,
                       0,
                       (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_3996A0,
                       nullptr);
LABEL_5:
        if ( v4 == (void *)-1LL )
          break;
        if ( (sub_3BE900(v6, (unsigned __int64)v4, 4) & 0x2000) == 0 )
          goto LABEL_3;
        v8 = sub_3BDD60(v6, (__int64)v4);
        v9 = netnode_supnext(v8, *(_DWORD *)(a1 + 40) - 1, 83);
        v10 = *(_DWORD *)(a1 + 40);
        if ( v10 == 1000 && v9 > 0xBB7 )
        {
LABEL_18:
          sub_3D0110(*v6, v4, 0x2000);
          goto LABEL_3;
        }
        if ( v9 < v10 + 1000 )
          return v4;
        if ( a3 != 2 )
          goto LABEL_4;
      }
    }
  }
  return v4;
}
