/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A5D0
// Address: 0x000000010001A5D0

//----- (000000010001A5D0) ----------------------------------------------------
bool __fastcall sub_10001A5D0(
        __int64 a1,
        int a2,
        __int64 a3,
        void (__fastcall ***a4)(_QWORD, __int64, __int64, _BYTE *, __int128 *))
{
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 *v8; // r13
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // r14
  _QWORD *v12; // rax
  _QWORD *generic_linput; // rax
  void *v14; // r14
  unsigned __int64 v17; // [rsp+8h] [rbp-488h]
  unsigned __int64 v18; // [rsp+10h] [rbp-480h]
  __int64 v19; // [rsp+18h] [rbp-478h]
  __int128 v20; // [rsp+20h] [rbp-470h] BYREF
  __int64 v21; // [rsp+30h] [rbp-460h]
  __int64 v22; // [rsp+38h] [rbp-458h] BYREF
  __int128 v23; // [rsp+40h] [rbp-450h] BYREF
  __int64 v24; // [rsp+50h] [rbp-440h]
  _BYTE v25[1024]; // [rsp+60h] [rbp-430h] BYREF

  v5 = (unsigned int)(3 * *(_DWORD *)(a1 + 20) * a2);
  v23 = 0;
  v24 = 0;
  if ( (_DWORD)v5 )
  {
    *(_QWORD *)&v23 = qvector_reserve((__int64)&v23, nullptr, v5, 1u);
    __bzero(*((_QWORD *)&v23 + 1) + v23, v5 - *((_QWORD *)&v23 + 1));
    *((_QWORD *)&v23 + 1) = v5;
    v6 = v23;
  }
  else
  {
    v6 = 0;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         a3,
         v6,
         v5,
         0);
  v8 = (__int64 *)v23;
  if ( v7 == v5 )
  {
    v17 = v5 + v23;
    if ( (unsigned __int64)v23 < v5 + (unsigned __int64)v23 )
    {
      v19 = v7;
      v18 = v5;
      v9 = *(_DWORD *)(a1 + 20);
      do
      {
        if ( v9 == 8 )
        {
          v10 = *v8;
          v11 = v8[1];
        }
        else
        {
          v10 = *(unsigned int *)v8;
          v11 = *(unsigned int *)((char *)v8 + v9);
        }
        __bzero(v25, 1024);
        (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
          *(_QWORD *)(a1 + 8),
          v11,
          v25,
          1024,
          0);
        v25[1023] = 0;
        v22 = 0;
        v20 = 0;
        v21 = 0;
        v12 = operator new(0x28u);
        *v12 = off_1000A80A8;
        v12[3] = v10;
        v12[4] = a1;
        v12[1] = 0xFFFFFFFFLL;
        *((_DWORD *)v12 + 4) = 0;
        generic_linput = create_generic_linput((__int64)v12);
        v14 = generic_linput;
        if ( generic_linput )
        {
          sub_100019760(a1, nullptr, &v22, (__int64)&v20, (__int64)generic_linput, v10);
          close_linput(v14);
        }
        (**a4)(a4, v10, v22, v25, &v20);
        if ( (_QWORD)v20 )
        {
          *((_QWORD *)&v20 + 1) = 0;
          qfree((void *)v20);
        }
        v9 = *(_DWORD *)(a1 + 20);
        v8 = (__int64 *)((char *)v8 + 3 * v9);
      }
      while ( (unsigned __int64)v8 < v17 );
      v8 = (__int64 *)v23;
      v5 = v18;
      v7 = v19;
    }
  }
  if ( v8 )
  {
    *((_QWORD *)&v23 + 1) = 0;
    qfree(v8);
  }
  return v7 == v5;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000A80A8: using guessed type __int64 (__fastcall *off_1000A80A8[3])();
