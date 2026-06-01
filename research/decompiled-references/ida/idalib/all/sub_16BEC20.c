void __fastcall sub_16BEC20(_QWORD *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // r12
  unsigned __int8 *v18; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v6 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), a3);
  if ( v6 )
  {
    v11 = v6;
    v18 = (unsigned __int8 *)sub_A71600(*(_QWORD *)(a1[1] + 248LL), v6);
    v16 = sub_F67800(&v18, v11, v12, v13, v14, v15);
    sub_16BEC20(a1, v16, v18, a4);
  }
  else
  {
    switch ( a2 )
    {
      case 0:
      case 1:
        return;
      case 2:
      case 3:
      case 4:
        v17 = a1[1];
        sub_168B9B0((__int64)&v18, v17 + 8, 6130);
        sub_16B71B0(&v18, 0);
        sub_18CAED0(v17, a4, *a1, &v18);
        if ( v18 )
        {
          if ( v19 )
            sub_1580C40(v19, (unsigned __int64)v18);
        }
        break;
      case 5:
        sub_16BE8B0(a1, a3, v7, v8, v9, v10);
        break;
    }
  }
}
