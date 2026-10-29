bool __fastcall sub_FB0CB0(unsigned int a1)
{
  unsigned __int16 *v1; // rdx
  bool result; // al
  unsigned __int8 v3; // dl
  char *v4; // rdx
  int v5; // eax

  v1 = sub_FAEEC0(a1);
  result = 0;
  if ( v1 )
  {
    v3 = *((_BYTE *)v1 + 3) & 0x3F;
    if ( v3 <= 0x27u )
    {
      v4 = (char *)&off_2B2A260 + 16 * v3;
      if ( v4[8] == 17 )
      {
        if ( **(_QWORD **)v4 ^ 0x206E656765646F43LL | *(_QWORD *)(*(_QWORD *)v4 + 8LL) ^ 0x6365684320494241LL
          || (v5 = 0, *(_BYTE *)(*(_QWORD *)v4 + 16LL) != 107) )
        {
          v5 = 1;
        }
        return v5 == 0;
      }
    }
  }
  return result;
}

