unsigned __int64 __fastcall sub_5220A0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v1 = 0;
  v11 = __readfsqword(0x28u);
  sub_5345D0(&qword_8D24C0, off_8C3170, 3);
  v2 = (__int64 *)(a1 + 2216);
  do
  {
    if ( (unsigned __int64)v2[1] > 1 )
    {
      v8 = *v2;
      v9 = sub_5313F0(*(_QWORD *)(qword_8D24C0 + v1));
      if ( v9 )
        sub_537630(v9, 1, v8);
    }
    if ( (unsigned __int64)v2[4] > 1 )
    {
      v6 = v2[3];
      v7 = sub_5313F0(*(_QWORD *)(qword_8D24C0 + v1));
      if ( v7 )
        sub_537630(v7, 3, v6);
    }
    if ( *((_DWORD *)v2 + 12) != -1 )
    {
      v10 = *((_DWORD *)v2 + 12);
      v3 = sub_5313F0(*(_QWORD *)(qword_8D24C0 + v1));
      if ( v3 )
        sub_537630(v3, 4, &v10);
    }
    v1 += 8;
    v2 += 7;
  }
  while ( v1 != 24 );
  if ( *(_BYTE *)(a1 + 1424) )
    return v11 - __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 1416);
  if ( !v4 )
    return v11 - __readfsqword(0x28u);
  else
    return sub_51D3E0(v4);
}
