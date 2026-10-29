_BYTE *__fastcall sub_E8A020(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdx
  char v4; // al
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v7; // rax
  _BYTE *result; // rax

  v2 = *a1;
  v3 = *(_QWORD **)(v2 + 32);
  if ( *(_QWORD *)(v2 + 24) - (_QWORD)v3 > 7u )
  {
    *v3 = 0x28746C7561666564LL;
    *(_QWORD *)(v2 + 32) += 8LL;
  }
  else
  {
    v2 = sub_22581D0(v2, "default(", 8);
  }
  v4 = *(_BYTE *)(a2 + 24);
  v5 = *(_QWORD *)(v2 + 32);
  if ( v4 == 1 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(v2 + 24) - v5) > 6 )
    {
      *(_DWORD *)v5 = 1936028272;
      *(_WORD *)(v5 + 4) = 28261;
      *(_BYTE *)(v5 + 6) = 116;
      result = (_BYTE *)(*(_QWORD *)(v2 + 32) + 7LL);
      *(_QWORD *)(v2 + 32) = result;
    }
    else
    {
      v2 = sub_22581D0(v2, "present", 7);
      result = *(_BYTE **)(v2 + 32);
    }
  }
  else
  {
    v6 = v4 == 0;
    v7 = *(_QWORD *)(v2 + 24);
    if ( v6 )
    {
      if ( (unsigned __int64)(v7 - v5) <= 3 )
      {
        v2 = sub_22581D0(v2, "none", 4);
        result = *(_BYTE **)(v2 + 32);
        if ( *(_BYTE **)(v2 + 24) == result )
          return (_BYTE *)sub_22581D0(v2, ")", 1);
        goto LABEL_11;
      }
      *(_DWORD *)v5 = 1701736302;
      result = (_BYTE *)(*(_QWORD *)(v2 + 32) + 4LL);
      *(_QWORD *)(v2 + 32) = result;
    }
    else if ( (unsigned __int64)(v7 - v5) > 8 )
    {
      *(_BYTE *)(v5 + 8) = 62;
      *(_QWORD *)v5 = 0x64696C61766E693CLL;
      result = (_BYTE *)(*(_QWORD *)(v2 + 32) + 9LL);
      *(_QWORD *)(v2 + 32) = result;
    }
    else
    {
      v2 = sub_22581D0(v2, "<invalid>", 9);
      result = *(_BYTE **)(v2 + 32);
    }
  }
  if ( *(_BYTE **)(v2 + 24) == result )
    return (_BYTE *)sub_22581D0(v2, ")", 1);
LABEL_11:
  *result = 41;
  ++*(_QWORD *)(v2 + 32);
  return result;
}

