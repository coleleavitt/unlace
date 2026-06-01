char __fastcall sub_409FA0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rdx
  char result; // al
  __int64 v6; // rcx
  void *v7; // rdi
  char *v8; // r12
  int v9; // eax
  char v10; // [rsp+Fh] [rbp-39h]
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 16);
  v13 = __readfsqword(0x28u);
  result = 0;
  if ( !*(_DWORD *)(v4 + 4) )
  {
    ptr = nullptr;
    v12 = 0;
    result = sub_409DB0(a1, (__int64 *)&ptr, a2, a3);
    v7 = ptr;
    if ( result && *(_DWORD *)ptr >= a2 )
    {
      v8 = (char *)ptr + 28 * v12 - 28;
      v9 = calc_fixup_size(*((unsigned __int16 *)v8 + 2), &ptr, v12, v6);
      v7 = ptr;
      result = a3 + a2 < *(_DWORD *)v8 + v9;
    }
    if ( v7 )
    {
      v10 = result;
      *(_QWORD *)&v12 = 0;
      qfree(v7);
      return v10;
    }
  }
  return result;
}

