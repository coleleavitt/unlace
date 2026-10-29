__int64 __fastcall sub_21C6A10(__int64 a1, unsigned int *a2, unsigned __int64 a3, int a4)
{
  unsigned int v5; // edi
  unsigned __int32 v7; // eax
  unsigned int *v8; // rax
  unsigned int *v9; // r13
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD v14[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( a3 < (unsigned __int64)(a2 + 2) )
  {
    sub_21C5200(v14, 8);
    v13 = v14[0];
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v13;
    return a1;
  }
  else
  {
    v5 = *a2;
    v7 = _byteswap_ulong(*a2);
    if ( a4 != 1 )
      v5 = v7;
    if ( a3 < (unsigned __int64)a2 + v5 )
    {
      sub_21C5200(v14, 7);
      v12 = v14[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v12;
      return a1;
    }
    else
    {
      v8 = (unsigned int *)operator new(v5);
      *(_QWORD *)v8 = 0;
      v9 = v8;
      memcpy(v8, a2, v5);
      sub_21C67F0(v9, a4);
      sub_21C64E0(v14, v9);
      v10 = v14[0];
      if ( v14[0] )
      {
        *(_BYTE *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v10;
        operator delete(v9);
      }
      else
      {
        *(_QWORD *)a1 = v9;
        *(_BYTE *)(a1 + 8) &= ~1u;
      }
      return a1;
    }
  }
}
