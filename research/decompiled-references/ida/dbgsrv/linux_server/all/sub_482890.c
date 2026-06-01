/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482890
// Address: 0x0000000000482890

//----- (0000000000482890) ----------------------------------------------------
__int64 __fastcall sub_482890(__int64 a1, int a2, int a3)
{
  bool v4; // r12
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  unsigned int v7; // r15d
  bool v8; // dl
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v12; // rdi
  bool v13; // [rsp+Fh] [rbp-39h]

  v4 = 1;
  if ( (a3 & 0x7F) != 0 )
    v4 = (char)((a3 & 0x7F) + 1) > 1;
  v5 = *(__int64 **)(a1 + 24);
  v6 = (__int64 *)(a1 + 24);
  if ( v5 == (__int64 *)(a1 + 24) )
  {
    return 0;
  }
  else
  {
    v7 = 0;
    do
    {
LABEL_5:
      while ( 1 )
      {
        if ( !*((_BYTE *)v5 + 40) )
        {
          if ( !(_BYTE)v7 )
          {
            while ( 1 )
            {
              v8 = *((_DWORD *)v5 + 4) == a2 || *((_DWORD *)v5 + 4) == -1;
              if ( v8 )
                break;
              v5 = (__int64 *)*v5;
              if ( v5 == v6 )
                return 0;
              if ( *((_BYTE *)v5 + 40) )
              {
                v5 = (__int64 *)*v5;
                v7 = 0;
                if ( v5 != v6 )
                  goto LABEL_5;
                return v7;
              }
            }
            if ( a3 != 0xFFFF || (*((_BYTE *)v5 + 28) & 8) != 0 )
            {
              *((_DWORD *)v5 + 4) = a2;
              v9 = v5[4];
              *((_DWORD *)v5 + 5) = a3;
              *((_BYTE *)v5 + 40) = 1;
              v13 = v8;
              sub_482760(v9);
              v5 = (__int64 *)*v5;
              if ( v5 == v6 )
                return v13;
              v10 = *((unsigned __int8 *)v5 + 40);
              if ( !(_BYTE)v10 )
              {
                v7 = v13;
                goto LABEL_14;
              }
              v5 = (__int64 *)*v5;
              if ( v6 == v5 )
                return v10;
              v7 = *((unsigned __int8 *)v5 + 40);
              if ( (_BYTE)v7 )
                goto LABEL_16;
              v7 = v10;
            }
          }
LABEL_14:
          if ( v4 && *((_DWORD *)v5 + 4) == a2 )
            break;
        }
LABEL_16:
        v5 = (__int64 *)*v5;
        if ( v5 == v6 )
          return v7;
      }
      *((_BYTE *)v5 + 24) = 1;
      v12 = v5[4];
      *((_BYTE *)v5 + 40) = 1;
      sub_482760(v12);
      v5 = (__int64 *)*v5;
    }
    while ( v5 != v6 );
  }
  return v7;
}
