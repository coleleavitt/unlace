unsigned __int64 *__fastcall sub_3BD220(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  _QWORD *v13; // rax
  _DWORD *v14; // rax
  __int64 *v15; // r15
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v20; // [rsp+0h] [rbp-48h]

  do
  {
    while ( 1 )
    {
      v9 = a5[1];
      if ( a2 >= v9 )
        break;
      v10 = *a5;
      if ( a2 >= *a5 )
        v10 = a2;
      if ( v9 > a3 )
        v9 = a3;
      v11 = v10;
      a2 = v9;
      if ( v9 < v10 || v10 == v9 )
        return a5;
      do
      {
        v15 = *(__int64 **)(a1 + 1016);
        v16 = sub_8B8E80(v15, v11);
        v14 = nullptr;
        if ( v16 )
        {
          v17 = *v15;
          v18 = v16 >> *(_DWORD *)(*v15 + 8);
          if ( (_DWORD)v18 == *((_DWORD *)v15 + 18) )
          {
            v12 = v15[10];
          }
          else
          {
            *((_DWORD *)v15 + 18) = v18;
            v20 = v16;
            v12 = sub_8BCA60(v17, (unsigned int)v18, 1);
            v16 = v20;
            v15[10] = v12;
          }
          *(_BYTE *)(v12 - 2) = 1;
          v13 = (_QWORD *)*v15;
          *((_BYTE *)v15 + 100) = 1;
          v14 = (_DWORD *)(v15[10] + (v16 & (*v13 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
        }
        ++v11;
        *v14 = 256;
      }
      while ( v11 < a2 );
    }
    a5 += 2;
  }
  while ( a5 != (unsigned __int64 *)(*a4 + 16LL * a4[1]) );
  return nullptr;
}
