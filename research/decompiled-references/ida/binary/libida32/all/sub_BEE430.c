__int64 __fastcall sub_BEE430(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, _QWORD *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r12
  int v10; // eax
  _QWORD *v11; // rax
  unsigned int v12; // ecx
  _QWORD *v14; // rcx
  unsigned __int8 **v15; // rax
  unsigned int v16; // eax
  _QWORD *v17; // [rsp+8h] [rbp-40h]

  v8 = ((unsigned int)sub_BDA860(a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2320LL)) >> 3) & 7;
  if ( (_BYTE)v8 == 7 )
    v8 = 1;
  if ( a4 == 3 )
  {
    v9 = sub_21D5390();
    v11 = a5;
    if ( v9 == *a5 )
      v11 = (_QWORD *)a5[1];
    if ( (*((_BYTE *)v11 + 20) & 7) == 3 )
      sub_E0FF50(a1, a2, 2508, 0);
    v17 = a3;
    if ( v9 == *a3 )
      v10 = sub_21DD7B0(a3, a5, v8);
    else
      v10 = sub_21D9740(a3, a5, v8);
  }
  else if ( a4 <= 3 )
  {
    if ( a4 != 2 )
      goto LABEL_18;
    v17 = a3;
    v9 = sub_21D5390();
    if ( *a3 == v9 )
      v10 = sub_21DDB80(a3, a5, v8);
    else
      v10 = sub_21DAE00(a3, a5, v8);
  }
  else
  {
    if ( a4 != 5 )
    {
      if ( a4 == 6 )
      {
        v17 = a3;
        v9 = sub_21D5390();
        if ( *a3 == v9 )
          v10 = sub_21DCC30(a3, a5, v8);
        else
          v10 = sub_21D9B10(a3, a5, v8);
        goto LABEL_22;
      }
LABEL_18:
      sub_E0FED0(a1, a2, 108, 0);
      return 0;
    }
    v17 = a3;
    v9 = sub_21D5390();
    if ( *a3 == v9 )
      v10 = sub_21DCE30(a3, a5, v8);
    else
      v10 = sub_21D9B20(a3, a5, v8);
  }
LABEL_22:
  v14 = a3;
  if ( *a3 == v9 )
    v14 = (_QWORD *)a3[1];
  if ( (*((_BYTE *)v14 + 20) & 7) == 1 )
  {
    v15 = (unsigned __int8 **)sub_E0FF50(a1, a2, 2411, 0);
    if ( *a3 == v9 )
      v17 = (_QWORD *)a3[1];
    if ( v15 )
      sub_BED5E0(v15, (*((_BYTE *)v17 + 20) & 7) == 1);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
    v16 = *(_DWORD *)(a1 + 916);
    if ( v16 > 1 )
    {
      if ( v16 > 3 )
        BUG();
      return 1;
    }
    else
    {
      return *(unsigned __int8 *)(a1 + 915);
    }
  }
  v12 = *(unsigned __int8 *)(a1 + 8);
  if ( (_BYTE)v12 )
    return v12;
  return sub_BEC780(a1, a2, v10);
}

