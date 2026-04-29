__int64 __fastcall sub_25B630(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  size_t v6; // rbx
  __int64 result; // rax
  __int64 v8; // r13
  void *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  void *v17; // rax
  __int64 v18; // [rsp+0h] [rbp-48h]
  __int64 n; // [rsp+8h] [rbp-40h]

  v2 = a2;
  *(_QWORD *)a1 = -1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 12) = -1;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  sub_25AFF0(a1, (__int64)a2);
  *(_QWORD *)(a1 + 64) = a2[8];
  v5 = a2[9];
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = v5;
  *(_OWORD *)(a1 + 88) = 0;
  v6 = a2[11];
  if ( v6 )
  {
    v9 = (void *)qalloc_or_throw(a2[11], (__int64)a2, v3, v4);
    *(_QWORD *)(a1 + 80) = v9;
    a2 = (_QWORD *)a2[10];
    *(_QWORD *)(a1 + 96) = v6;
    memcpy(v9, a2, v6);
    *(_QWORD *)(a1 + 88) = v6;
  }
  result = v2[13];
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 104) = result;
  v8 = v2[15];
  if ( v8 )
  {
    v10 = qalloc_or_throw(56 * v8, (__int64)a2, v3, v4);
    *(_QWORD *)(a1 + 112) = v10;
    v11 = v10;
    v12 = 0;
    *(_QWORD *)(a1 + 128) = v8;
    while ( 1 )
    {
      v13 = 56 * v12 + v11;
      v14 = v2[14] + 56 * v12;
      *(_QWORD *)v13 = -1;
      *(_DWORD *)(v13 + 8) = 70;
      *(_QWORD *)(v13 + 12) = -1;
      result = sub_25AA70(v13, v14);
      *(_QWORD *)(v13 + 32) = 0;
      *(_OWORD *)(v13 + 40) = 0;
      v16 = *(_QWORD *)(v14 + 40);
      if ( v16 )
      {
        v18 = *(_QWORD *)(v14 + 40);
        n = 8 * v16;
        v17 = (void *)qalloc_or_throw(8 * v16, v14, 8 * v16, v15);
        *(_QWORD *)(v13 + 32) = v17;
        ++v12;
        *(_QWORD *)(v13 + 48) = v18;
        result = (__int64)memcpy(v17, *(const void **)(v14 + 32), n);
        *(_QWORD *)(v13 + 40) = v18;
        if ( v8 == v12 )
        {
LABEL_9:
          *(_QWORD *)(a1 + 120) = v8;
          return result;
        }
      }
      else if ( v8 == ++v12 )
      {
        goto LABEL_9;
      }
      v11 = *(_QWORD *)(a1 + 112);
    }
  }
  return result;
}
