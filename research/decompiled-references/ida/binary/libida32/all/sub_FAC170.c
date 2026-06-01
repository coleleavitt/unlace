__int64 __fastcall sub_FAC170(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v7; // ebx
  int v8; // eax
  signed int v9; // r13d
  _DWORD *v10; // rax
  __int64 v11; // rbx
  char v12; // dl
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // r9
  __int64 *v23; // rdi
  __int64 v24; // rcx
  _DWORD *v25; // rax
  _DWORD *v26; // rdx
  __int64 v27; // [rsp+0h] [rbp-58h]
  _QWORD *v28; // [rsp+8h] [rbp-50h]
  _BYTE v29[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v7 = a3 & 0x7FFFFFFF;
  *(_QWORD *)(a1 + 56) = a4;
  *(_DWORD *)(a1 + 64) = a3;
  if ( (a3 & 0x7FFFFFFFu) >= *(_DWORD *)(a2 + 476) && v7 < *(_DWORD *)(a2 + 480) )
    v8 = *(_DWORD *)(a2 + 472);
  else
    v8 = sub_FF9850(a2);
  v9 = v8;
  v29[0] = 0;
  if ( (unsigned int)(v8 + 1) <= 1 )
    goto LABEL_11;
  if ( v8 >= 0 )
  {
    v10 = (_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL * (unsigned int)v8);
    goto LABEL_7;
  }
  v20 = (unsigned int)(-2 - v8);
  v21 = *(_QWORD *)(*(_QWORD *)(a2 + 320) + 8LL * ((unsigned int)(-2 - v8) >> 6));
  if ( !_bittest64(&v21, v20) )
  {
    v10 = (_DWORD *)sub_FFBBF0(a2, (unsigned int)v20, v29);
    v12 = v29[0];
    goto LABEL_10;
  }
  v22 = (_QWORD *)(*(_QWORD *)(a2 + 272) + 8 * ((unsigned __int64)(int)v20 >> 5));
  if ( !*v22 )
  {
    v23 = (__int64 *)(*(_QWORD *)(a2 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v24 = *v23;
    v23[10] += 768;
    v25 = (_DWORD *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v23[1] >= (unsigned __int64)(v25 + 192) && v24 )
    {
      *v23 = (__int64)(v25 + 192);
    }
    else
    {
      v28 = v22;
      v25 = (_DWORD *)sub_962430((__int64)v23, 768, 768, 3, v20, (__int64)v22);
      v22 = v28;
      LOBYTE(v20) = -2 - v9;
    }
    *v22 = v25;
    v26 = v25 + 192;
    do
    {
      *v25 = 0;
      v25 += 6;
      *((_OWORD *)v25 - 1) = 0;
      *((_QWORD *)v25 - 1) = 0;
    }
    while ( v25 != v26 );
    v12 = v29[0];
    v10 = (_DWORD *)(*v22 + 24 * (v20 & 0x1F));
LABEL_10:
    if ( v12 )
      goto LABEL_11;
    goto LABEL_7;
  }
  v10 = (_DWORD *)(*v22 + 24 * (v20 & 0x1F));
LABEL_7:
  if ( v10 )
  {
    v11 = v7 - (*v10 & 0x7FFFFFFF);
    goto LABEL_12;
  }
LABEL_11:
  v11 = 0;
  v9 = 0;
LABEL_12:
  for ( result = sub_FAB150((_QWORD *)a1, a2, v9); result; result = *(_QWORD *)result )
  {
    v14 = *(unsigned int *)(result + 24);
    v15 = *(_QWORD *)(result + 16);
    *(_BYTE *)(result + 12) = 1;
    v16 = 16 * v14;
    v17 = v15 + 16 * v14 - 16;
    if ( *(_DWORD *)(v17 + 8) == (_DWORD)v11 )
    {
      if ( *(_QWORD *)v17 == a4 )
        return result;
      *(_QWORD *)v17 = a4;
    }
    else
    {
      v18 = v14 + 1;
      v19 = v4 & 0xFFFFFFFF00000000LL | v11;
      v4 = v19;
      if ( v18 > *(unsigned int *)(result + 28) )
      {
        v27 = result;
        sub_22134E0(result + 16, result + 32, v18, 16);
        result = v27;
        v15 = *(_QWORD *)(v27 + 16);
        v16 = 16LL * *(unsigned int *)(v27 + 24);
      }
      *(_QWORD *)(v15 + v16) = a4;
      *(_QWORD *)(v15 + v16 + 8) = v19;
      ++*(_DWORD *)(result + 24);
    }
    v11 = *(unsigned int *)(result + 8);
  }
  return result;
}

