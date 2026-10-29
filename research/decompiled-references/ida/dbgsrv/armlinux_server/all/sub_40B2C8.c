/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B2C8
// Address: 0x000000000040B2C8

//----- (000000000040B2C8) ----------------------------------------------------
__int64 __fastcall sub_40B2C8(__int64 a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v7; // x0
  __int64 v8; // x3
  __int64 (__fastcall **v9)(); // [xsp+38h] [xbp-18h] BYREF
  unsigned int v10; // [xsp+40h] [xbp-10h]
  unsigned int v11; // [xsp+44h] [xbp-Ch]
  __int64 v12; // [xsp+48h] [xbp-8h]

  v10 = a2;
  v11 = a3;
  v9 = &off_519AC8;
  if ( !(unsigned int)sub_461B90((__int64 (__fastcall ***)(_QWORD, __int64))&v9) )
  {
    if ( (unsigned __int8)a3 == 127 )
    {
      v7 = *(_DWORD **)(a1 + 1984);
      v8 = *(_QWORD *)(a1 + 1992);
      if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(a1 + 2000) )
      {
        v7 = sub_491288(a1 + 1984, *(void **)(a1 + 1984), v8 + 1, 4u);
        *(_QWORD *)(a1 + 1984) = v7;
        v8 = *(_QWORD *)(a1 + 1992);
      }
      v7[v8] = a2;
      ++*(_QWORD *)(a1 + 1992);
    }
    else if ( (int)(((a3 & 0x7F) + 1) << 24) >> 25 <= 0 )
    {
      sub_40A690((int)"  %d: failed to store pending status %x, killing unknown thread\n", a2, a3);
      ptrace(PTRACE_KILL, a2, 0, 0);
    }
  }
  return v12 ^ _stack_chk_guard;
}
// 519AC8: using guessed type __int64 (__fastcall *off_519AC8)();
