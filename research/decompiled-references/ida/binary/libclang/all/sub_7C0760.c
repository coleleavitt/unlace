unsigned __int64 __fastcall sub_7C0760(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 v8; // r14
  char v9; // dl
  unsigned int v10; // esi
  __int64 v11; // r8
  int v12; // esi
  __int64 *v13; // rcx
  __int64 v14; // rdi
  int v15; // r10d
  __int64 *v16; // r9
  unsigned int v17; // edx
  unsigned int v18; // eax
  int v19; // ecx
  __int64 *v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 *v28; // r14
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rsi
  __int64 *v32; // [rsp+8h] [rbp-30h] BYREF

  result = *(_QWORD *)(a1 + 104);
  if ( !result )
  {
    sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    result = *(_QWORD *)(a1 + 104);
  }
  if ( result > 7 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    v8 = *(_QWORD *)result;
    if ( *(_QWORD *)result )
    {
      v9 = *(_BYTE *)a3 & 1;
      if ( v9 )
      {
        v11 = a3 + 8;
        v12 = 7;
      }
      else
      {
        v10 = *(_DWORD *)(a3 + 16);
        if ( !v10 )
          goto LABEL_49;
        v11 = *(_QWORD *)(a3 + 8);
        v12 = v10 - 1;
      }
      result = v12 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
      v13 = (__int64 *)(v11 + 8 * result);
      v14 = *v13;
      if ( v8 == *v13 )
        return result;
      v15 = 1;
      v16 = nullptr;
      while ( v14 != -4096 )
      {
        if ( !v16 && v14 == -8192 )
          v16 = v13;
        result = v12 & (unsigned int)(v15 + result);
        v13 = (__int64 *)(v11 + 8LL * (unsigned int)result);
        v14 = *v13;
        if ( v8 == *v13 )
          return result;
        ++v15;
      }
      if ( !v16 )
        v16 = v13;
      v32 = v16;
      if ( v9 )
      {
        v17 = 24;
        v10 = 8;
      }
      else
      {
        v10 = *(_DWORD *)(a3 + 16);
        v17 = 3 * v10;
      }
      v18 = *(_DWORD *)a3;
      v19 = (*(_DWORD *)a3 >> 1) + 1;
      if ( 4 * v19 < v17 )
      {
        if ( v10 >> 3 < v10 - *(_DWORD *)(a3 + 4) - v19 )
          goto LABEL_19;
        goto LABEL_50;
      }
LABEL_49:
      v10 *= 2;
LABEL_50:
      sub_7C0240(a3, v10);
      sub_7B4DE0(a3, v8, &v32);
      v18 = *(_DWORD *)a3;
LABEL_19:
      *(_DWORD *)a3 = (2 * (v18 >> 1) + 2) | v18 & 1;
      v20 = v32;
      if ( *v32 != -4096 )
        --*(_DWORD *)(a3 + 4);
      *v20 = v8;
      v21 = sub_79C190(v8 + 48);
      if ( !v21 )
        goto LABEL_33;
      while ( (*(_BYTE *)(v21 + 28) & 0x7F) != 0x49 )
      {
        v22 = *(_QWORD *)(v21 + 8);
        v21 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v22 <= 7 )
          goto LABEL_33;
      }
LABEL_25:
      if ( a2 == v21 )
        goto LABEL_32;
      v23 = *(_QWORD *)(v21 + 40);
      v24 = *(_QWORD *)(a2 + 40) & 7LL;
      if ( (v23 & 7) != 0 )
      {
        if ( (_DWORD)v24 )
        {
LABEL_28:
          result = *(unsigned int *)(a4 + 8);
          if ( *(unsigned int *)(a4 + 12) < result + 1 )
          {
            sub_25D6060(a4, a4 + 16, result + 1, 8);
            result = *(unsigned int *)(a4 + 8);
          }
          *(_QWORD *)(*(_QWORD *)a4 + 8 * result) = v21;
          ++*(_DWORD *)(a4 + 8);
          return result;
        }
        v30 = 0;
      }
      else
      {
        v30 = v23 & 0xFFFFFFFFFFFFFFF8LL;
        v31 = 0;
        if ( (_DWORD)v24 )
          goto LABEL_41;
      }
      v31 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_41:
      if ( v30 != v31 )
      {
LABEL_32:
        while ( 1 )
        {
          v25 = *(_QWORD *)(v21 + 8);
          v21 = v25 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v25 <= 7 )
            break;
          if ( (*(_BYTE *)(v21 + 28) & 0x7F) == 0x49 )
            goto LABEL_25;
        }
LABEL_33:
        result = *(_QWORD *)(v8 + 104);
        if ( result )
        {
          if ( result <= 7 )
            return result;
        }
        else
        {
          sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(v8 + 96) + 88LL), *(_QWORD *)(v8 + 96));
          result = *(_QWORD *)(v8 + 104);
          if ( result <= 7 )
          {
            if ( result )
              return result;
            sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(v8 + 96) + 88LL), *(_QWORD *)(v8 + 96));
            result = *(_QWORD *)(v8 + 104);
            if ( result <= 7 )
              return result;
            result &= 0xFFFFFFFFFFFFFFF8LL;
            v28 = nullptr;
            v27 = *(__int64 **)(result + 8);
            goto LABEL_36;
          }
        }
        v26 = result & 0xFFFFFFFFFFFFFFF8LL;
        v27 = *(__int64 **)(v26 + 8);
        result = *(unsigned int *)(v26 + 16);
        v28 = &v27[result];
LABEL_36:
        while ( v28 != v27 )
        {
          v29 = *v27++;
          result = sub_7C0760(v29, a2, a3, a4);
        }
        return result;
      }
      goto LABEL_28;
    }
  }
  return result;
}

