void __fastcall sub_EDB3C0(__int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 *v7; // r15
  char *v8; // r10
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 *v11; // r14
  char *v12; // rax
  char *v13; // r10
  char *v14; // r13
  __int64 v15; // r8
  __int64 *v16; // r11
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 *v25; // rax
  char *v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+8h] [rbp-60h]
  __int64 *v28; // [rsp+8h] [rbp-60h]
  __int64 v30; // [rsp+18h] [rbp-50h]
  __int64 *v31; // [rsp+18h] [rbp-50h]
  char *v32; // [rsp+18h] [rbp-50h]

  if ( a5 )
  {
    v6 = a4;
    if ( a4 )
    {
      v7 = a1;
      v8 = a2;
      v9 = a5;
      if ( a5 + a4 == 2 )
      {
        v16 = a1;
        v14 = a2;
LABEL_9:
        v17 = *(_QWORD *)v14;
        v28 = v16;
        v18 = sub_EDB2A0((__int64 *)(a6 + 72), *v16, a3, a4, a5, a6);
        if ( sub_EDB2A0((__int64 *)(a6 + 72), v17, v19, v20, v21, v22) < v18 )
        {
          v23 = *v28;
          *v28 = *(_QWORD *)v14;
          *(_QWORD *)v14 = v23;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v9 >= v6 )
          {
            v32 = v8;
            v24 = 8 * (v9 / 2);
            v27 = v9 / 2;
            v14 = &v8[v24];
            v25 = sub_ED9F10(v7, (__int64)v8, (__int64 *)&v8[v24], a6, v24, a6);
            v15 = 8 * (v9 / 2);
            v13 = v32;
            v11 = v25;
            v10 = v25 - v7;
          }
          else
          {
            v26 = v8;
            v10 = v6 / 2;
            v11 = &v7[v6 / 2];
            v12 = (char *)sub_ED9A90(v8, a3, v11, a6, a5, a6);
            v13 = v26;
            v14 = v12;
            v15 = v12 - v26;
            v27 = (v12 - v26) >> 3;
          }
          v30 = v15;
          sub_ED6780((char *)v11, v13, v14);
          v31 = (__int64 *)((char *)v11 + v30);
          sub_EDB3C0(v7, v11, v31, v10, v27, a6);
          v9 -= v27;
          v6 -= v10;
          if ( !v6 )
            break;
          v16 = v31;
          if ( !v9 )
            break;
          v8 = v14;
          v7 = v31;
          if ( v9 + v6 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}
