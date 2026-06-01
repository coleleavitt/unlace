unsigned __int64 __fastcall sub_3C09E0(__int64 a1, unsigned int a2, __int16 a3)
{
  void *v4; // rdi
  void *v6; // rdi
  void *v8; // rdi
  __int64 v9; // rbp
  void *v10; // rdi
  int v11; // eax
  unsigned int v12; // eax
  int v13; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v4 = *(void **)a1;
  v14 = __readfsqword(0x28u);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v4);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v6 = *(void **)(a1 + 24);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  *(_BYTE *)(a1 + 48) = 0;
  if ( (a3 & 0x800) != 0 )
  {
    v8 = *(void **)a1;
    v9 = qword_2CA1698;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v8);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    v10 = *(void **)(a1 + 24);
    if ( v10 )
    {
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v10);
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    v11 = -1;
    if ( a2 != -1 )
      v11 = a2 + sub_614FB0(**(_QWORD **)(v9 + 1480), 29);
    v13 = v11;
    sub_79B6F0(&v13, v9, a1, 0, 83);
    sub_79B6F0(&v13, v9, a1 + 24, 1, 83);
    LOBYTE(v12) = 0;
    if ( *(_QWORD *)(a1 + 8) > 1u )
      v12 = ((unsigned int)get_aflags(a2) >> 15) & 1;
    *(_BYTE *)(a1 + 48) = v12;
  }
  return v14 - __readfsqword(0x28u);
}

