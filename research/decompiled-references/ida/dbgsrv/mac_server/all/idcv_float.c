/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_float
// Address: 0x00000001000388B0

//----- (00000001000388B0) ----------------------------------------------------
__int64 __fastcall idcv_float(unsigned __int8 *a1)
{
  __int64 result; // rax
  char *v3; // rax
  int v4; // eax
  void *v5; // rdi
  char *v6; // [rsp+8h] [rbp-28h] BYREF
  __int128 v7; // [rsp+10h] [rbp-20h] BYREF

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
      eltoe(*((_QWORD *)a1 + 1), (__int64)(a1 + 8));
      goto LABEL_18;
    case 3u:
      goto LABEL_19;
    case 7u:
      if ( *((_QWORD *)a1 + 2) )
        v3 = *((char **)a1 + 1);
      else
        v3 = (char *)_s1;
      v6 = v3;
      asctoreal(&v6, &v7);
      v4 = *a1;
      if ( v4 == 5 )
      {
        sub_1000380B0(*((unsigned __int8 ***)a1 + 1), a1);
      }
      else if ( v4 == 7 )
      {
        v5 = *((void **)a1 + 1);
        if ( v5 )
        {
          *((_QWORD *)a1 + 2) = 0;
          qfree(v5);
          *((_QWORD *)a1 + 3) = 0;
        }
      }
      *(_OWORD *)(a1 + 8) = v7;
      goto LABEL_18;
    case 9u:
      eltoe64(*((_QWORD *)a1 + 1), (__int64)(a1 + 8));
LABEL_18:
      *a1 = 3;
LABEL_19:
      result = 0;
      break;
    default:
      return set_qerrno();
  }
  return result;
}
