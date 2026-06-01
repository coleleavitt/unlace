__int64 __fastcall sub_72B6A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  void *v7; // r13
  __int64 v8; // rsi
  char v9; // r15
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  const char *v14; // rax
  const char *v15; // rbp
  size_t v16; // rax
  size_t v17; // r14
  char *v18; // rdi
  size_t v19; // r15
  __int64 v20; // rax
  _QWORD v21[9]; // [rsp+0h] [rbp-48h] BYREF

  v21[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 40) & 0x20) != 0 )
  {
    if ( !under_debugger )
      interr(3317);
    goto LABEL_36;
  }
  if ( !*((_BYTE *)a1 + 850) )
  {
    if ( !under_debugger )
      interr(3318);
    goto LABEL_36;
  }
  v3 = *(_QWORD *)(a2 + 32);
  if ( v3 )
    return v3;
  v6 = sub_837C40(a1[80], *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  *(_QWORD *)(a2 + 32) = v6;
  v7 = (void *)v6;
  if ( !v6 )
    goto LABEL_18;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = byte_2CD5EE0;
  byte_2CD5EE0 = *((_BYTE *)a1 + 634);
  if ( (*(_BYTE *)(a2 + 40) & 0x10) == 0 )
  {
    sub_72A880(a2, v8);
    qlseek(*(_QWORD *)(a2 + 32), 0, 0);
    goto LABEL_14;
  }
  if ( !v8 )
  {
    v10 = *(_QWORD *)(a2 + 16);
    if ( v10 )
    {
      v11 = sub_730070(v6, 0, v10, a2 + 48, v21);
      if ( v11 )
      {
        strarray(&unk_2B384A0, 14, v11);
        if ( a1 )
          sub_35A790((char **)a1);
        close_linput(*(void **)(a2 + 32));
        *(_QWORD *)(a2 + 32) = 0;
        byte_2CD5EE0 = v9;
        return v3;
      }
      *(_QWORD *)(a2 + 24) = v21[0];
      if ( (*(_BYTE *)(a2 + 40) & 4) != 0 )
      {
        qlseek(*(_QWORD *)(a2 + 32), 0, 0);
        sub_72A880(a2, *(_QWORD *)(a2 + 16));
      }
      v12 = *(_QWORD *)(a2 + 32);
      goto LABEL_13;
    }
    if ( !under_debugger )
      interr(3319);
LABEL_36:
    BUG();
  }
  v12 = v6;
LABEL_13:
  qlseek(v12, 0, 0);
  *(_QWORD *)(a2 + 32) = create_zip_linput(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 16), 0);
LABEL_14:
  v13 = *(_DWORD *)(a2 + 40);
  if ( (v13 & 2) != 0 && *(_DWORD *)(a2 + 48) != *(_DWORD *)(a2 + 44) )
  {
    *(_DWORD *)(a2 + 40) = v13 | 8;
    *((_BYTE *)a1 + 849) = 0;
  }
  v3 = *(_QWORD *)(a2 + 32);
  byte_2CD5EE0 = v9;
  if ( !v3 )
  {
LABEL_18:
    v14 = (const char *)qstrerror(0xFFFFFFFFLL);
    v15 = v14;
    if ( v14 && (v16 = strlen(v14), (v17 = v16) != 0) )
    {
      v18 = (char *)*a1;
      v19 = v16 + 1;
      if ( a1[2] < v16 + 1 )
      {
        v20 = qvector_reserve(a1, *a1, v16 + 1, 1);
        *a1 = v20;
        v18 = (char *)v20;
      }
      a1[1] = v19;
      memmove(v18, v15, v17);
      *(_BYTE *)(*a1 + v17) = 0;
    }
    else
    {
      a1[1] = 0;
    }
    close_linput(v7);
    return *(_QWORD *)(a2 + 32);
  }
  return v3;
}
