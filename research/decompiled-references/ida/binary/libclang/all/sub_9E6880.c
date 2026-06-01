__int64 __fastcall sub_9E6880(_QWORD *a1, __int64 a2, unsigned int a3)
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
  __int64 v14; // rdi
  unsigned int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r14d
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v29; // [rsp+18h] [rbp-110h]
  __int64 v30; // [rsp+20h] [rbp-108h]
  __int64 v31; // [rsp+20h] [rbp-108h]
  __int64 v32; // [rsp+28h] [rbp-100h]
  __int64 v33[4]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-D0h]
  __int64 v36[4]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v37[4]; // [rsp+90h] [rbp-98h] BYREF
  _QWORD v38[3]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-60h]
  unsigned int v40; // [rsp+D0h] [rbp-58h]
  unsigned int v41; // [rsp+E0h] [rbp-48h]

  v3 = (__int64)a1;
  v4 = a1[23];
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v38, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9E4580((__int64)a1, a2, (__int64)v38, 4);
  if ( (_BYTE)v6 )
  {
    v8 = v41;
    v9 = v39;
    v10 = v38[0];
    if ( v41 || (a1 = v38, !*(_BYTE *)(sub_8E5480((__int64)v38) + 51)) || (v11 = (_QWORD *)(v9 + v40 + 72), v40 != v10) )
      v11 = (_QWORD *)(v9 + v10 + 40);
    v12 = sub_2575D20(a1, a2, v8);
    if ( *v11 == v12 )
      sub_257CF50(v33, v11);
    else
      sub_25768A0(v33, v11);
    v13 = sub_2575CF0();
    sub_2582F80(v37, 0.0);
    sub_257EDC0(&v34, v37, v13);
    sub_25769A0(v37);
    v14 = sub_A1A4E0(*(_QWORD *)(v3 + 184), 24);
    if ( v33[0] == v12 )
      sub_257CF50(v14, v33);
    else
      sub_25768A0(v14, v33);
    v15 = (a3 >> 3) & 7;
    if ( ((a3 >> 3) & 7) == 7 )
      v15 = 1;
    if ( v12 == v33[0] )
      sub_257CEA0(v36, v12, 1);
    else
      sub_25785E0(v36, v33[0], 1);
    if ( v12 == v33[0] )
      sub_257CF50(v37, v33);
    else
      sub_25768A0(v37, v33);
    if ( v12 == v34 )
    {
      if ( v12 == v37[0] )
      {
        v25 = v35;
        if ( v35 )
        {
          v26 = *(_QWORD *)(v35 - 8);
          v27 = v35 + 24 * v26;
          if ( v35 != v27 )
          {
            do
            {
              v32 = v25;
              v31 = v27 - 24;
              sub_5FF3B0((__int64 *)(v27 - 24));
              v27 = v31;
              v25 = v32;
            }
            while ( v32 != v31 );
            v26 = *(_QWORD *)(v32 - 8);
          }
          operator delete[]((void *)(v25 - 8), 24 * v26 + 8);
        }
        v35 = 0;
        sub_257D000(&v34, v37, v25, v17);
LABEL_22:
        sub_5FF3B0(v37);
        if ( v12 == v34 )
          v20 = sub_257DC40(&v34, v36, v15);
        else
          v20 = sub_257BF10(&v34, v36, v15);
        sub_5FF3B0(v36);
        v21 = v39;
        v22 = v38[0];
        if ( v41
          || (v30 = v39, v29 = v38[0], v23 = sub_8E5480((__int64)v38), v22 = v29, v21 = v30, !*(_BYTE *)(v23 + 51))
          || (v24 = (__int64 *)(v30 + v29 + 72), v29 != v40) )
        {
          v24 = (__int64 *)(v21 + v22 + 40);
        }
        if ( v12 == *v24 )
        {
          if ( v12 == v34 )
          {
            sub_257D030(v24, &v34);
            goto LABEL_30;
          }
        }
        else if ( v12 != v34 )
        {
          sub_2576220(v24, &v34);
LABEL_30:
          v6 = sub_9DBAE0(v3, a2, &v34, v20, a3);
          sub_5FF3B0(&v34);
          sub_5FF3B0(v33);
          goto LABEL_2;
        }
        if ( v24 != &v34 )
        {
          sub_5FF3B0(v24);
          if ( v12 == v34 )
            sub_257CF50(v24, &v34);
          else
            sub_25768A0(v24, &v34);
        }
        goto LABEL_30;
      }
    }
    else if ( v12 != v37[0] )
    {
      sub_2576350(&v34, v37, v16, v17);
      goto LABEL_22;
    }
    sub_5FF3B0(&v34);
    if ( v12 == v37[0] )
      sub_257D000(&v34, v37, v18, v19);
    else
      sub_2576960(&v34, v37);
    goto LABEL_22;
  }
LABEL_2:
  sub_A1C0C0(v38);
  return v6;
}

