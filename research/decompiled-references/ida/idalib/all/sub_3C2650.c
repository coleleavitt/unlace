__int64 __fastcall sub_3C2650(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rbp
  __int64 v9; // rdi
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned __int16 v13; // dx

  v2 = -1;
  v4 = a2;
  if ( *(_DWORD *)(a1[3] + 24LL) != 8 )
    v2 = 0x100000000LL;
  if ( a2 == v2 )
    v4 = -1;
  while ( 1 )
  {
    v5 = sub_3BD420((__int64)a1, v4);
    v4 = v5;
    if ( v5 == -1 )
      return -1;
    v6 = sub_3BE900(a1, v5, 4);
    if ( (v6 & 0x600) != 0x200 )
      return v4;
    v7 = a1[129];
    if ( v7 > 0xFFFFFFFFFFFFFFFDLL )
      break;
    if ( (v4 & 1) != 0 )
    {
      v11 = v6;
      v12 = (unsigned int)v6 >> 20;
      v13 = (v11 >> 20) & 0xFFF;
      if ( !v13 || v4 < v13 )
        return v4;
      v4 -= (int)(v12 - 1);
    }
  }
  v8 = a1 + 113;
  v9 = a1[125];
  if ( v7 == -1 )
    v8 = a1 + 119;
  if ( v4 == a1[128] )
    goto LABEL_13;
  while ( 1 )
  {
    if ( v8[3] == v9 )
      goto LABEL_17;
    v9 = std::_Rb_tree_decrement(v9);
LABEL_13:
    if ( *(_QWORD *)(v9 + 40) )
      break;
    if ( (*(_DWORD *)(v9 + 48) & 0x600) != 0x200 )
      goto LABEL_17;
  }
  if ( (_QWORD *)v9 == v8 + 1 )
  {
LABEL_17:
    if ( !under_debugger )
      interr(73);
    BUG();
  }
  return *(_QWORD *)(v9 + 32);
}
