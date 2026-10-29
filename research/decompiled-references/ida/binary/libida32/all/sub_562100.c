__int64 __fastcall sub_562100(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  const char *v4; // r15
  const char *v5; // r14
  __int64 result; // rax
  __int64 v7; // rax

  if ( !a2 )
    return 0;
  sub_656C10(*(_QWORD *)(qword_2CA1698 + 1480), a2);
  v2 = *(_QWORD *)(a2 + 64);
  if ( *(int *)(a2 + 56) <= 0 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    if ( *(_DWORD *)v2 == *(_DWORD *)(a1 + 16) && sub_375980(0x17u, a1, v2) <= 0 )
    {
      v4 = *(const char **)(v2 + 8);
      v5 = *(const char **)(v2 + 16);
      if ( !strcasecmp(v5, v4) )
      {
        v7 = closing_comment(v5, v4);
        result = sub_359BD0(
                   a1,
                   0,
                   (__int64)&unk_231CD98,
                   *(_QWORD *)(*(_QWORD *)(a1 + 480) + 48LL),
                   *(_QWORD *)(v2 + 8),
                   *(_QWORD *)(v2 + 24),
                   v7);
      }
      else
      {
        sub_359A50(a1, (__int64)&unk_22B2BE6, v5, v4);
        result = sub_561EC0((_QWORD *)a1, *(_QWORD *)(a1 + 480), *(const char **)(v2 + 24));
      }
      if ( (_BYTE)result )
        break;
    }
    ++v3;
    v2 += 32;
    if ( *(_DWORD *)(a2 + 56) <= v3 )
      return 0;
  }
  return result;
}

