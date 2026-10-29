__int64 __fastcall sub_9DF820(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int *v4; // rax
  __int64 *v5; // rcx
  unsigned int *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v19[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v18 = v3;
  if ( (v3 & 1) != 0 )
  {
    v4 = (unsigned int *)(v3 & 0xFFFFFFFFFFFFFFFELL);
    v5 = (__int64 *)(v4 + 2);
    v6 = &v4[2 * *v4 + 2];
    if ( v6 != v4 + 2 )
      goto LABEL_3;
    return 0;
  }
  v5 = &v18;
  v6 = (unsigned int *)v19;
  if ( !v3 )
    return 0;
LABEL_3:
  v7 = v5;
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 )
    {
      if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 40 <= 6 )
      {
        v9 = sub_B73640(*v7);
        v11 = sub_9DF520(a1, v9, a3, v10);
        v19[0] = *(_QWORD *)(v8 + 48);
        v12 = sub_B8C330(v8);
        if ( (unsigned __int8)sub_F62A90(v19, v12) )
          break;
      }
    }
    if ( v6 == (unsigned int *)++v7 )
      return 0;
  }
  return sub_9DDEC0(a1, v8, (__int64)v11, v13, v14, v15);
}
