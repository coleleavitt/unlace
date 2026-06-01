__int64 __fastcall sub_4BD120(__int64 a1, int a2, const char *a3, char a4)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // eax
  int v11; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !a3 )
    return (unsigned int)-1;
  v6 = sub_4B58F0((unsigned int *)a1, (__int64)a3);
  v7 = v6;
  if ( v6 == -1 )
  {
    if ( a2 != -1 )
      goto LABEL_4;
  }
  else
  {
    if ( (sub_3B9AA0(a1, v6, 4) & 0xC000) == 0x8000 )
      return v7;
    if ( a2 != -1 )
    {
LABEL_4:
      v8 = sub_5AFCE0(a1);
      v7 = sub_6224C0(a1, v8, a3);
      if ( v7 != -1 )
        return v7;
    }
  }
  netnode_check(&v11, a3, 0, 0);
  v9 = sub_3B9110((_QWORD *)a1, v11);
  v7 = v9;
  if ( v9 == -1 || !sub_3B8910(a1, v9) )
  {
    if ( a4 && *(_QWORD *)(a1 + 768) )
      return (unsigned int)sub_4BD020((__int64 *)a1, a3);
    return (unsigned int)-1;
  }
  return v7;
}

