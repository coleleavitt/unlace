__int64 __fastcall sub_C15DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // eax
  int v8; // eax
  _QWORD *v9; // rbp
  __int64 v10; // rax
  unsigned int v11; // ebp
  bool v12; // dl
  unsigned int v13; // eax
  _BOOL8 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  int v18; // [rsp+8h] [rbp-20h]

  v7 = sub_AAC1F0(a2, a3, a3, a4, a5);
  if ( *(_BYTE *)(a4 + 12) )
  {
    sub_2206D90(&v17, a4, v7);
    v8 = v18;
    *(_BYTE *)(a1 + 12) = 1;
  }
  else
  {
    sub_2206DE0(&v17, a4, v7);
    v8 = v18;
    *(_BYTE *)(a1 + 12) = 0;
  }
  *(_DWORD *)(a1 + 8) = v8;
  *(_QWORD *)a1 = v17;
  v9 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  *(_BYTE *)(a1 + 12) = sub_F65460(*v9);
  v10 = *(_QWORD *)(*(_QWORD *)(*v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) != 13 || ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) != 0x1B4 )
    return a1;
  v11 = *(_DWORD *)(a4 + 8);
  if ( v11 <= 0x40 )
    v12 = *(_QWORD *)a4 == 0;
  else
    v12 = v11 == (unsigned int)sub_2206780(a4);
  v13 = *(_DWORD *)(a1 + 8);
  v14 = !v12;
  if ( v13 <= 0x40 )
  {
    v15 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v13) & v14;
    if ( !v13 )
      v15 = 0;
    *(_QWORD *)a1 = v15;
    return a1;
  }
  **(_QWORD **)a1 = v14;
  memset((void *)(*(_QWORD *)a1 + 8LL), 0, 8 * ((unsigned int)(((unsigned __int64)v13 + 63) >> 6) + 0x1FFFFFFF));
  return a1;
}
