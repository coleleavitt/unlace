unsigned __int64 __fastcall sub_B1CED0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  int v9; // ebp
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  int v16; // esi
  char v17; // cl
  __int64 v18; // rdx
  int v19; // edi
  __int64 v20; // rax
  int v21; // edi
  char v22; // cl
  int v23; // edx

  v3 = a3 >> 1;
  v5 = a3 - (a3 >> 1);
  v6 = a2;
  v7 = sub_B1BD80(a1, a2, a3 >> 1, v5);
  if ( (unsigned int)a2 >= v5 )
  {
    v8 = sub_B1CDD0(a1, v5);
    v9 = v8;
    v10 = HIDWORD(v8);
    goto LABEL_3;
  }
  if ( v5 <= 9 )
  {
    v20 = sub_B1CED0(a1, (unsigned int)a2, v5);
    v21 = *(_DWORD *)(a1 + 16);
    v22 = v5 - 1;
    LODWORD(v10) = 1 << (v5 - 1);
    if ( v21 == 1 )
    {
      v23 = 1 << (v5 - 1);
    }
    else
    {
      if ( !v21 )
      {
        if ( (int)v10 + 5 * (int)a2 >= (unsigned int)(5 * v20 + HIDWORD(v20)) )
          goto LABEL_7;
        v9 = a2;
LABEL_3:
        if ( (unsigned int)a2 >= v3 )
        {
LABEL_4:
          v11 = sub_B1CDD0(a1, v3);
          v6 = v11;
          v12 = HIDWORD(v11);
          return ((unsigned __int64)(unsigned int)(v12 + v10 + HIDWORD(v7)) << 32) | ((_DWORD)v7 + v9 + v6);
        }
        goto LABEL_8;
      }
      v23 = 2 << v22;
    }
    if ( v23 + 5 * (int)a2 >= (unsigned int)(5 * v20 + HIDWORD(v20)) )
      goto LABEL_7;
    v9 = a2;
    if ( v21 != 1 )
      LODWORD(v10) = 2 << v22;
    goto LABEL_3;
  }
LABEL_7:
  v14 = sub_B1CED0(a1, (unsigned int)a2, v5);
  v9 = v14;
  v10 = HIDWORD(v14);
  if ( (unsigned int)a2 >= v3 )
    goto LABEL_4;
LABEL_8:
  if ( v3 > 9 )
    goto LABEL_9;
  v12 = sub_B1CED0(a1, (unsigned int)a2, v3);
  v16 = *(_DWORD *)(a1 + 16);
  v17 = v3 - 1;
  v18 = v12;
  LODWORD(v12) = 1 << (v3 - 1);
  if ( v16 == 1 )
  {
    v19 = 1 << (v3 - 1);
  }
  else
  {
    if ( !v16 )
    {
      if ( (unsigned int)v12 + 5 * v6 < 5 * (int)v18 + HIDWORD(v18) )
        return ((unsigned __int64)(unsigned int)(v12 + v10 + HIDWORD(v7)) << 32) | ((_DWORD)v7 + v9 + v6);
      goto LABEL_9;
    }
    v19 = 2 << v17;
  }
  if ( v19 + 5 * v6 >= 5 * (int)v18 + HIDWORD(v18) )
  {
LABEL_9:
    v15 = sub_B1CED0(a1, v6, v3);
    v6 = v15;
    v12 = HIDWORD(v15);
    return ((unsigned __int64)(unsigned int)(v12 + v10 + HIDWORD(v7)) << 32) | ((_DWORD)v7 + v9 + v6);
  }
  if ( v16 != 1 )
    LODWORD(v12) = 2 << v17;
  return ((unsigned __int64)(unsigned int)(v12 + v10 + HIDWORD(v7)) << 32) | ((_DWORD)v7 + v9 + v6);
}

