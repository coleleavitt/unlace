__int64 __fastcall sub_22119E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int8 v4; // al
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  __int64 result; // rax
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ecx
  __int64 v16; // rdi
  const void *v17; // r15
  size_t v18; // rdx
  size_t v19; // r13
  unsigned __int8 v20; // al
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rax
  _BYTE *v24; // rdx
  int v25; // r12d
  unsigned int v26; // r15d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // r14d
  unsigned int v37; // ebp
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _BYTE *v48; // rdx
  __int64 v50; // [rsp+8h] [rbp-70h]
  int v51; // [rsp+14h] [rbp-64h]
  __int64 v52; // [rsp+20h] [rbp-58h] BYREF
  __int64 v53; // [rsp+28h] [rbp-50h]
  __int64 v54; // [rsp+30h] [rbp-48h]

  v3 = a1;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_QWORD *)(a2 + 40) )
    {
      v45 = sub_227D600(a1);
      v46 = sub_995540(v45, "  ");
      v47 = sub_9954E0(v46, *(const void **)(a2 + 32), *(_QWORD *)(a2 + 40));
      v48 = *(_BYTE **)(v47 + 32);
      if ( (unsigned __int64)v48 < *(_QWORD *)(v47 + 24) )
      {
        *(_QWORD *)(v47 + 32) = v48 + 1;
        *v48 = 10;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        v25 = result;
        if ( !(_DWORD)result )
          return result;
        goto LABEL_24;
      }
      sub_227BA10(v47, 10);
    }
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    v25 = result;
    if ( !(_DWORD)result )
      return result;
LABEL_24:
    v26 = 0;
    do
    {
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v26);
      v29 = v28;
      v30 = v27;
      v31 = sub_227D600(a1);
      v32 = sub_995540(v31, "    ");
      v52 = v30;
      v53 = v29;
      v54 = 2;
      sub_2211550(v32, (__int64)&v52);
      v33 = v26++;
      v34 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, v33);
      result = sub_2210B20(v34, v35, a3, (int)v29 + 8);
    }
    while ( v25 != v26 );
    return result;
  }
  v4 = *(_BYTE *)(a2 + 10);
  if ( (v4 & 0x18) != 0 )
  {
    if ( ((v4 >> 3) & 3) != 1 )
      goto LABEL_4;
  }
  else
  {
    a1 = a2;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2) != 1 )
      goto LABEL_4;
  }
  a1 = v3;
  v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v36 )
  {
    v37 = 0;
    while ( 1 )
    {
      a1 = v3;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, v37);
      if ( !v38 )
        break;
      if ( v36 == ++v37 )
        goto LABEL_4;
    }
    v39 = sub_227D600(v3);
    v40 = *(_QWORD *)(a2 + 16);
    v41 = *(_QWORD *)(a2 + 24);
    v54 = 2;
    v52 = v40;
    v53 = v41;
    sub_2211550(v39, (__int64)&v52);
    v42 = *(_QWORD *)(a2 + 24);
    if ( v42 == 1 )
      v43 = qword_2C8F5C8 + 6;
    else
      v43 = v42 + qword_2C8F5B8 + 5;
    a1 = *(_QWORD *)(a2 + 32);
    sub_2210B20(a1, *(_QWORD *)(a2 + 40), a3, v43);
  }
LABEL_4:
  v5 = sub_227D600(a1);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 24);
  v54 = 2;
  v52 = v6;
  v53 = v7;
  v8 = sub_2211550(v5, (__int64)&v52);
  sub_9954E0(v8, "=<value>", (size_t)byte_8);
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 == 1 )
    v10 = qword_2C8F5C8 + 6;
  else
    v10 = v9 + qword_2C8F5B8 + 5;
  sub_2210B20(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), a3, v10 + 8);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v51 = result;
  if ( (_DWORD)result )
  {
    v12 = 0;
    while ( 1 )
    {
      v16 = v3;
      v17 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, v12);
      v19 = v18;
      v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, v12);
      v20 = *(_BYTE *)(a2 + 10);
      v22 = v21;
      if ( (v20 & 0x18) != 0 )
      {
        result = (v20 >> 3) & 3;
        if ( (_DWORD)result != 1 )
          goto LABEL_9;
      }
      else
      {
        v16 = a2;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
        if ( (_DWORD)result != 1 )
        {
LABEL_9:
          v13 = sub_227D600(v16);
          v14 = sub_9954E0(v13, "    =", (size_t)&byte_5);
          sub_9954E0(v14, v17, v19);
          v15 = v19 + 8;
          if ( v19 )
            goto LABEL_10;
          goto LABEL_18;
        }
      }
      if ( v19 )
      {
        v44 = sub_227D600(v16);
        v14 = sub_9954E0(v44, "    =", (size_t)&byte_5);
        sub_9954E0(v14, v17, v19);
        v15 = v19 + 8;
LABEL_10:
        if ( !v22 )
          goto LABEL_19;
        goto LABEL_11;
      }
      if ( !v22 )
        goto LABEL_12;
      v23 = sub_227D600(v16);
      v14 = sub_9954E0(v23, "    =", (size_t)&byte_5);
      sub_9954E0(v14, v17, 0);
LABEL_18:
      v14 = sub_227D600(v14);
      sub_9954E0(v14, "<empty>", (size_t)&byte_7);
      v15 = 15;
      if ( v22 )
      {
LABEL_11:
        result = sub_2210D30(v50, v22, a3, v15);
LABEL_12:
        if ( v51 == ++v12 )
          return result;
      }
      else
      {
LABEL_19:
        result = sub_227D600(v14);
        v24 = *(_BYTE **)(result + 32);
        if ( (unsigned __int64)v24 >= *(_QWORD *)(result + 24) )
        {
          result = sub_227BA10(result, 10);
          goto LABEL_12;
        }
        ++v12;
        *(_QWORD *)(result + 32) = v24 + 1;
        *v24 = 10;
        if ( v51 == v12 )
          return result;
      }
    }
  }
  return result;
}
