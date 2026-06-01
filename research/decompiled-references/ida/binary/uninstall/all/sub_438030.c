__int64 __fastcall sub_438030(__int64 a1, __int64 a2, __int64 a3, __int64 **a4)
{
  int v5; // r12d
  __int64 v6; // r14
  __int64 v7; // rbp
  _BYTE *v8; // rax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // ebx
  int v12; // eax
  bool v13; // zf

  v5 = a3;
  v6 = sub_47B0B0(a1, a2, a3);
  v7 = sub_4495F0(a1, 3296);
  sub_438B60(a1, v7, 0, 0, 0, 0);
  sub_436FE0(a1, a2, v5, a4, nullptr, 0, v7, 0);
  v8 = *(_BYTE **)(v7 + 120);
  if ( v8 == *(_BYTE **)(v7 + 128) )
  {
    sub_439150(v7);
    v8 = *(_BYTE **)(v7 + 120);
  }
  *v8 = 0;
  *(_DWORD *)(v7 + 3276) = 0;
  v9 = dword_65440C;
  ++*(_QWORD *)(v7 + 120);
  if ( v9 )
  {
    if ( v9 == 0x80000000 )
    {
      v10 = *(_DWORD *)(v7 + 48);
      v9 = 1;
      goto LABEL_7;
    }
    if ( v9 >= 0 )
    {
      v10 = *(_DWORD *)(v7 + 48);
LABEL_7:
      *(_DWORD *)(v7 + 48) = v10 + v9;
      goto LABEL_8;
    }
    v10 = *(_DWORD *)(v7 + 48);
    if ( *(_DWORD *)(v7 + 44) >= v10 )
      goto LABEL_7;
    *(_DWORD *)(v7 + 44) = v10;
    *(_DWORD *)(v7 + 48) = v10 + v9;
  }
LABEL_8:
  ++*(_DWORD *)v6;
  sub_439200(v6, v7);
  sub_438E80(v7);
  sub_449510(a1, v7);
  v11 = sub_44A120(a1, *(_QWORD *)(v6 + 32));
  v12 = *(_DWORD *)v6 - 1;
  v13 = *(_DWORD *)v6 == 1;
  *(_DWORD *)v6 = v12;
  if ( v12 < 0 || v13 )
    sub_47B120(v6);
  return v11;
}

