void __fastcall sub_183B3E0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  int v20; // r8d
  __int64 v21; // rdi
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v23[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( !a2 )
    return;
  sub_B88650(a2, 1);
  v10 = *(_DWORD *)(a1 + 4208);
  v11 = *(_QWORD *)(a1 + 4192);
  if ( v10 )
  {
    v9 = (unsigned int)(v10 - 1);
    v8 = (unsigned int)v9 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v12 = (__int64 *)(v11 + 16 * v8);
    v13 = *v12;
    if ( a2 != *v12 )
    {
      v19 = 1;
      if ( v13 == -4096 )
        goto LABEL_5;
      while ( 1 )
      {
        v20 = v19 + 1;
        v8 = (unsigned int)v9 & (v19 + (_DWORD)v8);
        v12 = (__int64 *)(v11 + 16LL * (unsigned int)v8);
        v21 = *v12;
        if ( a2 == *v12 )
          break;
        v19 = v20;
        if ( v21 == -4096 )
          goto LABEL_5;
      }
    }
    *v12 = -8192;
    --*(_DWORD *)(a1 + 4200);
    ++*(_DWORD *)(a1 + 4204);
  }
LABEL_5:
  if ( a4 )
  {
    v22 = *(_QWORD *)(a2 + 48);
    v14 = sub_C1BEF0((__int64)&v22, v11, v8, v9);
    v23[0] = a4;
    v15 = v14;
    v16 = sub_EEC140(a4);
    v17 = sub_18C4330(a1, a3, v16, v23, 1, v15);
  }
  else
  {
    v23[0] = *(_QWORD *)(a2 + 48);
    v18 = sub_C1BEF0((__int64)v23, v11, v8, v9);
    v17 = sub_18C4330(a1, a3, a3, 0, 0, v18);
  }
  sub_B74780(a2, v17 & 0xFFFFFFFFFFFFFFFELL);
}
