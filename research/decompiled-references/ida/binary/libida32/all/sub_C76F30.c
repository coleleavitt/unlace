__int64 __fastcall sub_C76F30(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 i; // rax
  __int64 v10; // rdx
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = sub_C76EE0(a1) & 0xFFFFFFFFFFFFFFF0LL;
  v5 = *(_QWORD *)v2;
  v6 = *(unsigned __int8 *)(*(_QWORD *)v2 + 16LL);
  if ( (_BYTE)v6 == 34 )
    goto LABEL_2;
  v12 = (__int64 *)v2;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    v5 = sub_F3F310(v5, a2, v6, v3);
    if ( v5 )
    {
LABEL_2:
      v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 35;
      if ( (unsigned int)v8 > 1 )
        v7 = sub_F3F310(v7, a2, v8, v3);
      for ( i = *(_QWORD *)(v7 + 24); ; i = *(_QWORD *)(v5 + 24) )
      {
        v5 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
        v10 = *(unsigned __int8 *)(v5 + 16);
        if ( (unsigned int)(v10 - 35) > 1 )
        {
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
            return 0;
          v15 = sub_F3F310(v5, a2, v10, v3);
          v5 = v15;
          if ( !v15 )
            return 0;
          v10 = *(unsigned __int8 *)(v15 + 16);
        }
        if ( (_BYTE)v10 == 36 )
          return sub_F3E8D0(v5, a2, v10, v3, v4);
      }
    }
    v5 = *v12;
    LODWORD(v6) = *(unsigned __int8 *)(*v12 + 16);
  }
  v13 = (unsigned int)(v6 - 35);
  if ( (unsigned int)v13 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
      return 0;
    v5 = sub_F3F310(v5, a2, v13, v3);
    if ( !v5 )
      return 0;
  }
  do
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(unsigned __int8 *)(v5 + 16);
    if ( (unsigned int)(v10 - 35) > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
        return 0;
      v14 = sub_F3F310(v5, a2, v10, v3);
      v5 = v14;
      if ( !v14 )
        return 0;
      v10 = *(unsigned __int8 *)(v14 + 16);
    }
  }
  while ( (_BYTE)v10 != 36 );
  return sub_F3E8D0(v5, a2, v10, v3, v4);
}

