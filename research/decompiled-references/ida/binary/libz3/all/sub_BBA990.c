__int64 __fastcall sub_BBA990(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  _QWORD *v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rax
  _DWORD *v8; // rdx
  __int64 v10; // rsi
  unsigned int *v11; // r14
  __int64 v12; // r12
  __int64 v13; // r13
  int v14; // eax
  int v15; // eax
  _QWORD *v16; // rax
  int v17; // eax
  _QWORD *v18; // rax
  __int64 v20[2]; // [rsp+8h] [rbp-58h] BYREF
  __int64 v21[9]; // [rsp+18h] [rbp-48h] BYREF

  v4 = *(_QWORD **)(a2 + 8);
  if ( !v4 )
    return 0;
  if ( *((_DWORD *)v4 - 1) != 1 )
    return 0;
  v5 = *(__int64 **)(a3 + 8);
  if ( !v5 || *((_DWORD *)v5 - 1) != 1 )
    return 0;
  v6 = *v5;
  v7 = *v4;
  if ( *(_WORD *)(*v5 + 4) || (v8 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL)) == nullptr || *v8 || v8[1] != 4 )
  {
    if ( *(_WORD *)(v7 + 4) )
      return 0;
    v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
    if ( !v8 || *v8 )
      return 0;
  }
  else
  {
    v10 = v6;
    v6 = v7;
    v7 = v10;
  }
  if ( v8[1] == 4 )
  {
    v11 = *(unsigned int **)(v7 + 32);
    v12 = *(_QWORD *)(v7 + 40);
    v13 = *(_QWORD *)(v7 + 48);
    v14 = sub_8E8110(*(_QWORD **)(a1 + 16), v11);
    if ( v14 == -1 )
    {
      v17 = sub_B645B0(*(_QWORD *)(a1 + 16), v11);
      v18 = sub_BB2220(a1, a4, v17 ^ 1u);
      sub_BD0580(v20, a1, v13, v6, v18);
      sub_BD1D40(a1 + 240, v20);
      goto LABEL_20;
    }
    if ( v14 == 1 )
    {
      v15 = sub_B645B0(*(_QWORD *)(a1 + 16), v11);
      v16 = sub_BB2220(a1, a4, v15);
      sub_BD0580(v20, a1, v12, v6, v16);
      sub_BD1D40(a1 + 240, v20);
LABEL_20:
      sub_2334C0(v21);
      sub_2334C0(v20);
      return 1;
    }
  }
  return 0;
}

