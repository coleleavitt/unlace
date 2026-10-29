/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006B380
// Address: 0x000000010006B380

//----- (000000010006B380) ----------------------------------------------------
void *__fastcall sub_10006B380(__int64 a1, char a2)
{
  __int64 v2; // rcx
  unsigned int *v3; // rax
  unsigned int v4; // r14d
  unsigned int v5; // eax
  __darwin_time_t v6; // rax
  __int64 v8; // r15
  _BYTE *v9; // rax
  void *v10; // r12
  __darwin_time_t v11; // rax
  unsigned int v12; // [rsp+8h] [rbp-58h] BYREF
  char v13; // [rsp+Ch] [rbp-54h]
  char v14[40]; // [rsp+10h] [rbp-50h] BYREF

  if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) && !*(_BYTE *)(a1 + 8) )
  {
    v2 = *(_QWORD *)(a1 + 56);
    if ( v2 )
    {
      v3 = (unsigned int *)(*(_QWORD *)(a1 + 48) + 4LL);
      while ( *((_BYTE *)v3 - 4) != a2 )
      {
        v3 += 2;
        if ( !--v2 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v3 = (unsigned int *)(a1 + 64);
    }
    v4 = *v3;
    if ( !(unsigned int)sub_10006B1E0(a1, (__int64)&v12, 5, *v3) )
    {
      v5 = _byteswap_ulong(v12);
      v12 = v5;
      if ( (v5 & 0x80000000) == 0 && (v5 < 0x2001 || *(_BYTE *)(a1 + 69)) )
      {
        v8 = v5;
        v9 = qalloc(v5 + 5LL);
        if ( v9 )
        {
          v9[4] = v13;
          *(_DWORD *)v9 = v12;
          v10 = v9;
          if ( !(unsigned int)sub_10006B1E0(a1, (__int64)(v9 + 5), v8, v4) )
            return v10;
          qfree(v10);
        }
        else
        {
          v11 = qtime64();
          format_timestamp(v14, 25, v11, 0);
          sub_10006B4E0("%s rpc: no local memory", v14);
        }
      }
      else
      {
        v6 = qtime64();
        format_timestamp(v14, 25, v6, 0);
        sub_10006B4E0("%s rpc: bad packet length", v14);
      }
    }
  }
  return nullptr;
}
