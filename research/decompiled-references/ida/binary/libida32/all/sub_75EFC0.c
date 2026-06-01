__int64 __fastcall sub_75EFC0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  int v4; // ecx
  unsigned int *v5; // rbx
  __int64 v6; // rax
  unsigned int *v7; // r13
  __int64 v9; // rsi
  char v10; // dl
  unsigned int v11; // r12d
  _QWORD *v12; // rbx
  _QWORD *v13; // rbp
  void *v14; // rdi
  __int64 v16; // [rsp+0h] [rbp-68h] BYREF
  int v17; // [rsp+8h] [rbp-60h] BYREF
  void *v18; // [rsp+10h] [rbp-58h]
  int *v19; // [rsp+18h] [rbp-50h]
  int *v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 56) )
    return 0;
  v3 = *(_QWORD *)(a1 + 48) + 176LL * a2;
  v4 = *(_DWORD *)(v3 + 164);
  if ( (v4 & 3) != 0 )
    return 0;
  *(_DWORD *)(v3 + 164) = v4 | 1;
  if ( *(_DWORD *)(v3 + 160) != a3 )
  {
    return 0;
  }
  else
  {
    v21 = 0;
    v20 = &v17;
    v19 = &v17;
    v5 = *(unsigned int **)(v3 + 24);
    v6 = *(_QWORD *)(v3 + 32);
    v17 = 0;
    v18 = nullptr;
    v7 = (unsigned int *)((char *)v5 + 5 * v6);
    if ( v7 == v5 )
    {
      return 1;
    }
    else
    {
      while ( 1 )
      {
        if ( *((_BYTE *)v5 + 4) )
        {
          if ( !(unsigned __int8)sub_75EFC0(a1, *v5, a2) )
            break;
          v9 = *(_QWORD *)(a1 + 48) + 176LL * *v5;
          if ( *(_QWORD *)(v9 + 8) <= 1u )
            break;
          sub_41D570(&v16, (const char *)v9);
          if ( !v10 )
            break;
        }
        v5 = (unsigned int *)((char *)v5 + 5);
        if ( v5 == v7 )
        {
          v11 = 1;
          goto LABEL_11;
        }
      }
      v11 = 0;
LABEL_11:
      v12 = v18;
      if ( v18 )
      {
        do
        {
          v13 = v12;
          sub_754080((_QWORD *)v12[3]);
          v14 = (void *)v12[4];
          v12 = (_QWORD *)v12[2];
          if ( v14 )
          {
            v13[5] = 0;
            qfree(v14);
          }
          operator delete(v13, 0x38u);
        }
        while ( v12 );
      }
    }
  }
  return v11;
}

