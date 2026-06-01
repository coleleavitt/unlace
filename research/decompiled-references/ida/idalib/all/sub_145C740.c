__int64 __fastcall sub_145C740(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4)
{
  unsigned __int16 v7; // r12
  __int16 v8; // r14
  char v9; // al
  __int64 v10; // rax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  void *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = *(_WORD *)(a2 + 16);
  v8 = *(_WORD *)(a2 + 18);
  if ( v7 != 6 && (v8 & 0x40) == 0 )
  {
    v9 = sub_141A630(v7);
    if ( v7 != 1 && !v9 )
    {
      v10 = *(_QWORD *)(a2 + 8);
      if ( v10 )
        return *(_QWORD *)(v10 + 16) + 16LL;
    }
  }
  if ( (v8 & 8) != 0 )
  {
    v12 = *(unsigned int *)(a2 + 4);
    v13 = a3[1];
    if ( v12 != v13 )
    {
      if ( v12 >= v13 )
      {
        if ( v12 > a3[2] )
        {
          sub_2236E10(a3, a3 + 3, *(unsigned int *)(a2 + 4), 1);
          v13 = a3[1];
        }
        v14 = *a3;
        v15 = (void *)(*a3 + v13);
        if ( v15 != (void *)(*a3 + v12) )
        {
          memset(v15, 0, v12 - v13);
          v14 = *a3;
        }
        a3[1] = v12;
        goto LABEL_17;
      }
      a3[1] = v12;
    }
  }
  v14 = *a3;
LABEL_17:
  v16 = *(_QWORD *)(a1 + 88);
  v17 = *(_QWORD *)(a1 + 56);
  v18[0] = v14;
  sub_13D1B40(a2, v18, v16, v17, a4);
  return v18[0];
}
