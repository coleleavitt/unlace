/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_int64
// Address: 0x00059A80

//----- (00059A80) --------------------------------------------------------
int __cdecl idcv_int64(int a1)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  char *v6; // eax
  int v7[7]; // [esp+10h] [ebp-1Ch] BYREF

  v7[2] = __readgsdword(0x14u);
  if ( !a1 )
    return set_qerrno(1531);
  do
  {
    if ( *(_BYTE *)a1 != 10 )
    {
      switch ( *(_BYTE *)a1 )
      {
        case 2:
          *(_DWORD *)(a1 + 8) = *(int *)(a1 + 4) >> 31;
          *(_BYTE *)a1 = 9;
          return 0;
        case 3:
          v3 = 0;
          v4 = eetol64(v7, (__int64 *)(a1 + 4), 0) - 1;
          v5 = 97;
          switch ( v4 )
          {
            case 0:
              goto LABEL_15;
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
          v7[1] = 0;
          v7[0] = 0;
          qsscanf((int)v6, "%lli", (int)v7);
          free_idcv((char *)a1);
LABEL_15:
          *(_BYTE *)a1 = 9;
          *(_QWORD *)(a1 + 4) = *(_QWORD *)v7;
          return 0;
        case 9:
          return 0;
        default:
          return set_qerrno(1531);
      }
    }
  }
  while ( deref_idcv((char *)a1, 2) );
  return get_qerrno();
}
