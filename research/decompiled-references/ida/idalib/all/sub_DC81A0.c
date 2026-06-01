__int64 __fastcall sub_DC81A0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebp
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx

  if ( *(_DWORD *)(a3 + 24) )
    return 1;
  v3 = *(_QWORD *)(a3 + 32);
  if ( !v3 )
    return 1;
  if ( !*(_BYTE *)(v3 + 25) )
    return 1;
  v5 = sub_E23C20(a3);
  if ( (_BYTE)v5 )
    return 1;
  v6 = *(_DWORD *)(a3 + 24);
  if ( v6 == 1 )
  {
    v7 = *(__int64 **)(a3 + 32);
  }
  else
  {
    if ( (unsigned int)(v6 - 2) <= 1 )
      BUG();
    v7 = *(__int64 **)(*(_QWORD *)(a3 + 32) + 32LL);
  }
  v8 = *v7;
  v9 = 0;
  if ( ((v8 >> 1) & 1) == 0 )
  {
    v9 = v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v8 & 0xFFFFFFFFFFFFFFFCLL) != 0 && (*(_BYTE *)(v9 + 28) & 0x7Fu) - 40 >= 7 )
      v9 = (v8 >> 1) & 1;
  }
  if ( *(_QWORD *)(a1 + 416) == v9 )
    return 1;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24))
    || (*(_BYTE *)(sub_E32240(a1) + 1) & 8) == 0 )
  {
    v10 = *(_DWORD *)(a3 + 24);
    if ( v10 == 1 )
    {
      v12 = *(__int64 **)(a3 + 32);
LABEL_18:
      v13 = 0;
      if ( ((*v12 >> 1) & 1) == 0 )
      {
        v14 = *v12 & 0xFFFFFFFFFFFFFFFCLL;
        v13 = v14;
        if ( v14 )
        {
          if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 26 >= 0x1B )
            v13 = 0;
        }
      }
      sub_DC22C0(a1, a2, v13);
      return v5;
    }
    goto LABEL_15;
  }
  v10 = *(_DWORD *)(a3 + 24);
  if ( v10 == 1 )
    return v5;
  if ( !(unsigned __int8)sub_CFE580(a3) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a3 + 32) + *(unsigned int *)(a3 + 40) + 28LL) & 1) != 0 )
      return 0;
LABEL_15:
    if ( (unsigned int)(v10 - 2) <= 1 )
      BUG();
    v11 = *(_QWORD *)(a3 + 32);
    goto LABEL_17;
  }
  if ( (unsigned int)(v10 - 2) <= 1 )
    BUG();
  v11 = *(_QWORD *)(a3 + 32);
  if ( !*(_BYTE *)(*(_QWORD *)(v11 + 32) + 56LL) )
  {
LABEL_17:
    v12 = *(__int64 **)(v11 + 32);
    goto LABEL_18;
  }
  return v5;
}
