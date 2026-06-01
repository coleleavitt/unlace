unsigned __int64 __fastcall sub_1B33F80(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        double a7,
        double a8,
        int a9)
{
  _WORD **v11; // rcx
  _WORD **v12; // r12
  _WORD **v13; // r15
  _WORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v24; // rax
  _BYTE v28[200]; // [rsp+10h] [rbp-C8h] BYREF

  if ( !(unsigned __int8)sub_1B33C80(*a1, a2, a6, 49, a7, a8) )
    return 0;
  v11 = *(_WORD ***)(a3 + 8);
  v12 = &v11[*(unsigned int *)(a3 + 16)];
  v13 = v11;
  if ( v12 == v11 )
  {
LABEL_9:
    v24 = sub_168B6C0((__int64)a1);
    return sub_EBECB0(v24, a2, (__int16 *)a3, a4, a5, a6, a9);
  }
  else
  {
    while ( 1 )
    {
      v14 = *v13;
      if ( (*(_DWORD *)*v13 & 0x3C000) == 0 )
      {
        v15 = sub_168B6C0((__int64)a1);
        if ( !(unsigned __int8)sub_C3EA40((unsigned __int64)v14, v15, nullptr, v16, v17, v18) && (*v14 & 0x1FF) != 9 )
          break;
      }
      if ( v12 == ++v13 )
        goto LABEL_9;
    }
    v22 = sub_C00A40((unsigned __int64)v14, v15, v19, v20, v21);
    sub_168B9F0((__int64)v28, a1, v22, 0x11A0u, 0);
    sub_15F7200(v28);
    return 0;
  }
}
