__int64 __fastcall sub_3A1520(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, double a6)
{
  _DWORD *v8; // rbp
  __int64 v9; // r13
  char v12; // bp
  __int64 v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // rbp
  __int64 v17; // [rsp+8h] [rbp-80h]
  __int64 v18; // [rsp+18h] [rbp-70h] BYREF
  _DWORD v19[4]; // [rsp+20h] [rbp-68h] BYREF
  int v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v8 = (_DWORD *)a3;
  v9 = **(_QWORD **)(a1 + 24);
  v23 = __readfsqword(0x28u);
  v20 = 0;
  copy_argloc(&v20, a3);
  v22 = v9;
  if ( v20 != 1 )
  {
    v18 = -1;
    goto LABEL_3;
  }
  v18 = v21;
  if ( v21 < 0 )
  {
LABEL_3:
    if ( (unsigned int)(*v8 - 3) > 1 )
    {
      if ( !under_debugger )
        sub_37EEE0(0xC784u, a3, a6);
      BUG();
    }
    sub_1C3D00(v19, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), (__int64)v8, a4);
    copy_argloc(a2, v19);
    cleanup_argloc(v19);
    LOBYTE(v8) = (unsigned int)(*(_DWORD *)a2 - 3) <= 1;
    goto LABEL_5;
  }
  v12 = netnode_charval(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 216LL) + 104LL), *(_QWORD *)(a5 + 8), 256);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  v13 = sub_1CC310((_QWORD *)v17, v18);
  v18 = v13;
  if ( (unsigned __int8)(v12 - 1) <= 1u
    || (*(_DWORD *)(v17 + 112) & 0x810) != 0x10 && *(_QWORD *)(v17 + 104) + *(_QWORD *)(v17 + 88) >= v13
    || (v14 = *(_DWORD *)(v17 + 1184), v14 == -1) )
  {
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 60LL);
    LODWORD(v8) = sub_32E0D0((_QWORD *)v17, &v18, *(_QWORD *)(a5 + 8), 0);
    if ( !(_BYTE)v8 )
      goto LABEL_5;
  }
  else
  {
    v18 = v13 - *(_QWORD *)(v17 + 88) - *(_QWORD *)(v17 + 104);
  }
  v15 = operator new(0x10u);
  *(_DWORD *)(v15 + 8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 176LL))(
                           *(_QWORD *)(a1 + 16),
                           v14,
                           *(unsigned int *)(*(_QWORD *)(a1 + 16) + 84LL));
  *(_QWORD *)v15 = v18;
  cleanup_argloc(a2);
  if ( v15 )
  {
    *(_DWORD *)a2 = 5;
    *(_QWORD *)(a2 + 8) = v15;
  }
  LODWORD(v8) = 1;
LABEL_5:
  cleanup_argloc(&v20);
  return (unsigned int)v8;
}
