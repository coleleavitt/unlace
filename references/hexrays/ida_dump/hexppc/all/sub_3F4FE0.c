__int64 __fastcall sub_3F4FE0(__int64 a1, int **a2, _DWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebx
  int *v8; // rax
  int *v10; // rdx
  int v11; // eax
  int *v12; // rcx
  _DWORD *v13; // rdi
  int *v14; // rax
  int v15; // eax
  int v16; // ecx
  bool v17; // zf
  char v18; // cl
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  char v22; // di
  __int64 v23; // rdi
  int v24; // [rsp+14h] [rbp-34h] BYREF
  int *v25; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v26[5]; // [rsp+20h] [rbp-28h] BYREF

  v26[1] = __readfsqword(0x28u);
  if ( *a3 != 20 )
    return (unsigned int)-1;
  v5 = sub_118E60((__int64)a3, &v25);
  if ( !v5 )
    return (unsigned int)-1;
  v6 = sub_326890(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(_DWORD *)(v5 + 4), 0);
  if ( (v6 & (v6 - 1)) != 0 )
    return (unsigned int)-1;
  v7 = log2ceil(v6);
  v8 = v25;
  if ( *(_BYTE *)v25 != 4 )
  {
    if ( *(_BYTE *)v25 != 1 )
      return (unsigned int)-1;
    goto LABEL_8;
  }
  v10 = *((int **)v25 + 1);
  v11 = *v10;
  if ( *v10 != 9 )
  {
LABEL_13:
    v12 = v25;
    if ( v11 == 10 )
    {
      v12 = v10 + 8;
      v17 = *((_BYTE *)v10 + 32) == 4;
      v25 = v10 + 8;
      if ( !v17 )
        return (unsigned int)-1;
    }
    v13 = *((_DWORD **)v12 + 1);
    if ( *v13 != 23 || !v13 )
    {
      v14 = v25;
LABEL_17:
      if ( !(unsigned __int8)sub_11ED70(*((int **)v14 + 1), &v24, v26, 1)
        || *(_BYTE *)v26[0] != 1
        || *(_DWORD *)(a1 + 468) != *(_DWORD *)(v26[0] + 8LL) && (*(_BYTE *)(v26[0] + 1LL) & 8) == 0 )
      {
        return (unsigned int)-1;
      }
      v15 = 31;
      v16 = v24;
      if ( (int)v7 <= 31 )
        v15 = v7;
      if ( v24 > v15 )
        return (unsigned int)-1;
      if ( a2 )
        *a2 = (int *)v26[0];
      v7 -= v16;
      return v7;
    }
    v19 = sub_118E60((__int64)v13, v26);
    if ( v19 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL);
      if ( v20 <= 0x1F )
      {
        v21 = v26[0];
        v22 = *(_BYTE *)v26[0];
        if ( *(_BYTE *)v26[0] != 4 )
        {
LABEL_35:
          if ( v22 == 1 && (*(_DWORD *)(a1 + 468) == *(_DWORD *)(v21 + 8) || (*(_BYTE *)(v21 + 1) & 8) != 0) )
          {
            if ( a2 )
            {
              *a2 = (int *)v21;
              v20 = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL);
            }
            v7 += v20;
            return v7;
          }
          goto LABEL_36;
        }
        v23 = *(_QWORD *)(v26[0] + 8LL);
        if ( *(_DWORD *)v23 == 9 )
        {
          v21 = v23 + 32;
          v22 = *(_BYTE *)(v23 + 32);
          v26[0] = v21;
          goto LABEL_35;
        }
      }
    }
LABEL_36:
    v14 = v25;
    if ( *(_BYTE *)v25 != 4 )
      return (unsigned int)-1;
    goto LABEL_17;
  }
  v18 = *((_BYTE *)v10 + 32);
  v8 = v10 + 8;
  v25 = v10 + 8;
  if ( v18 != 1 )
  {
    if ( v18 != 4 )
      return (unsigned int)-1;
    v10 = *((int **)v10 + 5);
    v11 = *v10;
    goto LABEL_13;
  }
LABEL_8:
  if ( *(_DWORD *)(a1 + 468) != v8[2] && (*((_BYTE *)v8 + 1) & 8) == 0 )
    return (unsigned int)-1;
  if ( a2 )
    *a2 = v8;
  return v7;
}
