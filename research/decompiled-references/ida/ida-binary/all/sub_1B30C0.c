unsigned __int64 __fastcall sub_1B30C0(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 *v6; // r15
  unsigned int v7; // edx
  __int64 v8; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rbp
  __int64 **v12; // rbx
  __int64 v13; // r13
  __int64 *v14; // r12
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  _QWORD **v19; // rcx
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 i; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v2 = *(_DWORD *)a2;
  v25 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 > 0x2Fu )
  {
    v19 = *(_QWORD ***)(a2 + 8);
    v20 = (__int64 *)(v19 + 1);
    *(_QWORD *)(a2 + 8) = v19 + 1;
    v6 = *v19;
    goto LABEL_21;
  }
  v4 = *(_QWORD *)(a2 + 16);
  v5 = v2 + 8;
  *(_DWORD *)a2 = v5;
  v6 = *(__int64 **)(v4 + v2);
  if ( (unsigned int)v5 > 0x2F )
  {
    v20 = *(__int64 **)(a2 + 8);
LABEL_21:
    v10 = v20 + 1;
    *(_QWORD *)(a2 + 8) = v20 + 1;
    v8 = *v20;
    if ( *v20 == a1[33] )
      goto LABEL_25;
    if ( a1[34] == v8 )
      goto LABEL_7;
    goto LABEL_5;
  }
  v7 = v2 + 16;
  *(_DWORD *)a2 = v7;
  v8 = *(_QWORD *)(v4 + v5);
  if ( v8 != a1[33] )
  {
    if ( a1[34] == v8 )
    {
LABEL_7:
      v7 = *(_DWORD *)a2;
      goto LABEL_8;
    }
LABEL_5:
    if ( a1[35] != v8 )
      return v25 - __readfsqword(0x28u);
    goto LABEL_7;
  }
LABEL_8:
  if ( v7 <= 0x2F )
  {
    v10 = (_QWORD *)(*(_QWORD *)(a2 + 16) + v7);
    *(_DWORD *)a2 = v7 + 8;
    goto LABEL_10;
  }
  v10 = *(_QWORD **)(a2 + 8);
LABEL_25:
  *(_QWORD *)(a2 + 8) = v10 + 1;
LABEL_10:
  v11 = *(_QWORD *)(*v10 + 8LL);
  for ( i = v11 + 24LL * *(_QWORD *)(*v10 + 16LL); i != v11; v11 += 24 )
  {
    v12 = *(__int64 ***)v11;
    v13 = *(_QWORD *)v11 + 8LL * *(_QWORD *)(v11 + 8);
    if ( *(_QWORD *)v11 != v13 )
    {
      do
      {
        while ( 1 )
        {
          v14 = *v12;
          if ( *(_DWORD *)(**v12 + 12) > 0x23u )
            break;
          if ( (__int64 **)v13 == ++v12 )
            goto LABEL_18;
        }
        v22 = **v12;
        v15 = operator new(0x18u);
        v16 = *(_DWORD *)(v22 + 12);
        *(_QWORD *)v15 = v14;
        *(_DWORD *)(v15 + 8) = 0;
        *(_DWORD *)(v15 + 12) = *(_DWORD *)&aP_0[4 * (v16 - 36)];
        *(_QWORD *)(v15 + 16) = -1;
        v17 = v6[1];
        v18 = *v6;
        if ( v6[2] < (unsigned __int64)(v17 + 1) )
        {
          v23 = v15;
          v21 = qvector_reserve(v6, v18, v17 + 1, 8);
          v15 = v23;
          *v6 = v21;
          v18 = v21;
          v17 = v6[1];
        }
        ++v12;
        *(_QWORD *)(v18 + 8 * v17) = v15;
        ++v6[1];
      }
      while ( (__int64 **)v13 != v12 );
    }
LABEL_18:
    ;
  }
  return v25 - __readfsqword(0x28u);
}
