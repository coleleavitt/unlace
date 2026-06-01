void __fastcall sub_E61AE0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  void *v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-30h]
  char v10; // [rsp+Ch] [rbp-2Ch]

  sub_971800(a1[1], "$");
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 152LL) > 0xB71AFFFu && a3 )
  {
    v7 = a1[1];
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 16
      || (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      goto LABEL_7;
    }
    sub_971800(v7, "M");
    sub_E608A0(a1, a4, nullptr, 0);
  }
  v7 = a1[1];
LABEL_7:
  sub_971800(v7, "0");
  v9 = *(_DWORD *)(a2 + 8);
  if ( v9 > 0x40 )
    sub_21E17D0(&v8);
  else
    v8 = *(void **)a2;
  v10 = *(_BYTE *)(a2 + 12);
  sub_E55F30((__int64)a1, (__int64)&v8);
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}

