unsigned __int64 __fastcall sub_5A3760(__int64 a1, __int64 a2, int a3)
{
  __int64 *v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 *v11; // r15
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+0h] [rbp-68h]
  __int64 v19; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v4 = *(__int64 **)(a2 + 32);
  v22 = __readfsqword(0x28u);
  if ( v4 )
  {
    v6 = v4[1];
    if ( !v6 )
      return v22 - __readfsqword(0x28u);
    if ( *(_BYTE *)(a1 + 60) )
    {
      v7 = 56 * v6;
      if ( 56 * v6 )
      {
        v8 = *v4;
        goto LABEL_6;
      }
      return v22 - __readfsqword(0x28u);
    }
    v21 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
    *(_QWORD *)&v21 = 2;
    *(_BYTE *)ptr = 123;
    *((_BYTE *)ptr + 1) = 0;
    sub_5A3520(a1, (__int64)&ptr, a3);
    if ( ptr )
    {
      *(_QWORD *)&v21 = 0;
      qfree(ptr);
    }
    v7 = *(_QWORD *)(a2 + 32);
    if ( !(56LL * *(_QWORD *)(v7 + 8)) )
    {
LABEL_12:
      if ( !*(_BYTE *)(a1 + 60) )
      {
LABEL_21:
        v21 = 0;
        ptr = nullptr;
        ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
        *(_QWORD *)&v21 = 2;
        *(_BYTE *)ptr = 125;
        *((_BYTE *)ptr + 1) = 0;
        sub_5A3520(a1, (__int64)&ptr, a3);
        if ( ptr )
        {
          *(_QWORD *)&v21 = 0;
          qfree(ptr);
        }
      }
      return v22 - __readfsqword(0x28u);
    }
    v8 = *(_QWORD *)v7;
LABEL_6:
    while ( 1 )
    {
      v9 = v8;
      v8 += 56;
      sub_5A3760(a1, v9, (unsigned int)(a3 + *(_DWORD *)(a1 + 140)), v7);
      v10 = *(_QWORD **)(a2 + 32);
      if ( !*(_BYTE *)(a1 + 60) )
        break;
LABEL_11:
      v7 = v10[1];
      if ( v8 == *v10 + 56 * v7 )
        goto LABEL_12;
    }
    if ( v8 == *v10 + 56LL * v10[1] )
      goto LABEL_21;
    v11 = (__int64 *)(**(_QWORD **)(a1 + 120) + 24LL * *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL) - 24);
    v12 = v11[1];
    if ( v12 )
    {
      v14 = v12 + 1;
      v15 = v11[1];
      v13 = *v11;
      --v12;
      if ( v11[2] >= v14 )
        goto LABEL_10;
    }
    else
    {
      v13 = *v11;
      v14 = 2;
      v15 = 1;
      if ( (unsigned __int64)v11[2] >= 2 )
      {
LABEL_10:
        v11[1] = v14;
        *(_BYTE *)(v13 + v15) = 0;
        *(_BYTE *)(*v11 + v12) = 44;
        v10 = *(_QWORD **)(a2 + 32);
        goto LABEL_11;
      }
    }
    v19 = v15;
    v18 = v14;
    v17 = qvector_reserve(v11, v13, v14, 1);
    v15 = v19;
    v14 = v18;
    *v11 = v17;
    v13 = v17;
    goto LABEL_10;
  }
  return sub_5A3520(a1, a2, a3);
}
