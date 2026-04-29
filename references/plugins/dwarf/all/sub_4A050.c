void __fastcall sub_4A050(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(__int64, __int64))
{
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r11
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v17; // [rsp+8h] [rbp-50h]
  __int64 *v18; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+10h] [rbp-48h]

  if ( a5 )
  {
    v8 = a4;
    v9 = a5;
    if ( a4 )
    {
      if ( a5 + a4 == 2 )
      {
LABEL_9:
        v18 = (__int64 *)a2;
        if ( a6(a2, a1) )
          sub_49CF0(a1, v18);
      }
      else
      {
        while ( 1 )
        {
          v19 = a2;
          if ( v9 >= v8 )
          {
            v14 = v9 / 2;
            v17 = a2 + 144 * (v9 / 2);
            v15 = sub_452B0(a1, a2, v17, a6);
            v13 = v19;
            v11 = v15;
            v10 = 0x8E38E38E38E38E39LL * ((v15 - a1) >> 4);
          }
          else
          {
            v10 = v8 / 2;
            v11 = a1 + 144 * (v8 / 2);
            v12 = sub_45220(a2, a3, v11, a6);
            v13 = v19;
            v17 = v12;
            v14 = 0x8E38E38E38E38E39LL * ((v12 - v19) >> 4);
          }
          v9 -= v14;
          v20 = sub_2D3E0(v11, v13, v17);
          sub_4A050(a1, v11, v20, v10, v14, a6);
          v8 -= v10;
          if ( !v8 || !v9 )
            break;
          a1 = v20;
          a2 = v17;
          if ( v9 + v8 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}
