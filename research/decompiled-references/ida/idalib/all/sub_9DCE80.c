bool __fastcall sub_9DCE80(char *a1)
{
  char v1; // dl
  __int64 v2; // rax
  char v3; // cl
  bool result; // al

  v1 = *a1;
  if ( *a1 == 5 || v1 == 24 )
  {
    v2 = *((_QWORD *)a1 + 5);
  }
  else if ( v1 == 12 )
  {
    v2 = *((_QWORD *)a1 + 8);
  }
  else
  {
    if ( v1 != 4 )
    {
LABEL_7:
      result = 0;
      if ( v1 == 21 )
        return a1[2] == 5;
      return result;
    }
    v2 = *((_QWORD *)a1 + 2);
  }
  if ( !v2 )
    goto LABEL_7;
  v3 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL);
  result = 1;
  if ( (v3 & 0xF7) != 0x22 )
    goto LABEL_7;
  return result;
}
