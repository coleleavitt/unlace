__int64 __fastcall sub_856B60(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v6; // r14
  __int64 v7; // rax
  _BOOL8 v8; // rdx
  _DWORD *v9; // rax
  unsigned int v10; // r12d
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // [rsp+Ch] [rbp-2Ch]

  v4 = sub_852C00(a1, a2);
  if ( (unsigned int)sub_FF9FB0(*(_QWORD *)(a1 + 496), v4) != -1 )
    return v4;
  v6 = *(_QWORD *)(a1 + 496);
  v7 = sub_15D1F10(a2);
  v8 = 0;
  v9 = *(_DWORD **)(v7 + 24);
  if ( v9 && *v9 == 5 )
    v8 = v9[1] == 1;
  v10 = sub_1006C00(v6, v4, v8);
  v11 = sub_1016000(*(_QWORD *)(a1 + 496));
  sub_853D30(a1, v11);
  if ( v13 != -1 )
    sub_833030(a1, v10, v13);
  *(_BYTE *)(a1 + 152) = 1;
  v12 = sub_1016000(*(_QWORD *)(a1 + 496));
  sub_853D30(a1, v12);
  if ( v13 != -1 )
    sub_833030(a1, v10, v13);
  *(_BYTE *)(a1 + 152) = 1;
  sub_855AC0(a1, v4, a3);
  return v4;
}

