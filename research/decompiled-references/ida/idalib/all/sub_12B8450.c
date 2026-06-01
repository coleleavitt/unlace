void __fastcall sub_12B8450(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  _QWORD *v17; // r14
  __int64 v18; // rax
  _DWORD v19[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v19[0] = 3053;
  v4 = sub_21B6DA0(a2, v19, 1);
  v5 = a2[1];
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
    v19[0] = 3033;
    v8 = sub_21B6DA0(a2, v19, 1);
    v9 = a2[1];
    v10 = (_QWORD *)(v9 + 8LL * (unsigned int)v8);
    v11 = (_QWORD *)(v9 + 8 * HIDWORD(v8));
    if ( v10 == v11 )
      goto LABEL_9;
    while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3033) )
    {
      if ( v11 == ++v10 )
        goto LABEL_9;
    }
    if ( v11 == v10 )
      goto LABEL_9;
    do
    {
      v13 = *v10;
      if ( *(_QWORD *)(*v10 + 16LL) )
        v13 = *(_QWORD *)(*v10 + 16LL);
      ++v10;
      *(_BYTE *)(v13 + 44) |= 1u;
      if ( v10 == v11 )
        break;
      while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3033) )
      {
        if ( v11 == ++v10 )
          goto LABEL_28;
      }
    }
    while ( v10 != v11 );
LABEL_28:
    v19[0] = 3055;
    v14 = sub_21B6DA0(a2, v19, 1);
    v15 = a2[1];
    v16 = (_QWORD *)(v15 + 8LL * (unsigned int)v14);
    v17 = (_QWORD *)(v15 + 8 * HIDWORD(v14));
    if ( v16 == v17 )
      goto LABEL_9;
    while ( !*v16 || !(unsigned __int8)sub_21B9810(*v16, 3055) )
    {
      if ( v17 == ++v16 )
      {
        sub_12B7B50(a1, a2, a3);
        return;
      }
    }
    if ( v16 == v17 )
    {
LABEL_9:
      sub_12B7B50(a1, a2, a3);
    }
    else
    {
      do
      {
        v18 = *(_QWORD *)(*v16 + 16LL);
        if ( !v18 )
          v18 = *v16;
        ++v16;
        *(_BYTE *)(v18 + 44) |= 1u;
        if ( v16 == v17 )
          break;
        while ( !*v16 || !(unsigned __int8)sub_21B9810(*v16, 3055) )
        {
          if ( v17 == ++v16 )
            return;
        }
      }
      while ( v17 != v16 );
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
      while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
      {
        if ( v7 == ++v6 )
          return;
      }
    }
    while ( v7 != v6 );
  }
}
