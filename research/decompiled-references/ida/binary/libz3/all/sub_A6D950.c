__int64 __fastcall sub_A6D950(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 result; // rax
  char *v5; // rdi
  int v6; // ecx
  __int64 v7; // rsi
  char *v8; // rdx
  unsigned int v9; // r12d
  size_t v10; // rbx
  _OWORD *v11; // rcx
  _OWORD *v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  _DWORD *v18; // rbx
  unsigned int v19; // esi

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 24) = 1;
  if ( !v3 )
  {
    result = *(unsigned int *)(a1 + 48);
    if ( !(_DWORD)result )
      goto LABEL_19;
  }
  v5 = *(char **)(a1 + 32);
  v6 = 0;
  v7 = *(unsigned int *)(a1 + 40);
  result = (__int64)v5;
  v8 = &v5[16 * v7];
  if ( v5 != v8 )
  {
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v8 == (char *)result )
          goto LABEL_10;
      }
      result += 16;
      ++v6;
    }
    while ( v8 != (char *)result );
LABEL_10:
    if ( (unsigned int)v7 > 0x10 )
    {
      result = (unsigned int)(3 * v7);
      if ( (unsigned int)result < 4 * v6 )
      {
        if ( v5 )
        {
          sub_186B220(v5);
          v9 = *(_DWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 32) = 0;
          v9 >>= 1;
          *(_DWORD *)(a1 + 40) = v9;
          v10 = 16LL * v9;
          result = sub_186B270(v10);
          if ( !v9 )
          {
LABEL_17:
            *(_QWORD *)(a1 + 32) = result;
            goto LABEL_18;
          }
        }
        else
        {
          v19 = (unsigned int)v7 >> 1;
          *(_QWORD *)(a1 + 32) = 0;
          *(_DWORD *)(a1 + 40) = v19;
          v10 = 16LL * v19;
          result = sub_186B270(v10);
        }
        v11 = (_OWORD *)(result + v10);
        v12 = (_OWORD *)result;
        if ( (v10 & 0x10) == 0 || (v12 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, v11 != (_OWORD *)(result + 16)) )
        {
          do
          {
            *v12 = 0;
            v12 += 2;
            *(v12 - 1) = 0;
          }
          while ( v11 != v12 );
        }
        goto LABEL_17;
      }
    }
  }
LABEL_18:
  *(_QWORD *)(a1 + 44) = 0;
LABEL_19:
  v13 = *(_QWORD **)(a1 + 64);
  if ( v13 )
  {
    result = *((unsigned int *)v13 - 1);
    v14 = &v13[result];
    if ( v13 >= v14 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = *(_QWORD *)(a1 + 56);
          v17 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_26;
      }
      result = sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_26:
    v13 = *(_QWORD **)(a1 + 64);
    if ( v13 )
LABEL_27:
      *((_DWORD *)v13 - 1) = 0;
  }
  v18 = *(_DWORD **)(a1 + 72);
  if ( v18 && (v17 = v18[4] == 1, --v18[4], v17) )
  {
    (**(void (__fastcall ***)(_DWORD *))v18)(v18);
    result = sub_186B220(v18);
    *(_QWORD *)(a1 + 72) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0;
  }
  return result;
}

