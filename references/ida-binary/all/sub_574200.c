__int64 __fastcall sub_574200(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  unsigned int v6; // eax
  __int64 v7; // r15
  unsigned int v8; // r13d
  __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // r14
  unsigned int v12; // r9d
  unsigned int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // edx
  char v17; // rdx^4
  bool v18; // al
  __int64 v19; // [rsp+0h] [rbp-58h]
  unsigned int v20; // [rsp+Ch] [rbp-4Ch]
  unsigned int v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 1288);
  if ( v4 )
  {
    if ( (v4 & 1) != 0 )
    {
      if ( (v4 & 0x20) == 0 )
        return 1;
    }
    else if ( (*(_BYTE *)(v4 + 45) & 2) == 0 )
    {
      v6 = *(_DWORD *)(v4 + 32);
      goto LABEL_7;
    }
    v6 = 610;
LABEL_7:
    if ( (unsigned int)a3 >= v6 )
      return 1;
  }
  v7 = *(_QWORD *)(a1 + 1216);
  v8 = *(_DWORD *)(v7 + 8);
  if ( (unsigned int)a2 >= v8 )
    sub_55D310(a1, a2, a3, (unsigned int)a3);
  v9 = *(__int64 **)v7;
  v10 = *(_QWORD *)v7 + 48LL * (unsigned int)a2;
  v11 = *(_QWORD *)v10;
  v12 = *(_DWORD *)(*(_QWORD *)v10 + 4LL);
  v13 = *(_DWORD *)(*(_QWORD *)v10 + 220LL);
  if ( v13 < *(_DWORD *)(v10 + 16) )
    *(_DWORD *)(v10 + 16) = v13;
  v14 = 0;
  v22 = *(_DWORD *)(v11 + 224);
  do
  {
    while ( 1 )
    {
      if ( (_DWORD)a2 != v14 && !*((_DWORD *)v9 + 10) )
      {
        v19 = *v9;
        if ( *(_DWORD *)(*v9 + 4) >= v12 )
        {
          v21 = v3;
          v20 = v12;
          v15 = sub_55E200(v7, v14);
          v3 = v21;
          v12 = v20;
          if ( v21 >= (unsigned int)v15 && !v17 )
            break;
        }
      }
LABEL_17:
      ++v14;
      v9 += 6;
      if ( v8 == v14 )
        return 0;
    }
    if ( (unsigned int)v15 < v21 )
    {
      if ( (HIDWORD(v15) + 1) * (v21 - (unsigned int)v15) > 0x708 )
        return 1;
LABEL_21:
      if ( !*((_DWORD *)v9 + 10)
        && !*(_DWORD *)(v10 + 40)
        && ((*(_QWORD *)v11 ^ *(_QWORD *)v19) & 0xFFFFFFFF0000FFFFLL) == 0
        && *(_DWORD *)(v19 + 216) == *(_DWORD *)(v11 + 216) )
      {
        v18 = sub_5715E0(v9[3], *(_QWORD *)(v10 + 24));
        v12 = v20;
        v3 = v21;
        if ( v18 )
          return 1;
      }
      goto LABEL_17;
    }
    if ( v16 > v22 )
      goto LABEL_21;
    ++v14;
    v9 += 6;
  }
  while ( v8 != v14 );
  return 0;
}
