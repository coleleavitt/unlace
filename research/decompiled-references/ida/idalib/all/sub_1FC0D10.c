__int64 __fastcall sub_1FC0D10(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  _DWORD *v16; // rsi
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64); // rax
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rax
  _QWORD *v23; // r12
  __int64 result; // rax
  unsigned int v25; // ecx
  __int64 v26; // r12
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdi
  unsigned __int64 v34; // rdi
  __int64 v35; // r12
  unsigned __int64 v36; // rbx
  __int64 (__fastcall **v37)(_QWORD); // rdx
  __int64 v38; // rsi
  __int64 v39; // rax
  int v40; // esi
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  int v43; // esi
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 (__fastcall *v48)(__int64); // rdx
  __int64 v49; // rsi

  v4 = sub_BBF290(a2);
  sub_1FBABE0((__int64 *)a1, v4, (char *)a2);
  sub_1FBF160(a1, (_QWORD *)a2, v5, v6, v7, v8);
  v9 = *(_QWORD *)(a2 + 152);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(_QWORD *)(a1 + 24);
    v12 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v9 & 4) != 0 )
    {
      v13 = 0;
      if ( v12 )
        v13 = *v12 & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      if ( v12 )
      {
        sub_1F92A90(v10, v9 & 0xFFFFFFFFFFFFFFF8LL, v11);
        goto LABEL_11;
      }
      v13 = 0;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(_QWORD *)(a1 + 24);
    v13 = 0;
  }
  sub_1F92A90(v10, v13, v11);
  v14 = *(_QWORD *)(a2 + 152);
  if ( v14 && (v14 & 4) != 0 && (v15 = v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    v16 = *(_DWORD **)(v15 + 8);
  else
    v16 = *(_DWORD **)(a2 + 168);
  sub_1F999A0((__int64 *)(a1 + 8), v16);
LABEL_11:
  sub_1F999A0((__int64 *)(a1 + 8), *(_DWORD **)(a2 + 168));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 176), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 180) & 7);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 180) & 8) != 0);
  v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v17 == sub_A01140 )
    v18 = sub_B70A60(a2);
  else
    v18 = v17(a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), a2 == v18);
  v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v19 == sub_A01140 )
  {
    if ( a2 != sub_B70A60(a2) )
      goto LABEL_15;
  }
  else if ( a2 != v19(a2) )
  {
    goto LABEL_15;
  }
  v47 = (_QWORD *)sub_BBF290(a2);
  v48 = *(__int64 (__fastcall **)(__int64))(*v47 + 32LL);
  if ( v48 == sub_6EE8F0 )
    v49 = v47[9];
  else
    v49 = v48((__int64)v47);
  sub_1F92A90(*(_QWORD *)(a1 + 16), v49, *(_QWORD *)(a1 + 24));
LABEL_15:
  if ( (unsigned int)sub_B97260(a2) == 3 )
  {
    v21 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v20 = sub_B97260(a2);
    v21 = *(_QWORD *)(a1 + 24);
    if ( v20 != 4 )
    {
      sub_9B9C90(v21, 0);
      goto LABEL_18;
    }
  }
  sub_9B9C90(v21, 1);
  v39 = *(_QWORD *)(a2 + 160);
  v40 = 0;
  if ( v39 )
  {
    if ( (v39 & 4) != 0 )
    {
      v41 = v39 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v41 )
        v40 = *(_DWORD *)(v41 + 8);
    }
  }
  sub_1F6F570(*(_QWORD **)(a1 + 16), v40, *(_QWORD *)(a1 + 24));
  v42 = *(_QWORD *)(a2 + 160);
  v43 = 0;
  if ( v42 )
  {
    if ( (v42 & 4) != 0 )
    {
      v44 = v42 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v44 )
        v43 = *(_DWORD *)(v44 + 12);
    }
  }
  sub_1F6F570(*(_QWORD **)(a1 + 16), v43, *(_QWORD *)(a1 + 24));
LABEL_18:
  v22 = *(_QWORD *)(a2 + 160);
  v23 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v22 && (v22 & 4) != 0 )
  {
    if ( !v23 )
    {
      sub_9B9C90(*(_QWORD *)(a1 + 24), 0);
      goto LABEL_24;
    }
    v23 = (_QWORD *)*v23;
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), v23 != nullptr);
  if ( v23 )
    sub_1F99A00(a1 + 8, (__int64)v23);
LABEL_24:
  result = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  if ( result )
  {
    v25 = *(_DWORD *)(result + 36);
    if ( v25 <= 7 )
    {
      result = 1LL << v25;
      if ( ((1LL << v25) & 0xBC) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 8) + 17536LL;
        v27 = sub_BBF290(a2);
        v28 = sub_B87960(v26, v27);
        v33 = *(_QWORD *)(a2 + 16);
        v34 = (v33 & 4) != 0 ? *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF8LL) : v33 & 0xFFFFFFFFFFFFFFF8LL;
        result = sub_B94050(v34, v28, v29, v30, v31, v32);
        if ( result )
        {
          while ( 1 )
          {
            v35 = *(_QWORD *)a1;
            v36 = result & 0xFFFFFFFFFFFFFFF8LL;
            v37 = *(__int64 (__fastcall ***)(_QWORD))(result & 0xFFFFFFFFFFFFFFF8LL);
            if ( (result & 4) == 0 )
            {
              v45 = v37[4](result & 0xFFFFFFFFFFFFFFF8LL);
              result = sub_1F92240(v35, v45);
              goto LABEL_33;
            }
            if ( !v36 )
              break;
            v38 = (*((__int64 (__fastcall **)(_QWORD))*v37 + 4))(v37);
            sub_1F92240(v35, v38);
            result = *(_QWORD *)(v36 + 8);
            if ( !result )
              goto LABEL_33;
          }
          v46 = v37[4](0);
          result = sub_1F92240(v35, v46);
        }
      }
    }
  }
LABEL_33:
  *(_DWORD *)(a1 + 224) = 109;
  return result;
}
