__int64 __fastcall sub_C4A230(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r12d
  __int64 *v13; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // [rsp+0h] [rbp-B8h] BYREF
  char v20; // [rsp+4h] [rbp-B4h]
  unsigned int v21; // [rsp+40h] [rbp-78h] BYREF
  char v22; // [rsp+44h] [rbp-74h]

  v6 = *(__int64 **)a1;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( v8 == 32 )
  {
    sub_C1BDB0((__int64)v6, *(_QWORD *)(a2 + 16), v7, a4, a5);
    return (unsigned int)sub_C49020((__int64 **)a1, *(_QWORD *)(a2 + 24), v15, v16, v17, v18);
  }
  v9 = *(_QWORD *)(a2 + 24);
  v19 = 0;
  v20 &= ~1u;
  v21 = 0;
  v22 &= ~1u;
  v12 = sub_C15CD0((__int64)&v19, (__int64)v6, v7, a4, a5);
  if ( (_BYTE)v12 )
  {
    if ( !(unsigned __int8)sub_C15CD0((__int64)&v21, *(_QWORD *)a1, v9, v10, v11) )
      goto LABEL_10;
    v12 = sub_BFBA60(*(_QWORD *)a1, a2, v8, (__int64)&v19, (__int64)&v21);
    if ( !(_BYTE)v12 )
      goto LABEL_10;
    sub_A30FE0(*(_QWORD *)(a1 + 8), (int *)&v19);
  }
  else
  {
    v13 = *(__int64 **)a1;
    if ( !*(_DWORD *)(*(_QWORD *)a1 + 48LL) || !*((_BYTE *)v13 + 914) && !*((_BYTE *)v13 + 915) )
    {
LABEL_10:
      v12 = 0;
      goto LABEL_11;
    }
    *(_BYTE *)v13[3] = 1;
    sub_C15CD0((__int64)&v21, (__int64)v13, v9, v10, v11);
  }
LABEL_11:
  if ( v21 > 1 )
    sub_A2BBA0((int *)&v21);
  if ( v19 > 1 )
    sub_A2BBA0((int *)&v19);
  return v12;
}

