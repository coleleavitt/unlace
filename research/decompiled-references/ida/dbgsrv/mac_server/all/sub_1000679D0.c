/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000679D0
// Address: 0x00000001000679D0

//----- (00000001000679D0) ----------------------------------------------------
__int64 __fastcall sub_1000679D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r12
  void *v13; // rdi
  char v15; // [rsp+Fh] [rbp-61h] BYREF
  __int128 v16; // [rsp+10h] [rbp-60h] BYREF
  __int64 v17; // [rsp+20h] [rbp-50h]
  __int64 v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-40h]
  __int128 v20; // [rsp+38h] [rbp-38h]

  LOBYTE(v4) = 1;
  if ( sub_100061B80(a1, a2, a3, a4) )
    return v4;
  v16 = 0;
  v17 = 0;
  v6 = *(_QWORD *)(a1 + 552);
  if ( v6 )
  {
    if ( (_DWORD)v6 )
      goto LABEL_4;
  }
  else
  {
    LODWORD(v6) = *(_DWORD *)(a1 + 648);
    if ( (_DWORD)v6 )
    {
LABEL_4:
      LODWORD(v18) = -2;
      v20 = 0;
      v19 = -1;
      sub_10005F910((__int64)&v16, (int)v6, (unsigned __int64)&v18);
      if ( (int)v18 >= -1 && v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree((void *)v19);
      }
      v7 = v16;
      goto LABEL_10;
    }
  }
  v7 = 0;
LABEL_10:
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 224LL))(
         a1,
         (unsigned int)a2,
         1,
         v7,
         0) != 1
    || (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
         a1,
         *(_QWORD *)(v16 + 32LL * *(int *)(a1 + 656) + 8),
         &v15,
         1,
         0) != 1
    || (unsigned __int8)(v15 + 60) < 0xFEu
    || (v18 = -1,
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
               a1,
               *(_QWORD *)(v16 + 32LL * *(int *)(a1 + 652) + 8),
               &v18,
               8,
               0),
        LOBYTE(v4) = v18 == a4,
        v8 != 8) )
  {
    v4 = 0;
  }
  v9 = (void *)v16;
  if ( (_QWORD)v16 )
  {
    v10 = *((_QWORD *)&v16 + 1);
    if ( *((_QWORD *)&v16 + 1) )
    {
      v11 = 0;
      do
      {
        v12 = v16;
        if ( *(int *)(v16 + v11) >= -1 )
        {
          v13 = *(void **)(v16 + v11 + 8);
          if ( v13 )
          {
            *(_QWORD *)(v16 + v11 + 16) = 0;
            qfree(v13);
            *(_QWORD *)(v12 + v11 + 8) = 0;
            *(_QWORD *)(v12 + v11 + 24) = 0;
          }
          *(_DWORD *)(v12 + v11) = -2;
        }
        v11 += 32;
        --v10;
      }
      while ( v10 );
      v9 = (void *)v16;
    }
    *((_QWORD *)&v16 + 1) = 0;
    qfree(v9);
  }
  return v4;
}
// 100067B99: variable 'v4' is possibly undefined
