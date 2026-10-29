__int64 __fastcall sub_6C2970(__int64 a1, _QWORD *a2, char a3, char a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r15
  __int64 v12; // r13
  void (__fastcall *v13)(__int64, __int64, __int64, _QWORD, _QWORD); // r11
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  bool v17; // zf
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // r15
  __int64 v23; // r13
  void (__fastcall *v24)(__int64, __int64, __int64, _QWORD, _QWORD); // r11
  _DWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v29; // [rsp+8h] [rbp-60h]
  void (__fastcall *v30)(__int64, __int64, __int64, _QWORD, _QWORD); // [rsp+8h] [rbp-60h]
  void (__fastcall *v31)(__int64, __int64, __int64, _QWORD, _QWORD); // [rsp+10h] [rbp-58h]
  __int64 v32; // [rsp+10h] [rbp-58h]
  __int64 v33; // [rsp+20h] [rbp-48h]
  __int64 v34; // [rsp+20h] [rbp-48h]

  if ( !a3 )
  {
    if ( a4 )
    {
      result = a2[9];
      if ( !result )
        return result;
    }
    else
    {
      result = a2[11];
      if ( !result )
        return result;
    }
    v18 = *(unsigned int *)(result - 4);
    if ( !(_DWORD)v18 )
      return result;
    v19 = 0;
    v34 = 8 * v18;
    while ( 1 )
    {
      v20 = a4 ? a2[21] : a2[23];
      v21 = *(_QWORD *)(a1 + 24);
      v22 = *(_QWORD *)(v20 + v19);
      v23 = *(_QWORD *)(a1 + 8);
      v24 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 96LL);
      if ( *(_WORD *)(v22 + 4) )
        break;
      v25 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
      if ( !v25 || *v25 || v25[1] != 8 || *(_DWORD *)(v22 + 24) != 1 )
        break;
      v27 = *(_QWORD *)(v22 + 32);
      if ( v27 )
        goto LABEL_27;
LABEL_28:
      v24(v21, 1, v27, 0, 0);
      if ( v27 )
      {
        v17 = (*(_DWORD *)(v27 + 8))-- == 1;
        if ( v17 )
          sub_15D7BC0(v23, v27);
      }
      v19 += 8;
      sub_14EC390(a1 + 344, v22, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL), a5);
      result = v34;
      if ( v19 == v34 )
        return result;
    }
    v32 = *(_QWORD *)(a1 + 24);
    v30 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 96LL);
    v26 = sub_15E1A70(*(_QWORD *)(a1 + 8));
    v24 = v30;
    v21 = v32;
    v27 = v26;
    if ( !v26 )
      goto LABEL_28;
LABEL_27:
    ++*(_DWORD *)(v27 + 8);
    goto LABEL_28;
  }
  if ( a4 )
  {
    result = a2[13];
    if ( !result )
      return result;
  }
  else
  {
    result = a2[15];
    if ( !result )
      return result;
  }
  v7 = *(unsigned int *)(result - 4);
  if ( (_DWORD)v7 )
  {
    v8 = 0;
    v33 = 8 * v7;
    while ( 1 )
    {
      v9 = a4 ? a2[25] : a2[27];
      v10 = *(_QWORD *)(a1 + 24);
      v11 = *(_QWORD *)(v9 + v8);
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 96LL);
      if ( !*(_WORD *)(v11 + 4) )
      {
        v14 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
        if ( v14 )
        {
          if ( !*v14 && v14[1] == 8 && *(_DWORD *)(v11 + 24) == 1 )
            break;
        }
      }
      v31 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 96LL);
      v29 = *(_QWORD *)(a1 + 24);
      v15 = sub_15E1A70(*(_QWORD *)(a1 + 8));
      v10 = v29;
      v13 = v31;
      v16 = v15;
      if ( v15 )
        goto LABEL_11;
LABEL_12:
      v13(v10, 1, v16, 0, 0);
      if ( v16 )
      {
        v17 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v17 )
          sub_15D7BC0(v12, v16);
      }
      v8 += 8;
      sub_14EC390(a1 + 344, v11, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL), a5);
      result = v33;
      if ( v8 == v33 )
        return result;
    }
    v16 = *(_QWORD *)(v11 + 32);
    if ( !v16 )
      goto LABEL_12;
LABEL_11:
    ++*(_DWORD *)(v16 + 8);
    goto LABEL_12;
  }
  return result;
}

