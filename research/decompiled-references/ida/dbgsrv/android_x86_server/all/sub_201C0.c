/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_201C0
// Address: 0x000201C0

//----- (000201C0) --------------------------------------------------------
unsigned int __cdecl sub_201C0(int a1, int (__cdecl **a2)(_DWORD, int), int (__cdecl **a3)(_DWORD, int))
{
  int v3; // ecx
  _DWORD *v4; // eax
  int (__cdecl **v6[9])(_DWORD, int); // [esp+8h] [ebp-24h] BYREF

  v6[4] = (int (__cdecl **)(_DWORD, int))__readgsdword(0x14u);
  v6[0] = &off_134674;
  v6[1] = a2;
  v6[2] = a3;
  if ( !sub_8EB50(v6) )
  {
    if ( ((unsigned __int8)a3 & 0x7F) == 0x7F )
    {
      v3 = *(_DWORD *)(a1 + 596);
      if ( *(_DWORD *)(a1 + 600) >= (unsigned int)(v3 + 1) )
      {
        v4 = *(_DWORD **)(a1 + 592);
      }
      else
      {
        v4 = qvector_reserve(a1 + 592, *(void **)(a1 + 592), v3 + 1, 4u);
        *(_DWORD *)(a1 + 592) = v4;
        v3 = *(_DWORD *)(a1 + 596);
      }
      v4[v3] = a2;
      ++*(_DWORD *)(a1 + 596);
    }
    else if ( (((_BYTE)a3 + 1) & 0x7E) == 0 )
    {
      sub_1C900();
      ptrace(PTRACE_KILL, a2, 0, 0);
    }
  }
  return __readgsdword(0x14u);
}
// 134674: using guessed type int (__cdecl *off_134674)(int, int);
