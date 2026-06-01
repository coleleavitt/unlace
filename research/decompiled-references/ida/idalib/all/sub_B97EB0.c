__int64 __fastcall sub_B97EB0(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  unsigned int i; // ebp
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // al
  unsigned __int64 v19; // r13
  int v20; // r14d
  unsigned int v21; // r12d
  _QWORD *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r12
  __int64 v39; // rax
  unsigned __int64 v40; // r12
  __int64 v41; // r13
  unsigned __int64 v42; // r14
  __int64 v43; // rax

  if ( (*(_DWORD *)(a1 + 40) & 7) != 6 )
    return 0;
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v2 != 2 && v2 != 4 )
    return 0;
  v6 = a2;
  if ( !sub_B74C70(a1) )
  {
    if ( sub_B77AF0(a1) )
      return 0;
    if ( (unsigned int)sub_B76070(a1, a2, v16, v17) == 1 )
      return 1;
    v18 = sub_B74C20(a1);
    v19 = (-(__int64)!v18 & 0xFFFFFFFFFFFFFFF8LL) + 16;
    v20 = 3 - !v18;
    v21 = 2 - !v18;
    v22 = (_QWORD *)sub_B8C330(a1);
    if ( (unsigned int)sub_B76070(a1, a2, v23, v24) > v21 )
    {
      a2 = sub_A63CE0(v22);
      if ( sub_B95DA0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + v19) + 48LL), a2) )
        v21 = v20;
    }
    if ( (unsigned int)sub_B76070(a1, a2, v25, v26) > v21 )
      v21 -= ((unsigned __int8)sub_F611E0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * v21) + 48LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)) == 0)
           - 1;
    if ( (unsigned int)sub_B76070(a1, a2, v27, v28) != v21 )
      return 0;
    v29 = v22[290];
    if ( (*(_BYTE *)(v29 + 1) & 0x40) != 0 || (*(_BYTE *)(v29 + 97) & 0x20) != 0 || sub_B74C20(a1) )
      return 1;
    v34 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v34 = (_QWORD *)*v34;
    v35 = *(_QWORD *)(a1 + 40);
    v38 = sub_B94670((unsigned __int64)v34, v35, v30, v31, v32, v33);
    if ( !v38 )
      return 1;
    v3 = 1;
    while ( 1 )
    {
      v39 = v38;
      v40 = v38 & 0xFFFFFFFFFFFFFFF8LL;
      LODWORD(v39) = (v39 >> 2) & 1;
      v41 = (unsigned int)v39;
      if ( (_DWORD)v39 )
      {
        if ( !v40 )
          return v3;
        v42 = *(_QWORD *)v40;
        if ( (*(_BYTE *)(*(_QWORD *)v40 + 28LL) & 0x7Fu) - 34 > 5
          || (unsigned int)sub_B76070(*(_QWORD *)v40, v35, v36, v37) != 1 )
        {
          goto LABEL_33;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v40 + 28) & 0x7Fu) - 34 > 5 || (unsigned int)sub_B76070(v40, v35, v36, v37) != 1 )
          return v3;
        v42 = v40;
      }
      v43 = *(unsigned int *)(v6 + 8);
      v37 = *(unsigned int *)(v6 + 12);
      if ( v43 + 1 > v37 )
      {
        v35 = v6 + 16;
        sub_2237220(v6, v6 + 16, v43 + 1, 8);
        v43 = *(unsigned int *)(v6 + 8);
      }
      v36 = *(_QWORD *)v6;
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v43) = v42;
      ++*(_DWORD *)(v6 + 8);
      if ( !v41 )
        return 0;
      v3 = 0;
      if ( !v40 )
        return v3;
LABEL_33:
      v38 = *(_QWORD *)(v40 + 8);
      if ( !v38 )
        return v3;
    }
  }
  if ( sub_B748A0(a1, a2, v7, v8) || (unsigned int)sub_B76070(a1, a2, v9, v10) != 4 )
    return 0;
  v11 = sub_B77AF0(a1);
  if ( !v11 )
    return 1;
  v14 = *(_QWORD *)(v11 + 48);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
  {
    for ( i = 1; (unsigned int)sub_B76070(a1, a2, v12, v13) > i; ++i )
    {
      v12 = *(_QWORD *)(v14 + 120);
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8LL * i) + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
        return 0;
    }
    return 1;
  }
  return 0;
}
