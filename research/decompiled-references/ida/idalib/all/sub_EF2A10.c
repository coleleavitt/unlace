void __fastcall sub_EF2A10(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  unsigned __int8 v5; // cl
  __int64 i; // rax
  __int64 v7; // rax
  char v8; // dl
  __int64 *v9; // rcx
  __int64 v10; // rax
  char v11; // cl

  *a1 = a2;
  a1[1] = 2;
  for ( a1[2] = a3; a2 != a3; *a1 = a2 )
  {
    v4 = *(_QWORD **)a2;
    v5 = *(_BYTE *)(*(_QWORD *)a2 + 28LL) & 0x7F;
    if ( (unsigned int)v5 - 40 > 6 )
    {
      if ( (unsigned int)v5 - 64 > 2 )
      {
        if ( v5 == 33 && v4[9] )
          return;
      }
      else
      {
        v9 = (__int64 *)(v4[10] & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v4[10] & 4) != 0 )
          v10 = v9[1];
        else
          v10 = *v9;
        while ( 1 )
        {
          v7 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
          v11 = *(_BYTE *)(v7 + 16);
          if ( (unsigned __int8)(v11 - 2) > 4u )
            break;
          if ( v11 == 6 && *(_QWORD *)(v7 + 40) )
          {
LABEL_19:
            a1[1] = a1[1] & 3 | v7;
            return;
          }
          v10 = *(_QWORD *)(v7 + 32);
        }
      }
    }
    else
    {
      for ( i = v4[6]; ; i = *(_QWORD *)(v7 + 32) )
      {
        v7 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
        v8 = *(_BYTE *)(v7 + 16);
        if ( (unsigned __int8)(v8 - 2) > 4u )
          break;
        if ( v8 == 6 && *(_QWORD *)(v7 + 40) )
          goto LABEL_19;
      }
      if ( sub_B73640((__int64)v4) )
        return;
      a3 = a1[2];
      a2 = *a1;
    }
    a2 += 8;
  }
  a1[1] = 0;
}
