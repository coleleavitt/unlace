/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73550
// Address: 0x00073550

//----- (00073550) --------------------------------------------------------
char *__fastcall sub_73550(char *a1, int a2, unsigned __int8 *a3, int a4)
{
  int v7; // r3
  _BOOL4 v10; // r0
  unsigned __int8 *v11; // r0
  char *accept; // [sp+Ch] [bp-1020h]
  char *accepta; // [sp+Ch] [bp-1020h]
  const char *v14; // [sp+14h] [bp-1018h] BYREF
  char *v15; // [sp+18h] [bp-1014h] BYREF
  int v16; // [sp+1Ch] [bp-1010h]
  int v17; // [sp+20h] [bp-100Ch]
  char v18[4]; // [sp+24h] [bp-1008h] BYREF

  if ( !a3 )
    return nullptr;
  v7 = *a3;
  if ( *a3 )
  {
    v10 = sub_76C54(a3);
    if ( v10 )
    {
      accepta = (char *)v10;
      sub_79524(a1, a3, a2);
      return accepta;
    }
    else
    {
      v15 = nullptr;
      v16 = 0;
      v17 = 0;
      if ( sub_7A72C("PATH", (int)&v15) && (v11 = (unsigned __int8 *)sub_793DC(v15, ":", &v14)) != nullptr )
      {
        while ( 1 )
        {
          if ( *v11 )
          {
            sub_76A30(a1, a2, v11, a3, 0);
            v7 = sub_77404((int)a1);
            if ( v7 )
              break;
          }
          v11 = (unsigned __int8 *)sub_793DC(nullptr, ":", &v14);
          if ( !v11 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        v7 = a4;
        if ( a4 )
        {
          sub_76E68(v18, 0x1000u);
          sub_76A30(a1, a2, (unsigned __int8 *)v18, a3, 0);
          v7 = sub_77404((int)a1);
        }
      }
      if ( v15 )
      {
        accept = (char *)v7;
        v16 = 0;
        sub_77E08(v15);
        return accept;
      }
    }
  }
  return (char *)v7;
}
