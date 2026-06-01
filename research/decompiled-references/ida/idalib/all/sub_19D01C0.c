unsigned __int64 __fastcall sub_19D01C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rdx
  unsigned __int8 v7; // bp
  __int64 v8; // rbx
  __int64 i; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // r12
  __int64 *v21; // rbx
  __int64 v22[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = a4;
  v8 = *v6;
  v22[0] = a2;
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 35 > 1 )
    v8 = sub_F63050(v8, a2, v6, a4);
  for ( i = *(_QWORD *)(v8 + 24); ; i = *(_QWORD *)(v10 + 24) )
  {
    v10 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(unsigned __int8 *)(v10 + 16);
    if ( (unsigned int)(v11 - 35) > 1 )
      break;
    if ( (_BYTE)v11 == 36 )
      goto LABEL_6;
LABEL_12:
    ;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
    goto LABEL_14;
  v18 = sub_F63050(v10, a2, v11, a4);
  v10 = v18;
  if ( !v18 )
    goto LABEL_14;
  v11 = *(unsigned __int8 *)(v18 + 16);
  if ( (_BYTE)v11 != 36 )
    goto LABEL_12;
LABEL_6:
  v12 = sub_F62610(v10, a2, v11, a4, a5, a6);
  v13 = v12;
  if ( v12 )
  {
    result = sub_BAD910(v12, v22[0], v7, 0, 1, 0);
    if ( result )
      return result;
    result = sub_BADBA0(v13, (__int64)v22, v7, v15, v16, v17);
    if ( result )
      return result;
  }
LABEL_14:
  v19 = (*(_WORD *)(v8 + 18) & 0x3F8) + 48LL;
  v20 = (__int64 *)(v8 + v19 + 8LL * (*(_BYTE *)(v8 + 19) >> 2));
  v21 = (__int64 *)(v19 + v8);
  if ( v20 == v21 )
    return 0;
  while ( 1 )
  {
    result = sub_BAAC40(*v21, v22[0], v7, a4, a5, a6);
    if ( result )
      break;
    if ( v20 == ++v21 )
      return 0;
  }
  return result;
}
