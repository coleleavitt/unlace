unsigned __int64 __fastcall sub_51AD20(__int64 *a1, unsigned __int8 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // edx
  int v6; // r14d
  unsigned int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // r9
  _BYTE v11[1032]; // [rsp+0h] [rbp-448h] BYREF
  unsigned __int64 v12; // [rsp+408h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v3 = a1[6];
  if ( v3 != -1 )
  {
    v4 = a1[1];
    v5 = *(_DWORD *)(v4 + 72);
    v6 = *(_DWORD *)(v4 + 68);
    if ( v5 + 1 - v6 != a1[3] )
    {
      if ( !under_debugger )
        interr(2798);
      goto LABEL_17;
    }
    LOBYTE(v4) = *(_DWORD *)(v4 + 68);
    if ( v5 >= v6 )
    {
      while ( 1 )
      {
        v7 = (unsigned __int8)(v6 - v4 + 97);
        v8 = netnode_supfirst(v3, (unsigned __int8)(v6 - v4 + 97));
        if ( v8 != -1 )
          break;
LABEL_8:
        v4 = a1[1];
        if ( *(_DWORD *)(v4 + 72) < ++v6 )
          return v12 - __readfsqword(0x28u);
        v3 = a1[6];
        LODWORD(v4) = *(_DWORD *)(v4 + 68);
      }
      while ( 1 )
      {
        v9 = netnode_supval(a1[6], v8, v11, 1024, v7);
        if ( v9 <= 0 )
          break;
        if ( !sub_51A9E0(*a1, (_OWORD *)a1[6], v7, v8, v11, v9, a2) )
        {
          if ( !under_debugger )
            interr(2800);
          goto LABEL_17;
        }
        v8 = netnode_supnext(a1[6], v8, v7);
        if ( v8 == -1 )
          goto LABEL_8;
      }
      if ( !under_debugger )
        interr(2799);
LABEL_17:
      BUG();
    }
  }
  return v12 - __readfsqword(0x28u);
}
