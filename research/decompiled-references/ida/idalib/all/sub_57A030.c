__int64 __fastcall sub_57A030(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v5; // eax
  void *v6; // rdi
  unsigned int v7; // ebx
  int v9; // eax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  ptr = nullptr;
  v11 = 0;
  v5 = sub_41D1C0(a1, (__int64 *)&ptr, a2, a3);
  v6 = ptr;
  v7 = v5;
  if ( (_BYTE)v5 )
  {
    if ( (unsigned __int64)v11 <= 1 && *(_QWORD *)ptr == a2 )
    {
      if ( !*(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) )
      {
        v9 = calc_fixup_size(*((_WORD *)ptr + 4));
        v6 = ptr;
        LOBYTE(v7) = a3 == v9;
      }
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    v7 = 1;
  }
  if ( v6 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v6);
  }
  return v7;
}
