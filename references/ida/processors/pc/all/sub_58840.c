__int64 __fastcall sub_58840(unsigned int *a1)
{
  __int64 v2; // rsi
  int v3; // r12d
  int *v4; // r14
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // r14d
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 result; // rax
  int v17; // [rsp+Ch] [rbp-4Ch]

  if ( (unsigned __int8)sub_58790() )
  {
    v2 = *((_QWORD *)a1 + 1);
    v3 = 2;
    v17 = 8;
    *a1 = 2;
    v4 = (int *)&unk_96230;
    if ( v2 )
      goto LABEL_3;
  }
  else
  {
    v2 = *((_QWORD *)a1 + 1);
    v3 = 3;
    v17 = 4;
    *a1 = 3;
    v4 = (int *)&unk_96250;
    if ( v2 )
    {
LABEL_3:
      *((_QWORD *)a1 + 2) = 0;
      qfree();
      *((_QWORD *)a1 + 1) = 0;
      v2 = 0;
      *((_QWORD *)a1 + 3) = 0;
      v5 = *v4;
      if ( *v4 == -1 )
        goto LABEL_9;
      goto LABEL_4;
    }
  }
  v5 = *v4;
LABEL_4:
  v6 = *((_QWORD *)a1 + 2);
  while ( 1 )
  {
    ++v4;
    if ( *((_QWORD *)a1 + 3) < (unsigned __int64)(v6 + 1) )
    {
      v7 = qvector_reserve();
      v6 = *((_QWORD *)a1 + 2);
      *((_QWORD *)a1 + 1) = v7;
      v2 = v7;
    }
    *(_DWORD *)(v2 + 4 * v6) = v5;
    v6 = *((_QWORD *)a1 + 2) + 1LL;
    *((_QWORD *)a1 + 2) = v6;
    v5 = *v4;
    if ( *v4 == -1 )
      break;
    v2 = *((_QWORD *)a1 + 1);
  }
LABEL_9:
  if ( *((_QWORD *)a1 + 4) )
  {
    *((_QWORD *)a1 + 5) = 0;
    qfree();
    *((_QWORD *)a1 + 4) = 0;
    v8 = 0;
    *((_QWORD *)a1 + 6) = 0;
  }
  else
  {
    v8 = *((_QWORD *)a1 + 6);
  }
  v9 = *((_QWORD *)a1 + 2);
  v10 = *a1;
  v11 = *((_QWORD *)a1 + 5);
  a1[1] = v9;
  if ( (unsigned int)v10 <= 6 )
  {
    v12 = 84;
    if ( _bittest64(&v12, v10) )
      a1[1] = v11 + v9;
  }
  v13 = 64;
  v14 = 0;
  while ( 1 )
  {
    if ( v8 < v11 + 1 )
    {
      v15 = qvector_reserve();
      v11 = *((_QWORD *)a1 + 5);
      *((_QWORD *)a1 + 4) = v15;
      v14 = v15;
    }
    *(_DWORD *)(v14 + 4 * v11) = v13++;
    v11 = *((_QWORD *)a1 + 5) + 1LL;
    *((_QWORD *)a1 + 5) = v11;
    if ( 4 * (v17 != 4) + 68 == v13 )
      break;
    v14 = *((_QWORD *)a1 + 4);
    v8 = *((_QWORD *)a1 + 6);
  }
  result = a1[1];
  if ( v3 == 2 )
  {
    result = (unsigned int)(v17 + result);
    a1[1] = result;
  }
  return result;
}
