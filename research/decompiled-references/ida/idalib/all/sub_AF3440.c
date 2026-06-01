__int64 __fastcall sub_AF3440(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  int v7; // r14d
  unsigned int v8; // eax
  bool v9; // cc
  _DWORD *v10; // r14
  _DWORD *v11; // r13
  __int64 v12; // rax
  int v13; // ebx
  __int64 *v14; // rbp
  __int64 *v15; // r13
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  _QWORD *v19; // rax
  int v20; // eax
  _BYTE v21[32]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v22[88]; // [rsp+20h] [rbp-58h] BYREF

  v4 = sub_F22BD0(a2, 0);
  v5 = sub_F22BD0(a3, 0);
  if ( v4 && v5 )
  {
    LODWORD(v4) = sub_AEDD20(a1, v4, v5);
    if ( !(_BYTE)v4 )
      goto LABEL_4;
    v7 = sub_F22B40(a2);
    if ( v7 != (unsigned int)sub_F22B40(a3) )
      return (unsigned int)v4;
    v8 = sub_F22B40(a2);
    v9 = v8 <= 2;
    if ( v8 == 2 )
    {
LABEL_28:
      v4 = sub_F22E90(a2);
      LOBYTE(v4) = *(_QWORD *)(sub_F22E90(a2) + 8) == *(_QWORD *)(v4 + 8);
      return (unsigned int)v4;
    }
  }
  else
  {
    if ( v5 | v4 )
      goto LABEL_4;
    v13 = sub_F22B40(a2);
    if ( v13 != (unsigned int)sub_F22B40(a3) )
      goto LABEL_4;
    v8 = sub_F22B40(a2);
    v9 = v8 <= 2;
    if ( v8 == 2 )
      goto LABEL_28;
  }
  if ( !v9 )
  {
    if ( v8 == 4 )
    {
      v4 = sub_F22F70(a3);
      v19 = (_QWORD *)sub_F22F70(a2);
      LOBYTE(v20) = sub_AF3360(a1, v19, (_QWORD *)v4);
      LODWORD(v4) = v20;
      return (unsigned int)v4;
    }
    if ( v8 == 6 )
    {
      v10 = (_DWORD *)sub_F22F10(a2);
      v11 = (_DWORD *)sub_F22F10(a3);
      sub_F22160(v22, v11);
      sub_F22160(v21, v10);
      if ( sub_AF1940(a1, (__int64)v21, (__int64)v22) )
      {
        v4 = sub_F22790(v11);
        v12 = sub_F22790(v10);
        if ( (unsigned __int8)sub_AEDD20(a1, v12, v4) )
        {
          LOBYTE(v4) = ((*v11 >> 3) & 0x3FFF) == ((*v10 >> 3) & 0x3FFF);
          return (unsigned int)v4;
        }
      }
      goto LABEL_4;
    }
LABEL_26:
    LODWORD(v4) = 1;
    return (unsigned int)v4;
  }
  if ( v8 != 1 )
    goto LABEL_26;
  v4 = sub_F22E60(a2);
  v18 = sub_F22E60(a3);
  v14 = (__int64 *)(v4 + 8);
  v15 = (__int64 *)(v18 + 8);
  v16 = v4 + 8LL * (*(_WORD *)(v4 + 2) >> 1) + 8;
  v17 = v18 + 8LL * (*(_WORD *)(v18 + 2) >> 1) + 8;
  LOBYTE(v18) = v16 == v4 + 8;
  LOBYTE(v4) = v17 == (_QWORD)v15;
  if ( (__int64 *)v17 == v15 || (_BYTE)v18 )
  {
LABEL_29:
    LODWORD(v4) = v18 & v4;
    return (unsigned int)v4;
  }
  while ( 1 )
  {
    LODWORD(v18) = sub_AEDD20(a1, *v14, *v15);
    if ( !(_BYTE)v18 )
      break;
    ++v14;
    ++v15;
    LOBYTE(v18) = v14 == (__int64 *)v16;
    LOBYTE(v4) = v17 == (_QWORD)v15;
    if ( v14 == (__int64 *)v16 || (__int64 *)v17 == v15 )
      goto LABEL_29;
  }
LABEL_4:
  LODWORD(v4) = 0;
  return (unsigned int)v4;
}
