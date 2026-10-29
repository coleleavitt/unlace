__int64 __fastcall sub_36E360(_QWORD *a1, _QWORD *a2)
{
  char v4; // r13
  __int64 v5; // rbp
  int v6; // eax
  __int64 *v7; // rdi
  __int64 v8; // r15
  int v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbp
  bool v17; // zf
  void *v18; // rbp
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rax
  void *v25; // r15
  __int64 v26; // rsi
  int v27; // r14d
  unsigned int v28; // ebp
  int v29; // eax
  __int64 v30; // rdi
  __int64 v32; // [rsp+8h] [rbp-90h]
  _BYTE v33[8]; // [rsp+18h] [rbp-80h] BYREF
  __int64 v34; // [rsp+20h] [rbp-78h] BYREF
  int v35; // [rsp+28h] [rbp-70h]
  __int128 v36; // [rsp+30h] [rbp-68h]
  _QWORD v37[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v38[9]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *((_BYTE *)a1 + 73);
  if ( v4 )
  {
    if ( *((_DWORD *)a1 + 19) )
    {
      v4 = *((_BYTE *)a1 + 72);
      *((_BYTE *)a1 + 72) = 0;
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[1] + 192LL))(a1[1]);
      v34 = *a1;
      v5 = v34;
      sub_180C5A0(v33, "pb");
      v6 = sub_15DA4C0(v5 + 560, v33);
      v7 = (__int64 *)a1[2];
      v8 = *a1;
      v35 = v6;
      v9 = *((_DWORD *)a1 + 19);
      v37[0] = 0;
      v38[0] = 1;
      v10 = v9 - 1;
      v36 = 0;
      v11 = *v7;
      v37[1] = 0;
      v38[1] = 0;
      v12 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64 *))(v11 + 48))(v7) + 8);
      if ( v12 )
        v13 = *(unsigned int *)(v12 - 4);
      else
        v13 = 0;
      v14 = sub_168D9F0(&v34, v13, v12, v10);
      v15 = a1[1];
      v16 = v14;
      if ( v14 )
      {
        ++*(_DWORD *)(v14 + 8);
        sub_E5EBF0(v15, v14);
        v17 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v17 )
          sub_15D7BC0(v8, v16);
      }
      else
      {
        sub_E5EBF0(v15, 0);
      }
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v37);
      sub_182CBA0(v18, v38);
      v19 = *((_QWORD *)&v36 + 1);
      if ( *((_QWORD *)&v36 + 1) )
      {
        v20 = *(unsigned int *)(*((_QWORD *)&v36 + 1) - 4LL);
        if ( (_DWORD)v20 )
        {
          v21 = *((_QWORD *)&v36 + 1) + 16 * v20;
          do
          {
            v22 = v19;
            v19 += 16;
            sub_15D0DF0(v22);
          }
          while ( v21 != v19 );
          v19 = *((_QWORD *)&v36 + 1);
        }
        sub_186B220((void *)(v19 - 8));
      }
      v23 = v36;
      if ( (_QWORD)v36 )
      {
        v24 = *(unsigned int *)(v36 - 4);
        if ( (_DWORD)v24 )
        {
          v32 = v36 + 32 * v24;
          do
          {
            v25 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v23);
            v26 = v23 + 16;
            v23 += 32;
            sub_182CBA0(v25, v26);
          }
          while ( v32 != v23 );
          v23 = v36;
        }
        sub_186B220((void *)(v23 - 8));
      }
    }
  }
  else
  {
    v4 = 1;
  }
  v27 = *((_DWORD *)a1 + 16);
  v28 = 0;
  while ( (unsigned __int8)sub_18290A0(*a1) )
  {
    v29 = sub_36DE00(a1, a2);
    if ( !v29 )
      break;
    v28 += v29;
    *((_DWORD *)a1 + 16) = (unsigned int)(3 * *((_DWORD *)a1 + 16)) >> 1;
    sub_36D1C0((__int64)a1);
  }
  v17 = *((_BYTE *)a1 + 73) == 0;
  *((_DWORD *)a1 + 16) = v27;
  if ( !v17 )
  {
    v30 = a1[1];
    *((_BYTE *)a1 + 72) = v4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 200LL))(v30, 1);
  }
  return v28;
}

