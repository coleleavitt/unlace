__int64 __fastcall sub_57BA40(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  const char *v4; // r15
  const char *v5; // r14
  __int64 result; // rax
  __int64 v7; // rax

  if ( !a2 )
    return 0;
  sub_674A10(*(_QWORD *)(qword_2CCB598 + 1672), a2);
  v2 = *(_QWORD *)(a2 + 88);
  if ( *(int *)(a2 + 80) <= 0 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)v2 == a1[2] && sub_3792E0(0x17u, a1, v2) <= 0 )
    {
      v4 = *(const char **)(v2 + 16);
      v5 = *(const char **)(v2 + 24);
      if ( !strcasecmp(v5, v4) )
      {
        v7 = closing_comment(v5, v4);
        result = sub_35CEC0(
                   (__int64)a1,
                   0,
                   (__int64)&unk_2340BA8,
                   *(_QWORD *)(a1[79] + 48LL),
                   *(_QWORD *)(v2 + 16),
                   *(_QWORD *)(v2 + 32),
                   v7);
      }
      else
      {
        sub_35CD40((__int64)a1, (__int64)&unk_22D60BA, v5, v4);
        result = sub_57B800(a1, a1[79], *(const char **)(v2 + 32));
      }
      if ( (_BYTE)result )
        break;
    }
    ++v3;
    v2 += 40;
    if ( *(_DWORD *)(a2 + 80) <= v3 )
      return 0;
  }
  return result;
}
