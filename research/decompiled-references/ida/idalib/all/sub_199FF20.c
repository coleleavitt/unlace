__int64 *__fastcall sub_199FF20(__int64 **a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 *result; // rax
  __int64 v10; // r13
  __int64 *v11; // rcx
  __int64 v12; // rsi
  __int64 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r14d
  __int64 v17; // rax
  _DWORD *v18; // r15
  unsigned int v19; // ebp
  __int64 v20; // r15
  unsigned int v21; // eax
  __int64 v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+10h] [rbp-48h] BYREF
  __int64 v24[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = **a1;
  if ( *(_BYTE *)(v6 + 1732) )
  {
    v7 = *(_QWORD **)(v6 + 1712);
    v8 = &v7[*(unsigned int *)(v6 + 1724)];
    if ( v7 == v8 )
      goto LABEL_7;
    while ( a3 != *v7 )
    {
      if ( v8 == ++v7 )
        goto LABEL_7;
    }
    result = a1[1];
    if ( *(_BYTE *)result )
    {
LABEL_7:
      result = (__int64 *)sub_B9ACA0(a2);
      v10 = (__int64)result;
      if ( !result )
        return result;
      v11 = a1[2];
      v12 = *((unsigned int *)v11 + 10);
      v16 = sub_1A2CB80(v11[4], v12, a2);
      if ( v16 )
      {
        v20 = (__int64)a1[2];
        v21 = sub_C00A40(a3, v12, (__int64)v13, v14, v15);
        v12 = a2;
        sub_1906AA0(v20, a2, v21, v16 - 1);
      }
      if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x2B )
      {
        v12 = (__int64)v24;
        v17 = a1[2][31];
        v24[0] = 0;
        v22 = v17;
        v18 = (_DWORD *)sub_B7D120(v10, v24);
        if ( v18 )
        {
          if ( (unsigned __int8)sub_B79700(v24[0])
            || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0
            || (*v18 & 0x20000) != 0 )
          {
            result = a1[1];
            if ( *(_BYTE *)result )
              return result;
          }
          else
          {
            v12 = v22;
            result = (__int64 *)sub_B7D2B0(v10, v22);
            v13 = a1[1];
            if ( *(_BYTE *)v13 && (_BYTE)result )
              return result;
          }
        }
      }
      v23 = 0;
      v24[0] = 0;
      v19 = sub_C00A40(a3, v12, (__int64)v13, v14, v15);
      result = (__int64 *)sub_1903850((__int64)a1[2], a2, v19, 0, 0, 0, &v23, v24, nullptr);
      if ( (_BYTE)result )
        return (__int64 *)sub_1903850((__int64)a1[2], a2, v19, 0, 0, 1u, &v23, v24, nullptr);
    }
  }
  else
  {
    if ( !sub_2236570(v6 + 1712, a3) )
      goto LABEL_7;
    result = a1[1];
    if ( *(_BYTE *)result )
      goto LABEL_7;
  }
  return result;
}
