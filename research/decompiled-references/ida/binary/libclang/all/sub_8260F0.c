__int64 __fastcall sub_8260F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // eax
  int v7; // eax
  _QWORD *v8; // rbp
  __int64 v9; // rax
  unsigned int v11; // ebp
  bool v12; // al
  unsigned int v13; // edx
  _BOOL8 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  int v17; // [rsp+8h] [rbp-20h]

  v6 = sub_70B280(a2, a3);
  if ( *(_BYTE *)(a4 + 12) )
  {
    sub_2587E20(&v16, a4, v6);
    v7 = v17;
    *(_BYTE *)(a1 + 12) = 1;
  }
  else
  {
    sub_2587E80(&v16, a4, v6);
    v7 = v17;
    *(_BYTE *)(a1 + 12) = 0;
  }
  *(_DWORD *)(a1 + 8) = v7;
  *(_QWORD *)a1 = v16;
  v8 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  *(_BYTE *)(a1 + 12) = sub_B101F0(*v8);
  v9 = *(_QWORD *)(*(_QWORD *)(*v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v9 + 16) == 13 && ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v11 = *(_DWORD *)(a4 + 8);
    if ( v11 <= 0x40 )
      v12 = *(_QWORD *)a4 == 0;
    else
      v12 = v11 == (unsigned int)sub_2587400(a4);
    v13 = *(_DWORD *)(a1 + 8);
    v14 = !v12;
    if ( v13 > 0x40 )
    {
      **(_QWORD **)a1 = v14;
      memset(
        (void *)(*(_QWORD *)a1 + 8LL),
        0,
        8 * (unsigned int)(((unsigned __int64)*(unsigned int *)(a1 + 8) + 63) >> 6) - 8);
    }
    else
    {
      v15 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v13) & v14;
      if ( !v13 )
        v15 = 0;
      *(_QWORD *)a1 = v15;
    }
  }
  return a1;
}

