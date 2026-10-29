__int64 __fastcall sub_9E0230(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  _QWORD *v5; // rax
  __int64 v6; // r12
  _QWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  unsigned int v16; // r15d
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r15d
  __int64 v24; // rdi
  __int64 *v25; // rbp
  __int64 *v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v33; // [rsp+18h] [rbp-D0h]
  unsigned __int8 v34; // [rsp+18h] [rbp-D0h]
  __int64 v35; // [rsp+20h] [rbp-C8h]
  __int64 v36; // [rsp+28h] [rbp-C0h]
  __int64 v37[4]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+50h] [rbp-98h] BYREF
  __int64 *v39; // [rsp+58h] [rbp-90h]
  __int64 v40; // [rsp+70h] [rbp-78h] BYREF
  __int64 v41; // [rsp+78h] [rbp-70h]
  __int64 v42[11]; // [rsp+90h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = (_QWORD *)sub_A1A5A0(v4, 24);
  v6 = *v5;
  v7 = v5;
  v11 = sub_2575D20(v4, 24, v8);
  if ( v6 == v11 )
    sub_257D000(v37, v7, v9, v10);
  else
    sub_2576960(v37, v7);
  sub_A1A5E0(v4, 24);
  v12 = *(_QWORD *)(a1 + 184);
  v15 = (_QWORD *)sub_A1A5A0(v12, 24);
  if ( v11 == *v15 )
    sub_257D000(&v38, v15, v13, v14);
  else
    sub_2576960(&v38, v15);
  sub_A1A5E0(v12, 24);
  v16 = sub_9501C0(a1, a2, &v38, v37);
  if ( (_BYTE)v16 )
  {
    v33 = sub_2575CF0();
    sub_2582F80(v42, 0.0);
    sub_257EDC0(&v40, v42, v33);
    sub_25769A0(v42);
    v18 = (a3 >> 3) & 7;
    if ( ((a3 >> 3) & 7) == 7 )
      LOBYTE(v18) = 1;
    v34 = v18;
    if ( v11 == v38 )
      sub_257CF50(v42, &v38);
    else
      sub_25768A0(v42, &v38);
    if ( v11 == v40 )
    {
      if ( v11 == v42[0] )
      {
        v28 = v41;
        if ( v41 )
        {
          v29 = *(_QWORD *)(v41 - 8);
          v30 = v41 + 24 * v29;
          if ( v41 != v30 )
          {
            do
            {
              v36 = v28;
              v35 = v30 - 24;
              sub_5FF3B0((__int64 *)(v30 - 24));
              v30 = v35;
              v28 = v36;
            }
            while ( v36 != v35 );
            v29 = *(_QWORD *)(v36 - 8);
          }
          operator delete[]((void *)(v28 - 8), 24 * v29 + 8);
        }
        v41 = 0;
        sub_257D000(&v40, v42, v28, v20);
LABEL_19:
        sub_5FF3B0(v42);
        if ( v11 == v40 )
          v23 = sub_2581790(&v40, v37, v34);
        else
          v23 = sub_257C2B0(&v40, v37, v34);
        v24 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
        if ( v11 == v40 )
          sub_257CF50(v24, &v40);
        else
          sub_25768A0(v24, &v40);
        v16 = sub_9DBAE0(a1, a2, &v40, v23, a3);
        sub_5FF3B0(&v40);
        if ( v11 != v38 )
          goto LABEL_7;
        goto LABEL_24;
      }
    }
    else if ( v11 != v42[0] )
    {
      sub_2576350(&v40, v42, v19, v20);
      goto LABEL_19;
    }
    sub_5FF3B0(&v40);
    if ( v11 == v42[0] )
      sub_257D000(&v40, v42, v21, v22);
    else
      sub_2576960(&v40, v42);
    goto LABEL_19;
  }
  if ( v11 != v38 )
  {
LABEL_7:
    sub_25769A0(&v38);
    goto LABEL_8;
  }
LABEL_24:
  v25 = v39;
  if ( v39 )
  {
    v26 = &v39[3 * *(v39 - 1)];
    if ( v39 == v26 )
    {
      v27 = 0;
    }
    else
    {
      do
      {
        v26 -= 3;
        sub_5FF3B0(v26);
      }
      while ( v25 != v26 );
      v27 = 24 * *(v25 - 1);
    }
    operator delete[](v25 - 1, v27 + 8);
  }
  v39 = nullptr;
LABEL_8:
  sub_5FF3B0(v37);
  return v16;
}

