__int64 __fastcall sub_B07A0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 (__fastcall **v8)(); // rdx
  __int64 v9; // rax
  _QWORD v11[5]; // [rsp+0h] [rbp-68h] BYREF
  char v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+38h] [rbp-30h]
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 48);
  v15 = __readfsqword(0x28u);
  if ( v2 )
  {
    do
    {
      while ( (unsigned __int8)sub_AEB10(a1, v2) )
        ++v1;
      v2 = *(_QWORD *)(v2 + 8);
    }
    while ( v2 );
    v6 = *(_QWORD *)(a1 + 480);
    v7 = *(_QWORD *)(a1 + 48);
    v12 = 0;
    v8 = &off_4AF930;
    *(_DWORD *)(a1 + 24) &= ~0x40u;
    v13 = v6;
    v9 = *(_QWORD *)(a1 + 64);
    v11[4] = 0;
    v11[0] = &off_4AF930;
    v14 = 0;
    v11[1] = v9;
    v11[2] = a1;
    if ( v7 )
    {
      do
      {
        v11[3] = v7;
        while ( (unsigned int)sub_119D40(v7, v11, v8, v3, v4, v5) )
          ;
        v7 = *(_QWORD *)(v7 + 8);
      }
      while ( v7 );
      v1 += v14;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) &= ~0x40u;
  }
  return v1;
}
