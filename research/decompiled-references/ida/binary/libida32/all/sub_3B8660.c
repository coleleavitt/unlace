unsigned int *__fastcall sub_3B8660(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4, unsigned int *a5)
{
  unsigned int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // r12d
  __int64 v12; // rax
  _QWORD *v13; // rax
  _DWORD *v14; // rax
  __int64 *v15; // r13
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
        v15 = *(__int64 **)(a1 + 1008);
        v16 = sub_8954D0(v15, v11);
        v14 = nullptr;
        if ( v16 )
        {
          v17 = *v15;
          v18 = v16 >> *(_DWORD *)(*v15 + 8);
          if ( (_DWORD)v18 == *((_DWORD *)v15 + 16) )
          {
            v12 = v15[9];
          }
          else
          {
            *((_DWORD *)v15 + 16) = v18;
            v20 = v16;
            v12 = sub_898D20(v17, (unsigned int)v18, 1);
            v16 = v20;
            v15[9] = v12;
          }
          *(_BYTE *)(v12 - 2) = 1;
          v13 = (_QWORD *)*v15;
          *((_BYTE *)v15 + 92) = 1;
          v14 = (_DWORD *)(v15[9] + (v16 & (*v13 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
        }
        ++v11;
        *v14 = 256;
      }
      while ( v11 < a2 );
    }
    a5 += 2;
  }
  while ( a5 != (unsigned int *)(*a4 + 8LL * a4[1]) );
  return nullptr;
}

