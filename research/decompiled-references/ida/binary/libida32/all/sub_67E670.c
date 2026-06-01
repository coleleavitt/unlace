unsigned __int64 __fastcall sub_67E670(__int64 a1, char a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned int i; // ebx
  unsigned __int64 v6; // r15
  unsigned int v7; // eax
  unsigned __int8 *v8; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v10; // [rsp+18h] [rbp-50h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( a2 == 84 )
  {
    v3 = qword_2CA1698;
    v4 = *(_QWORD *)(qword_2CA1698 + 1648);
    if ( *(_DWORD *)(v4 + 8) != -1 )
    {
      for ( i = sub_79B7E0(v4 + 8, qword_2CA1698, 84); i != -1; i = sub_79B840(v4 + 8, v3, i, 84) )
      {
        v10 = 0;
        ptr = nullptr;
        if ( sub_79BAE0(v4 + 8, v3, &ptr, 1, i, 84) > 0 )
        {
          v6 = v10;
          v8 = (unsigned __int8 *)ptr;
          v7 = sub_3B9110(*(_QWORD **)(v3 + 1480), i);
          sub_67E330((_QWORD *)v4, v7, v8, v6);
          i += v6 >> 10;
        }
        if ( ptr )
        {
          *(_QWORD *)&v10 = 0;
          qfree(ptr);
        }
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}

