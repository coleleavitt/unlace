__int64 __fastcall sub_60BBA0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  _BYTE *v4; // rax
  __int64 v5; // r14
  __int64 v6; // rbp
  const void *v7; // rax
  _BYTE *v8; // rdi
  size_t v9; // rdx
  size_t v10; // r13
  unsigned __int64 v11; // rdx
  _WORD *v13; // rdx
  const void *v14; // rax
  _BYTE *v15; // rdi
  size_t v16; // rdx
  size_t v17; // rbp
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax

  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( v3 )
    {
      v4 = *(_BYTE **)(a1 + 168);
      v5 = a1 + 136;
      if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 160) )
      {
        v6 = sub_26239D0(a1 + 136, 60);
      }
      else
      {
        v6 = a1 + 136;
        *(_QWORD *)(a1 + 168) = v4 + 1;
        *v4 = 60;
      }
      v7 = (const void *)sub_FED840(v3);
      v8 = *(_BYTE **)(v6 + 32);
      v10 = v9;
      v11 = *(_QWORD *)(v6 + 24);
      if ( v11 - (unsigned __int64)v8 < v10 )
      {
        v20 = sub_26240F0(v6, v7, v10);
        v8 = *(_BYTE **)(v20 + 32);
        v11 = *(_QWORD *)(v20 + 24);
        v6 = v20;
      }
      else if ( v10 )
      {
        memcpy(v8, v7, v10);
        v11 = *(_QWORD *)(v6 + 24);
        v8 = (_BYTE *)(v10 + *(_QWORD *)(v6 + 32));
        *(_QWORD *)(v6 + 32) = v8;
      }
      if ( (unsigned __int64)v8 >= v11 )
      {
        sub_26239D0(v6, 62);
      }
      else
      {
        *(_QWORD *)(v6 + 32) = v8 + 1;
        *v8 = 62;
      }
      if ( *(_BYTE *)(v3 + 280) )
      {
        v13 = *(_WORD **)(a1 + 168);
        if ( *(_QWORD *)(a1 + 160) - (_QWORD)v13 <= 1u )
        {
          v5 = sub_26240F0(v5, " (", 2);
        }
        else
        {
          *v13 = 10272;
          *(_QWORD *)(a1 + 168) += 2LL;
        }
        v14 = (const void *)sub_FEDA30(v3);
        v15 = *(_BYTE **)(v5 + 32);
        v17 = v16;
        v18 = *(_QWORD *)(v5 + 24);
        if ( v18 - (unsigned __int64)v15 < v17 )
        {
          v21 = sub_26240F0(v5, v14, v17);
          v15 = *(_BYTE **)(v21 + 32);
          v18 = *(_QWORD *)(v21 + 24);
          v5 = v21;
        }
        else if ( v17 )
        {
          memcpy(v15, v14, v17);
          v18 = *(_QWORD *)(v5 + 24);
          v15 = (_BYTE *)(v17 + *(_QWORD *)(v5 + 32));
          *(_QWORD *)(v5 + 32) = v15;
        }
        if ( (unsigned __int64)v15 >= v18 )
        {
          sub_26239D0(v5, 41);
        }
        else
        {
          *(_QWORD *)(v5 + 32) = v15 + 1;
          *v15 = 41;
        }
      }
    }
    return a1;
  }
  v19 = *(_QWORD *)(a1 + 168);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 160) - v19) <= 8 )
  {
    sub_26240F0(a1 + 136, "<NULL TU>", 9);
    return a1;
  }
  *(_BYTE *)(v19 + 8) = 62;
  *(_QWORD *)v19 = 0x5554204C4C554E3CLL;
  *(_QWORD *)(a1 + 168) += 9LL;
  return a1;
}

