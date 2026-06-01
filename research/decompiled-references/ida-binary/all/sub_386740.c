__int64 __fastcall sra_chooser_t__::vfunc_7(__int64 a1, unsigned int a2)
{
  unsigned __int16 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rsi
  char v6; // dl
  __int64 result; // rax
  __int128 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v2 = *(unsigned __int16 **)(a1 + 192);
  v3 = a2;
  v9 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 184);
  v8 = 0;
  v5 = *(_DWORD *)(v4 + 68) + (unsigned int)*v2;
  if ( (int)v5 >= *(_DWORD *)(v4 + 80) )
    v5 = (unsigned int)(v5 + 1);
  v6 = getn_sreg_range(&v8, v5, v3);
  result = -1;
  if ( v6 )
    return v8;
  return result;
}
