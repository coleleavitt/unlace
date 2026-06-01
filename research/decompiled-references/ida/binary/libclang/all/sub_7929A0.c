void __fastcall sub_7929A0(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v4; // eax
  int v5; // eax
  __int64 *v6; // rbp
  _BYTE *v7; // rax
  __int64 v8; // rdx
  unsigned __int128 v9; // [rsp+0h] [rbp-3B8h] BYREF
  __int64 v10; // [rsp+18h] [rbp-3A0h] BYREF
  void *v11[2]; // [rsp+20h] [rbp-398h] BYREF
  __int64 v12; // [rsp+30h] [rbp-388h] BYREF
  _QWORD v13[111]; // [rsp+40h] [rbp-378h] BYREF

  v4 = *(_DWORD *)a1;
  v9 = __PAIR128__(a4, a3);
  v5 = v4 & 7;
  if ( (unsigned int)(v5 - 3) <= 2 && (v6 = (__int64 *)a1[2]) != nullptr )
  {
    if ( v5 == 4 )
    {
      v7 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int64)v7 >= *(_QWORD *)(a2 + 24) )
      {
        sub_26239D0(a2, 126);
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v7 + 1;
        *v7 = 126;
      }
    }
    else if ( v5 == 5 )
    {
      v8 = *(_QWORD *)(a2 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v8) <= 8 )
      {
        sub_26240F0(a2, "operator ", 9);
      }
      else
      {
        *(_BYTE *)(v8 + 8) = 32;
        *(_QWORD *)v8 = 0x726F74617265706FLL;
        *(_QWORD *)(a2 + 32) += 9LL;
      }
    }
    sub_C8D5A0(v13);
    LODWORD(v9) = v9 & 0xDF7FF5FF | 0x800A00;
    v10 = *v6;
    sub_B2AE60(v11, &v10, &v9);
    sub_26240F0(a2, v11[0], v11[1]);
    if ( v11[0] != &v12 )
      operator delete(v11[0], v12 + 1);
    sub_7916D0(v13);
  }
  else
  {
    sub_790FC0(a1, a2, (const __m128i *)&v9);
  }
}

