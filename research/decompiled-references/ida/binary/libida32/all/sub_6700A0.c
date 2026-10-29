unsigned __int64 __fastcall sub_6700A0(__int64 a1, int a2, int a3)
{
  _DWORD **v3; // rbx
  _DWORD **v4; // rax
  _DWORD *v6; // rbp
  int v7; // r13d
  void *v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v3 = *(_DWORD ***)(a1 + 40);
  v4 = &v3[*(_QWORD *)(a1 + 48)];
  if ( v3 == v4 )
    return v14 - __readfsqword(0x28u);
  while ( 1 )
  {
    v6 = *v3;
    if ( **v3 == a2 && v6[1] == a3 )
      break;
    if ( v4 == ++v3 )
      return v14 - __readfsqword(0x28u);
  }
  v7 = v6[8];
  if ( v7 != -1 )
  {
    v11 = *(_QWORD *)(a1 + 120);
    v12 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a1 + 128) < (unsigned __int64)(v11 + 1) )
    {
      v13 = qvector_reserve(a1 + 112, v12, v11 + 1, 4);
      *(_QWORD *)(a1 + 112) = v13;
      v12 = v13;
      v11 = *(_QWORD *)(a1 + 120);
    }
    *(_DWORD *)(v12 + 4 * v11) = v7;
    ++*(_QWORD *)(a1 + 120);
    v6[8] = -1;
    v6 = *v3;
    if ( !*v3 )
      goto LABEL_11;
    goto LABEL_8;
  }
  if ( v6 )
  {
LABEL_8:
    v8 = *((void **)v6 + 1);
    if ( v8 )
    {
      *((_QWORD *)v6 + 2) = 0;
      qfree(v8);
    }
    operator delete(v6, 0x28u);
  }
LABEL_11:
  v9 = *(_QWORD *)(a1 + 48);
  if ( ((*(_QWORD *)(a1 + 40) + 8 * v9 - (__int64)v3) >> 3) - 2 >= 0 )
  {
    memmove(v3, v3 + 1, *(_QWORD *)(a1 + 40) + 8 * v9 - (_QWORD)v3 - 8);
    v9 = *(_QWORD *)(a1 + 48);
  }
  *(_BYTE *)(a1 + 136) = 1;
  *(_QWORD *)(a1 + 48) = v9 - 1;
  return v14 - __readfsqword(0x28u);
}

