__int64 __fastcall sub_69C6E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rax
  void (__fastcall ***v17)(void *); // r12
  bool v18; // zf
  __int64 v19; // rsi
  _QWORD *v20; // rcx
  _QWORD *v21; // r14
  unsigned __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rdi
  void (__fastcall ***v25)(void *); // r14
  char v26[8]; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+10h] [rbp-C0h]
  __int64 v28; // [rsp+18h] [rbp-B8h]
  _BYTE v29[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = a1 + 96;
  sub_11C7890(a1 + 96);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4560);
  v28 = 0;
  v27 = v4;
  v6 = *(_QWORD *)(a1 + 4624);
  if ( v6 )
  {
    if ( v5 == *(_DWORD *)(v6 - 4) )
      goto LABEL_3;
  }
  else if ( !v5 )
  {
    goto LABEL_3;
  }
  *(_BYTE *)(a1 + 4744) = 0;
  sub_11C7890(v2);
  sub_786C50(a1 + 4544, *(_QWORD *)(a1 + 8), a1 + 4360, v2, a1 + 4648, a1 + 4504, 1);
  v10 = *(_QWORD *)(a1 + 4624);
  if ( v10 )
    v11 = *(_DWORD *)(v10 - 4);
  else
    v11 = 0;
  sub_787B60(
    a1 + 4544,
    v11 - *(_DWORD *)(a1 + 4560),
    v10 + 8 * *(_DWORD *)(a1 + 4560),
    v10 + 8 * *(_DWORD *)(a1 + 4560),
    v8,
    v9);
  v12 = *(_QWORD *)(a1 + 4704);
  if ( !v12 )
  {
    v12 = sub_186B270(0x68u);
    sub_781140(v12, *(_QWORD *)(a1 + 8));
    v25 = *(void (__fastcall ****)(void *))(a1 + 4704);
    ++*(_DWORD *)(v12 + 8);
    if ( v25 )
    {
      v18 = (*((_DWORD *)v25 + 2))-- == 1;
      if ( v18 )
      {
        (**v25)(v25);
        sub_186B220(v25);
      }
    }
    *(_QWORD *)(a1 + 4704) = v12;
  }
  a2 = a1 + 96;
  sub_7826B0(v12, v2, a1 + 4648);
  v13 = *(_QWORD *)(a1 + 4624);
  if ( v13 )
    v14 = *(_DWORD *)(v13 - 4);
  else
    v14 = 0;
  *(_DWORD *)(a1 + 4560) = v14;
  sub_18290A0(*(_QWORD *)(a1 + 8));
  v6 = *(_QWORD *)(a1 + 4624);
  v5 = *(_DWORD *)(a1 + 4560);
  if ( v6 )
    v15 = *(_DWORD *)(v6 - 4);
  else
    v15 = 0;
  if ( v5 != v15 )
  {
    if ( v6 )
      goto LABEL_5;
LABEL_17:
    result = 0;
    if ( v5 )
      return result;
    goto LABEL_18;
  }
LABEL_3:
  if ( !*(_BYTE *)(a1 + 4744) )
  {
    sub_7811A0(v26, a2);
    v17 = *(void (__fastcall ****)(void *))(a1 + 4696);
    if ( v17 )
    {
      v18 = (*((_DWORD *)v17 + 2))-- == 1;
      if ( v18 )
      {
        (**v17)(v17);
        sub_186B220(v17);
      }
    }
    v19 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 4696) = 0;
    sub_ED2A30(v29, v19, 0, 1, 0);
    sub_782860((unsigned int)v26, v2, a1 + 4648, a1 + 4360, (unsigned int)v29, a1 + 4704);
    v20 = *(_QWORD **)(a1 + 4640);
    v21 = v20;
    if ( v20 )
    {
      v22 = (unsigned __int64)&v20[*((unsigned int *)v20 - 1)];
      if ( (unsigned __int64)v20 >= v22 )
        goto LABEL_32;
      do
      {
        while ( 1 )
        {
          v23 = *v21;
          if ( *v21 )
          {
            v24 = *(_QWORD *)(a1 + 4632);
            v18 = (*(_DWORD *)(v23 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v21 >= v22 )
            goto LABEL_31;
        }
        sub_15D7BC0(v24, v23);
        ++v21;
      }
      while ( (unsigned __int64)v21 < v22 );
LABEL_31:
      v21 = *(_QWORD **)(a1 + 4640);
      if ( v21 )
LABEL_32:
        *((_DWORD *)v21 - 1) = 0;
    }
    sub_ED6190(v29, a1 + 4632);
    *(_BYTE *)(a1 + 4744) = 1;
    sub_ED44E0(v29);
    v5 = *(_DWORD *)(a1 + 4560);
    v6 = *(_QWORD *)(a1 + 4624);
  }
  if ( !v6 )
    goto LABEL_17;
LABEL_5:
  result = *(unsigned int *)(v6 - 4);
  if ( v5 != (_DWORD)result )
    return result;
LABEL_18:
  if ( *(_BYTE *)(a1 + 4744) )
  {
    v16 = *(_QWORD *)(a1 + 4640);
    if ( v16 )
      return *(unsigned int *)(v16 - 4);
    else
      return 0;
  }
  return result;
}

