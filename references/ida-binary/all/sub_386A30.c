__int64 __fastcall sra_chooser_t__::vfunc_13(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  __int64 (__fastcall *v5)(__int64, unsigned int); // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int16 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  char v11; // al
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdx
  __int128 v15; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)a1;
  v3 = *(__int64 **)a2;
  v16 = __readfsqword(0x28u);
  v5 = *(__int64 (__fastcall **)(__int64, unsigned int))(v2 + 56);
  v6 = *v3;
  if ( v5 != sra_chooser_t__::vfunc_7 )
  {
    v12 = v5(a1, v6);
LABEL_5:
    if ( v12 != -1 )
      sub_192AA0(0, v12, -1, 1u);
    goto LABEL_7;
  }
  v7 = *(_QWORD *)(a1 + 184);
  v8 = *(unsigned __int16 **)(a1 + 192);
  v9 = (unsigned int)v6;
  v15 = 0;
  v10 = *(_DWORD *)(v7 + 68) + (unsigned int)*v8;
  if ( (int)v10 >= *(_DWORD *)(v7 + 80) )
    v10 = (unsigned int)(v10 + 1);
  v11 = getn_sreg_range(&v15, v10, v9);
  v12 = v15;
  if ( v11 )
    goto LABEL_5;
LABEL_7:
  result = 0;
  if ( !*(_BYTE *)(a1 + 200) )
  {
    v14 = *(_QWORD *)(a2 + 8);
    if ( v14 != 1 )
    {
      memmove(*(void **)a2, (const void *)(*(_QWORD *)a2 + 8LL), 8 * v14 - 8);
      --*(_QWORD *)(a2 + 8);
      return 2;
    }
  }
  return result;
}
