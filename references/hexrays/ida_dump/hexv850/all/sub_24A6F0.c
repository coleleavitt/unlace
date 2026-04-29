__int64 *__fastcall sub_24A6F0(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 *v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 *v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  _QWORD *v13; // rax
  int v14; // edx
  __int64 v15; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  int v20; // esi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v29; // [rsp+18h] [rbp-50h]
  _QWORD v30[9]; // [rsp+20h] [rbp-48h] BYREF

  v30[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_37CFE0(50410);
LABEL_44:
    BUG();
  }
  v7 = nullptr;
  v29 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 16LL);
  v8 = *(_QWORD *)(a2 + 48);
  if ( v8 )
  {
    while ( 1 )
    {
      v30[0] = 0;
      v10 = sub_249AB0(a1, (unsigned int *)v8, v30, 1u, a5);
      clear_tinfo_t(v30);
      v8 = *(_QWORD *)(v8 + 8);
      if ( a4 )
        break;
      if ( v10 )
      {
        v7 = v10;
        v9 = sub_23C000(a3, *v10);
        if ( *((_DWORD *)v10 + 2) == 66 )
        {
          v17 = v10[3];
          v7 = nullptr;
          v18 = *(_QWORD *)v17;
          *(_QWORD *)v17 = *v9;
          v19 = *((_DWORD *)v9 + 2);
          *v9 = v18;
          LODWORD(v18) = *(_DWORD *)(v17 + 8);
          *(_DWORD *)(v17 + 8) = v19;
          v20 = *((_DWORD *)v9 + 3);
          *((_DWORD *)v9 + 2) = v18;
          LODWORD(v18) = *(_DWORD *)(v17 + 12);
          *(_DWORD *)(v17 + 12) = v20;
          v21 = v9[3];
          *((_DWORD *)v9 + 3) = v18;
          v22 = *(_QWORD *)(v17 + 24);
          *(_QWORD *)(v17 + 24) = v21;
          v9[3] = v22;
          sub_250270(v10);
          clear_tinfo_t(v10 + 6);
          j__qfree(v10);
          goto LABEL_8;
        }
LABEL_6:
        *((_DWORD *)v9 + 2) = 72;
        v9[3] = v7;
      }
LABEL_7:
      v7 = v10;
LABEL_8:
      if ( !v8 )
        goto LABEL_13;
    }
    if ( !v7 )
      goto LABEL_7;
    v9 = sub_23C000(a3, *v7);
    goto LABEL_6;
  }
  v11 = *(_DWORD *)(a2 + 76);
  if ( (v11 & 0xFFFFFFFB) != 2 )
  {
LABEL_13:
    if ( (*(_BYTE *)(a2 + 24) & 4) == 0 )
      goto LABEL_22;
    goto LABEL_14;
  }
  if ( a4 )
  {
    if ( !under_debugger )
      sub_37CFE0(51771);
    goto LABEL_44;
  }
  v24 = *(_QWORD *)(a2 + 32);
  if ( v24 == -1 )
  {
    if ( !under_debugger )
      sub_37CFE0(51772);
    goto LABEL_44;
  }
  if ( v11 == 2 )
    v7 = (__int64 *)sub_238FE0(*(_QWORD *)(a2 + 32));
  else
    v7 = sub_240CC0(*(_QWORD *)(a1 + 176), v24, *(_QWORD *)(a2 + 32));
  v25 = sub_23C000(a3, *v7);
  *((_DWORD *)v25 + 2) = 72;
  v25[3] = v7;
  if ( (*(_BYTE *)(a2 + 24) & 4) == 0 )
  {
    if ( *(_QWORD *)a3 == -1 )
    {
      v26 = *(_QWORD *)(a2 + 32);
      if ( v26 != -1 )
        *(_QWORD *)a3 = v26;
    }
    return nullptr;
  }
LABEL_14:
  v12 = *(_QWORD *)(a3 + 24);
  if ( (int)v29 == *(_QWORD *)(v12 + 16) )
  {
    sub_23C000(a3, *(_QWORD *)(a2 + 32));
    v12 = *(_QWORD *)(a3 + 24);
  }
  v13 = *(_QWORD **)v12;
  if ( (int)v29 > 0 )
  {
    v14 = 0;
    if ( (v29 & 1) == 0 || (v13 = (_QWORD *)*v13, v14 = 1, (_DWORD)v29 != 1) )
    {
      do
      {
        v14 += 2;
        v13 = *(_QWORD **)*v13;
      }
      while ( (_DWORD)v29 != v14 );
    }
  }
  *((_DWORD *)v13 + 7) = *(_DWORD *)(a2 + 72);
  v15 = *(_QWORD *)(a2 + 32);
  if ( v15 != -1 )
    v13[2] = v15;
LABEL_22:
  if ( *(_QWORD *)a3 != -1 || (v23 = *(_QWORD *)(a2 + 32), v23 == -1) )
  {
    if ( !a4 )
      return nullptr;
  }
  else
  {
    *(_QWORD *)a3 = v23;
    if ( !a4 )
      return nullptr;
  }
  return v7;
}
