__int64 __fastcall sub_9E46B0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r13
  _QWORD *v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r14
  unsigned int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v28; // [rsp+18h] [rbp-110h]
  __int64 v29; // [rsp+20h] [rbp-108h]
  __int64 v30; // [rsp+20h] [rbp-108h]
  __int64 v31; // [rsp+28h] [rbp-100h]
  __int64 v32[4]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-D0h]
  __int64 v35[4]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v36[4]; // [rsp+90h] [rbp-98h] BYREF
  _QWORD v37[3]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-60h]
  unsigned int v39; // [rsp+D0h] [rbp-58h]
  unsigned int v40; // [rsp+E0h] [rbp-48h]

  v3 = (__int64)a1;
  v4 = a1[23];
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v37, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9E4580((__int64)a1, a2, (__int64)v37, 3);
  if ( (_BYTE)v6 )
  {
    v8 = v40;
    v9 = v38;
    v10 = v37[0];
    if ( v40 || (a1 = v37, !*(_BYTE *)(sub_8E5480((__int64)v37) + 51)) || (v11 = (_QWORD *)(v9 + v39 + 72), v39 != v10) )
      v11 = (_QWORD *)(v9 + v10 + 40);
    v12 = sub_2575D20(a1, a2, v8);
    if ( *v11 == v12 )
      sub_257CF50(v32, v11);
    else
      sub_25768A0(v32, v11);
    v13 = sub_2575CF0();
    sub_2582F80(v36, 0.0);
    sub_257EDC0(&v33, v36, v13);
    sub_25769A0(v36);
    v14 = (a3 >> 3) & 7;
    if ( ((a3 >> 3) & 7) == 7 )
      v14 = 1;
    if ( v12 == v32[0] )
    {
      sub_257CEA0(v35, v12, 1);
      if ( v12 != v32[0] )
        goto LABEL_12;
    }
    else
    {
      sub_25785E0(v35, v32[0], 1);
      if ( v12 != v32[0] )
      {
LABEL_12:
        sub_25768A0(v36, v32);
        goto LABEL_13;
      }
    }
    sub_257CF50(v36, v32);
LABEL_13:
    if ( v12 == v33 )
    {
      if ( v12 == v36[0] )
      {
        v24 = v34;
        if ( v34 )
        {
          v25 = *(_QWORD *)(v34 - 8);
          v26 = v34 + 24 * v25;
          if ( v34 != v26 )
          {
            do
            {
              v31 = v24;
              v30 = v26 - 24;
              sub_5FF3B0((__int64 *)(v26 - 24));
              v26 = v30;
              v24 = v31;
            }
            while ( v31 != v30 );
            v25 = *(_QWORD *)(v31 - 8);
          }
          operator delete[]((void *)(v24 - 8), 24 * v25 + 8);
        }
        v34 = 0;
        sub_257D000(&v33, v36, v24, v16);
LABEL_19:
        sub_5FF3B0(v36);
        if ( v12 == v33 )
          v19 = sub_257DC20(&v33, v35, v14);
        else
          v19 = sub_257BF20(&v33, v35, v14);
        sub_5FF3B0(v35);
        v20 = v38;
        v21 = v37[0];
        if ( v40
          || (v29 = v38, v28 = v37[0], v22 = sub_8E5480((__int64)v37), v21 = v28, v20 = v29, !*(_BYTE *)(v22 + 51))
          || (v23 = (__int64 *)(v29 + v28 + 72), v28 != v39) )
        {
          v23 = (__int64 *)(v20 + v21 + 40);
        }
        if ( v12 == *v23 )
        {
          if ( v12 == v33 )
          {
            sub_257D030(v23, &v33);
            goto LABEL_27;
          }
        }
        else if ( v12 != v33 )
        {
          sub_2576220(v23, &v33);
LABEL_27:
          v6 = sub_9DBAE0(v3, a2, &v33, v19, a3);
          sub_5FF3B0(&v33);
          sub_5FF3B0(v32);
          goto LABEL_2;
        }
        if ( v23 != &v33 )
        {
          sub_5FF3B0(v23);
          if ( v12 == v33 )
            sub_257CF50(v23, &v33);
          else
            sub_25768A0(v23, &v33);
        }
        goto LABEL_27;
      }
    }
    else if ( v12 != v36[0] )
    {
      sub_2576350(&v33, v36, v15, v16);
      goto LABEL_19;
    }
    sub_5FF3B0(&v33);
    if ( v12 == v36[0] )
      sub_257D000(&v33, v36, v17, v18);
    else
      sub_2576960(&v33, v36);
    goto LABEL_19;
  }
LABEL_2:
  sub_A1C0C0(v37);
  return v6;
}

