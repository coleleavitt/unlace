__int64 __fastcall sub_8DDA0(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  _DWORD *v5; // rax

  if ( *(_QWORD *)(a1 + 80) )
    goto LABEL_2;
  if ( sub_8D860(a1, 0, 0, 0) && *(_DWORD *)(a1 + 168) == a2 && (*(_DWORD *)(a1 + 172) == a3 || !a3) )
    return 1;
  if ( *(_QWORD *)(a1 + 80) )
  {
LABEL_2:
    v4 = 0;
    while ( 1 )
    {
      v5 = (_DWORD *)(*(_QWORD *)(a1 + 72) + 20 * v4);
      if ( *v5 == a2
        && (v5[1] == a3 || !a3)
        && sub_8D860(a1, v4, 0, 0)
        && *(_DWORD *)(a1 + 168) == a2
        && (*(_DWORD *)(a1 + 172) == a3 || !a3) )
      {
        break;
      }
      if ( (unsigned __int64)++v4 >= *(_QWORD *)(a1 + 80) )
        return 0;
    }
    return 1;
  }
  return 0;
}
