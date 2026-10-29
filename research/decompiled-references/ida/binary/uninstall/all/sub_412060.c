__int64 __fastcall sub_412060(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rbx
  _BYTE *v6; // rax
  unsigned int v7; // ebp
  int v8; // eax
  bool v9; // zf
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ebp
  int v14; // r8d

  if ( a3 > 2 )
  {
    sub_458930(a2, 1, a4, "?dirName?");
    return 1;
  }
  if ( a3 == 2 )
  {
    v5 = *(_QWORD *)(a4 + 8);
    v7 = 1;
    if ( (unsigned int)sub_4806F0(a2, v5) )
      goto LABEL_4;
LABEL_9:
    v7 = sub_46D750(v5);
    if ( v7 )
    {
      v11 = sub_46BB60(a2);
      v12 = *(_QWORD *)(v5 + 8);
      v13 = v11;
      if ( !v12 )
        LODWORD(v12) = sub_47B3B0(v5);
      v14 = v13;
      v7 = 1;
      sub_48B710(a2, (unsigned int)"couldn't change working directory to \"", v12, (unsigned int)"\": ", v14, 0);
    }
    goto LABEL_4;
  }
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v6 = (_BYTE *)sub_40FB00(2);
  *(_QWORD *)(v5 + 8) = v6;
  *v6 = 126;
  v7 = 1;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 1LL) = 0;
  ++*(_DWORD *)v5;
  *(_DWORD *)(v5 + 16) = 1;
  *(_QWORD *)(v5 + 24) = 0;
  if ( !(unsigned int)sub_4806F0(a2, v5) )
    goto LABEL_9;
LABEL_4:
  if ( a3 != 2 )
  {
    v8 = *(_DWORD *)v5 - 1;
    v9 = *(_DWORD *)v5 == 1;
    *(_DWORD *)v5 = v8;
    if ( v8 < 0 || v9 )
      sub_47B120(v5);
  }
  return v7;
}

