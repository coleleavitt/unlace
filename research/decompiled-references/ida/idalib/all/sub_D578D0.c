__int64 __fastcall sub_D578D0(__int64 a1)
{
  unsigned int v1; // r13d
  void *v2; // rcx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rbp
  unsigned int v6; // ebx
  unsigned int v7; // r13d
  void *v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-30h]

  v2 = *(void **)a1;
  v3 = *(unsigned int *)(a1 + 8);
  v4 = (unsigned __int64)(v3 + 63) >> 6;
  if ( v4 == 1 )
  {
    v10 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)v3 > 0x40 )
    {
      sub_2205470(&v9, v2, 1);
    }
    else
    {
      v9 = v2;
      sub_CF8100((unsigned __int64 *)&v9);
    }
    v5 = v9;
    v6 = v10 - 1;
    if ( v10 > 0x40 )
      goto LABEL_5;
LABEL_11:
    LOBYTE(v1) = 1LL << v6 == (_QWORD)v5;
    return v1;
  }
  sub_2205610(&v9, v3, v4, v2);
  v5 = v9;
  v6 = v10 - 1;
  if ( v10 <= 0x40 )
    goto LABEL_11;
LABEL_5:
  v7 = 0;
  if ( ((1LL << v6) & v5[v6 >> 6]) != 0 )
    LOBYTE(v7) = (unsigned int)sub_22068B0(&v9) == v6;
  if ( v5 )
    operator delete[](v5);
  return v7;
}
