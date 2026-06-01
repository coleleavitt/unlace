__int64 __fastcall sub_618C0(_QWORD *a1, __int64 a2)
{
  int DictID_fromDDict; // eax
  __int64 v3; // r15
  int v4; // r12d
  __int64 v5; // rbx
  __int64 result; // rax
  _QWORD *v7; // rax
  int v8; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  DictID_fromDDict = ZSTD_getDictID_fromDDict(a2);
  v3 = a1[1];
  v4 = DictID_fromDDict;
  v8 = DictID_fromDDict;
  v5 = (v3 - 1) & sub_71BC0(&v8, 4, 0);
  result = -1;
  if ( a1[2] != v3 )
  {
    while ( 1 )
    {
      v7 = (_QWORD *)(8 * v5 + *a1);
      if ( !*v7 )
      {
        *v7 = a2;
        ++a1[2];
        return 0;
      }
      if ( (unsigned int)ZSTD_getDictID_fromDDict(*v7) == v4 )
        break;
      v5 = ((v3 - 1) & v5) + 1;
    }
    *(_QWORD *)(*a1 + 8 * v5) = a2;
    return 0;
  }
  return result;
}

