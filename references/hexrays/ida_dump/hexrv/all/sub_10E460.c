unsigned __int64 __fastcall sub_10E460(_QWORD *a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rbx
  _BYTE *v4; // r13
  __int64 v5; // r12
  _BYTE *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 i; // rbx
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rdi
  _QWORD v14[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v2 = (_BYTE *)a1[2];
  v15 = __readfsqword(0x28u);
  v3 = *(_QWORD *)v2;
  v4 = (_BYTE *)(*(_QWORD *)v2 + 32LL);
  v5 = *(_QWORD *)v2 + 48LL;
  if ( *v4 == 4 && **(_DWORD **)(v3 + 40) == 9 )
  {
    if ( (unsigned __int8)sub_11B8C0(*(_QWORD *)v2 + 48LL, v14, 0) && !v14[0] )
    {
      v14[1] = 0;
      v14[0] = 0xFFFFFFFF00000000LL;
      sub_118550(v14, *(_QWORD *)(v3 + 40) + 32LL);
      sub_118550(v4, v14);
      sub_11C550(v5, *a1, 0, *(unsigned int *)(v3 + 36), **(_QWORD **)(v3 + 56), 0);
      sub_1188E0(v14);
    }
    v2 = (_BYTE *)a1[2];
  }
  if ( !v2[16] )
  {
    v6 = (_BYTE *)v5;
    v5 = (__int64)v4;
    v4 = v6;
  }
  sub_152D30(a2, a1[1], v5, a1[1], a1[1] + 32LL, 2);
  sub_152D30(a2, a1[1], v4, a1[1], a1[1] + 48LL, 2);
  sub_119110(v3, *a1);
  v7 = a1[3];
  if ( v7 > 1 )
  {
    for ( i = 1; i < v7; ++i )
    {
      v9 = *(_QWORD *)(a1[2] + 24 * i);
      sub_120CC0(v9 + 32);
      sub_120CC0(v9 + 48);
      sub_119110(v9, *a1);
      v7 = a1[3];
    }
  }
  v10 = a1[2];
  v11 = v10 + 24 * v7;
  while ( v10 != v11 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    v10 += 24;
    sub_1190E0(v12);
  }
  return v15 - __readfsqword(0x28u);
}
