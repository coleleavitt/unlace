__int64 __fastcall sub_BB24A0(__int64 a1, _DWORD *a2)
{
  __int64 v3; // r12
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  void *v7; // rdi
  unsigned int v8; // r13d
  bool v9; // zf
  __int64 *v11; // r13
  __int64 *v12; // r14
  __int64 v13; // rsi
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  int v17; // eax
  int v18; // r8d
  int v19; // r9d
  _DWORD *v20; // rax
  _DWORD *v21; // r12
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // [rsp+0h] [rbp-C0h]
  int v25; // [rsp+0h] [rbp-C0h]
  __int64 *v26; // [rsp+8h] [rbp-B8h]
  __int64 *v27; // [rsp+8h] [rbp-B8h]
  int v28; // [rsp+10h] [rbp-B0h]
  int v29; // [rsp+10h] [rbp-B0h]
  char v30; // [rsp+14h] [rbp-ACh]
  void *v31; // [rsp+18h] [rbp-A8h]
  int v32; // [rsp+20h] [rbp-A0h]
  void **p_ptr; // [rsp+20h] [rbp-A0h]
  __int64 v34; // [rsp+28h] [rbp-98h]
  __int64 v35; // [rsp+28h] [rbp-98h]
  int v36[2]; // [rsp+30h] [rbp-90h] BYREF
  __int64 *v37; // [rsp+38h] [rbp-88h]
  void *ptr; // [rsp+40h] [rbp-80h] BYREF
  __int64 v39; // [rsp+48h] [rbp-78h]
  int v40[6]; // [rsp+50h] [rbp-70h] BYREF
  void *v41; // [rsp+68h] [rbp-58h]

  v31 = *(void **)(a1 + 24);
  if ( a2 )
    ++a2[2];
  ptr = v40;
  v39 = 0x1000000000LL;
  v3 = a1 + 1728;
  if ( (unsigned __int8)sub_BCED40(a1 + 1728, a2) )
  {
    v7 = ptr;
    v8 = dword_1C7ED94;
    if ( ptr == v40 )
      goto LABEL_7;
    goto LABEL_5;
  }
  sub_1642120(
    v3,
    (int)a2,
    (int)v36,
    v4,
    v5,
    v6,
    v24,
    (int)v36,
    v28,
    v31,
    v32,
    a1,
    *(_QWORD *)(a1 + 24),
    0,
    (int)ptr,
    v39,
    v40[0],
    v40[2],
    v40[4],
    v41);
  if ( v37 )
  {
    v11 = &v37[*((unsigned int *)v37 - 1)];
    if ( v11 != v37 )
    {
      v12 = v37;
      p_ptr = &ptr;
      while ( 1 )
      {
        v13 = *v12;
        if ( !*(_WORD *)(*v12 + 4) )
        {
          v14 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
          if ( v14 )
          {
            if ( *(_DWORD *)(v34 + 1744) == *v14 && !v14[1] )
              break;
          }
        }
        if ( (unsigned __int8)sub_163BAA0(v3, v13, &ptr) && (_DWORD)v39 )
          break;
        if ( v11 == ++v12 )
          goto LABEL_23;
      }
      v8 = dword_1C7ED90;
      sub_2334C0(v26);
      v7 = ptr;
      if ( ptr == v40 )
      {
LABEL_7:
        if ( !a2 )
          return v8;
        goto LABEL_8;
      }
LABEL_5:
      if ( v7 )
        sub_186B220(v7);
      goto LABEL_7;
    }
  }
LABEL_23:
  v15 = sub_15D1F10(a2);
  v16 = *(_QWORD *)(v34 + 1736);
  v17 = sub_15D2D60(v16, *(_DWORD *)(v34 + 1744), 1, 0, 0, 0, 0, v15);
  v20 = (_DWORD *)sub_15DC610(
                    v16,
                    v17,
                    0,
                    0,
                    v18,
                    v19,
                    v25,
                    (int)v26,
                    v29,
                    (int)v31,
                    (int)p_ptr,
                    v34,
                    v36[0],
                    (int)v37,
                    (int)ptr,
                    (void *)v39);
  v21 = v20;
  if ( v20 )
    ++v20[2];
  v8 = sub_966380(v35, a2, v20);
  v22 = v8 ^ 1;
  if ( v30 )
    v22 = v8;
  v23 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 8872LL) + 16LL * (v22 >> 1);
  *(_BYTE *)(v23 + 11) = *(_BYTE *)(v23 + 11) & 0xF3 | (8 * !(v22 & 1) + 4);
  sub_9936C0(*(_QWORD *)(v35 + 16), v8 >> 1);
  sub_2334C0(v27);
  if ( ptr != v40 && ptr )
  {
    sub_186B220(ptr);
    if ( v21 )
    {
      v9 = v21[2]-- == 1;
      if ( !v9 )
        goto LABEL_7;
LABEL_31:
      sub_15D7BC0(v31, v21);
      goto LABEL_7;
    }
  }
  else if ( v21 )
  {
    v9 = v21[2]-- == 1;
    if ( v9 )
      goto LABEL_31;
  }
LABEL_8:
  v9 = a2[2]-- == 1;
  if ( v9 )
    sub_15D7BC0(v31, a2);
  return v8;
}

