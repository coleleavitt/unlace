__int64 __fastcall sub_37220(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // rbx

  while ( 1 )
  {
    result = sub_36BD0(a1, (int *)a2);
    if ( *(_BYTE *)(a2 + 32) == 4 )
    {
      v4 = *(_QWORD *)(a2 + 40);
      result = sub_36BD0(a1, (int *)v4);
      if ( *(_BYTE *)(v4 + 32) == 4 )
        result = sub_37220(a1, *(_QWORD *)(v4 + 40));
      if ( *(_BYTE *)(v4 + 48) == 4 )
        result = sub_37220(a1, *(_QWORD *)(v4 + 56));
    }
    if ( *(_BYTE *)(a2 + 48) != 4 )
      break;
    v5 = *(_QWORD *)(a2 + 56);
    result = sub_36BD0(a1, (int *)v5);
    if ( *(_BYTE *)(v5 + 32) == 4 )
      result = sub_37220(a1, *(_QWORD *)(v5 + 40));
    if ( *(_BYTE *)(v5 + 48) != 4 )
      break;
    a2 = *(_QWORD *)(v5 + 56);
  }
  return result;
}
