__int64 __fastcall sub_CE4700(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // r13
  unsigned int v6; // ebp
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v10[88]; // [rsp+0h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a2;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
    return 0;
  v4 = *(_QWORD *)(a1 + 784);
  v5 = (_QWORD *)(v4 + 40);
  v6 = sub_DA69E0(a1 + 384, v3, v4 + 40);
  if ( !(_BYTE)v6 )
    return 0;
  v7 = *(_DWORD *)(v4 + 64);
  if ( !v7 )
  {
    v8 = *(_QWORD *)(v4 + 72);
    if ( v8 && *(_BYTE *)(*(_QWORD *)(v8 + 32) + 61LL) )
      goto LABEL_11;
    goto LABEL_9;
  }
  if ( v7 != 3 )
  {
LABEL_9:
    if ( !*(_QWORD *)(sub_CDA220(v4 + 40) + 32) )
    {
      sub_CDAA60((__int64)v10, v5);
      sub_DFF560(v10);
    }
  }
LABEL_11:
  v9 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
  sub_DFF4A0(v9, v5);
  return v6;
}

