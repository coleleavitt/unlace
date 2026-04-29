__int64 __fastcall sub_5ED00(__int64 a1, char *a2, __int64 a3, unsigned __int64 a4)
{
  char tinfo_property; // al
  char v6; // al
  char v7; // al
  unsigned int v8; // r14d
  unsigned __int64 v10; // r15
  int v11; // r9d
  int v12; // eax
  unsigned int v13; // r10d
  unsigned int i; // r8d
  char *v15; // rax
  char v16; // cl
  __int64 v17; // rdx
  int tinfo_size; // eax
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD v24[9]; // [rsp+0h] [rbp-48h] BYREF

  v24[1] = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property();
  if ( !tinfo_property )
  {
    sub_51730((__int64)"Couldn't resolve type; argument allocation couldn't be determined\n", 2);
    return 0;
  }
  if ( (tinfo_property & 0xF) == 9 )
  {
    if ( (~tinfo_property & 0x30) != 0 )
    {
      v7 = 3 * ((tinfo_property & 0x3F) == 41) + 2;
      *a2 = v7;
      if ( a4 > 8 )
        a2[1] = v7 + 1;
    }
    else
    {
      *a2 = 7;
    }
    return 1;
  }
  if ( (tinfo_property & 0xF) != 0xB )
  {
    v6 = get_tinfo_property();
    if ( (v6 & 0xFu) <= 0xA || (v6 & 0x3F) == 0x2D )
    {
      *a2 = 1;
      if ( a4 > 8 )
        a2[1] = 1;
      return 1;
    }
    if ( get_tinfo_property() )
    {
      tinfo_size = get_tinfo_size();
      switch ( tinfo_size )
      {
        case 16:
          *(_WORD *)a2 = 1026;
          return 1;
        case 32:
          *(_DWORD *)a2 = 67372035;
          return 1;
        case 8:
          *a2 = 2;
          return 1;
      }
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    v24[0] = get_tinfo_property();
    v10 = get_tinfo_size();
    ++*(_DWORD *)(a1 + 32);
    *(_DWORD *)a2 = 0;
    if ( v10 - 1 > 0x1F )
    {
      v11 = (v10 + 7) >> 3;
LABEL_18:
      *a2 = 7;
      v12 = *(_DWORD *)(a1 + 32) - 1;
LABEL_19:
      *(_DWORD *)(a1 + 32) = v12;
      v13 = (a4 + 7) >> 3;
      if ( v13 )
      {
        for ( i = 0; i < v13; i += v11 )
        {
          v15 = a2;
          do
          {
            v16 = *v15;
            v17 = i - (unsigned int)a2 + (unsigned int)v15++;
            a2[v17] = v16;
          }
          while ( &a2[v11] != v15 );
        }
      }
      v8 = 1;
      goto LABEL_25;
    }
    v8 = sub_5ED00(a1, a2, v24, v10);
    if ( (_BYTE)v8 )
    {
      v12 = *(_DWORD *)(a1 + 32) - 1;
      v11 = (v10 + 7) >> 3;
      goto LABEL_19;
    }
    v19 = sub_5E9B0(a1);
    if ( v19 == 1 )
    {
      v11 = (v10 + 7) >> 3;
      goto LABEL_18;
    }
    if ( v19 )
    {
      --*(_DWORD *)(a1 + 32);
LABEL_25:
      clear_tinfo_t();
      return v8;
    }
    v20 = 0;
    v21 = (v10 + 7) >> 3;
    v11 = v21;
    do
    {
      if ( a2[v20] == 7 )
        goto LABEL_18;
      ++v20;
    }
    while ( (unsigned int)v20 < (unsigned int)v21 );
    if ( v10 <= 0x10 )
    {
      if ( v21 != 2 )
      {
LABEL_55:
        v12 = *(_DWORD *)(a1 + 32) - 1;
        goto LABEL_19;
      }
    }
    else if ( *a2 != 3 || a2[1] != 4 || a2[2] != 4 || a2[3] != 4 )
    {
      goto LABEL_18;
    }
    v22 = (unsigned int)(v21 - 1);
    v23 = 0;
    do
    {
      if ( a2[v23 + 1] == 4 && (unsigned __int8)(a2[(int)v23] - 2) > 2u )
        a2[v23 + 1] = 2;
      ++v23;
    }
    while ( v23 != v22 );
    goto LABEL_55;
  }
  *a2 = 1;
  return 1;
}
