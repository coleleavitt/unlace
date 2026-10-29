void __fastcall sub_50F9A0(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // r14
  char *v3; // r13
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // rax
  char *v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rbp
  unsigned __int64 v22; // r9
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r11
  unsigned __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v32; // [rsp+10h] [rbp-58h]
  __int64 v33; // [rsp+10h] [rbp-58h]
  __int64 v34; // [rsp+18h] [rbp-50h]
  unsigned __int64 v35; // [rsp+20h] [rbp-48h]
  char *v36; // [rsp+28h] [rbp-40h]

  v1 = *a1;
  v2 = *(_QWORD *)(*(_QWORD *)(v1 + 1760) + 32LL);
  if ( v2 )
  {
    v36 = (char *)operator new[](20 * v2);
    v3 = &v36[20 * v2];
    if ( v2 > 0x1387 )
    {
      v11 = (char *)pack_dw(v36, v3, 0xFFFF);
      v12 = v11;
      if ( v11 < v3 )
      {
        *v11 = 2;
        v12 = v11 + 1;
      }
      v13 = 1;
      v14 = pack_dd(v12, v3, (unsigned int)v2);
      v15 = *(_QWORD **)(*(_QWORD *)(*a1 + 1760) + 24LL);
      v16 = *v15;
      v17 = v15[1];
      v18 = pack_dq(v14, v3, *v15);
      v19 = pack_dq(v18, v3, v17);
      v20 = *a1;
      v4 = v19;
      do
      {
        v21 = v17;
        v22 = 0;
        v23 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v20 + 1760) + 24LL) + 16 * v13);
        while ( 1 )
        {
          v24 = v16;
          v16 = *v23;
          v25 = *v23 - v24;
          if ( v25 < 0 )
          {
            if ( !under_debugger )
              interr(2137);
            BUG();
          }
          v17 = v23[1];
          v26 = v17 - v21;
          v27 = v13 + 1;
          if ( v25 != 1 || v26 )
            break;
          ++v22;
          v23 += 2;
          if ( v27 >= v2 )
          {
            if ( v22 == 1 )
            {
              v27 = v13 + 2;
              goto LABEL_20;
            }
            ++v13;
            v26 = 0;
            ++v27;
            v25 = 1;
            goto LABEL_27;
          }
          ++v13;
          v21 = v17;
        }
        if ( v22 <= 1 )
          goto LABEL_23;
LABEL_27:
        v34 = v26;
        v33 = v25;
        v35 = v22;
        v29 = pack_dq(v4, v3, 0);
        v30 = pack_dq(v29, v3, v35);
        v26 = v34;
        v25 = v33;
        v4 = v30;
LABEL_23:
        if ( v13 < v2 )
        {
          v32 = v26;
          v28 = pack_dq(v4, v3, v25);
          v4 = pack_dq(v28, v3, v32);
        }
        v20 = *a1;
LABEL_20:
        v13 = v27;
      }
      while ( v27 < v2 );
      v5 = v20;
    }
    else
    {
      v4 = pack_dw(v36, v3, (unsigned int)v2);
      v5 = *a1;
      v6 = *(_QWORD *)(*a1 + 1760);
      v7 = *(__int64 **)(v6 + 24);
      v8 = &v7[2 * *(_QWORD *)(v6 + 32)];
      if ( v7 != v8 )
      {
        do
        {
          v9 = *v7;
          v7 += 2;
          v10 = pack_dq(v4, v3, v9);
          v4 = pack_dq(v10, v3, *(v7 - 1));
        }
        while ( v8 != v7 );
        v5 = *a1;
      }
    }
    sub_632C30(v5, 84, v36, v4 - (_QWORD)v36);
    if ( v36 )
      operator delete[](v36);
  }
  else
  {
    sub_6301B0(v1, 84);
  }
}
