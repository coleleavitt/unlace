/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400531D0
// Address: 0x00000001400531D0

//----- (00000001400531D0) ----------------------------------------------------
__int64 __fastcall sub_1400531D0(__int64 a1, char a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  struct _RTL_CRITICAL_SECTION *v6; // rax
  _QWORD *v7; // rax

  *(_QWORD *)a1 = &off_140099278;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = sub_14005A7C0();
  *(_DWORD *)(a1 + 104) = 0x1FFFF;
  if ( a2 )
  {
    v4 = operator new(0x20u);
    if ( v4 )
    {
      *v4 = &off_140099238;
      v4[1] = 0;
      v4[2] = 0;
      v5 = operator new(0x30u);
      *v5 = v5;
      v5[1] = v5;
      v5[2] = v5;
      *((_WORD *)v5 + 12) = 257;
      v4[1] = v5;
      *v4 = &off_140099258;
      v6 = sub_14005D640();
      v4[3] = v6;
      if ( !v6 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(1540);
      }
    }
    else
    {
      v4 = nullptr;
    }
  }
  else
  {
    v7 = operator new(0x18u);
    if ( v7 )
      v4 = sub_1400532F0(v7);
    else
      v4 = nullptr;
  }
  *(_QWORD *)(a1 + 88) = v4;
  return a1;
}
// 140099238: using guessed type __int64 (__fastcall *off_140099238)(void *Block);
// 140099258: using guessed type __int64 (__fastcall *off_140099258)(void *Block);
// 140099278: using guessed type __int64 (__fastcall *off_140099278)(void *Block);
// 1400CB61C: using guessed type char byte_1400CB61C;
