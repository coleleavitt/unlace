__int64 __fastcall sub_6CDD00(__int64 *a1, int *a2, __int64 a3, int *a4, __int64 a5, __int64 *a6)
{
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rax
  void *v18; // rbp
  void *v19; // rbp
  __int64 v21; // rax
  _DWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-A0h]
  __int64 v27; // [rsp+20h] [rbp-88h]
  _QWORD v29[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v32[9]; // [rsp+60h] [rbp-48h] BYREF

  v27 = *a1;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  if ( a5 )
    ++*(_DWORD *)(a5 + 8);
  v29[0] = 0;
  v29[1] = 0;
  v30[0] = 1;
  v30[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v29, a2);
  v31[0] = 0;
  v31[1] = 0;
  v32[0] = 1;
  v32[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v31, a4);
  if ( SLODWORD(v29[0]) < 0 )
    sub_1831620(qword_1C7F2C0, v29);
  if ( SLODWORD(v31[0]) < 0 )
    sub_1831620(qword_1C7F2C0, v31);
  v10 = sub_6C19A0((__int64)a1, (__int64)v29, a5);
  v26 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  if ( a5 )
  {
    v11 = (*(_DWORD *)(a5 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v27, a5);
  }
  v12 = sub_6C19A0((__int64)a1, (__int64)v31, a3);
  v13 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  if ( a3 && (v11 = *(_DWORD *)(a3 + 8) == 1, --*(_DWORD *)(a3 + 8), v11) )
  {
    sub_15D7BC0(v27, a3);
    v14 = a1[2];
    if ( *a2 >= 0 )
    {
LABEL_19:
      v15 = sub_15E1B70(v14);
      v16 = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      v17 = *(_DWORD **)(sub_15D1F10(v15) + 24);
      if ( v17 && *v17 == 5 && v17[1] == 1 )
      {
        v25 = sub_15E1B70(a1[2]);
        v24 = v25;
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
LABEL_37:
        sub_6BFE30(v16, v27);
        sub_6C1A50((__int64)a1, v24, a6);
        v16 = v24;
        goto LABEL_24;
      }
      goto LABEL_23;
    }
  }
  else
  {
    v14 = a1[2];
    if ( *a2 >= 0 )
      goto LABEL_19;
  }
  v21 = sub_15E1B70(v14);
  v16 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  v22 = *(_DWORD **)(sub_15D1F10(v21) + 24);
  if ( v22 && *v22 == 5 && v22[1] == 1 )
  {
    v23 = sub_15E1B70(a1[2]);
    v24 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    goto LABEL_37;
  }
LABEL_23:
  sub_6C1B80(a1, v16, a6);
LABEL_24:
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v31);
  sub_182CBA0(v18, v32);
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v29);
  sub_182CBA0(v19, v30);
  sub_6BFE30(v16, v27);
  sub_6BFE30(v26, v27);
  return sub_6BFE30(v13, v27);
}

