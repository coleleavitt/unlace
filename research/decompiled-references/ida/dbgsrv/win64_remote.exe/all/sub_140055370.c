/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140055370
// Address: 0x0000000140055370

//----- (0000000140055370) ----------------------------------------------------
__int64 __fastcall sub_140055370(__int64 a1, signed int a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // esi
  struct pollfd fdArray; // [rsp+20h] [rbp-48h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1) )
  {
LABEL_18:
    *(_QWORD *)(a1 + 88) = "select";
    return 0xFFFFFFFFLL;
  }
  else
  {
    while ( 1 )
    {
      v4 = 0;
      if ( *(_QWORD *)(a1 + 40) )
        v5 = *(_QWORD *)(32LL * *(_QWORD *)(a1 + 40) + *(_QWORD *)(a1 + 32) - 16);
      else
        v5 = 0;
      if ( a2 > -1 )
      {
        v6 = sub_14005A7C0();
        v7 = sub_140054640(v6, a2);
        v4 = v7;
        if ( v7 )
        {
          if ( v7 <= v5 || !v5 )
            v5 = v7;
        }
      }
      LODWORD(v8) = -1;
      if ( v5 )
      {
        v9 = sub_14005A7C0();
        v10 = (unsigned int)v9 + 1000000 * HIDWORD(v9);
        v11 = (unsigned int)v5 + 1000000 * HIDWORD(v5) - v10;
        if ( (unsigned int)v5 + 1000000 * HIDWORD(v5) <= v10 )
          v11 = 0;
        v8 = v11 / 0x3E8;
      }
      fdArray.fd = *(_QWORD *)(a1 + 56);
      fdArray.events = 256;
      v12 = WSAPoll(&fdArray, 1u, v8);
      v13 = v12;
      if ( v12 )
        break;
      if ( v4 && sub_14005A7C0() >= v4 )
      {
        *(_QWORD *)(a1 + 88) = "poll";
        *(_DWORD *)(a1 + 96) = 258;
        return 0xFFFFFFFFLL;
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1) )
        goto LABEL_18;
    }
    if ( v12 < 0 )
    {
      *(_QWORD *)(a1 + 88) = "poll";
      *(_DWORD *)(a1 + 96) = WSAGetLastError();
    }
    return v13;
  }
}
