/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439A70
// Address: 0x00439A70

//----- (00439A70) --------------------------------------------------------
char __thiscall sub_439A70(unsigned __int16 *this, int a2)
{
  __int16 *v3; // ebx
  __int16 *v4; // esi
  __int16 v5; // ax
  __int16 v6; // ax
  unsigned __int8 v7; // al
  int v8; // eax
  unsigned __int8 v9; // al
  int v10; // esi
  const char *v11; // eax

  v3 = *(__int16 **)(*((_DWORD *)this + 1) + 4 * a2);
  v4 = v3;
  v5 = *v3;
  while ( v5 != -1 )
  {
    if ( !v5 )
      goto LABEL_10;
    if ( !*((_BYTE *)this + 12) )
    {
      if ( (*(int (__stdcall **)(unsigned __int16 *))this)(this) )
        return 0;
      *((_BYTE *)this + 12) = 1;
    }
    if ( *v4 == *(this + 14) )
    {
      *((_BYTE *)this + 12) = 0;
LABEL_10:
      v6 = v4[1];
      if ( v6 != -1 && !(unsigned __int8)sub_439A70(v6) )
        return 0;
      v7 = *((_BYTE *)v4 + 5);
      if ( v7 == 0xFF )
      {
LABEL_16:
        v9 = *((_BYTE *)v4 + 4);
        if ( v9 == 0xFF )
          return 1;
        v4 = &v3[3 * v9];
        v5 = *v4;
      }
      else
      {
        v8 = (*(int (__stdcall **)(unsigned __int16 *))(*((_DWORD *)this + 2) + 4 * v7))(this);
        if ( v8 != 1507 )
        {
          if ( v8 )
            return 0;
          goto LABEL_16;
        }
        v4 += 3;
        *((_BYTE *)this + 12) = 1;
        v5 = *v4;
      }
    }
    else
    {
      v5 = v4[3];
      v4 += 3;
    }
  }
  v10 = v4[1];
  if ( v10 )
  {
    if ( v10 == 67 )
    {
      v11 = MultiByteStr;
      if ( *((_DWORD *)this + 5) )
        v11 = *((const char **)this + 4);
      sub_45CB10(0, v11);
    }
    sub_45CC20(v10);
    return 0;
  }
  return 1;
}
