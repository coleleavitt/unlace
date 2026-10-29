void __fastcall sub_387780(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax

  if ( (*(_BYTE *)(a3 + 26) & 0x20) != 0 )
  {
    v4 = a2[1];
    if ( v4 )
    {
      v7 = v4 + 10;
      v6 = v4 + 11;
      v5 = *a2;
      --v4;
      if ( a2[2] >= v6 )
        goto LABEL_4;
    }
    else
    {
      v5 = *a2;
      v6 = 12;
      v7 = 11;
      if ( (unsigned __int64)a2[2] >= 0xC )
      {
LABEL_4:
        a2[1] = v6;
        *(_BYTE *)(v5 + v7) = 0;
        qmemcpy((void *)(*a2 + v4), " AUTOMAPPED", 11);
        return;
      }
    }
    v8 = qvector_reserve();
    *a2 = v8;
    v5 = v8;
    goto LABEL_4;
  }
}
