char __fastcall sub_41D3C0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rcx
  char result; // al
  __int64 v5; // rbx
  void *v6; // rdi
  char *v7; // r12
  int v8; // eax
  char v9; // [rsp+Fh] [rbp-39h]
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 16);
  v12 = __readfsqword(0x28u);
  result = 0;
  if ( !*(_DWORD *)(v3 + 4) )
  {
    v5 = a3;
    ptr = nullptr;
    v11 = 0;
    result = sub_41D1C0(a1, (__int64 *)&ptr, a2, a3);
    v6 = ptr;
    if ( result && *(_QWORD *)ptr >= a2 )
    {
      v7 = (char *)ptr + 48 * v11 - 48;
      v8 = calc_fixup_size(*((_WORD *)v7 + 4));
      v6 = ptr;
      result = v5 + a2 < *(_QWORD *)v7 + v8;
    }
    if ( v6 )
    {
      v9 = result;
      *(_QWORD *)&v11 = 0;
      qfree(v6);
      return v9;
    }
  }
  return result;
}
