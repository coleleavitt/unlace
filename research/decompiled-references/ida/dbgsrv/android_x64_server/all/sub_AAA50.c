/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AAA50
// Address: 0x00000000000AAA50

//----- (00000000000AAA50) ----------------------------------------------------
void *__fastcall sub_AAA50(__int64 a1, char a2)
{
  unsigned __int64 v2; // rcx
  unsigned int *v3; // rax
  unsigned __int64 v4; // rdx
  unsigned int v5; // ebp
  void *v6; // r14
  int v8; // eax
  __time_t v9; // rax
  __int64 v10; // r15
  _DWORD *v11; // rax
  __time_t v12; // rax
  unsigned int v13; // [rsp+8h] [rbp-50h] BYREF
  char v14; // [rsp+Ch] [rbp-4Ch]
  char v15[32]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) || *(_BYTE *)(a1 + 8) )
    return nullptr;
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    v3 = (unsigned int *)(*(_QWORD *)(a1 + 48) + 4LL);
    v4 = 0;
    while ( *((_BYTE *)v3 - 4) != a2 )
    {
      ++v4;
      v3 += 2;
      if ( v4 >= v2 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v3 = (unsigned int *)(a1 + 64);
  }
  v5 = *v3;
  if ( (unsigned int)sub_AA860(a1, (__int64)&v13, 5, *v3) )
    return nullptr;
  v8 = _byteswap_ulong(v13);
  v13 = v8;
  if ( v8 < 0 || v8 >= 8193 && !*(_BYTE *)(a1 + 69) )
  {
    v9 = qtime64();
    v6 = nullptr;
    format_timestamp(v15, 25, v9, 0);
    sub_AABC0("%s rpc: bad packet length", v15);
    return v6;
  }
  v10 = v8;
  v11 = qalloc(v8 + 5LL);
  if ( !v11 )
  {
    v12 = qtime64();
    v6 = nullptr;
    format_timestamp(v15, 25, v12, 0);
    sub_AABC0("%s rpc: no local memory", v15);
    return v6;
  }
  v6 = v11;
  *((_BYTE *)v11 + 4) = v14;
  *v11 = v13;
  if ( (unsigned int)sub_AA860(a1, (__int64)v11 + 5, v10, v5) )
  {
    qfree(v6);
    return nullptr;
  }
  return v6;
}
