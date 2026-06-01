__int64 __fastcall sub_13FCD90(__int64 a1, _BYTE *a2, size_t a3, __int64 a4, char a5, char a6)
{
  __int64 v9; // rdi
  int v10; // r12d
  unsigned __int64 v11; // rbp
  __int64 v13; // rax
  int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v9 = a1 + 80;
  v10 = *(_DWORD *)(v9 + 256);
  *(_DWORD *)(v9 + 256) = v10 + 1;
  v11 = sub_13FC0F0((__int64 *)v9, 1776, 3u);
  sub_FF1F40(v11, a2, a3, 0, a4, a5, a6, v10);
  v21[0] = v11;
  if ( !a4 )
  {
    v13 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v13 + 496) == a3 && (!a3 || !memcmp(*(const void **)(v13 + 488), a2, a3)) )
      *(_QWORD *)(a1 + 72) = v11;
    *(_QWORD *)sub_13FA3B0(a1 + 256, a2, a3) = v11;
    v14 = *(_DWORD *)(a1 + 464);
    *(_DWORD *)sub_13FCC40(a1 + 472, (__int64 *)v21, v15, v16, v17, v18) = v14;
    return v21[0];
  }
  return v11;
}
