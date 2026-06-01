__int64 __fastcall sub_EE7680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, int a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v8; // r13
  int v10; // eax
  __int64 v11; // rax
  int v12; // edx
  int v13; // edx
  unsigned __int64 v14; // r13
  unsigned int v15; // r15d
  int v16; // eax
  __int64 v17; // rax
  int v18; // ecx
  int v19; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+0h] [rbp-64h]
  int v24; // [rsp+0h] [rbp-64h]
  _QWORD v27[8]; // [rsp+24h] [rbp-40h] BYREF

  if ( a3 )
  {
    v6 = 0;
    v8 = 0;
    while ( v8 < a5 )
    {
      v10 = sub_EEB7E0(*(_QWORD *)(a4 + 8 * v8));
      v27[0] = a1;
      v23 = v10;
      if ( !(unsigned int)sub_FDE930(v27) )
        goto LABEL_12;
      if ( v23 )
      {
        v11 = sub_FDE960(v27, v6);
        v12 = 1;
        if ( v11 )
          v12 = **(_QWORD **)(v11 + 16) + 1;
        v13 = v23 - v12;
LABEL_8:
        if ( *(_DWORD *)(a2 + 4 * v8) != v13 )
          goto LABEL_14;
        goto LABEL_9;
      }
LABEL_13:
      if ( *(_DWORD *)(a2 + 4 * v8) )
      {
LABEL_14:
        v14 = 0;
        v15 = 0;
        while ( 1 )
        {
          if ( a5 > v14 )
          {
            v16 = sub_EEB7E0(*(_QWORD *)(a4 + 8 * v14));
            v27[0] = a1;
            v24 = v16;
            if ( (unsigned int)sub_FDE930(v27) )
            {
              if ( !v24 )
                goto LABEL_25;
              v17 = sub_FDE960(v27, v15);
              v18 = 1;
              if ( v17 )
                v18 = **(_QWORD **)(v17 + 16) + 1;
              v19 = v24 - 1 - v18;
              goto LABEL_20;
            }
          }
          else
          {
            v27[0] = a1;
            if ( (unsigned int)sub_FDE930(v27) )
              goto LABEL_25;
          }
          if ( !a6 )
          {
LABEL_25:
            if ( *(_DWORD *)(a2 + 4 * v14) )
              return 0;
            goto LABEL_21;
          }
          v22 = sub_FDE960(v27, 0);
          v19 = a6;
          if ( v22 )
            v19 = a6 - **(_DWORD **)(v22 + 16);
LABEL_20:
          if ( v19 != *(_DWORD *)(a2 + 4 * v14) )
            return 0;
LABEL_21:
          v14 = ++v15;
          if ( a3 == v15 )
            return 2;
        }
      }
LABEL_9:
      v8 = ++v6;
      if ( a3 == v6 )
        return 1;
    }
    v27[0] = a1;
    if ( (unsigned int)sub_FDE930(v27) )
      goto LABEL_13;
LABEL_12:
    if ( a6 )
    {
      v21 = sub_FDE960(v27, 0);
      v13 = a6;
      if ( v21 )
        v13 = a6 - **(_DWORD **)(v21 + 16);
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  return 1;
}
