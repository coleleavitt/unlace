__int64 *__fastcall sub_24FAB0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v6; // r12
  __int64 v7; // rbp
  _QWORD *v8; // rax
  __int64 *v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  _QWORD *v12; // rax
  int v13; // edx
  __int64 v14; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  int v19; // esi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v28; // [rsp+18h] [rbp-50h]
  _QWORD v29[9]; // [rsp+20h] [rbp-48h] BYREF

  v29[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_383060(50410);
LABEL_44:
    BUG();
  }
  v6 = nullptr;
  v28 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 16LL);
  v7 = *(_QWORD *)(a2 + 48);
  if ( v7 )
  {
    while ( 1 )
    {
      v29[0] = 0;
      v9 = sub_24EE70(a1, (unsigned int *)v7, v29, 1u);
      clear_tinfo_t();
      v7 = *(_QWORD *)(v7 + 8);
      if ( a4 )
        break;
      if ( v9 )
      {
        v6 = v9;
        v8 = sub_2413C0(a3, *v9);
        if ( *((_DWORD *)v9 + 2) == 66 )
        {
          v16 = v9[3];
          v6 = nullptr;
          v17 = *(_QWORD *)v16;
          *(_QWORD *)v16 = *v8;
          v18 = *((_DWORD *)v8 + 2);
          *v8 = v17;
          LODWORD(v17) = *(_DWORD *)(v16 + 8);
          *(_DWORD *)(v16 + 8) = v18;
          v19 = *((_DWORD *)v8 + 3);
          *((_DWORD *)v8 + 2) = v17;
          LODWORD(v17) = *(_DWORD *)(v16 + 12);
          *(_DWORD *)(v16 + 12) = v19;
          v20 = v8[3];
          *((_DWORD *)v8 + 3) = v17;
          v21 = *(_QWORD *)(v16 + 24);
          *(_QWORD *)(v16 + 24) = v20;
          v8[3] = v21;
          sub_255630(v9);
          clear_tinfo_t();
          j__qfree();
          goto LABEL_8;
        }
LABEL_6:
        *((_DWORD *)v8 + 2) = 72;
        v8[3] = v6;
      }
LABEL_7:
      v6 = v9;
LABEL_8:
      if ( !v7 )
        goto LABEL_13;
    }
    if ( !v6 )
      goto LABEL_7;
    v8 = sub_2413C0(a3, *v6);
    goto LABEL_6;
  }
  v10 = *(_DWORD *)(a2 + 76);
  if ( (v10 & 0xFFFFFFFB) != 2 )
  {
LABEL_13:
    if ( (*(_BYTE *)(a2 + 24) & 4) == 0 )
      goto LABEL_22;
    goto LABEL_14;
  }
  if ( a4 )
  {
    if ( !under_debugger )
      sub_383060(51771);
    goto LABEL_44;
  }
  v23 = *(_QWORD *)(a2 + 32);
  if ( v23 == -1 )
  {
    if ( !under_debugger )
      sub_383060(51772);
    goto LABEL_44;
  }
  if ( v10 == 2 )
    v6 = (__int64 *)sub_23E3A0(*(_QWORD *)(a2 + 32));
  else
    v6 = sub_246080(*(_QWORD *)(a1 + 176), v23);
  v24 = sub_2413C0(a3, *v6);
  *((_DWORD *)v24 + 2) = 72;
  v24[3] = v6;
  if ( (*(_BYTE *)(a2 + 24) & 4) == 0 )
  {
    if ( *(_QWORD *)a3 == -1 )
    {
      v25 = *(_QWORD *)(a2 + 32);
      if ( v25 != -1 )
        *(_QWORD *)a3 = v25;
    }
    return nullptr;
  }
LABEL_14:
  v11 = *(_QWORD *)(a3 + 24);
  if ( (int)v28 == *(_QWORD *)(v11 + 16) )
  {
    sub_2413C0(a3, *(_QWORD *)(a2 + 32));
    v11 = *(_QWORD *)(a3 + 24);
  }
  v12 = *(_QWORD **)v11;
  if ( (int)v28 > 0 )
  {
    v13 = 0;
    if ( (v28 & 1) == 0 || (v12 = (_QWORD *)*v12, v13 = 1, (_DWORD)v28 != 1) )
    {
      do
      {
        v13 += 2;
        v12 = *(_QWORD **)*v12;
      }
      while ( (_DWORD)v28 != v13 );
    }
  }
  *((_DWORD *)v12 + 7) = *(_DWORD *)(a2 + 72);
  v14 = *(_QWORD *)(a2 + 32);
  if ( v14 != -1 )
    v12[2] = v14;
LABEL_22:
  if ( *(_QWORD *)a3 != -1 || (v22 = *(_QWORD *)(a2 + 32), v22 == -1) )
  {
    if ( !a4 )
      return nullptr;
  }
  else
  {
    *(_QWORD *)a3 = v22;
    if ( !a4 )
      return nullptr;
  }
  return v6;
}
