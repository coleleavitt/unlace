int __fastcall sub_B530(__int64 a1, _QWORD *a2, const char *a3, unsigned __int64 a4)
{
  _QWORD *v6; // rbx
  int result; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // edx
  __int64 v12; // rdi

  v6 = *(_QWORD **)(a1 + 393);
  if ( !v6 )
  {
    v6 = (_QWORD *)operator new(0x58u);
    netnode_check(v6, "$ xcoff", 0, 0);
    v12 = *v6;
    v6[7] = 0;
    *((_WORD *)v6 + 40) = 0;
    *(_OWORD *)(v6 + 1) = 0;
    *(_OWORD *)(v6 + 3) = 0;
    *(_OWORD *)(v6 + 5) = 0;
    *((_OWORD *)v6 + 4) = 0;
    if ( v12 != -1 )
    {
      v6[1] = netnode_altval(v12, 1, 65);
      v6[2] = netnode_altval(*v6, 2, 65);
      v6[3] = netnode_altval(*v6, 3, 65);
      v6[4] = netnode_altval(*v6, 4, 65);
      netnode_qsupstr(*v6, v6 + 7, 5, 83);
      *((_BYTE *)v6 + 80) = 1;
    }
    *(_QWORD *)(a1 + 393) = v6;
  }
  if ( !strcmp(a3, ".text") )
  {
    *a2 = v6[1] + (*a2 & 0xFFFLL);
    return 1;
  }
  result = strcmp(a3, ".data");
  if ( result )
  {
    v10 = strcmp(a3, ".bss");
    result = 0;
    if ( !v10 )
    {
      result = *((unsigned __int8 *)v6 + 81);
      if ( (_BYTE)result )
      {
        *a2 = v6[5];
        return 1;
      }
    }
  }
  else if ( v6[4] >= a4 )
  {
    v8 = v6[3];
    *a2 = v8;
    v6[5] = a4 + v8;
    v9 = v6[4] - a4;
    v6[6] = v9;
    if ( v9 )
      *((_BYTE *)v6 + 81) = 1;
    return 1;
  }
  return result;
}
