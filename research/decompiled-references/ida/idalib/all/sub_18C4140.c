__int64 __fastcall sub_18C4140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // r9
  unsigned int v10; // ebp
  __int64 v11; // r15
  __int64 v13; // rax
  _QWORD v14[11]; // [rsp+0h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) != 13
    || (v7 = *(unsigned __int16 *)(v7 + 18), LOWORD(v7) = ((unsigned __int16)v7 >> 3) & 0x1FF, (_WORD)v7 != 435) )
  {
    v10 = a3;
    if ( sub_F62670(v6, nullptr, a3, a4, a5, v7) )
    {
      v11 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
      if ( *(_DWORD *)(v11 + 592) )
      {
        v14[1] = a5;
        v14[2] = a4;
        v14[0] = off_2BC6F18;
        return sub_1E63C20(a1, v10, a2, 1, v14);
      }
      v13 = *(unsigned int *)(v11 + 136);
      if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 140) )
      {
        sub_2237220(v11 + 128, v11 + 144, v13 + 1, 8);
        v13 = *(unsigned int *)(v11 + 136);
      }
      *(_QWORD *)(*(_QWORD *)(v11 + 128) + 8 * v13) = a4;
      ++*(_DWORD *)(v11 + 136);
    }
  }
  return 0;
}
