__int64 __fastcall sub_C930B0(__int64 *a1, char a2, char a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rsi
  int v16; // eax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 *v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // [rsp+8h] [rbp-50h]
  __int64 v26[8]; // [rsp+18h] [rbp-40h] BYREF

  v9 = *a1;
  if ( a2 )
  {
    v18 = *a1;
    v26[0] = a6 | 4;
    v25 = a6 | 4;
    result = sub_C80B80(v18, 13, a5, v26);
    if ( (_BYTE)result )
    {
      v20 = *a1;
      v21 = (__int64 *)(*(_QWORD *)(a6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v26[0] = v25;
      v22 = *v21;
      if ( *(_BYTE *)(v22 + 16) != 14 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v24 + 16) != 14 )
          BUG();
        v22 = sub_F3F310(v22, 13, v24, v19);
      }
      v23 = sub_CC2440(*(_QWORD *)(v20 + 488), *(_QWORD *)(v22 + 32));
      return sub_C80210(v20, v23, a4, v26);
    }
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 488);
    if ( a4 && a3 == 1 )
    {
      v11 = *(_QWORD *)(a6 + 8);
      v12 = sub_CC2440(v10, v11);
      return sub_C8ED90(v9, v12, v11, a6, v13);
    }
    else
    {
      v15 = *(_QWORD *)(a6 + 8);
      v26[0] = a6 | 4;
      v16 = sub_CC2440(v10, v15);
      return sub_C80B80(v9, v16, a5, v26);
    }
  }
  return result;
}

