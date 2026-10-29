__int64 __fastcall sub_895320(__int64 *a1, __int64 a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  __int64 v6; // rbx
  unsigned int v7; // r13d
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // eax
  unsigned int v12; // ebx
  unsigned __int16 *v14; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 320);
  v8 = *(unsigned int *)(v6 + 192);
  v9 = *(unsigned int *)(v6 + 196);
  v10 = *(_DWORD *)(v6 + 208) + 1;
  *(_DWORD *)(v6 + 208) = v10;
  if ( v9 < v8 + 1 )
  {
    v14 = a4;
    sub_25D6060(v6 + 184, v6 + 200, v8 + 1, 4);
    v8 = *(unsigned int *)(v6 + 192);
    a4 = v14;
  }
  *(_DWORD *)(*(_QWORD *)(v6 + 184) + 4 * v8) = v10;
  ++*(_DWORD *)(v6 + 192);
  v11 = sub_88E980(a1, a2, a3, a4);
  v12 = v11;
  if ( v11 && v11 != 5 )
  {
    if ( (unsigned __int8)sub_8931F0(a2, 1, v7) )
    {
      if ( v12 > 3 )
        v12 = 2;
      else
        v12 = 2 * (v12 != 1) + 1;
    }
    else
    {
      v12 = 0;
    }
  }
  else if ( v7 != -1 )
  {
    sub_8931F0(a2, 0, v7);
  }
  --*(_DWORD *)(*(_QWORD *)(a2 + 32) + 192LL);
  return v12;
}

