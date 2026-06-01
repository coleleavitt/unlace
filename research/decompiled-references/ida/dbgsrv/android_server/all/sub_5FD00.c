/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FD00
// Address: 0x000000000005FD00

//----- (000000000005FD00) ----------------------------------------------------
__int64 __fastcall sub_5FD00(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x21
  __int64 v5; // [xsp+8h] [xbp-48h] BYREF
  pthread_mutex_t v6; // [xsp+10h] [xbp-40h] BYREF

  v6.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  LOBYTE(v5) = 2;
  memset(&v6, 0, 24);
  switch ( *(_WORD *)(a1 + 64) )
  {
    case 3:
    case 5:
      v2 = *(_QWORD *)(a1 + 72);
      LOBYTE(v5) = 2;
      v6.__align = v2;
      break;
    case 4:
      free_idcv(&v5);
      LOBYTE(v5) = 7;
      memset(&v6, 0, 24);
      sub_5FE3C(&v6, a1 + 40);
      break;
    case 7:
      free_idcv(&v5);
      LOBYTE(v5) = 3;
      *(_OWORD *)&v6.__lock = *(_OWORD *)(a1 + 88);
      break;
    case 8:
      v3 = *(_QWORD *)(a1 + 88);
      free_idcv(&v5);
      LOBYTE(v5) = 9;
      v6.__align = v3;
      break;
    default:
      if ( !under_debugger )
        interr(1438);
      __break(1u);
      sub_39134((void *)a1);
  }
  sub_65CA4((pthread_mutex_t *)(a1 + 424), (unsigned __int8 *)&v5);
  free_idcv(&v5);
  return 0;
}
// 168DF0: using guessed type char under_debugger;
