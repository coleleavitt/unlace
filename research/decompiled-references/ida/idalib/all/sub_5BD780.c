__int64 __fastcall sub_5BD780(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  int v17; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]

  v5 = a1[2];
  v18 = __readfsqword(0x28u);
  v6 = a3;
  if ( *(char *)(v5 + 9) >= 0 )
  {
    if ( a3 >= 0 )
      return v6;
    v10 = *(_QWORD *)(a2 + 32) - a3;
    if ( *(_DWORD *)(a1[3] + 24) == 8 )
    {
      v6 = 0;
      if ( (v10 & 1) != 0 )
      {
        ++v10;
        v6 = 1;
      }
    }
    else if ( (v10 & 1) != 0 )
    {
      v6 = 1;
      v10 = (int)v10 + 1;
    }
    else
    {
      v10 = (int)v10;
      v6 = 0;
    }
    LOWORD(v9) = *(_WORD *)(a2 + 40);
    goto LABEL_15;
  }
  v7 = *(_QWORD *)(a2 + 48);
  if ( a3 < 0 )
  {
    v8 = v7 - a3;
    if ( *(_DWORD *)(a1[3] + 24) == 8 )
    {
      v6 = 0;
      if ( (v8 & 1) != 0 )
      {
        ++v8;
        v6 = 1;
      }
    }
    else if ( (v8 & 1) != 0 )
    {
      v6 = 1;
      v8 = (int)v8 + 1;
    }
    else
    {
      v8 = (int)v8;
      v6 = 0;
    }
    LOWORD(v9) = *(_WORD *)(a2 + 40);
    v10 = *(_QWORD *)(a2 + 32);
    goto LABEL_7;
  }
  v13 = sub_3792E0(0x3Cu, &v17, a2);
  v14 = v17;
  if ( v13 <= 0 )
    v14 = (1 << (get_func_bitness(a2) + 4)) / 8;
  v9 = *(unsigned __int16 *)(a2 + 40);
  if ( v14 + v9 + *(_QWORD *)(a2 + 32) + v7 < (unsigned __int64)(a4 + v6) )
  {
    v15 = v6 + a4 - (v14 + v9 + v7);
    if ( *(_DWORD *)(a1[3] + 24) == 8 )
    {
      v10 = (v15 + 1) & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v16 = (int)v15;
      if ( (v15 & 1) != 0 )
        v16 = (int)v15 + 1;
      v10 = v16;
    }
LABEL_15:
    v8 = *(_QWORD *)(a2 + 48);
LABEL_7:
    if ( !(unsigned __int8)sub_5BC8C0(a1, a2, v10, v9, v8, 0) )
      return -1;
  }
  return v6;
}
