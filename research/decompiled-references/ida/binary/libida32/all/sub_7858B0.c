unsigned __int64 __fastcall sub_7858B0(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  sub_785800(a1, a2, a3, a4, a5, a6);
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 560);
      v14 = 1;
      v15 = 0;
      v10 = *(_WORD *)(v9 + 24);
      if ( v10 != 15934 )
        break;
      sub_785800(a1, (__int64)&v14, 1u, v6, v7, v8);
      v12 = *(_QWORD *)(a2 + 8);
      v6 = v15;
      if ( *(_BYTE *)a2 )
        v13 = (unsigned __int64)v12 >> v15;
      else
        v13 = v12 >> v15;
      *(_QWORD *)(a2 + 8) = v13;
    }
    if ( v10 != 15420 )
      break;
    sub_785800(a1, (__int64)&v14, 1u, v6, v7, v8);
    v6 = v15;
    *(_QWORD *)(a2 + 8) <<= v15;
  }
  return v16 - __readfsqword(0x28u);
}

