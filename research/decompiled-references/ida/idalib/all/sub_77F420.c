__int64 __fastcall sub_77F420(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r13
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
  if ( a2 >= *(_QWORD *)(a1 + 56) )
    return 0;
  v4 = *(_QWORD *)(a1 + 48) + 176 * a2;
  v5 = *(_DWORD *)(v4 + 168);
  if ( (v5 & 3) != 0 )
    return 0;
  *(_DWORD *)(v4 + 168) = v5 | 1;
  if ( *(_QWORD *)(v4 + 160) != a3 )
  {
    return 0;
  }
  else
  {
    v21 = 0;
    v20 = &v17;
    v19 = &v17;
    v6 = *(_QWORD *)(v4 + 24);
    v7 = *(_QWORD *)(v4 + 32);
    v17 = 0;
    v18 = nullptr;
    v8 = v6 + 9 * v7;
    if ( v8 == v6 )
    {
      return 1;
    }
    else
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v6 + 8) )
        {
          if ( !(unsigned __int8)sub_77F420(a1, *(_QWORD *)v6, a2) )
            break;
          v9 = *(_QWORD *)(a1 + 48) + 176LL * *(_QWORD *)v6;
          if ( *(_QWORD *)(v9 + 8) <= 1u )
            break;
          sub_4313A0(&v16, v9);
          if ( !v10 )
            break;
        }
        v6 += 9;
        if ( v6 == v8 )
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
          sub_7744F0((_QWORD *)v12[3]);
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
