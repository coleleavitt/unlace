__int64 __fastcall sub_894B80(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // rbp
  __int64 result; // rax

  if ( dword_1C7EC24 == a2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL);
    if ( !v4 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( dword_1C7EC20 == a2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 864LL);
    if ( !v4 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (a2 >> 1));
  if ( (a2 & 1) != 0 )
  {
    v4 = sub_15E1A70(*(_QWORD *)(a1 + 104));
    if ( !v4 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( v4 )
LABEL_5:
    ++*(_DWORD *)(v4 + 8);
LABEL_6:
  result = sub_892CB0(*a3, a3[1]);
  *a3 = v4;
  return result;
}

