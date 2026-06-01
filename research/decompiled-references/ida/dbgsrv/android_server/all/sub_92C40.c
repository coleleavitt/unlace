/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92C40
// Address: 0x0000000000092C40

//----- (0000000000092C40) ----------------------------------------------------
void __fastcall sub_92C40(__int64 a1, __int64 a2)
{
  __int64 *v2; // x21
  __int64 v5; // x22
  __int64 v6; // x26
  char *v7; // x25
  pthread_mutex_t *v8; // x0
  size_t v9; // x0
  size_t v10; // x25
  void *v11; // x26
  pthread_mutex_t *v12; // x0
  int v13; // w0
  pthread_mutex_t ptr; // [xsp+10h] [xbp-90h] BYREF
  __int64 v15; // [xsp+38h] [xbp-68h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( 56LL * *(_QWORD *)(a2 + 8) )
  {
    v2 = *(__int64 **)a2;
    v5 = a1 + 192;
    while ( 1 )
    {
      v6 = *v2;
      if ( v2[2] )
        v7 = (char *)v2[1];
      else
        v7 = &byte_F154B;
      sub_A640C(57, &ptr);
      v8 = pack_dq((pthread_mutex_t *)((char *)&ptr.__align + 28), (unsigned __int64)&ptr.__align + 38, v6 + 1);
      sub_545E8(&ptr, (char *)&ptr.__align + 28, (char *)v8 - ((char *)&ptr.__align + 28));
      if ( !v7 )
        v7 = "";
      v9 = strlen(v7);
      sub_545E8(&ptr, v7, v9 + 1);
      v10 = v2[5];
      if ( HIDWORD(v10) )
      {
        if ( !under_debugger )
          interr(5);
        __break(1u);
      }
      v11 = (void *)v2[4];
      v12 = pack_dd(
              (pthread_mutex_t *)((char *)&ptr.__align + 28),
              (unsigned __int64)&ptr.__align + 33,
              (unsigned int)v10);
      sub_545E8(&ptr, (char *)&ptr.__align + 28, (char *)v12 - ((char *)&ptr.__align + 28));
      sub_545E8(&ptr, v11, v10);
      v13 = sub_9EAB8(v5, (__int64)&ptr, 0xFFFFFFFF, 0);
      if ( v13 < 0 )
        break;
      if ( v13 )
        (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 440) + 568LL))(*(_QWORD *)(a1 + 440), v2);
      if ( ptr.__align )
      {
        *(&ptr.__align + 1) = 0;
        qfree((void *)ptr.__align);
        ptr.__align = 0;
        *(&ptr.__align + 2) = 0;
      }
      v2 += 7;
      if ( v2 == (__int64 *)(*(_QWORD *)a2 + 56LL * *(_QWORD *)(a2 + 8)) )
        return;
    }
    if ( ptr.__align )
    {
      *(&ptr.__align + 1) = 0;
      qfree((void *)ptr.__align);
      ptr.__align = 0;
      *(&ptr.__align + 2) = 0;
    }
  }
}
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
