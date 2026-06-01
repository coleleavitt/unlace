/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008B60
// Address: 0x0000000140008B60

//----- (0000000140008B60) ----------------------------------------------------
__int64 __fastcall sub_140008B60(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  int v8; // ebx
  int v9; // r15d
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h] BYREF
  int v17; // [rsp+80h] [rbp+30h] BYREF

  v13 = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 176LL))(
         *(_QWORD *)(a1 + 48),
         a3,
         &v13);
  if ( v8 >= 0 )
  {
    v16 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 48LL))(v13, &v16);
    if ( v8 >= 0 )
    {
      v17 = 0;
      (*(void (__fastcall **)(__int64, __int64, __int64 *, int *))(*(_QWORD *)v16 + 48LL))(v16, 1, &v15, &v17);
      if ( v17 )
      {
        v9 = a5;
        do
        {
          v14 = nullptr;
          v10 = *(__int64 **)(a1 + 48);
          v11 = *v10;
          if ( a4 )
            (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD, int, _QWORD **))(v11 + 216))(
              v10,
              v15,
              v13,
              a4,
              v9,
              &v14);
          else
            (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD **))(v11 + 184))(v10, v15, v13, &v14);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          if ( !v8 )
            sub_140004340(a1, a2, v14);
          if ( v14 )
            (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
          v17 = 0;
          (*(void (__fastcall **)(__int64, __int64, __int64 *, int *))(*(_QWORD *)v16 + 48LL))(v16, 1, &v15, &v17);
        }
        while ( v17 );
      }
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v8;
}
