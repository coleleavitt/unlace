__int64 __fastcall sub_7C9610(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r15d
  __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-70h]
  __int64 v17; // [rsp+8h] [rbp-70h]
  __int64 v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+10h] [rbp-68h]
  unsigned int v20; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v21; // [rsp+2Ch] [rbp-4Ch] BYREF
  unsigned __int64 v22[9]; // [rsp+30h] [rbp-48h] BYREF

  v22[1] = __readfsqword(0x28u);
  v22[0] = *a2;
  v3 = a3 + v22[0];
  if ( !__CFADD__(a3, v22[0]) && sub_7BFDB0((_DWORD *)(a1 + 12), v22) && sub_7BFDB0(&v21, v22) )
  {
    v7 = v21;
    v8 = *(_QWORD *)(a1 + 24);
    v9 = v21;
    if ( v8 < v21 )
    {
      v14 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)v21 )
      {
        v15 = qvector_reserve(a1 + 16, v14, v21, 4);
        v8 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = v15;
        v14 = v15;
      }
      memset((void *)(v14 + 4 * v8), 0, 4 * (v7 - v8));
      *(_QWORD *)(a1 + 24) = v7;
LABEL_10:
      v10 = 4 * v7;
      v11 = 0;
      v16 = v10;
      while ( sub_7BFDB0((_DWORD *)(v11 + *(_QWORD *)(a1 + 16)), v22) )
      {
        v11 += 4;
        if ( v16 == v11 )
          goto LABEL_13;
      }
      return 0;
    }
    if ( v21 != v8 )
      *(_QWORD *)(a1 + 24) = v21;
    if ( v9 )
      goto LABEL_10;
LABEL_13:
    LOBYTE(v12) = sub_7BFDB0(&v21, v22);
    v4 = v12;
    if ( (_BYTE)v12 )
    {
      v20 = v21;
      v17 = v21;
      sub_7C9380((const char **)(a1 + 40), (const char *)v21);
      v13 = 0;
      v19 = 32 * v17;
      if ( !v20 )
      {
LABEL_17:
        *a2 = v22[0];
        return v4;
      }
      while ( 1 )
      {
        v18 = v13;
        if ( !(unsigned __int8)sub_7C2110(*(_QWORD *)(a1 + 40) + v13, v22, v3 - v22[0]) )
          break;
        v13 = v18 + 32;
        if ( v19 == v18 + 32 )
          goto LABEL_17;
      }
    }
  }
  return 0;
}

