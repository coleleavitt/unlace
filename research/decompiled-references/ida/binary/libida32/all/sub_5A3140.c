__int64 __fastcall sub_5A3140(__int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v6; // r13d
  unsigned int v7; // r8d
  int v8; // ecx
  int v9; // edx
  __int64 v12; // rax
  int v13; // edx
  int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v4 = a1[2];
  v15 = __readfsqword(0x28u);
  v5 = a3;
  if ( *(char *)(v4 + 9) >= 0 )
  {
    if ( a3 >= 0 )
      return v5;
    v9 = *(_DWORD *)(a2 + 20) - a3;
    v5 = 0;
    if ( (v9 & 1) != 0 )
    {
      ++v9;
      v5 = 1;
    }
    LOWORD(v8) = *(_WORD *)(a2 + 24);
    v7 = *(_DWORD *)(a2 + 28);
    goto LABEL_6;
  }
  v6 = *(_DWORD *)(a2 + 28);
  if ( a3 < 0 )
  {
    v7 = v6 - a3;
    v5 = 0;
    if ( (((_BYTE)v6 - (_BYTE)a3) & 1) != 0 )
    {
      ++v7;
      v5 = 1;
    }
    LOWORD(v8) = *(_WORD *)(a2 + 24);
    v9 = *(_DWORD *)(a2 + 20);
    goto LABEL_6;
  }
  v12 = sub_375980(0x3Cu, &v14, a2);
  v13 = v14;
  if ( v12 <= 0 )
    v13 = (1 << (get_func_bitness(a2) + 4)) / 8;
  v8 = *(unsigned __int16 *)(a2 + 24);
  if ( v13 + v8 + *(_DWORD *)(a2 + 20) + v6 < a4 + v5 )
  {
    v7 = *(_DWORD *)(a2 + 28);
    v9 = v5 + a4 - (v13 + v8 + v6) + (((_BYTE)v5 + (_BYTE)a4 - ((_BYTE)v13 + (_BYTE)v8 + (_BYTE)v6)) & 1);
LABEL_6:
    if ( !(unsigned __int8)sub_5A22E0(a1, (int *)a2, v9, v8, v7, 0) )
      return (unsigned int)-1;
  }
  return v5;
}

