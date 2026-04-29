__int64 __fastcall sub_A8840(__int64 a1, char *a2, __int64 *a3, unsigned __int64 *a4, unsigned __int8 a5)
{
  __int64 *v6; // rbx
  char v8; // al
  unsigned int v9; // ebx
  __int64 *v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 not_tail; // r15
  __int64 v16; // rdx
  char v17; // al
  unsigned __int64 v18; // r8
  __int64 v19; // r15
  _QWORD *v20; // rax
  char v21; // al
  unsigned __int64 v22; // r8
  __int64 v23; // [rsp+8h] [rbp-100h]
  char v24; // [rsp+8h] [rbp-100h]
  char v25; // [rsp+8h] [rbp-100h]
  unsigned __int64 v26; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v27; // [rsp+10h] [rbp-F8h]
  char v28; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v29; // [rsp+18h] [rbp-F0h]
  __int64 v30; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v32; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h]
  __int128 v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+58h] [rbp-B0h]
  __int128 v36; // [rsp+60h] [rbp-A8h]
  _OWORD v37[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-68h]
  int v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  char v41; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+C8h] [rbp-40h]

  v6 = a3;
  v42 = __readfsqword(0x28u);
  v30 = 0;
  if ( !a3 )
    v6 = &v30;
  v8 = *a2;
  if ( *a2 == 6 )
  {
    not_tail = *((_QWORD *)a2 + 1);
    if ( (get_flags_ex(not_tail, 4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(not_tail, 4, v16);
    if ( *((_QWORD *)a2 + 1) != not_tail || a5 != 1 )
    {
      v23 = *((_QWORD *)a2 + 1) - not_tail;
      v17 = sub_3810A0(*(_QWORD *)(a1 + 1496), not_tail, v6, 3);
      v18 = v23;
      goto LABEL_19;
    }
    goto LABEL_6;
  }
  if ( v8 == 9 )
  {
    v11 = *((__int64 **)a2 + 1);
    v12 = v11[1];
    if ( v12 || a5 != 1 )
    {
      v13 = *v11;
      v14 = *((int *)v11 + 4);
      if ( *(_QWORD *)(v13 + 440) < v14 )
      {
        if ( !under_debugger )
          sub_383060(51258);
        BUG();
      }
      copy_tinfo_t(v6, *(_QWORD *)(v13 + 432) + 104 * v14 + 80);
      *a4 = v12;
      goto LABEL_13;
    }
    goto LABEL_6;
  }
  if ( v8 != 5
    || (v19 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL), !(unsigned __int8)sub_1EF9B0(a1, v19, 1))
    && v19 + 1 <= *(_QWORD *)(a1 + 144) - *(int *)(a1 + 120) )
  {
LABEL_6:
    *a4 = 0;
    goto LABEL_7;
  }
  v20 = *((_QWORD **)a2 + 1);
  v33 = 0;
  v35 = 0;
  v38 = 1;
  v39 = -1;
  v40 = 0;
  v41 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v37[0] = 0;
  if ( sub_1D0250(*v20, &v32, v20[1], &v31, 0) == -1 )
  {
    v21 = 0;
    v22 = 0;
  }
  else
  {
    v21 = a5 ^ 1 | (v31 != (unsigned __int64)v32 >> 3);
    if ( v21 )
    {
      v29 = v31 - ((unsigned __int64)v32 >> 3);
      v28 = a5 ^ 1 | (v31 != (unsigned __int64)v32 >> 3);
      copy_tinfo_t(v6, v37);
      v21 = v28;
      v22 = v29;
    }
    else
    {
      v22 = 0;
    }
  }
  v26 = v22;
  v24 = v21;
  clear_tinfo_t(v37);
  v17 = v24;
  v18 = v26;
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
    v18 = v26;
    v17 = v24;
  }
  if ( v33 )
  {
    v27 = v18;
    v25 = v17;
    *(_QWORD *)&v34 = 0;
    qfree(v33);
    v18 = v27;
    v17 = v25;
  }
LABEL_19:
  *a4 = v18;
  if ( v17 )
  {
LABEL_13:
    v9 = sub_A8580(v6, a4, *((_DWORD *)a2 + 1), a5);
    goto LABEL_8;
  }
LABEL_7:
  v9 = 0;
LABEL_8:
  clear_tinfo_t(&v30);
  return v9;
}
