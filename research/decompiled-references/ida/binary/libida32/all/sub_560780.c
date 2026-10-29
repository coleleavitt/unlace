__int64 __fastcall sub_560780(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  void *v7; // rdi
  unsigned int v8; // ebx
  __int64 v10; // rdx
  int v11; // eax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  ptr = nullptr;
  v13 = 0;
  v5 = sub_409DB0(a1, (__int64 *)&ptr, a2, a3);
  v7 = ptr;
  v8 = v5;
  if ( (_BYTE)v5 )
  {
    if ( (unsigned __int64)v13 <= 1 && *(_DWORD *)ptr == a2 )
    {
      v10 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL);
      if ( !(_DWORD)v10 )
      {
        v11 = calc_fixup_size(*((unsigned __int16 *)ptr + 2), &ptr, v10, v6);
        v7 = ptr;
        LOBYTE(v8) = a3 == v11;
      }
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v8 = 1;
  }
  if ( v7 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v7);
  }
  return v8;
}

