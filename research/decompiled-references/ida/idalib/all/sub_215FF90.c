__int64 __fastcall sub_215FF90(__int64 a1, __int64 a2, char *a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  char *v7; // rcx
  char *v8; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // rax
  int v13; // eax
  char v14; // [rsp+Fh] [rbp-29h] BYREF
  char *v15; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v15 = a3;
  v5 = (__int64)&v14;
  v14 = 0;
  v16 = 8;
  v6 = sub_2246AB0(&v15, &v14, 1, 0);
  v8 = v15;
  if ( v6 == -1 )
  {
    v6 = v16;
  }
  else if ( v16 <= v6 )
  {
    v6 = v16;
  }
  if ( !v6 || *v15 != 47 )
  {
    *(_QWORD *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v8;
    return a1;
  }
  if ( v6 > 1 && *(_WORD *)v15 == 12079 )
  {
    v10 = v6 - 2;
    if ( v6 - 2 > 6 )
    {
LABEL_10:
      v11 = sub_2195B10(v8, v5, v10, v7);
      sub_A09EA0((__int64)&v15, 3u, v11, "invalid section name");
      v12 = v15;
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v12;
      return a1;
    }
    v7 = v15 + 2;
    if ( v6 == 2 )
    {
      v10 = 0;
    }
    else
    {
      v10 = 0;
      v8 = &v15[v6];
      do
      {
        v13 = *v7;
        if ( *v7 > 64 )
        {
          if ( (char)v13 > 90 )
          {
            v5 = (unsigned int)(v13 - 97);
            if ( (unsigned __int8)(v13 - 97) > 0x19u )
              goto LABEL_10;
            v5 = v13 - 71;
          }
          else
          {
            v5 = v13 - 65;
          }
        }
        else if ( (char)v13 > 47 )
        {
          if ( (char)v13 > 57 )
            goto LABEL_10;
          v5 = v13 + 4;
        }
        else
        {
          v5 = 62;
          if ( (_BYTE)v13 != 43 )
          {
            if ( (_BYTE)v13 != 47 )
              goto LABEL_10;
            v5 = 63;
          }
        }
        ++v7;
        v10 = v5 + (v10 << 6);
      }
      while ( v7 != v8 );
      if ( v10 > 0xFFFFFFFF )
        goto LABEL_10;
    }
  }
  else
  {
    v8 = v15 + 1;
    v5 = v6 - 1;
    if ( (unsigned __int8)sub_2247970(v15 + 1, v6 - 1, 10, &v15) )
      goto LABEL_10;
    v10 = (unsigned __int64)v15;
    if ( v15 != (char *)(unsigned int)v15 )
      goto LABEL_10;
  }
  sub_215FE70(a1, a2, v10, (__int64)v7);
  return a1;
}
