void __fastcall sub_1AE9E10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-D8h]
  __int64 v13; // [rsp+0h] [rbp-D8h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-C0h]
  _BYTE v16[184]; // [rsp+20h] [rbp-B8h] BYREF

  *(_QWORD *)(a2 + 48) = a4;
  v5 = *(_QWORD *)(a3 + 120);
  v15 = 0x1000000000LL;
  ptr = v16;
  v6 = v5 + 8LL * (unsigned int)sub_B76070(a3, a2, a3, (__int64)v16);
  if ( v6 == v5 )
  {
    v7 = v15;
  }
  else
  {
    do
    {
      v8 = sub_B74530(*(_QWORD *)(a1 + 248), a2 + 72, 0, 0, 0, *(_QWORD *)(*(_QWORD *)v5 + 48LL), 0, 0, 0);
      v9 = (unsigned int)v15;
      *(_DWORD *)(v8 + 96) &= 0xFFF01FFF;
      if ( (unsigned int)v9 <= 0xFE )
      {
        *(_WORD *)(v8 + 98) = (16 * (unsigned __int8)v9) | *(_WORD *)(v8 + 98) & 0xF00F;
      }
      else
      {
        v12 = v8;
        sub_B74850(v8, v9);
        v9 = (unsigned int)v15;
        v8 = v12;
      }
      *(_BYTE *)(v8 + 29) |= 2u;
      if ( v9 + 1 > (unsigned __int64)HIDWORD(v15) )
      {
        v13 = v8;
        sub_2237220(&ptr, v16, v9 + 1, 8);
        *((_QWORD *)ptr + (unsigned int)v15) = v13;
      }
      else
      {
        *((_QWORD *)ptr + v9) = v8;
      }
      v5 += 8;
      v7 = v15 + 1;
      LODWORD(v15) = v15 + 1;
    }
    while ( v6 != v5 );
  }
  v10 = v7;
  v11 = sub_B8C330(a2);
  sub_B7C440(a2, v11, ptr, v10);
  if ( ptr != v16 )
    free(ptr);
}
