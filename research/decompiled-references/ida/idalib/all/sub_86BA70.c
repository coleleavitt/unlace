__int64 __fastcall sub_86BA70(__int64 a1, unsigned int a2, int a3, int a4)
{
  int v5; // r13d
  unsigned int v6; // r12d
  __int64 v8; // r9
  unsigned int *v9; // r14
  int v11; // ebx
  int v12; // r10d
  int v13; // [rsp+Ch] [rbp-3Ch]

  v5 = a3 >> 1;
  v6 = a2;
  v8 = *(int *)(a1 + 116);
  v9 = *(unsigned int **)a1;
  if ( (_DWORD)v8 )
  {
    sub_86B8E0(*(unsigned int **)a1, 32, 1, 0, 142, v8);
    sub_86B8E0(v9, 32, 142, *(int *)(a1 + 116), 127, v5);
    v6 = a2 + 1;
    sub_86B8E0(v9, 32, 140, (int)(8 * a2), 1, 0);
  }
  if ( ((unsigned __int8)(1 << (v5 & 7)) & *(_BYTE *)(*(_QWORD *)(a1 + 40) + (a3 >> 4))) == 0 )
  {
    v11 = 8 * a3;
    sub_86B8E0(v9, 32, 1, 0, 142, v11 + *(_DWORD *)(a1 + 76));
    sub_86B8E0(v9, 32, 4, 0, 142, v11 + 8 + *(_DWORD *)(a1 + 76));
    v12 = 8 * v6;
    v6 += 2;
    v13 = v12;
    sub_86B8E0(v9, 32, 140, v12, 1, 0);
    sub_86B8E0(v9, 32, 1, 0, 142, a4);
    sub_86B8E0(v9, 32, 140, v13 + 8, 4, 0);
    sub_86B8E0(v9, 32, 142, *(_DWORD *)(a1 + 76) + v11 + 8, 2, 0);
    sub_86B8E0(v9, 32, 142, *(_DWORD *)(a1 + 76) + v11, 1, 0);
  }
  return v6;
}
