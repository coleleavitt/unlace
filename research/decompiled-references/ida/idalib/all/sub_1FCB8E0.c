__int64 __fastcall sub_1FCB8E0(__int64 a1, __int64 a2)
{
  int v4; // esi
  int v5; // eax
  __int64 v6; // rbp
  int v7; // eax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_1FC23C0((unsigned int *)(a1 + 232));
  v4 = *(_DWORD *)(a1 + 236);
  v5 = *(_DWORD *)(a1 + 232) | (((*(_WORD *)(a2 + 2) >> 3) & 0x3F) << *(_DWORD *)(a1 + 236));
  *(_DWORD *)(a1 + 232) = v5;
  *(_DWORD *)(a1 + 236) = v4 + 6;
  v6 = (*(_QWORD *)a2 >> 24) & 2LL;
  v7 = ((((*(_QWORD *)a2 >> 24) & 2) != 0) << (v4 + 6)) | v5;
  *(_DWORD *)(a1 + 236) = v4 + 7;
  *(_DWORD *)(a1 + 232) = v7;
  v8 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 236) = v4 + 8;
  *(_DWORD *)(a1 + 232) = v7 | (((v8 >> 26) & 1) << ((unsigned __int8)v4 + 7));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  if ( (_BYTE)v6 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v10 = 48;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x77 )
      v10 = 32;
    result = sub_9B9C90(v9, *(unsigned int *)(v10 + a2 + 4) | ((unsigned __int64)*(unsigned int *)(v10 + a2) << 32));
  }
  else
  {
    result = *(unsigned __int8 *)(a2 + 1);
    if ( (result & 6) == 0 && (result & 0x38) == 0 )
    {
      result = *(unsigned int *)(*(_QWORD *)a1 + 3564LL);
      *(_DWORD *)(a1 + 228) = result;
    }
  }
  *(_DWORD *)(a1 + 224) = 188;
  return result;
}
