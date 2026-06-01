unsigned __int64 __fastcall sub_9A6FE0(__int64 a1, __int64 a2)
{
  char v3; // r10
  __int64 v4; // rdx
  int v5; // r11d
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 *v8; // r9
  __int64 v9; // rdi
  __int64 v11; // rax
  int v12; // eax
  __m128 v13; // [rsp+0h] [rbp-18h] BYREF

  v3 = *(_BYTE *)a1 & 1;
  if ( v3 )
  {
    v4 = a1 + 8;
    v5 = 3;
    v6 = 64;
    v7 = ((unsigned __int8)((unsigned int)a2 >> 9) ^ (unsigned __int8)((unsigned int)a2 >> 4)) & 3;
    v8 = (__int64 *)(a1
                   + 8
                   + 16LL * (((unsigned __int8)((unsigned int)a2 >> 9) ^ (unsigned __int8)((unsigned int)a2 >> 4)) & 3));
    v9 = *v8;
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_9A6F20(&v13, v8, (_QWORD *)(v6 + v4), a1, 1);
      return v13.m128_u64[0];
    }
LABEL_7:
    v12 = 1;
    if ( v9 == -4096 )
      return sub_9A6F90(a1);
    while ( 1 )
    {
      v7 = v5 & (v12 + v7);
      v8 = (__int64 *)(v4 + 16LL * v7);
      if ( *v8 == a2 )
        break;
      ++v12;
      if ( *v8 == -4096 )
        return sub_9A6F90(a1);
    }
    if ( v3 )
    {
      v6 = 64;
      goto LABEL_3;
    }
    v11 = *(unsigned int *)(a1 + 16);
LABEL_6:
    v6 = 16 * v11;
    goto LABEL_3;
  }
  v11 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v11 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = v11 - 1;
    v7 = (v11 - 1) & (((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9));
    v8 = (__int64 *)(v4 + 16LL * v7);
    v9 = *v8;
    if ( a2 == *v8 )
      goto LABEL_6;
    goto LABEL_7;
  }
  return sub_9A6F90(a1);
}

