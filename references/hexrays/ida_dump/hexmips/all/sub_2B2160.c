__int64 __fastcall sub_2B2160(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ebp
  _DWORD *v10; // rdi
  int v11; // eax
  int v13; // ebp
  _DWORD *v14; // rdx
  _DWORD *v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  int v18; // edx
  _DWORD *v19; // rdx
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-88h] BYREF
  _DWORD *v23; // [rsp+8h] [rbp-80h]
  __int128 v24; // [rsp+10h] [rbp-78h]
  _DWORD *v25; // [rsp+20h] [rbp-68h]
  __int128 v26; // [rsp+28h] [rbp-60h]
  int v27[10]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-20h]

  v4 = *(_QWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 1496);
  v28 = __readfsqword(0x28u);
  v7 = sub_2B1930(v5, v4, 0);
  v8 = netnode_supval(v7, a3, v27, 32, 103);
  if ( v8 == -1 )
    return 0;
  if ( v8 != 8 )
  {
    if ( !under_debugger )
      sub_37E160(51164);
LABEL_37:
    BUG();
  }
  v9 = v27[0] - 1;
  if ( !v27[0] )
    return 0;
  if ( (v9 & 0x40000000) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(51004);
    goto LABEL_37;
  }
  v24 = 0;
  v22 = 0;
  v23 = nullptr;
  v25 = nullptr;
  v26 = 0;
  sub_CBD70(0x7D4u, &v22, 64);
  v10 = v25;
  if ( v9 < 0 )
  {
    v13 = v9 & 0x7FFF;
    v14 = &v23[v24];
    if ( v23 == v14 )
      goto LABEL_24;
    v15 = v23;
    while ( v13 != *v15 )
    {
      if ( v14 == ++v15 )
        goto LABEL_24;
    }
    if ( v15 == v14 || (v16 = v15 - v23, v17 = v16, (_DWORD)v16 == -1) )
    {
LABEL_24:
      v19 = &v25[v26];
      if ( v19 == v25 )
        goto LABEL_33;
      v20 = v25;
      while ( v13 != *v20 )
      {
        if ( v19 == ++v20 )
          goto LABEL_33;
      }
      if ( v19 == v20 )
      {
LABEL_33:
        v18 = -1;
        v17 = -1;
      }
      else
      {
        v21 = v20 - v25;
        v18 = v21;
        if ( (_DWORD)v21 == -1 )
        {
          v17 = -1;
        }
        else
        {
          v17 = -1;
          if ( (_DWORD)v22 == 3 )
            v17 = v21;
        }
      }
    }
    else
    {
      v18 = -1;
      if ( (_DWORD)v22 == 3 )
        v18 = v16;
    }
    *(_DWORD *)a1 = v17;
    *(_DWORD *)(a1 + 4) = v18;
    *(_QWORD *)(a1 + 8) = -1;
  }
  else
  {
    v11 = v24;
    *(_DWORD *)(a1 + 4) = -1;
    *(_QWORD *)(a1 + 8) = v9;
    *(_DWORD *)a1 = v11;
  }
  if ( v10 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v10);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  return 1;
}
