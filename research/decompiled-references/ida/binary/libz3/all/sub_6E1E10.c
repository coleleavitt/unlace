__int64 __fastcall sub_6E1E10(__int64 *a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rdi
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rsi
  __int64 v34; // rdi
  int v35; // eax
  __int64 v36; // rbx
  __int64 v38; // [rsp+8h] [rbp-80h]
  __int64 v39; // [rsp+10h] [rbp-78h]
  __int64 v40; // [rsp+18h] [rbp-70h]
  __int64 v41; // [rsp+20h] [rbp-68h]
  __int64 v42; // [rsp+28h] [rbp-60h]
  __int64 v44; // [rsp+38h] [rbp-50h]
  __int64 v45; // [rsp+40h] [rbp-48h]
  __int64 v46; // [rsp+48h] [rbp-40h]

  v40 = *a3;
  v44 = a3[3];
  v41 = a3[5];
  v46 = *a1;
  v10 = sub_6DF7C0((__int64)a1, *((_DWORD *)a3 + 4));
  v39 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v11 = a1[4];
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  sub_6DE2A0(*a5, a5[1]);
  *a5 = v11;
  v12 = a1[6];
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  sub_6DE2A0(*a6, a6[1]);
  *a6 = v12;
  v13 = *(_QWORD *)(a2 + 8);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 - 4);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v13 + 8LL * (unsigned int)(v14 - 1));
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      sub_6DE2A0(*a4, a4[1]);
      *a4 = v15;
      v38 = 8LL * (unsigned int)(v14 - 2);
      if ( v14 == 1 )
        return sub_6DE2A0(v39, v46);
      while ( 1 )
      {
        v45 = *a1;
        v17 = sub_6E1C90(a1, *a5, v44);
        v42 = sub_6E1C90(a1, v39, v17);
        v18 = sub_6E1C90(a1, v40, *a4);
        v19 = sub_6E1C90(a1, *a6, *(_QWORD *)(*(_QWORD *)(a2 + 8) + v38));
        v20 = sub_6E1C90(a1, v41, v19);
        v21 = sub_6E1B10(a1, v18, v42);
        v22 = sub_6E1B10(a1, v20, v21);
        v23 = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        v24 = sub_6E1C90(a1, *a4, v39);
        v25 = sub_6E1C90(a1, v40, *a5);
        v26 = sub_6E1B10(a1, v25, v24);
        v27 = v26;
        if ( v26 )
          ++*(_DWORD *)(v26 + 8);
        v28 = *a5;
        if ( *a5 )
        {
          v29 = a5[1];
          v30 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(v29, v28);
        }
        *a5 = v27;
        v31 = sub_6E1C90(a1, v41, *a6);
        v32 = v31;
        if ( v31 )
          ++*(_DWORD *)(v31 + 8);
        v33 = *a6;
        if ( *a6 )
        {
          v34 = a6[1];
          v30 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(v34, v33);
        }
        *a6 = v32;
        if ( v23 == *a4 )
        {
          if ( !v23 )
            goto LABEL_15;
          v35 = *(_DWORD *)(v23 + 8) - 1;
          *(_DWORD *)(v23 + 8) = v35;
          if ( v35 )
            goto LABEL_15;
        }
        else
        {
          sub_6DE2A0(*a4, a4[1]);
          *a4 = v23;
          if ( !v23 )
            goto LABEL_15;
          v16 = *(_DWORD *)(v23 + 8);
          *(_DWORD *)(v23 + 8) = v16;
          if ( v16 )
            goto LABEL_15;
        }
        sub_15D7BC0(v45, v23);
LABEL_15:
        v38 -= 8;
        if ( v38 == -8 )
          return sub_6DE2A0(v39, v46);
      }
    }
  }
  v36 = a1[4];
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  sub_6DE2A0(*a4, a4[1]);
  *a4 = v36;
  return sub_6DE2A0(v39, v46);
}

