__int64 __fastcall sub_C17F00(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // r12d
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rdi
  char v16; // [rsp+1Fh] [rbp-59h] BYREF
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h]

  v5 = ((unsigned int)sub_BFE5A0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2320LL)) >> 3) & 7;
  if ( (_BYTE)v5 == 7 )
    v5 = 1;
  v6 = sub_21F90D0();
  if ( *a4 == v6 )
    sub_21FFE60(&v17, a4);
  else
    sub_21F97A0(&v17, a4);
  v7 = sub_A62D20(*(_QWORD **)(a1 + 16), a3);
  v8 = sub_22028C0(a4, v7, v5, &v16);
  v9 = *(unsigned __int8 *)(a1 + 8);
  if ( !(_BYTE)v9 )
    v9 = sub_C104C0(a1, a2, v8);
  if ( v6 == v17 )
  {
    if ( v18 )
    {
      v11 = 24LL * *(_QWORD *)(v18 - 8);
      v12 = v18 + v11;
      if ( v18 != v18 + v11 )
      {
        while ( 1 )
        {
          v13 = v12 - 24;
          v14 = v12 - 24;
          if ( v6 == *(_QWORD *)(v12 - 24) )
          {
            sub_A4F010(v14);
            if ( v18 == v13 )
            {
LABEL_18:
              operator delete[]((void *)(v12 - 32), 24LL * *(_QWORD *)(v12 - 32) + 8);
              return v9;
            }
          }
          else
          {
            sub_21F9830(v14);
            if ( v13 == v18 )
              goto LABEL_18;
          }
          v12 -= 24;
        }
      }
      operator delete[]((void *)(v18 - 8), v11 + 8);
    }
  }
  else
  {
    sub_21F9830(&v17);
  }
  return v9;
}
