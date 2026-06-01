_QWORD *__fastcall sub_B95A80(_QWORD *a1, unsigned int *a2)
{
  _QWORD *v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int *v7; // rbx
  unsigned int *v8; // r14
  unsigned int *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  unsigned int *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  void *v23; // rbp
  __int64 v25; // [rsp+8h] [rbp-80h]
  char v26; // [rsp+1Fh] [rbp-69h] BYREF
  __int64 v27; // [rsp+20h] [rbp-68h] BYREF
  __int64 v28; // [rsp+28h] [rbp-60h]
  _QWORD v29[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v30[9]; // [rsp+40h] [rbp-48h] BYREF

  v3 = a1 + 32;
  v5 = *(v3 - 29);
  v6 = *(_QWORD *)a2;
  v29[0] = 0;
  v25 = v6;
  v29[1] = 0;
  v30[0] = 1;
  v30[1] = 0;
  v27 = 0;
  v28 = v5;
  if ( !(unsigned __int8)sub_1673C40(v3, v6, v29) )
  {
    v7 = a2;
    v8 = nullptr;
    while ( 1 )
    {
      v9 = (unsigned int *)a1[20];
      if ( v9 )
      {
        v10 = **(unsigned int **)v7;
        if ( (unsigned int)v10 >= *(v9 - 1) )
          v9 = nullptr;
        else
          v9 = *(unsigned int **)&v9[2 * v10];
      }
      v11 = a1[2];
      v12 = *(_QWORD *)(v11 + 8656);
      if ( v12 )
      {
        v13 = *v9;
        if ( (unsigned int)v13 < *(_DWORD *)(v12 - 4) )
        {
          v14 = *(_QWORD **)(v12 + 8 * v13);
          if ( v14 )
          {
            if ( (unsigned __int8)sub_8EB880(v11, v14, (__int64)&v27)
              && (unsigned __int8)sub_1666AE0(a1 + 35, v27, v29, &v26) )
            {
              break;
            }
          }
        }
      }
      if ( v8 )
      {
        v7 = *((unsigned int **)v7 + 2);
        if ( a2 == v8 && a2 == v7 )
          break;
      }
      else
      {
        if ( a2 == *((unsigned int **)v7 + 2) && a2 == v7 )
          break;
        v8 = v7;
        v7 = *((unsigned int **)v7 + 2);
      }
    }
  }
  v15 = sub_186B270(0x10u);
  v16 = a1[38];
  v17 = (_QWORD *)v15;
  v18 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(v25) + 24) + 8LL);
  if ( *((_BYTE *)v18 + 8) )
    sub_DBF6E(0);
  v19 = sub_1342E60(v16, v29, *v18);
  v20 = v27;
  v17[1] = v19;
  *v17 = off_1C559A8;
  if ( v20 )
  {
    v21 = v28;
    if ( (*(_DWORD *)(v20 + 8))-- == 1 )
      sub_15D7BC0(v21, v20);
  }
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v29);
  sub_182CBA0(v23, v30);
  return v17;
}

