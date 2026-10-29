unsigned __int64 __fastcall sub_623920(__int64 a1, void *a2, __int64 a3)
{
  int v5; // r9d
  _BYTE *v6; // r13
  const char *v7; // r14
  __int64 v9; // rdi
  __int64 *func; // rdi
  _QWORD v11[5]; // [rsp+0h] [rbp-4D8h] BYREF
  __int16 v12; // [rsp+28h] [rbp-4B0h]
  __int128 v13; // [rsp+30h] [rbp-4A8h]
  __int64 v14; // [rsp+40h] [rbp-498h]
  __int64 v15; // [rsp+48h] [rbp-490h]
  int v16; // [rsp+50h] [rbp-488h]
  __int64 v17; // [rsp+58h] [rbp-480h]
  int v18; // [rsp+60h] [rbp-478h]
  __int64 v19; // [rsp+68h] [rbp-470h]
  int v20; // [rsp+70h] [rbp-468h]
  __int64 v21; // [rsp+78h] [rbp-460h]
  int v22; // [rsp+80h] [rbp-458h]
  __int64 v23; // [rsp+88h] [rbp-450h]
  _BYTE v24[1032]; // [rsp+90h] [rbp-448h] BYREF
  unsigned __int64 v25; // [rsp+498h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  show_auto(a2, 0);
  v6 = *(_BYTE **)(a3 + 8);
  v7 = *(const char **)(a3 + 24);
  if ( (debug & 0x40) != 0 )
    sub_3879F0();
  if ( (*(_BYTE *)(a3 + 40) & 1) != 0 )
  {
    func = (__int64 *)get_func(a2);
    if ( func )
      sub_5C7750(func);
    else
      set_abits(a2, 0x400000);
  }
  if ( v6 && *v6 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1672) + 2824LL) & 4) != 0 )
    {
      set_name((int)a2, v6);
    }
    else
    {
      if ( v7 )
        qsnprintf((unsigned int)v24, 1024, (unsigned int)"%s: %s", (_DWORD)v6, (_DWORD)v7, v5);
      else
        qstrncpy(v24, v6, 1024);
      v7 = v24;
    }
  }
  if ( *(_DWORD *)(a3 + 20) != -1 )
  {
    if ( (~((unsigned __int16)get_flags_ex(a2, 4) >> 8) & 6) != 0 )
    {
      sub_5B7CA0(*(_QWORD **)(a1 + 1672), (unsigned __int64)a2, *(_DWORD *)(a3 + 20), 1);
    }
    else
    {
      v11[0] = a2;
      v12 = 0;
      v13 = 0;
      v11[1] = -1;
      v11[2] = 512;
      v11[3] = -1;
      v11[4] = 0;
      v14 = 0xFFFFFFFFLL;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      add_func_ex((int)v11);
      v9 = get_func(a2);
      if ( !v9 )
        sub_387C60(1241, a2);
      *(_QWORD *)(v9 + 48) = *(int *)(a3 + 20);
      update_func(v9);
    }
  }
  append_cmt(a2, v7, 1u);
  return v25 - __readfsqword(0x28u);
}
