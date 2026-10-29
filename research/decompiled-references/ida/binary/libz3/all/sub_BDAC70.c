__int64 __fastcall sub_BDAC70(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD **v8; // rbp
  __int64 v9; // rcx
  _QWORD **v10; // r13
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 result; // rax
  char *v17; // rdi
  int v18; // ecx
  __int64 v19; // rsi
  char *v20; // rdx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rdx
  unsigned int v26; // esi

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = *(_DWORD *)(v3 + 4LL * (v4 - a2));
  sub_B30C30((_QWORD *)a1, a2);
  v6 = *(_QWORD *)(a1 + 448);
  v7 = 8LL * v5;
  v8 = (_QWORD **)(v6 + v7);
  if ( v6 )
  {
    v9 = 8LL * *(unsigned int *)(v6 - 4);
    v10 = (_QWORD **)(v6 + v9);
    if ( v9 == v7 )
    {
LABEL_19:
      *(_DWORD *)(v6 - 4) = v5;
      goto LABEL_20;
    }
  }
  else
  {
    v10 = nullptr;
    if ( !v7 )
      goto LABEL_20;
  }
  do
  {
    v11 = *v8;
    if ( *v8 )
    {
      v12 = v11[4];
      if ( v12 )
        sub_186B220((void *)(v12 - 8));
      v13 = v11[3];
      if ( v13 )
        sub_186B220((void *)(v13 - 8));
      v14 = v11[2];
      if ( v14 )
        sub_186B220((void *)(v14 - 8));
      v15 = v11[1];
      if ( v15 )
        sub_186B220((void *)(v15 - 8));
      if ( *v11 )
        sub_186B220((void *)(*v11 - 8LL));
      sub_186B220(v11);
    }
    ++v8;
  }
  while ( v8 != v10 );
  v6 = *(_QWORD *)(a1 + 448);
  if ( v6 )
    goto LABEL_19;
LABEL_20:
  if ( *(_DWORD *)(a1 + 580) || (result = *(unsigned int *)(a1 + 584), (_DWORD)result) )
  {
    v17 = *(char **)(a1 + 568);
    v18 = 0;
    v19 = *(unsigned int *)(a1 + 576);
    v20 = &v17[24 * v19];
    result = (__int64)v17;
    if ( v17 == v20 )
      goto LABEL_39;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 24;
        if ( v20 == (char *)result )
          goto LABEL_27;
      }
      result += 24;
      ++v18;
    }
    while ( v20 != (char *)result );
LABEL_27:
    if ( (unsigned int)v19 <= 0x10 )
      goto LABEL_39;
    result = (unsigned int)(3 * v19);
    if ( (unsigned int)result >= 4 * v18 )
      goto LABEL_39;
    if ( v17 )
    {
      sub_186B220(v17);
      v21 = *(_DWORD *)(a1 + 576);
      *(_QWORD *)(a1 + 568) = 0;
      v22 = v21 >> 1;
      *(_DWORD *)(a1 + 576) = v22;
      result = sub_186B270(24LL * v22);
      if ( !v22 )
        goto LABEL_38;
      if ( v22 - 1 <= 2 )
      {
        v24 = v22;
        v25 = result;
        goto LABEL_35;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 568) = 0;
      v26 = (unsigned int)v19 >> 1;
      *(_DWORD *)(a1 + 576) = v26;
      v22 = v26;
      result = sub_186B270(24LL * v26);
    }
    v23 = result;
    do
    {
      *(_DWORD *)(v23 + 20) = 0;
      v23 += 96;
      *(_OWORD *)(v23 - 96) = 0;
      *(_OWORD *)(v23 - 72) = 0;
      *(_OWORD *)(v23 - 48) = 0;
      *(_OWORD *)(v23 - 24) = 0;
      *(_DWORD *)(v23 - 52) = 0;
      *(_DWORD *)(v23 - 28) = 0;
      *(_DWORD *)(v23 - 4) = 0;
    }
    while ( v23 != result + 96LL * (v22 >> 2) );
    v24 = v22 & 3;
    v25 = result + 24LL * (v22 & 0x7FFFFFFC);
    if ( (v22 & 3) != 0 )
    {
LABEL_35:
      *(_QWORD *)(v25 + 16) = 0;
      *(_OWORD *)v25 = 0;
      if ( v24 != 1 )
      {
        *(_QWORD *)(v25 + 40) = 0;
        *(_OWORD *)(v25 + 24) = 0;
        if ( v24 != 2 )
        {
          *(_QWORD *)(v25 + 64) = 0;
          *(_OWORD *)(v25 + 48) = 0;
        }
      }
    }
LABEL_38:
    *(_QWORD *)(a1 + 568) = result;
LABEL_39:
    *(_QWORD *)(a1 + 580) = 0;
  }
  return result;
}

