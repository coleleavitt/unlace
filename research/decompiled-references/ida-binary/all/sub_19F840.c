__int64 __fastcall sub_19F840(QT::QAbstractItemView *a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // rbx
  __int64 (__fastcall ***bpt_kernel_interface)(_QWORD); // rax
  __int64 **v7; // r13
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  int v13; // r14d
  __int64 v14; // rbp
  const char *v15; // r15
  const char *v16; // rax
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // r12
  __int64 *v20; // [rsp+8h] [rbp-50h]
  int v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v5 = a2;
  bpt_kernel_interface = (__int64 (__fastcall ***)(_QWORD))get_bpt_kernel_interface(a1, a2);
  v7 = (__int64 **)(**bpt_kernel_interface)(bpt_kernel_interface);
  v20 = v7[1];
  if ( *(_DWORD *)(a2 + 12) != 3 )
  {
    v8 = *v7;
    v9 = (__int64)&(*v7)[(_QWORD)v20];
    if ( (__int64 *)v9 != *v7 )
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *(_DWORD *)(*v8 + 44) == 3 )
          break;
        if ( *(_QWORD *)(v10 + 56) >= *(_QWORD *)a2 )
        {
          v11 = *(_QWORD *)(v10 + 88);
          return sub_19F6E0(a1, v11, a3, a4, a5);
        }
        if ( (__int64 *)v9 == ++v8 )
          goto LABEL_7;
      }
    }
    goto LABEL_7;
  }
  v13 = (_DWORD)v20 - 1;
  if ( (int)v20 - 1 >= 0 )
  {
    v21 = 0x7FFFFFFF;
    v22 = -1;
    v14 = v13;
    while ( 1 )
    {
      v19 = (_DWORD *)(*v7)[v14];
      if ( v19[11] != 3 )
      {
LABEL_21:
        v13 = v22;
        if ( v22 < 0 )
          break;
LABEL_22:
        if ( (int)v20 > v13 )
        {
          v11 = *(_QWORD *)((*v7)[v13] + 88);
          return sub_19F6E0(a1, v11, a3, a4, a5);
        }
        break;
      }
      v15 = (const char *)sub_19A9A0(*(unsigned int *)(v5 + 8), a2);
      v16 = (const char *)sub_19A9A0((unsigned int)v19[10], a2);
      a2 = (__int64)v15;
      v17 = strcmp(v16, v15);
      if ( v17 < 0 )
        goto LABEL_22;
      if ( !v17 )
      {
        if ( (int)*(_QWORD *)v5 >= 0 )
        {
          v18 = *(_QWORD *)v5 - v19[8];
          if ( v18 <= 0 )
            v18 = v19[8] - *(_QWORD *)v5;
          if ( v18 >= v21 )
            goto LABEL_19;
          v21 = v18;
        }
        v22 = v13;
      }
LABEL_19:
      --v13;
      --v14;
      if ( v13 == -1 )
        goto LABEL_21;
    }
  }
LABEL_7:
  v11 = -1;
  return sub_19F6E0(a1, v11, a3, a4, a5);
}
