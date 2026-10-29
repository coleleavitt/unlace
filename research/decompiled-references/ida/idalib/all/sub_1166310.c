void __fastcall sub_1166310(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  _QWORD *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _DWORD v19[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v19[0] = 3053;
  v4 = sub_21B6DA0(a2, v19, 1);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    goto LABEL_5;
  while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
  {
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  if ( v7 == v6 )
  {
LABEL_5:
    v19[0] = 3052;
    v8 = sub_21B6DA0(a2, v19, 1);
    v9 = *(_QWORD *)(a2 + 8);
    v10 = (_QWORD *)(v9 + 8LL * (unsigned int)v8);
    v11 = (_QWORD *)(v9 + 8 * HIDWORD(v8));
    if ( v10 == v11 )
      goto LABEL_9;
    while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3052) )
    {
      if ( v11 == ++v10 )
        goto LABEL_9;
    }
    if ( v11 == v10 )
    {
LABEL_9:
      v19[0] = 3055;
      v12 = sub_21B6DA0(a2, v19, 1);
      v13 = *(_QWORD *)(a2 + 8);
      v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
      v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
      if ( v14 == v15 )
        goto LABEL_13;
      while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3055) )
      {
        if ( v15 == ++v14 )
          goto LABEL_13;
      }
      if ( v15 == v14 )
      {
LABEL_13:
        sub_1166100(a1, a2, a3);
      }
      else
      {
        do
        {
          v18 = *(_QWORD *)(*v14 + 16LL);
          if ( !v18 )
            v18 = *v14;
          ++v14;
          *(_BYTE *)(v18 + 44) |= 1u;
          if ( v14 == v15 )
            break;
          while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3055) )
          {
            if ( v15 == ++v14 )
              return;
          }
        }
        while ( v14 != v15 );
      }
    }
    else
    {
      do
      {
        v17 = *v10;
        if ( *(_QWORD *)(*v10 + 16LL) )
          v17 = *(_QWORD *)(*v10 + 16LL);
        ++v10;
        *(_BYTE *)(v17 + 44) |= 1u;
        if ( v10 == v11 )
          break;
        while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3052) )
        {
          if ( v11 == ++v10 )
            return;
        }
      }
      while ( v11 != v10 );
    }
  }
  else
  {
    do
    {
      v16 = *v6;
      if ( *(_QWORD *)(*v6 + 16LL) )
        v16 = *(_QWORD *)(*v6 + 16LL);
      ++v6;
      *(_BYTE *)(v16 + 44) |= 1u;
      if ( v6 == v7 )
        break;
      while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
      {
        if ( v7 == ++v6 )
          return;
      }
    }
    while ( v7 != v6 );
  }
}
