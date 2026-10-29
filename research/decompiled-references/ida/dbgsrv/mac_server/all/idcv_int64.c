/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_int64
// Address: 0x0000000100038480

//----- (0000000100038480) ----------------------------------------------------
__int64 __fastcall idcv_int64(unsigned __int8 *a1)
{
  __int64 result; // rax
  int v3; // ecx
  char *v4; // rdi
  int v5; // eax
  void *v6; // rdi
  __int64 v7; // [rsp+8h] [rbp-18h] BYREF

  if ( !a1 )
    return set_qerrno();
  while ( *a1 == 10 )
  {
    if ( !deref_idcv(a1, 2) )
      return get_qerrno();
  }
  switch ( *a1 )
  {
    case 2u:
      *a1 = 9;
      goto LABEL_18;
    case 3u:
      v3 = eetol64(&v7, (__int128 *)(a1 + 8), 0);
      result = 0;
      switch ( v3 )
      {
        case 1:
          goto LABEL_17;
        case 2:
        case 4:
        case 5:
          result = set_qerrno();
          break;
        default:
          return result;
      }
      return result;
    case 7u:
      if ( *((_QWORD *)a1 + 2) )
        v4 = *((char **)a1 + 1);
      else
        v4 = (char *)_s1;
      v7 = 0;
      qsscanf(v4, "%lli", &v7);
      v5 = *a1;
      if ( v5 == 5 )
      {
        sub_1000380B0(*((unsigned __int8 ***)a1 + 1), a1);
      }
      else if ( v5 == 7 )
      {
        v6 = *((void **)a1 + 1);
        if ( v6 )
        {
          *((_QWORD *)a1 + 2) = 0;
          qfree(v6);
          *((_QWORD *)a1 + 3) = 0;
        }
      }
LABEL_17:
      *a1 = 9;
      *((_QWORD *)a1 + 1) = v7;
      goto LABEL_18;
    case 9u:
LABEL_18:
      result = 0;
      break;
    default:
      return set_qerrno();
  }
  return result;
}
