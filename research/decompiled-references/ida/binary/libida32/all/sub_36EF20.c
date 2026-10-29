__int64 __fastcall sub_36EF20(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  void *v3; // rcx
  __int128 v4; // kr00_16
  int v6; // r12d
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 40);
  v12 = __readfsqword(0x28u);
  ptr = nullptr;
  v11 = 0;
  if ( v2 > 0 )
  {
    v6 = *(_DWORD *)(a1 + 8);
    v7 = (void *)qvector_reserve(&ptr, 0, v2 + 1, 1);
    v8 = v11;
    ptr = v7;
    if ( (unsigned __int64)v11 < v2 + 1 )
    {
      do
      {
        v9 = v8;
        *((_BYTE *)v7 + v8++) = v6;
        v7 = ptr;
      }
      while ( v9 != v2 );
    }
    *(_QWORD *)&v11 = v2 + 1;
    *((_BYTE *)v7 + v2) = 0;
    v3 = ptr;
    v4 = v11;
  }
  else
  {
    v3 = nullptr;
    v4 = 0u;
  }
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v3;
  *(_OWORD *)(a2 + 16) = v4;
  return 0;
}

