/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94460
// Address: 0x0000000000094460

//----- (0000000000094460) ----------------------------------------------------
__int64 __fastcall sub_94460(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rdi
  __int64 *v4; // rbx
  _QWORD *v5; // r15
  __int64 v6; // r12
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rbx
  bool v10; // zf
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 **v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // rdx

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 448)
                                                                                                  + 88LL));
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL);
  v4 = (__int64 *)v3[1];
  if ( v4 == v3 + 2 )
  {
LABEL_13:
    LODWORD(v4) = 0;
  }
  else
  {
    while ( 1 )
    {
      v5 = (_QWORD *)v4[4];
      if ( v5 != (_QWORD *)a1 )
      {
        v6 = v5[55];
        if ( *(_BYTE *)(v6 + 732) )
        {
          if ( *(_DWORD *)(v6 + 528) == a2
            && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v6 + 512LL))(v5[55], a2) )
          {
            break;
          }
        }
      }
      v7 = (__int64 *)v4[1];
      if ( v7 )
      {
        do
        {
          v8 = v7;
          v7 = (__int64 *)*v7;
        }
        while ( v7 );
      }
      else
      {
        v8 = (__int64 *)v4[2];
        if ( (__int64 *)*v8 != v4 )
        {
          v9 = (__int64)(v4 + 2);
          do
          {
            v8 = *(__int64 **)(*(_QWORD *)v9 + 16LL);
            v10 = *v8 == *(_QWORD *)v9;
            v9 = *(_QWORD *)v9 + 16LL;
          }
          while ( !v10 );
        }
      }
      v3 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL);
      v4 = v8;
      if ( v8 == v3 + 2 )
        goto LABEL_13;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 112LL))(*(_QWORD *)(a1 + 440));
    v12 = *(_QWORD *)(a1 + 440);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
    *(_QWORD *)(a1 + 440) = v6;
    if ( *(_BYTE *)(a1 + 184) )
      sub_390A0((int)"reusing previously broken debugging session\n");
    sub_A7D60((__int64)v5);
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 88LL);
    v14 = (__int64 *)v4[1];
    if ( v14 )
    {
      do
      {
        v15 = (__int64 **)v14;
        v14 = (__int64 *)*v14;
      }
      while ( v14 );
    }
    else
    {
      v15 = (__int64 **)v4[2];
      if ( *v15 != v4 )
      {
        v16 = v4 + 2;
        do
        {
          v17 = *v16;
          v15 = *(__int64 ***)(v17 + 16);
          v10 = *v15 == (__int64 *)v17;
          v16 = (__int64 *)(v17 + 16);
        }
        while ( !v10 );
      }
    }
    if ( *(__int64 **)(v13 + 8) == v4 )
      *(_QWORD *)(v13 + 8) = v15;
    --*(_QWORD *)(v13 + 24);
    sub_4C430(*(__int64 **)(v13 + 16), v4);
    operator delete(v4);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
    *(_BYTE *)(v6 + 732) = 0;
    v3 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL);
    LOBYTE(v4) = 1;
  }
  (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
  return (unsigned int)v4;
}
