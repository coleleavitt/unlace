/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140024440
// Address: 0x0000000140024440

//----- (0000000140024440) ----------------------------------------------------
void __fastcall __noreturn sub_140024440(__int64 a1, __int64 a2, __int128 *a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v8; // rbx
  __int128 *v9; // rax
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int64 v13[3]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]

  v4 = a4;
  sub_140020430((__int64)v14, 0);
  v15 = (int)v4;
  unknown_libname_41(v13);
  sub_1400286C0(v13, (int)v4);
  if ( (int)v4 > 0 )
  {
    v8 = 0;
    do
    {
      v9 = (__int128 *)sub_140021630(v13, v8);
      sub_140028B50(v9, a3);
      ++v8;
      a3 += 2;
      --v4;
    }
    while ( v4 );
  }
  sub_14000E720(a1 + 48);
  sub_14000E720(a1 + 72);
  sub_1400245D0(a1 + 24);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = (*(_DWORD *)(v10 + 120))-- == 1;
  if ( v11 && off_1400C6078 )
    off_1400C6078();
  *(_DWORD *)a1 = 0;
  v12 = sub_14000E210((__int64)v13);
  (*(void (__fastcall **)(__int64, _BYTE *))(a2 + 8))(v12, v14);
  if ( byte_1400CB61C )
    __debugbreak();
  sub_14005A480(291);
}
// 140001620: using guessed type __int64 __fastcall unknown_libname_41(_QWORD);
// 1400C6078: using guessed type __int64 (*off_1400C6078)();
// 1400CB61C: using guessed type char byte_1400CB61C;
