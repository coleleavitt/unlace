/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4351A0
// Address: 0x00000000004351A0

//----- (00000000004351A0) ----------------------------------------------------
__int64 __fastcall sub_4351A0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  const char *v4; // rsi
  const char *v5; // rbp

  if ( *(_DWORD *)(a1 + 216) == 1 )
  {
    v1 = *(int *)(*(_QWORD *)(a1 + 184) + 48LL);
    if ( (_DWORD)v1 )
    {
      v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8 * v1);
      v3 = *(_QWORD *)(v2 + 64);
      if ( *(_QWORD *)(a1 + 48) )
      {
        v4 = *(const char **)(a1 + 40);
        if ( !v3 )
        {
          if ( !*v4 )
            goto LABEL_5;
          return sub_479EB0(0x632u);
        }
      }
      else
      {
        v4 = s1;
        if ( !v3 )
        {
LABEL_5:
          v5 = s1;
          return sub_4350F0((_QWORD *)a1, v5);
        }
      }
      v5 = *(const char **)(v2 + 56);
      if ( !strcmp(v5, v4) )
        return sub_4350F0((_QWORD *)a1, v5);
    }
    return sub_479EB0(0x632u);
  }
  return sub_479EB0(0x2Fu);
}
