/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_long
// Address: 0x00059920

//----- (00059920) --------------------------------------------------------
int __cdecl idcv_long(int a1)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  char *v6; // eax
  int v7[6]; // [esp+14h] [ebp-18h] BYREF

  v7[1] = __readgsdword(0x14u);
  if ( !a1 )
    return set_qerrno(1531);
  do
  {
    if ( *(_BYTE *)a1 != 10 )
    {
      switch ( *(_BYTE *)a1 )
      {
        case 2:
          return 0;
        case 3:
          v3 = 0;
          v4 = eetol(v7, (__int64 *)(a1 + 4), 0) - 1;
          v5 = 97;
          switch ( v4 )
          {
            case 0:
              *(_DWORD *)(a1 + 4) = v7[0];
              *(_BYTE *)a1 = 2;
              return v3;
            case 1:
              return set_qerrno(v5);
            case 3:
              v5 = 86;
              return set_qerrno(v5);
            case 4:
              v5 = 98;
              return set_qerrno(v5);
            default:
              return v3;
          }
        case 7:
          if ( *(_DWORD *)(a1 + 8) )
            v6 = *(char **)(a1 + 4);
          else
            v6 = byte_EF875;
          v7[0] = 0;
          qsscanf((int)v6, "%i", (int)v7);
          free_idcv((char *)a1);
          *(_DWORD *)(a1 + 4) = v7[0];
          return 0;
        case 9:
          *(_BYTE *)a1 = 2;
          return 0;
        default:
          return set_qerrno(1531);
      }
    }
  }
  while ( deref_idcv((char *)a1, 2) );
  return get_qerrno();
}
