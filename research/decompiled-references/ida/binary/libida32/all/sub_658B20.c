__int64 __fastcall sub_658B20(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v9; // r14
  char i; // al
  unsigned __int8 v11; // r13
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // al
  unsigned __int8 v16; // [rsp+1Fh] [rbp-69h]
  unsigned __int8 v17; // [rsp+2Fh] [rbp-59h] BYREF
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  int v19; // [rsp+38h] [rbp-50h]
  int v20; // [rsp+3Ch] [rbp-4Ch]
  char v21; // [rsp+40h] [rbp-48h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( !a5 )
    return 1;
  if ( a3 )
  {
    v19 = a2;
    v20 = 0;
    v9 = 0;
    v18 = 0;
    v21 = getinf_flag(3, 64);
    for ( i = sub_3BA550(a1, &v17, (__int64)&v18); ; i = sub_3BA550(a1, &v17, (__int64)&v18) )
    {
      if ( !i )
        return 0;
      v11 = *(_BYTE *)(a3 + v9);
      v12 = v17;
      if ( (a6 & 1) == 0 )
      {
        v16 = toupper(v17);
        v13 = toupper(v11);
        v12 = v16;
        v11 = v13;
      }
      if ( !a4 )
        goto LABEL_6;
      if ( (a6 & 0x20) != 0 )
        break;
      if ( a4 != 255 )
      {
        if ( *(_BYTE *)(a4 + (int)v9) )
        {
LABEL_6:
          if ( v12 != v11 )
            return 0;
        }
LABEL_7:
        if ( a5 == ++v9 )
          return 1;
        continue;
      }
      if ( v11 != 0xFF )
        goto LABEL_6;
      if ( a5 == ++v9 )
        return 1;
    }
    if ( (*(_BYTE *)(a4 + (int)v9) & (unsigned __int8)(v11 ^ v12)) != 0 )
      return 0;
    goto LABEL_7;
  }
  return 0;
}

