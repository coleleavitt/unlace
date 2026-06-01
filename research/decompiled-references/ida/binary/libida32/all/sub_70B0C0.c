__int64 __fastcall sub_70B0C0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // r13
  __int64 v12; // rsi
  char v13; // r15
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rdi
  int v17; // eax
  const char *v18; // rax
  const char *v19; // rbp
  size_t v20; // rax
  size_t v21; // r14
  char *v22; // rdi
  size_t v23; // r15
  __int64 v24; // rax
  _QWORD v25[9]; // [rsp+0h] [rbp-48h] BYREF

  v25[1] = __readfsqword(0x28u);
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
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = sub_814880(a1[80], v7, v6);
  *(_QWORD *)(a2 + 32) = v8;
  v11 = (void *)v8;
  if ( !v8 )
    goto LABEL_18;
  v12 = *(_QWORD *)(a2 + 24);
  v13 = byte_2CABFC0;
  byte_2CABFC0 = *((_BYTE *)a1 + 634);
  if ( (*(_BYTE *)(a2 + 40) & 0x10) == 0 )
  {
    sub_70A2A0(a2, v12);
    v7 = 0;
    qlseek(*(_QWORD *)(a2 + 32), 0, 0);
    goto LABEL_14;
  }
  if ( !v12 )
  {
    v14 = *(_QWORD *)(a2 + 16);
    if ( v14 )
    {
      v15 = sub_70FB00(v8, 0, v14, a2 + 48, v25);
      if ( v15 )
      {
        strarray(&unk_2B0E500, 14, v15);
        if ( a1 )
          sub_3573A0((char **)a1);
        close_linput(*(void **)(a2 + 32));
        *(_QWORD *)(a2 + 32) = 0;
        byte_2CABFC0 = v13;
        return v3;
      }
      *(_QWORD *)(a2 + 24) = v25[0];
      if ( (*(_BYTE *)(a2 + 40) & 4) != 0 )
      {
        qlseek(*(_QWORD *)(a2 + 32), 0, 0);
        sub_70A2A0(a2, *(_QWORD *)(a2 + 16));
      }
      v16 = *(_QWORD *)(a2 + 32);
      goto LABEL_13;
    }
    if ( !under_debugger )
      interr(3319);
LABEL_36:
    BUG();
  }
  v16 = v8;
LABEL_13:
  qlseek(v16, 0, 0);
  v7 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 32) = create_zip_linput(*(_QWORD *)(a2 + 32), v7, 0);
LABEL_14:
  v17 = *(_DWORD *)(a2 + 40);
  if ( (v17 & 2) != 0 )
  {
    v10 = *(unsigned int *)(a2 + 44);
    if ( *(_DWORD *)(a2 + 48) != (_DWORD)v10 )
    {
      *(_DWORD *)(a2 + 40) = v17 | 8;
      *((_BYTE *)a1 + 849) = 0;
    }
  }
  v3 = *(_QWORD *)(a2 + 32);
  byte_2CABFC0 = v13;
  if ( !v3 )
  {
LABEL_18:
    v18 = (const char *)qstrerror(0xFFFFFFFFLL, v7, v9, v10);
    v19 = v18;
    if ( v18 && (v20 = strlen(v18), (v21 = v20) != 0) )
    {
      v22 = (char *)*a1;
      v23 = v20 + 1;
      if ( a1[2] < v20 + 1 )
      {
        v24 = qvector_reserve(a1, *a1, v20 + 1, 1);
        *a1 = v24;
        v22 = (char *)v24;
      }
      a1[1] = v23;
      memmove(v22, v19, v21);
      *(_BYTE *)(*a1 + v21) = 0;
    }
    else
    {
      a1[1] = 0;
    }
    close_linput(v11);
    return *(_QWORD *)(a2 + 32);
  }
  return v3;
}

