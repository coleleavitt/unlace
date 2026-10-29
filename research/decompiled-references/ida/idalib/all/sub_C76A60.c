__int64 __fastcall sub_C76A60(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v7; // ax
  unsigned int v8; // r12d
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r14
  _WORD *v16; // rbp
  _WORD *v17; // rax
  __int64 v18; // rdx
  unsigned int *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r15
  _WORD *v22; // [rsp+0h] [rbp-98h]
  __int64 v23; // [rsp+14h] [rbp-84h] BYREF
  char v24; // [rsp+1Ch] [rbp-7Ch]
  unsigned int v25; // [rsp+20h] [rbp-78h] BYREF
  char v26; // [rsp+24h] [rbp-74h]

  v7 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7Fu) < 7 )
    return (unsigned int)sub_C767F0(a1, a2, a3, a4, a5, a6);
  if ( (unsigned __int8)v7 > 8u )
  {
    if ( (_BYTE)v7 == 20 )
      return (unsigned int)sub_C76C00(a1, *(_QWORD *)(a2 + 16));
    return (unsigned int)sub_C767F0(a1, a2, a3, a4, a5, a6);
  }
  v10 = *(_QWORD *)(a2 + 16);
  v11 = *a1;
  v25 = 0;
  v26 &= ~1u;
  v8 = sub_C39A10((__int64)&v25, v11, v10, a4, a5);
  if ( (_BYTE)v8 )
  {
    v12 = *(_QWORD *)(a2 + 16);
    if ( v25 == 10 )
    {
      v15 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      v16 = sub_BFA620((_WORD *)a2);
      v17 = sub_BFA620((_WORD *)a2);
      v18 = *(unsigned int *)(a2 + 4);
      v19 = &v25;
      v22 = &v17[4 * v18];
      if ( v16 != v22 )
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v16 + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(v20 + 8) & 0xF) != 0 )
            v20 = sub_F64F00(**(_QWORD **)(*(_QWORD *)v16 + 16LL));
          v16 += 4;
          v21 = sub_F63270(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL));
          v19 = (unsigned int *)(*((_QWORD *)v19 + 1) + 56LL * (unsigned int)sub_C30BC0(v15, v21));
          if ( v22 == v16 )
            break;
          v15 = v21;
        }
      }
      sub_A54D20(a1[2], (int *)v19);
    }
    else
    {
      v13 = (__int64 *)sub_E33C10(*a1, *(_QWORD *)(a2 + 16), 108, 0);
      v14 = sub_EEC8C0(v12);
      if ( v13 )
      {
        v23 = v14;
        v24 = 1;
        sub_AEC610(v13, &v23);
      }
      v8 = 0;
    }
  }
  if ( v25 > 1 )
    sub_A4F8E0((int *)&v25);
  return v8;
}
