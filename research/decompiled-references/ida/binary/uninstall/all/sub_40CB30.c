__int64 __fastcall sub_40CB30(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r12
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbp
  _QWORD *v21; // [rsp+0h] [rbp-88h]
  int v22; // [rsp+8h] [rbp-80h]
  int v23; // [rsp+Ch] [rbp-7Ch]
  __int64 v25; // [rsp+28h] [rbp-60h] BYREF
  int v26; // [rsp+30h] [rbp-58h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h]
  double v28; // [rsp+40h] [rbp-48h]
  __int64 v29; // [rsp+48h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 + 1 != a3 )
  {
    sub_409E40(a2, v5 + 1, a3, a4);
    return 1;
  }
  v23 = 1;
  v7 = sub_40FB00(32LL * v5);
  v22 = 0;
  if ( a3 > 1 )
  {
    v8 = a4;
    v21 = a4;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = a4[v23];
        if ( (unsigned int)sub_47BA50(0, v9, &v25) )
        {
          v18 = sub_48DF10("argument to math function didn't have numeric value", 0xFFFFFFFF);
          sub_48AFD0(a2, v18);
          v19 = sub_47B3B0(v9);
          sub_49F9F0(a2, v19);
LABEL_26:
          Tcl_Free(v7);
          return 1;
        }
        v10 = v22;
        v11 = 32LL * v22;
        v12 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL * v22);
        *(_DWORD *)(v11 + v7) = v12;
        if ( v12 != 1 )
          break;
LABEL_13:
        ++v23;
        ++v8;
        ++v21;
        ++v22;
        *(_QWORD *)(32 * v10 + v7 + 16) = v25;
        if ( v23 >= a3 )
          goto LABEL_14;
      }
      if ( !v12 )
        break;
      if ( v12 == 2 )
      {
        v16 = (_DWORD *)(v7 + v11);
        if ( (unsigned int)sub_47BF00(0, v9, v16 + 2) )
        {
          if ( (unsigned int)sub_47C250(a2, v9, v16 + 6) )
          {
            *v16 = 1;
            goto LABEL_13;
          }
          *v16 = 3;
        }
        else
        {
          *v16 = 0;
        }
      }
      else if ( v12 == 3 )
      {
        if ( (unsigned int)sub_40CA40(0, a2, 2, v21) )
          goto LABEL_26;
        v17 = sub_48B5D0(a2);
        sub_47C250(0, v17, v11 + v7 + 24);
        goto LABEL_20;
      }
LABEL_10:
      ++v23;
      ++v8;
      ++v21;
      ++v22;
      if ( v23 >= a3 )
        goto LABEL_14;
    }
    if ( (unsigned int)sub_40C920(0, a2, 2, v8) )
      goto LABEL_26;
    v15 = sub_48B5D0(a2);
    sub_47BF00(0, v15, v11 + v7 + 8);
LABEL_20:
    sub_48B350(a2);
    goto LABEL_10;
  }
LABEL_14:
  *__errno_location() = 0;
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *))a1)(*(_QWORD *)(a1 + 24), a2, v7, &v26);
  Tcl_Free(v7);
  result = v13;
  if ( !v13 )
  {
    if ( v26 )
    {
      if ( v26 != 3 )
        return sub_40C3D0(a2, v28);
      v20 = sub_47CDC0(v29, a2, v14);
    }
    else
    {
      v20 = sub_496740();
      *(_DWORD *)v20 = 0;
      *(_QWORD *)(v20 + 8) = 0;
      *(_QWORD *)(v20 + 32) = v27;
      *(_QWORD *)(v20 + 24) = &off_6560E0;
    }
    sub_48AFD0(a2, v20);
    return 0;
  }
  return result;
}

