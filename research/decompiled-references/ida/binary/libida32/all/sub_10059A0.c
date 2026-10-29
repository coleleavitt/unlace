__int64 __fastcall sub_10059A0(__int64 a1, __int64 a2, void *a3, size_t a4)
{
  __int64 v4; // r13
  int v6; // esi
  unsigned int v8; // eax
  __int16 v9; // ax
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  char v14; // [rsp+Ch] [rbp-7Ch]

  v4 = a1 + 16;
  v6 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x400000000LL;
  if ( v6 == 25 )
  {
    v8 = sub_228CF30(a3, a4);
  }
  else
  {
    if ( v6 != 26 )
      return a1;
    v8 = sub_228CEA0(a3, a4);
  }
  if ( v8 )
  {
    if ( *(_DWORD *)(a2 + 32) == 26 )
      v9 = sub_228CFC0(v8);
    else
      v9 = sub_228D020(v8);
    if ( (v9 & 0x100) != 0 )
    {
      v12 = *(unsigned int *)(a1 + 8);
      if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        v14 = v9;
        sub_22134E0(a1, v4, v12 + 1, 16);
        v12 = *(unsigned int *)(a1 + 8);
        LOBYTE(v9) = v14;
      }
      v13 = (_QWORD *)(*(_QWORD *)a1 + 16 * v12);
      *v13 = "sramecc";
      v13[1] = 7;
      ++*(_DWORD *)(a1 + 8);
    }
    if ( (v9 & 0x80u) != 0 )
    {
      v10 = *(unsigned int *)(a1 + 8);
      if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_22134E0(a1, v4, v10 + 1, 16);
        v10 = *(unsigned int *)(a1 + 8);
      }
      v11 = (_QWORD *)(*(_QWORD *)a1 + 16 * v10);
      *v11 = "xnack";
      v11[1] = 5;
      ++*(_DWORD *)(a1 + 8);
    }
  }
  return a1;
}

