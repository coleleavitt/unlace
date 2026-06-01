__int64 __fastcall sub_CF7C20(__int64 a1)
{
  _DWORD *v1; // rbp
  _QWORD *v4; // rdi
  __int64 result; // rax
  char *v6; // rdi
  int v7; // ecx
  char *v8; // rdx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  __int64 v11; // r12
  void *v12; // rcx
  unsigned int v13; // esi

  v1 = *(_DWORD **)(a1 + 24);
  if ( v1 )
  {
    if ( v1[2]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v1)(v1);
      sub_186B220(v1);
    }
  }
  v4 = *(_QWORD **)(a1 + 80);
  *(_QWORD *)(a1 + 24) = 0;
  if ( v4 )
  {
    sub_CF7980(v4);
    *(_QWORD *)(a1 + 80) = 0;
  }
  if ( *(_DWORD *)(a1 + 44) || (result = *(unsigned int *)(a1 + 48), (_DWORD)result) )
  {
    v6 = *(char **)(a1 + 32);
    v7 = 0;
    v8 = &v6[8 * *(unsigned int *)(a1 + 40)];
    v9 = *(_DWORD *)(a1 + 40);
    result = (__int64)v6;
    if ( v6 == v8 )
      goto LABEL_19;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 8;
        if ( v8 == (char *)result )
          goto LABEL_13;
      }
      result += 8;
      ++v7;
    }
    while ( v8 != (char *)result );
LABEL_13:
    if ( v9 <= 0x10 )
      goto LABEL_19;
    result = 3 * v9;
    if ( (unsigned int)result >= 4 * v7 )
      goto LABEL_19;
    if ( v6 )
    {
      sub_186B220(v6);
      v10 = *(_DWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 32) = 0;
      v10 >>= 1;
      *(_DWORD *)(a1 + 40) = v10;
      v11 = v10;
      result = sub_186B270(8LL * v10);
      v12 = (void *)result;
      if ( !v10 )
      {
LABEL_18:
        *(_QWORD *)(a1 + 32) = v12;
LABEL_19:
        *(_QWORD *)(a1 + 44) = 0;
        return result;
      }
    }
    else
    {
      v13 = v9 >> 1;
      *(_QWORD *)(a1 + 32) = 0;
      v11 = v13;
      *(_DWORD *)(a1 + 40) = v13;
      v12 = (void *)sub_186B270(8LL * v13);
    }
    result = (__int64)memset(v12, 0, 8 * v11);
    v12 = (void *)result;
    goto LABEL_18;
  }
  return result;
}

