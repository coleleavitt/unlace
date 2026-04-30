_BOOL8 __fastcall sub_2836D0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, int a5)
{
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _BOOL4 v12; // edx
  __int64 v13; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rax
  _QWORD *v20; // r10
  __int64 v21; // rax
  __int64 *v22; // rcx

  v7 = *(_QWORD *)(a1 + 200);
  v8 = *(_QWORD *)(a1 + 232);
  v9 = *(_QWORD *)(a1 + 176);
  v10 = 0xF0F0F0F0F0F0F0F1LL * ((*(_QWORD *)(a1 + 192) - v9) >> 4);
  v11 = (v8 == 0)
      + v10
      + ((v8 - v7) >> 3)
      - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 208) - *(_QWORD *)(a1 + 216)) >> 4)
      - 1;
  if ( (v8 == 0)
     + v10
     + ((v8 - v7) >> 3)
     - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 208) - *(_QWORD *)(a1 + 216)) >> 4) == 1 )
    goto LABEL_2;
  v15 = *(_QWORD *)(a4 + 184);
  v16 = *(int *)(a1 + 240);
  if ( !a5 )
    v15 = *(_QWORD *)(a4 + 176);
  v17 = v16 + v15;
  if ( v11 < v17 )
    v17 = v11;
  if ( (v16 & 0x80000000) != 0LL || (v18 = v17 - 1, v12 = v17 > 0, LOBYTE(v12) = v16 < v11 && v12, !v12) || v18 >= v11 )
  {
LABEL_2:
    *a2 = 0;
    v12 = 0;
    v13 = 0;
  }
  else
  {
    v19 = v16 - 0xF0F0F0F0F0F0F0FLL * ((v9 - *(_QWORD *)(a1 + 184)) >> 4);
    if ( v19 >= 0 && v16 == 0xF0F0F0F0F0F0F0FLL * ((v9 - *(_QWORD *)(a1 + 184)) >> 4) )
      v20 = (_QWORD *)(272 * v16 + v9);
    else
      v20 = *(_QWORD **)(v7 + 8 * v19);
    *a2 = *v20;
    v21 = v18 - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 176) - *(_QWORD *)(a1 + 184)) >> 4);
    if ( v21 >= 0 && v18 == 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 176) - *(_QWORD *)(a1 + 184)) >> 4) )
      v22 = (__int64 *)(272LL * v18 + *(_QWORD *)(a1 + 176));
    else
      v22 = *(__int64 **)(*(_QWORD *)(a1 + 200) + 8 * v21);
    v13 = *v22;
  }
  *a3 = v13;
  return v12;
}
