void __fastcall sub_129CC80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  _DWORD v14[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v14[0] = 3055;
  v4 = sub_21B6DA0(a2, v14, 1);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    goto LABEL_5;
  while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3055) )
  {
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  if ( v7 == v6 )
  {
LABEL_5:
    v14[0] = 3052;
    v8 = sub_21B6DA0(a2, v14, 1);
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
    if ( v10 == v11 )
    {
LABEL_9:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 608LL))(a1, a2);
      sub_129C8E0(a1, a2, a3);
    }
    else
    {
      do
      {
        v13 = *v10;
        if ( *(_QWORD *)(*v10 + 16LL) )
          v13 = *(_QWORD *)(*v10 + 16LL);
        ++v10;
        *(_BYTE *)(v13 + 44) |= 1u;
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
      v12 = *v6;
      if ( *(_QWORD *)(*v6 + 16LL) )
        v12 = *(_QWORD *)(*v6 + 16LL);
      ++v6;
      *(_BYTE *)(v12 + 44) |= 1u;
      if ( v6 == v7 )
        break;
      while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3055) )
      {
        if ( v7 == ++v6 )
          return;
      }
    }
    while ( v7 != v6 );
  }
}
