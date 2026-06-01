void __fastcall sub_488350(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  __int64 v10; // r14
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 *v14; // rbp
  __int64 *v15; // rax
  char *v16; // r11
  __int64 v17; // r13
  char *v18; // rax
  int v19; // r9d
  __int64 *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rax
  __int64 *v26; // [rsp+0h] [rbp-80h]
  __int64 v27; // [rsp+8h] [rbp-78h]
  char v28; // [rsp+17h] [rbp-69h]
  __int64 v29; // [rsp+20h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-50h]
  __int64 *v31; // [rsp+38h] [rbp-48h]
  __int64 *v32; // [rsp+38h] [rbp-48h]
  __int64 *v33; // [rsp+38h] [rbp-48h]

  if ( a5 )
  {
    v8 = a4;
    if ( a4 )
    {
      v10 = a5;
      v27 = a7;
      v28 = a8;
      if ( a5 + a4 == 2 )
      {
LABEL_9:
        v20 = a2;
        v21 = *a1;
        v22 = *a2;
        a7 = v27;
        LOBYTE(a8) = v28;
        if ( (unsigned __int8)sub_487440(&a7, v22, v21) )
        {
          v23 = *a1;
          *a1 = *v20;
          *v20 = v23;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v10 >= v8 )
          {
            v24 = v29;
            LOBYTE(v24) = v28;
            v33 = a2;
            v17 = v10 / 2;
            v29 = v24;
            v26 = &a2[v10 / 2];
            v25 = sub_487640(a1, (__int64)a2, v26, v27, v24);
            v16 = (char *)v33;
            v14 = v25;
            v13 = v25 - a1;
          }
          else
          {
            v12 = v30;
            LOBYTE(v12) = v28;
            v31 = a2;
            v13 = v8 / 2;
            v30 = v12;
            v14 = &a1[v8 / 2];
            v15 = sub_4875B0(a2, a3, v14, v27, v12);
            v16 = (char *)v31;
            v26 = v15;
            v17 = v15 - v31;
          }
          v10 -= v17;
          v18 = sub_488140((char *)v14, v16, (char *)v26);
          a7 = v27;
          LOBYTE(a8) = v28;
          v32 = (__int64 *)v18;
          sub_488350((_DWORD)a1, (_DWORD)v14, (_DWORD)v18, v13, v17, v19, v27, a8);
          v8 -= v13;
          if ( !v8 || !v10 )
            break;
          a1 = v32;
          a2 = v26;
          if ( v10 + v8 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}
