void __fastcall sub_1A68860(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(_DWORD *)a2 & 0x7FFFFFFF;
  if ( v6 > 7 )
  {
    if ( v6 == 9 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      v8 = v7 + 24LL * *(unsigned int *)(a2 + 4);
      while ( v8 != v7 )
      {
        v9 = v7;
        v7 += 24;
        sub_1A68860(a1, v9);
      }
    }
  }
  else if ( v6 >= 6 )
  {
    sub_F22A90(v18, *(_QWORD *)(a2 + 8));
    v17 = v18[0];
    v10 = sub_F22BD0(&v17, 0);
    v14 = *(_BYTE *)(v10 + 28) & 0x7F;
    if ( (_BYTE)v14 == 72 )
    {
      v15 = *(_QWORD *)(v10 + 16);
      v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v15 & 4) != 0 )
        v16 = *(_QWORD *)v16;
      if ( (*(_BYTE *)(v16 + 8) & 0x7Fu) - 59 <= 2 )
      {
        v18[0] = v16 - 64;
        if ( v16 != 64 )
          sub_1A66720(a1[2], v18, v14, v11, v12, v13);
      }
      sub_1A675A0(a1[1], v16);
    }
  }
  else if ( v6 == 1 )
  {
    sub_1A67710(a1, *(_QWORD *)(a2 + 8), a3, a4, a5, a6);
  }
}
