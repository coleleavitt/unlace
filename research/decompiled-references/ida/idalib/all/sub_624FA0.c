__int64 __fastcall sub_624FA0(__int64 a1, char a2)
{
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  char v7; // dl
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 result; // rax
  void *v12; // rdi
  __int64 v13; // rbp
  __int64 i; // r14
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rbp
  __int64 j; // r14
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-60h]
  unsigned __int64 v23; // [rsp+18h] [rbp-50h]
  _QWORD v24[9]; // [rsp+20h] [rbp-48h] BYREF

  v24[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 1672) + 2328LL;
  v5 = sub_7BE710(v4, v3, -1, 65);
  *(_QWORD *)(a1 + 16) = 0;
  LODWORD(v6) = 0;
  v23 = v5;
  v21 = a1 + 32;
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v7 = sub_7BEFD0(v4, *(_QWORD *)(a1 + 8), v24, (int)v6, 65);
    v8 = -1;
    if ( v7 )
      v8 = v24[0];
    v9 = *(int *)(a1 + 16);
    v10 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 24) = v8;
    sub_7BEA80(v4, v10, v21, v9, 83);
    result = (**(__int64 (__fastcall ***)(__int64))a1)(a1);
    *(_DWORD *)(a1 + 96) = result;
    if ( (_DWORD)result )
      return result;
    if ( !a2 )
    {
      *(_QWORD *)(a1 + 88) = 0;
      if ( (unsigned int)sub_622090(
                           *(_QWORD *)(a1 + 8),
                           *(_QWORD *)(a1 + 24),
                           (__int64 (__fastcall *)(unsigned __int64, const char *, _QWORD, __int64))sub_6228F0,
                           a1) != 1 )
        return *(unsigned int *)(a1 + 96);
      v12 = *(void **)(a1 + 64);
      if ( v12 )
      {
        *(_QWORD *)(a1 + 72) = 0;
        qfree(v12);
        *(_QWORD *)(a1 + 64) = 0;
        *(_QWORD *)(a1 + 80) = 0;
      }
      v13 = *(_QWORD *)(a1 + 8);
      v24[0] = *(_QWORD *)(a1 + 24);
      for ( i = sub_7BEB80(v24, v13, 65); i != -1; i = sub_7BEBF0(v24, v13, i, 65) )
      {
        v15 = sub_7BE710(v24, v13, i, 65);
        v16 = sub_3BDE50(*(_QWORD **)(v13 + 1672), v15);
        *(_QWORD *)(a1 + 88) = i;
        *(_QWORD *)(a1 + 56) = v16;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        *(_DWORD *)(a1 + 96) = result;
        if ( (_DWORD)result )
          return result;
      }
      v17 = *(_QWORD *)(a1 + 8);
      v24[0] = *(_QWORD *)(a1 + 24);
      for ( j = sub_7BEB80(v24, v17, 79); j != -1; j = sub_7BEBF0(v24, v17, j, 79) )
      {
        v19 = sub_7BE710(v24, v17, j, 79);
        v20 = sub_3BDE50(*(_QWORD **)(v17 + 1672), j);
        *(_QWORD *)(a1 + 88) = v19;
        *(_QWORD *)(a1 + 56) = v20;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
        *(_DWORD *)(a1 + 96) = result;
        if ( (_DWORD)result )
          return result;
      }
    }
    v6 = *(_QWORD *)(a1 + 16) + 1LL;
    *(_QWORD *)(a1 + 16) = v6;
    if ( v6 >= v23 )
      return 0;
  }
}
