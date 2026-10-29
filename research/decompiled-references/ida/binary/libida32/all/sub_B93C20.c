void __fastcall sub_B93C20(__int64 a1, __int64 a2)
{
  char v4; // al
  __int64 v5; // rdi
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  const void *v10; // rax
  size_t v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int *v16; // rsi
  void *v17; // rdi
  size_t v18; // r13
  const void *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // r9d
  int v25; // r10d

  sub_B93E20(a1, *(_QWORD *)(a2 + 56), 0);
  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v4 == 68 )
  {
    v5 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(a2 + 80) & 1) != 0 )
    {
      sub_971800(v5, "typename");
      if ( (*(_BYTE *)(a2 + 80) & 2) == 0 )
        goto LABEL_4;
    }
    else
    {
      sub_971800(v5, "class");
      if ( (*(_BYTE *)(a2 + 80) & 2) == 0 )
      {
LABEL_4:
        if ( !*(_QWORD *)(a2 + 40) )
          return;
        v6 = *(_QWORD *)a1;
        v7 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
        if ( (unsigned __int64)v7 >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
        {
          sub_2257CD0(v6, 32);
        }
        else
        {
          *(_QWORD *)(v6 + 32) = v7 + 1;
          *v7 = 32;
        }
        goto LABEL_7;
      }
    }
    sub_971800(*(_QWORD *)a1, " ...");
LABEL_7:
    v8 = *(_QWORD *)(a2 + 40);
    if ( v8 )
    {
      v9 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(a1 + 13) & 0x10) != 0 && (v8 & 7) == 0 && (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v10 = (const void *)sub_FBA480(v8 & 0xFFFFFFFFFFFFFFF8LL);
        sub_9717A0(v9, v10, v11);
      }
      else
      {
        sub_B62620(*(_QWORD *)a1, v8);
      }
    }
    return;
  }
  v12 = *(_QWORD *)(a2 + 48);
  if ( v12 )
  {
    sub_B91A70(a1, v12);
  }
  else if ( v4 == 73 )
  {
    v13 = sub_971800(*(_QWORD *)a1, "concept ");
    v14 = *(_QWORD *)(a2 + 40);
    if ( (v14 & 7) == 0 )
    {
      v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15 )
      {
        v16 = *(unsigned int **)(v15 + 16);
        v17 = *(void **)(v13 + 32);
        v18 = *v16;
        v19 = v16 + 4;
        if ( *(_QWORD *)(v13 + 24) - (_QWORD)v17 < v18 )
        {
          v13 = sub_22581D0(v13, v19, v18);
        }
        else if ( v18 )
        {
          memcpy(v17, v19, v18);
          *(_QWORD *)(v13 + 32) += v18;
        }
      }
    }
    sub_971800(v13, " = ");
    v23 = sub_B8EB60(v13, "\n", v20, v21, v22, *(_QWORD *)(a1 + 24));
    sub_EE3EC0(v25, *(_QWORD *)a1, 0, a1 + 8, *(_DWORD *)(a1 + 32), v24, (__int64)"\n", v23);
  }
}

