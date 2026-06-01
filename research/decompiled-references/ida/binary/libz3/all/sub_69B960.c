__int64 __fastcall sub_69B960(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rax
  int v5; // edx
  __int64 result; // rax
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // r12
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  void (__fastcall ***v15)(void *); // r12
  bool v16; // zf
  __int64 v17; // rsi
  _QWORD *v18; // rcx
  _QWORD *v19; // r14
  unsigned __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rdi
  void (__fastcall ***v23)(void *); // r14
  char v24[8]; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+10h] [rbp-C0h]
  __int64 v26; // [rsp+18h] [rbp-B8h]
  _BYTE v27[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = a1 + 96;
  sub_11C7890(a1 + 96);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4560);
  v26 = 0;
  v25 = v4;
  result = *(_QWORD *)(a1 + 4624);
  if ( result )
  {
    if ( v5 == *(_DWORD *)(result - 4) )
      goto LABEL_3;
LABEL_6:
    *(_BYTE *)(a1 + 4744) = 0;
    sub_11C7890(v2);
    sub_786C50(a1 + 4544, *(_QWORD *)(a1 + 8), a1 + 4360, v2, a1 + 4648, a1 + 4504, 1);
    v9 = *(_QWORD *)(a1 + 4624);
    if ( v9 )
      v10 = *(_DWORD *)(v9 - 4);
    else
      v10 = 0;
    sub_787B60(
      a1 + 4544,
      v10 - *(_DWORD *)(a1 + 4560),
      v9 + 8 * *(_DWORD *)(a1 + 4560),
      v9 + 8 * *(_DWORD *)(a1 + 4560),
      v7,
      v8);
    v11 = *(_QWORD *)(a1 + 4704);
    if ( !v11 )
    {
      v11 = sub_186B270(0x68u);
      sub_781140(v11, *(_QWORD *)(a1 + 8));
      v23 = *(void (__fastcall ****)(void *))(a1 + 4704);
      ++*(_DWORD *)(v11 + 8);
      if ( v23 )
      {
        v16 = (*((_DWORD *)v23 + 2))-- == 1;
        if ( v16 )
        {
          (**v23)(v23);
          sub_186B220(v23);
        }
      }
      *(_QWORD *)(a1 + 4704) = v11;
    }
    a2 = a1 + 96;
    sub_7826B0(v11, v2, a1 + 4648);
    v12 = *(_QWORD *)(a1 + 4624);
    if ( v12 )
      v13 = *(_DWORD *)(v12 - 4);
    else
      v13 = 0;
    *(_DWORD *)(a1 + 4560) = v13;
    sub_18290A0(*(_QWORD *)(a1 + 8));
    v14 = *(_QWORD *)(a1 + 4624);
    if ( v14 )
      result = *(unsigned int *)(v14 - 4);
    else
      result = 0;
    if ( *(_DWORD *)(a1 + 4560) != (_DWORD)result )
      return result;
    goto LABEL_3;
  }
  if ( v5 )
    goto LABEL_6;
LABEL_3:
  if ( !*(_BYTE *)(a1 + 4744) )
  {
    sub_7811A0(v24, a2);
    v15 = *(void (__fastcall ****)(void *))(a1 + 4696);
    if ( v15 )
    {
      v16 = (*((_DWORD *)v15 + 2))-- == 1;
      if ( v16 )
      {
        (**v15)(v15);
        sub_186B220(v15);
      }
    }
    v17 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 4696) = 0;
    sub_ED2A30(v27, v17, 0, 1, 0);
    sub_782860((unsigned int)v24, v2, a1 + 4648, a1 + 4360, (unsigned int)v27, a1 + 4704);
    v18 = *(_QWORD **)(a1 + 4640);
    v19 = v18;
    if ( v18 )
    {
      v20 = (unsigned __int64)&v18[*((unsigned int *)v18 - 1)];
      if ( (unsigned __int64)v18 >= v20 )
        goto LABEL_26;
      do
      {
        while ( 1 )
        {
          v21 = *v19;
          if ( *v19 )
          {
            v22 = *(_QWORD *)(a1 + 4632);
            v16 = (*(_DWORD *)(v21 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( (unsigned __int64)++v19 >= v20 )
            goto LABEL_25;
        }
        sub_15D7BC0(v22, v21);
        ++v19;
      }
      while ( (unsigned __int64)v19 < v20 );
LABEL_25:
      v19 = *(_QWORD **)(a1 + 4640);
      if ( v19 )
LABEL_26:
        *((_DWORD *)v19 - 1) = 0;
    }
    sub_ED6190(v27, a1 + 4632);
    *(_BYTE *)(a1 + 4744) = 1;
    return sub_ED44E0(v27);
  }
  return result;
}

