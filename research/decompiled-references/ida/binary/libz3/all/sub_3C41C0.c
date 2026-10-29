__int64 __fastcall sub_3C41C0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  char *v4; // r12
  int v5; // ecx
  unsigned int v6; // esi
  __int64 v7; // rdx
  char *v8; // rbp
  char *v9; // r13
  __int64 v10; // rdi
  unsigned int v11; // r12d
  size_t v12; // rbp
  _OWORD *v13; // rcx
  _OWORD *v14; // rdx
  unsigned int v15; // esi

  if ( *((_DWORD *)a1 + 3) || (result = *((unsigned int *)a1 + 4), (_DWORD)result) )
  {
    v3 = *((unsigned int *)a1 + 2);
    v4 = (char *)*a1;
    v5 = 0;
    v6 = *((_DWORD *)a1 + 2);
    result = *a1;
    v7 = *a1 + 16 * v3;
    if ( *a1 == v7 )
      goto LABEL_19;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v7 == result )
          goto LABEL_8;
      }
      result += 16;
      ++v5;
    }
    while ( v7 != result );
LABEL_8:
    if ( v6 <= 0x10 )
      goto LABEL_19;
    result = 3 * v6;
    if ( (unsigned int)result >= 4 * v5 )
      goto LABEL_19;
    if ( v4 )
    {
      v8 = v4;
      v9 = &v4[16 * v3];
      do
      {
        while ( 1 )
        {
          v10 = *((_QWORD *)v8 + 1);
          if ( !v10 )
            break;
          v8 += 16;
          sub_186B220((void *)(v10 - 8));
          if ( v9 == v8 )
            goto LABEL_14;
        }
        v8 += 16;
      }
      while ( v8 != v9 );
LABEL_14:
      sub_186B220(v4);
      v11 = *((_DWORD *)a1 + 2);
      *a1 = 0;
      v11 >>= 1;
      *((_DWORD *)a1 + 2) = v11;
      v12 = 16LL * v11;
      result = sub_186B270(v12);
      if ( !v11 )
        goto LABEL_18;
    }
    else
    {
      v15 = v6 >> 1;
      *a1 = 0;
      *((_DWORD *)a1 + 2) = v15;
      v12 = 16LL * v15;
      result = sub_186B270(v12);
    }
    v13 = (_OWORD *)(result + v12);
    v14 = (_OWORD *)result;
    if ( (v12 & 0x10) == 0 || (v14 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, v13 != (_OWORD *)(result + 16)) )
    {
      do
      {
        *v14 = 0;
        v14 += 2;
        *(v14 - 1) = 0;
      }
      while ( v13 != v14 );
    }
LABEL_18:
    *a1 = result;
LABEL_19:
    *(__int64 *)((char *)a1 + 12) = 0;
  }
  return result;
}

