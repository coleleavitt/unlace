unsigned __int64 __fastcall sub_3DD870(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 i; // rdx
  __int64 v7; // rdx
  char v8; // al
  _DWORD v9[4]; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned int v10; // [rsp+1Ch] [rbp-3Ch] BYREF
  unsigned int v11; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+24h] [rbp-34h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v9[0] = a2;
  v13 = __readfsqword(0x28u);
  v4 = *(_BYTE *)(a1 + 2233) == 0;
  v11 = -1;
  v12 = 0;
  if ( v4 )
  {
    sub_3FC530(a1, &v11);
    v7 = v11;
    if ( v11 != -1 )
    {
      v8 = v12;
      if ( (unsigned __int8)(v12 - 4) > 1u )
        goto LABEL_12;
      while ( 1 )
      {
        sub_3FD4E0(a1, &v11, v9[0]);
        v7 = v11;
        if ( v11 == -1 )
          break;
        v8 = v12;
        if ( (unsigned __int8)(v12 - 4) > 1u )
        {
LABEL_12:
          if ( (v8 & 0x20) == 0 )
            sub_3FEBE0(a1, v9[0], v7);
        }
      }
    }
  }
  else
  {
    v10 = get_item_end((unsigned int)a2, a2, a3, a4) - a2;
    sub_3FC400(&v11, a1 + 1704, v9[0], v10, v9, &v10);
    for ( i = v11; v11 != -1; i = v11 )
    {
      if ( (v12 & 0x20) == 0 && (unsigned __int8)(v12 - 4) > 1u )
        sub_3FEBE0(a1, v9[0], i);
      sub_3FC4A0(&v11, a1 + 1704, v9[0], v10, v9, &v10);
    }
  }
  return v13 - __readfsqword(0x28u);
}

