/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4310A0
// Address: 0x004310A0

//----- (004310A0) --------------------------------------------------------
int __userpurge sub_4310A0@<eax>(int a1@<ecx>, int a2@<ebx>, char a3)
{
  void *v4; // ecx
  void *v5; // eax
  void *v6; // eax
  void *v7; // ecx
  void *v8; // eax

  sub_435FE0(a1, a2, a1, 1);
  sub_4383D0(a1);
  v4 = *(void **)(a1 + 300);
  if ( v4 )
  {
    sub_40FB70(a2, a1, v4, (*(_DWORD *)(a1 + 308) - (int)v4) >> 2);
    *(_DWORD *)(a1 + 300) = 0;
    *(_DWORD *)(a1 + 304) = 0;
    *(_DWORD *)(a1 + 308) = 0;
  }
  sub_430300(a1, a1 + 292, *(int **)(a1 + 292));
  sub_4627F2(*(void **)(a1 + 292));
  v5 = *(void **)(a1 + 164);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 168) = 0;
    sub_453A20(v5);
    *(_DWORD *)(a1 + 164) = 0;
    *(_DWORD *)(a1 + 172) = 0;
  }
  v6 = *(void **)(a1 + 140);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 144) = 0;
    sub_453A20(v6);
    *(_DWORD *)(a1 + 140) = 0;
    *(_DWORD *)(a1 + 148) = 0;
  }
  if ( *(_DWORD *)(a1 + 128) )
  {
    sub_415F90((_DWORD *)(a1 + 128), 0);
    sub_453A20(*(void **)(a1 + 128));
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 136) = 0;
  }
  v7 = *(void **)(a1 + 60);
  if ( v7 )
  {
    sub_40FB70(a2, a1, v7, (*(_DWORD *)(a1 + 68) - (int)v7) >> 2);
    *(_DWORD *)(a1 + 60) = 0;
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
  }
  sub_430DF0((void **)(a1 + 52));
  sub_430F10((void **)(a1 + 28));
  v8 = *(void **)(a1 + 16);
  if ( v8 )
  {
    *(_DWORD *)(a1 + 20) = 0;
    sub_453A20(v8);
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( (a3 & 1) != 0 )
    sub_4627F2((void *)a1);
  return a1;
}
