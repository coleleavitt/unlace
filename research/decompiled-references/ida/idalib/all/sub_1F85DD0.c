__int64 __fastcall sub_1F85DD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 *v9; // rbp
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // rdi
  int v14; // r10d
  __int64 *v15; // r11
  int v16; // edx
  bool v17; // zf
  int v18; // esi
  __int64 v19; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v20; // [rsp+18h] [rbp-20h] BYREF

  result = 0;
  v19 = a2;
  if ( a2 )
  {
    if ( *(char *)(a2 + 29) < 0 )
      return sub_B88050(a2);
    v8 = *(unsigned int *)(a1 + 440);
    v9 = (__int64 *)(a1 + 424);
    if ( (_DWORD)v8 )
    {
      a6 = (unsigned int)(v8 - 1);
      v10 = *(_QWORD *)(a1 + 424);
      v11 = a6 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v12 = (__int64 *)(v10 + 16LL * v11);
      v13 = *v12;
      if ( a2 == *v12 )
        return v12[1];
      v14 = 1;
      v15 = nullptr;
      if ( v13 != -4096 )
      {
        while ( 1 )
        {
          if ( !v15 && v13 == -8192 )
            v15 = v12;
          v11 = a6 & (v14 + v11);
          v12 = (__int64 *)(v10 + 16LL * v11);
          v13 = *v12;
          if ( a2 == *v12 )
            return v12[1];
          if ( v13 == -4096 )
          {
            if ( v15 )
              v12 = v15;
            break;
          }
          ++v14;
        }
      }
      v16 = *(_DWORD *)(a1 + 432);
      v20 = v12;
      a3 = (unsigned int)(v16 + 1);
      a5 = (unsigned int)(4 * a3);
      if ( (unsigned int)a5 < 3 * (int)v8 )
      {
        a5 = (unsigned int)v8 >> 3;
        if ( (int)v8 - *(_DWORD *)(a1 + 436) - (int)a3 > (unsigned int)a5 )
        {
LABEL_11:
          v17 = *v12 == -4096;
          *(_DWORD *)(a1 + 432) = a3;
          if ( !v17 )
            --*(_DWORD *)(a1 + 436);
          *v12 = a2;
          v12[1] = 0;
          return v12[1];
        }
        v18 = v8;
LABEL_16:
        sub_1F85BC0((__int64)v9, v18, a3, v8, a5, a6);
        sub_1F747D0(v9, &v19, &v20);
        a2 = v19;
        LODWORD(a3) = *(_DWORD *)(a1 + 432) + 1;
        v12 = v20;
        goto LABEL_11;
      }
    }
    else
    {
      v20 = nullptr;
    }
    v18 = 2 * v8;
    goto LABEL_16;
  }
  return result;
}
