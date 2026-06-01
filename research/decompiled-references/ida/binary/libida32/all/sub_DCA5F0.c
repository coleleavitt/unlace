unsigned __int64 __fastcall sub_DCA5F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 result; // rax
  _QWORD *v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  void *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax

  v2 = *(_QWORD *)a2;
  v3 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 24) || !*(_BYTE *)(sub_CDA220(a2) + 60) || (v4 = v3 + v2 + 72, v2 != *(_DWORD *)(a2 + 40)) )
    v4 = v3 + v2 + 40;
  v5 = sub_21D4FB0(*(unsigned int *)(v4 + 8));
  result = ((unsigned __int64)(unsigned int)sub_21D53E0(v5) + 63) >> 6;
  if ( result != 1 )
  {
    v7 = (_QWORD *)*a1;
    v8 = sub_21D4FB0(*(unsigned int *)(v4 + 8));
    v9 = sub_21D53E0(v8);
    v12 = v7[16];
    v13 = 8 * (((unsigned __int64)v9 + 63) >> 6);
    v7[26] += v13;
    v14 = v13 + ((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v7[17] >= v14 && v12 )
    {
      v7[16] = v14;
      v15 = (void *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v15 = (void *)sub_962430((__int64)(v7 + 16), v13, v13, 3, v10, v11);
    }
    v16 = sub_21D4FB0(*(unsigned int *)(v4 + 8));
    result = ((unsigned __int64)(unsigned int)sub_21D53E0(v16) + 63) >> 6;
    if ( result != 1 )
    {
      if ( *(_QWORD *)v4 )
      {
        v17 = sub_21D4FB0(*(unsigned int *)(v4 + 8));
        v18 = sub_21D53E0(v17);
        result = (unsigned __int64)memcpy(v15, *(const void **)v4, 8 * (((unsigned __int64)v18 + 63) >> 6));
      }
      *(_QWORD *)v4 = v15;
    }
  }
  return result;
}

