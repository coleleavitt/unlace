_QWORD *__fastcall sub_C2F440(__int64 *a1, unsigned __int64 *a2)
{
  int v2; // ebp
  __int64 v4; // r13
  int v5; // ebp
  __int64 v6; // rdx
  unsigned int v7; // r12d
  _QWORD *v8; // r15
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *i; // rdx
  int v18; // [rsp+Ch] [rbp-5Ch]
  _QWORD v19[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD *v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-40h]

  v2 = *((_DWORD *)a1 + 4);
  if ( !v2 )
    return nullptr;
  v4 = *a1;
  v5 = v2 - 1;
  v20 = nullptr;
  v19[0] = sub_A4F710();
  v19[1] = v6;
  v21 = 0;
  v18 = 1;
  v7 = v5 & sub_C2F3C0(a2, (__int64)(a2 + 2));
  while ( 1 )
  {
    v8 = (_QWORD *)(v4 + 40LL * v7);
    if ( sub_A4F650(a2, v8) )
    {
      v9 = a2[3];
      if ( v9 == v8[3] )
      {
        v10 = (_QWORD *)a2[2];
        v11 = &v10[v9];
        if ( v10 == v11 )
          return v8;
        v12 = (_QWORD *)v8[2];
        if ( *v12 == *v10 )
          break;
      }
    }
LABEL_9:
    if ( sub_A4F650((_QWORD *)(v4 + 40LL * v7), v19) )
    {
      v13 = v8[3];
      if ( v13 == v21 )
      {
        v14 = (_QWORD *)v8[2];
        v15 = &v14[v13];
        if ( v14 == v15 )
          return nullptr;
        for ( i = v20; *v14 == *i; ++i )
        {
          if ( v15 == ++v14 )
            return nullptr;
        }
      }
    }
    v7 = v5 & (v18 + v7);
    ++v18;
  }
  while ( 1 )
  {
    ++v10;
    ++v12;
    if ( v11 == v10 )
      return v8;
    if ( *v10 != *v12 )
      goto LABEL_9;
  }
}
