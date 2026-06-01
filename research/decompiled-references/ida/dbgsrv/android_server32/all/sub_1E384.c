/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E384
// Address: 0x0001E384

//----- (0001E384) --------------------------------------------------------
unsigned int __fastcall sub_1E384(int a1, int (__fastcall **a2)(_DWORD, int), int (__fastcall **a3)(_DWORD, int))
{
  void **v6; // r5
  int v7; // r1
  void *v8; // r0
  _DWORD *v9; // r2
  int (__fastcall **v11[4])(_DWORD, int); // [sp+8h] [bp-10h] BYREF

  v11[1] = a2;
  v11[0] = (int (__fastcall **)(_DWORD, int))&off_D62DC;
  v11[2] = a3;
  if ( !sub_67644(v11) )
  {
    if ( ((unsigned __int8)a3 & 0x7F) == 0x7F )
    {
      v6 = (void **)(a1 + 936);
      v7 = *(_DWORD *)(a1 + 940);
      if ( *(_DWORD *)(a1 + 944) >= (unsigned int)(v7 + 1) )
      {
        v8 = *v6;
        v9 = (_DWORD *)(a1 + 940);
      }
      else
      {
        v8 = qvector_reserve(a1 + 936, *v6, v7 + 1, 4u);
        *v6 = v8;
        v9 = (_DWORD *)(a1 + 940);
        v7 = *(_DWORD *)(a1 + 940);
      }
      *((_DWORD *)v8 + v7) = a2;
      ++*v9;
    }
    else if ( !((_DWORD)((_DWORD)a3 + 1) << 25 >> 26) )
    {
      sub_1BBA0((int)"  %d: failed to store pending status %x, killing unknown thread\n", a2, a3);
      ptrace(PTRACE_KILL, a2, 0, 0);
    }
  }
  return _stack_chk_guard - (unsigned int)v11[3];
}
// D62DC: using guessed type _UNKNOWN *off_D62DC;
