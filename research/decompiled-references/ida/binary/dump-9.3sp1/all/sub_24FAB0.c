__int64 *__fastcall sub_24FAB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r15
  __int64 *v6; // r12
  __int64 *v7; // rbp
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // edx
  __int64 v17; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // esi
  int v22; // esi
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rax
  char v32; // [rsp+14h] [rbp-54h]
  __int64 v33; // [rsp+18h] [rbp-50h]
  _QWORD v34[9]; // [rsp+20h] [rbp-48h] BYREF

  v32 = a4;
  v34[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_383060(50410);
LABEL_44:
    BUG();
  }
  v5 = a4;
  v6 = nullptr;
  v33 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 16LL);
  v7 = *(__int64 **)(a2 + 48);
  if ( v7 )
  {
    while ( 1 )
    {
      v34[0] = 0;
      v9 = sub_24EE70(a1, v7, (__int64)v34, 1u);
      clear_tinfo_t();
      v7 = (__int64 *)v7[1];
      if ( v5 )
        break;
      if ( v9 )
      {
        v6 = v9;
        v8 = sub_2413C0(a3, *v9, v10, v11);
        if ( *((_DWORD *)v9 + 2) == 66 )
        {
          v19 = v9[3];
          v6 = nullptr;
          v20 = *(_QWORD *)v19;
          *(_QWORD *)v19 = *v8;
          v21 = *((_DWORD *)v8 + 2);
          *v8 = v20;
          LODWORD(v20) = *(_DWORD *)(v19 + 8);
          *(_DWORD *)(v19 + 8) = v21;
          v22 = *((_DWORD *)v8 + 3);
          *((_DWORD *)v8 + 2) = v20;
          LODWORD(v20) = *(_DWORD *)(v19 + 12);
          *(_DWORD *)(v19 + 12) = v22;
          v23 = v8[3];
          *((_DWORD *)v8 + 3) = v20;
          v24 = *(_QWORD *)(v19 + 24);
          *(_QWORD *)(v19 + 24) = v23;
          v8[3] = v24;
          sub_255630(v9);
          clear_tinfo_t();
          j__qfree((__int64)v9);
          goto LABEL_8;
        }
LABEL_6:
        *((_DWORD *)v8 + 2) = 72;
        v8[3] = (__int64)v6;
      }
LABEL_7:
      v6 = v9;
LABEL_8:
      if ( !v7 )
        goto LABEL_13;
    }
    if ( !v6 )
      goto LABEL_7;
    v8 = sub_2413C0(a3, *v6, v10, v11);
    goto LABEL_6;
  }
  v12 = *(_DWORD *)(a2 + 76);
  v13 = v12 & 0xFFFFFFFB;
  if ( (_DWORD)v13 != 2 )
  {
LABEL_13:
    if ( (*(_BYTE *)(a2 + 24) & 4) == 0 )
      goto LABEL_22;
    goto LABEL_14;
  }
  if ( (_BYTE)a4 )
  {
    if ( !under_debugger )
      sub_383060(51771);
    goto LABEL_44;
  }
  v26 = *(_QWORD *)(a2 + 32);
  if ( v26 == -1 )
  {
    if ( !under_debugger )
      sub_383060(51772);
    goto LABEL_44;
  }
  if ( v12 == 2 )
    v6 = (__int64 *)sub_23E3A0(*(_QWORD *)(a2 + 32), v26, v13, a4);
  else
    v6 = sub_246080(*(_QWORD *)(a1 + 176), v26, *(_QWORD *)(a2 + 32), a4);
  v29 = sub_2413C0(a3, *v6, v27, v28);
  *((_DWORD *)v29 + 2) = 72;
  v29[3] = (__int64)v6;
  if ( (*(_BYTE *)(a2 + 24) & 4) == 0 )
  {
    if ( *(_QWORD *)a3 == -1 )
    {
      v30 = *(_QWORD *)(a2 + 32);
      if ( v30 != -1 )
        *(_QWORD *)a3 = v30;
    }
    return nullptr;
  }
LABEL_14:
  v14 = *(_QWORD *)(a3 + 24);
  if ( (int)v33 == *(_QWORD *)(v14 + 16) )
  {
    sub_2413C0(a3, *(_QWORD *)(a2 + 32), (int)v33, v33);
    v14 = *(_QWORD *)(a3 + 24);
  }
  v15 = *(_QWORD **)v14;
  if ( (int)v33 > 0 )
  {
    v16 = 0;
    if ( (v33 & 1) == 0 || (v15 = (_QWORD *)*v15, v16 = 1, (_DWORD)v33 != 1) )
    {
      do
      {
        v16 += 2;
        v15 = *(_QWORD **)*v15;
      }
      while ( (_DWORD)v33 != v16 );
    }
  }
  *((_DWORD *)v15 + 7) = *(_DWORD *)(a2 + 72);
  v17 = *(_QWORD *)(a2 + 32);
  if ( v17 != -1 )
    v15[2] = v17;
LABEL_22:
  if ( *(_QWORD *)a3 != -1 || (v25 = *(_QWORD *)(a2 + 32), v25 == -1) )
  {
    if ( !v32 )
      return nullptr;
  }
  else
  {
    *(_QWORD *)a3 = v25;
    if ( !v32 )
      return nullptr;
  }
  return v6;
}
