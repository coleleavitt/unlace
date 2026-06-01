__int64 __fastcall sub_16B90C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD **v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rax
  int v10; // eax
  bool v11; // cc
  size_t v12; // [rsp+8h] [rbp-50h] BYREF
  void *v13; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-40h]
  char v15; // [rsp+1Ch] [rbp-3Ch]
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+28h] [rbp-30h]

  v4 = *(_QWORD ***)a2;
  if ( ***(_BYTE ***)a2 )
  {
    v5 = *v4[1];
    v6 = *(_DWORD *)(v5 + 48);
    if ( v6 <= 1 )
      v7 = (unsigned int)sub_B76070(*v4[2], a2, a3, a4) - v6 + 1;
    else
      v7 = *(unsigned int *)(*(_QWORD *)(v5 + 56) + 4LL);
    if ( *(_DWORD *)(*v4[3] + 16LL) <= (unsigned int)v7 )
      goto LABEL_8;
    v8 = 8 * v7;
  }
  else
  {
    v8 = 8;
  }
  if ( !(unsigned __int8)sub_C4BD10(
                           *(_QWORD *)(v8
                                     + **(_QWORD **)(a2 + 8)
                                     + 8 * (((*(_BYTE *)(**(_QWORD **)(a2 + 8) + 2LL) & 8) != 0) + 1LL)
                                     + 32),
                           &v12,
                           *(_QWORD *)(*(_QWORD *)(a2 + 16) + 248LL)) )
  {
LABEL_8:
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  v14 = 64;
  v15 = 1;
  v13 = (void *)(v12 + 1);
  sub_2206D90(&v16, &v13, **(unsigned int **)(a2 + 24));
  v10 = v17;
  v11 = v14 <= 0x40;
  *(_BYTE *)(a1 + 12) = 1;
  *(_BYTE *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 8) = v10;
  *(_QWORD *)a1 = v16;
  if ( !v11 && v13 )
    operator delete[](v13);
  return a1;
}
