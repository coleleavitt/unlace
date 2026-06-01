__int64 __fastcall sub_1042B70(__int64 a1, _BYTE *a2, unsigned __int64 a3, char a4, int a5, _QWORD *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  _BYTE *v14; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v14 = a2;
  v15 = a3;
  v10 = sub_2223270(&v14, "=+&", 3, 0);
  v11 = v15;
  v12 = 0;
  if ( v10 < v15 )
  {
    v11 = v10;
    v12 = v15 - v10;
  }
  v15 = v12;
  v14 += v11;
  if ( *v14 != 114 )
  {
    v6 = 1;
    if ( *v14 != 122 )
      return v6;
  }
  LOBYTE(v6) = a5 == 64 || (unsigned int)(a4 - 119) <= 1;
  if ( (_BYTE)v6 )
    return v6;
  if ( a5 == 512 )
    return *(unsigned __int8 *)(a1 + 528);
  sub_978080(a6, 0, a6[1], "w", 1u);
  return v6;
}

