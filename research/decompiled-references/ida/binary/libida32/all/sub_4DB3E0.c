unsigned __int64 __fastcall sub_4DB3E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r14
  int *v4; // r15
  char *v5; // rbx
  int v6; // eax
  __int64 i; // rax
  _QWORD *v8; // [rsp+8h] [rbp-90h]
  _BYTE v9[64]; // [rsp+10h] [rbp-88h] BYREF
  char v10; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1560);
  v8 = (_QWORD *)v1;
  if ( !*(_BYTE *)(v1 + 56) )
  {
    v3 = *(_QWORD *)(a1 + 1480);
    *(_BYTE *)(v1 + 56) = 1;
    if ( sub_6141A0(a1, 83, v9, 64) == 64 )
    {
      for ( i = 0; i != 64; i += 4 )
        *(_DWORD *)(v3 + i + 2492) = *(_DWORD *)&v9[i];
    }
    else
    {
      v4 = (int *)(v3 + 2492);
      v5 = v9;
      do
      {
        sub_79BC40(v4, a1, 0, 0);
        v6 = *v4;
        v5 += 4;
        ++v4;
        *((_DWORD *)v5 - 1) = v6;
      }
      while ( v5 != &v10 );
      sub_6160D0(a1, 83, v9, 64);
    }
    *(_DWORD *)(v3 + 2488) = -1;
    sub_4DABC0(v8);
  }
  return v11 - __readfsqword(0x28u);
}

