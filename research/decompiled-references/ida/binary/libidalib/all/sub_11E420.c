__int64 __fastcall sub_11E420(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  size_t v6; // r14
  char updated; // al
  __int64 v8; // rdx
  _QWORD **v9; // rdi
  unsigned int v10; // r12d
  _QWORD **v11; // rbx
  __int64 v12; // rbp
  void *v14; // [rsp+8h] [rbp-1108h] BYREF
  __int128 v15; // [rsp+10h] [rbp-1100h]
  __int64 v16; // [rsp+28h] [rbp-10E8h]
  __int64 v17; // [rsp+30h] [rbp-10E0h]
  __int64 v18; // [rsp+B0h] [rbp-1060h]
  _QWORD **v19; // [rsp+10B8h] [rbp-58h]
  __int128 v20; // [rsp+10C0h] [rbp-50h]
  unsigned __int64 v21; // [rsp+10D0h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v15 = 0;
  v14 = nullptr;
  if ( a3 )
  {
    v6 = strlen(a3);
    v14 = (void *)qvector_reserve();
    *(_QWORD *)&v15 = v6 + 1;
    memmove(v14, a3, v6);
    *((_BYTE *)v14 + v6) = 0;
  }
  if ( (unsigned __int8)sub_9DB70((__int64)&v14, 2u, (__int64)"Enter snapshot description") )
  {
    if ( a3 && a4 )
      qstrncpy();
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = nullptr;
    v20 = 0;
    qstrncpy();
    updated = update_snapshot_attributes();
    v8 = v20;
    v9 = v19;
    v10 = updated == 0 ? -1 : 1;
    v11 = v19;
    if ( 8LL * (_QWORD)v20 )
    {
      do
      {
        v12 = (__int64)*v11;
        if ( *v11 )
        {
          sub_119040(*v11);
          if ( *(_QWORD *)(v12 + 4240) )
          {
            *(_QWORD *)(v12 + 4248) = 0;
            qfree();
          }
          qfree();
          v9 = v19;
          v8 = v20;
        }
        ++v11;
      }
      while ( v11 != &v9[v8] );
    }
    if ( v9 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
  }
  else
  {
    v10 = 0;
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v10;
}

