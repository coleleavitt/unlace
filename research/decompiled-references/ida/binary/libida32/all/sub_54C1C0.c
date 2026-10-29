__int64 __fastcall sub_54C1C0(_QWORD *a1)
{
  __int64 v1; // rax
  char v2; // al
  unsigned int v3; // edx
  char v4; // al
  unsigned __int8 v5; // al
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v1 = a1[2];
  v9 = __readfsqword(0x28u);
  if ( *(_DWORD *)(v1 + 4) == 12 )
  {
    ptr = nullptr;
    v8 = 0;
    if ( sub_635F80(a1, &ptr) > 0
      && (unsigned __int64)v8 > 3
      && *(_BYTE *)ptr == 110
      && *((_BYTE *)ptr + 1) == 51
      && *((_BYTE *)ptr + 2) == 50 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v8 = 0;
        qfree(ptr);
      }
      return 8;
    }
    if ( ptr )
    {
      *(_QWORD *)&v8 = 0;
      qfree(ptr);
    }
  }
  v2 = sub_614FB0(*a1, 58);
  v3 = 2;
  v4 = v2 & 3;
  if ( v4 != 2 )
  {
    v3 = 4;
    if ( v4 != 3 )
    {
      v3 = -1;
      if ( v4 == 1 )
      {
        v5 = sub_614FB0(*a1, 59);
        v3 = 1;
        if ( v5 > 2u )
          return 8;
      }
    }
  }
  return v3;
}

