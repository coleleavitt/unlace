void __fastcall sub_19A03C0(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // r15
  unsigned __int8 v5; // r14
  int v6; // r13d
  int v7; // eax
  bool v8; // r12
  unsigned __int8 v9; // si
  int v10; // eax
  __int64 *i; // r15
  __int64 v12; // r12
  int v13; // ecx
  bool v14; // r13
  unsigned __int8 v15; // al
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v2 = a1 + 1;
    if ( a2 != a1 + 1 )
    {
      v16 = (unsigned __int64)&a1[((unsigned __int64)((char *)(a2 - 2) - (char *)a1) >> 3) + 2];
      do
      {
        while ( 1 )
        {
          v3 = *v2;
          v4 = *a1;
          v5 = *(_BYTE *)(*v2 + 28) & 0x7F;
          v6 = v5;
          v7 = v5;
          if ( (unsigned int)v5 - 53 <= 1 || ((v5 + 52) & 0x7Fu) <= 1 )
            v7 = *(_BYTE *)(sub_B72ED0(*v2) + 28) & 0x7F;
          v8 = (unsigned int)(v7 - 58) <= 9;
          v9 = *(_BYTE *)(v4 + 28) & 0x7F;
          v10 = v9;
          if ( (unsigned int)v9 - 53 <= 1 || ((v9 + 52) & 0x7Fu) <= 1 )
            v10 = *(_BYTE *)(sub_B72ED0(v4) + 28) & 0x7F;
          if ( (unsigned __int8)v8 <= (unsigned __int8)((unsigned int)(v10 - 58) <= 9) )
            break;
          if ( a1 != v2 )
            memmove(a1 + 1, a1, (char *)v2 - (char *)a1);
          ++v2;
          *a1 = v3;
          if ( v2 == (__int64 *)v16 )
            return;
        }
        for ( i = v2; ; --i )
        {
          v12 = *(i - 1);
          v13 = v6;
          if ( (unsigned int)(v6 - 53) <= 1 || ((v5 + 52) & 0x7Fu) <= 1 )
            v13 = *(_BYTE *)(sub_B72ED0(v3) + 28) & 0x7F;
          v14 = (unsigned int)(v13 - 58) <= 9;
          v15 = *(_BYTE *)(v12 + 28) & 0x7F;
          if ( ((v15 + 52) & 0x7Fu) > 1 && (unsigned int)v15 - 53 > 1 )
            break;
          if ( (unsigned __int8)v14 <= (unsigned __int8)((*(_BYTE *)(sub_B72ED0(v12) + 28) & 0x7Fu) - 58 <= 9) )
            goto LABEL_23;
LABEL_16:
          *i = v12;
          v5 = *(_BYTE *)(v3 + 28) & 0x7F;
          v6 = v5;
        }
        if ( (unsigned __int8)v14 > (unsigned __int8)((unsigned int)v15 - 58 <= 9) )
          goto LABEL_16;
LABEL_23:
        *i = v3;
        ++v2;
      }
      while ( v2 != (__int64 *)v16 );
    }
  }
}
