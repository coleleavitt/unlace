__int64 __fastcall sub_1F6E5C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // edx
  unsigned int v6; // r12d
  unsigned int v7; // ebx
  int v9; // ebp
  unsigned int v10; // eax
  char v11; // cl
  bool v12; // dl
  size_t v13; // r14
  _BYTE *v14; // r9
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rax
  _BYTE *v17; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  _BYTE *v21; // rax
  _BYTE *v22; // r11
  _BYTE *v23; // rax
  _BYTE *v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+18h] [rbp-50h]
  _BYTE *v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+20h] [rbp-48h]
  _BYTE *v28; // [rsp+28h] [rbp-40h]

  v2 = a1;
  *(_BYTE *)(a1 + 16) = 0;
  v3 = *(unsigned int *)(a2 + 24);
  v24 = (_BYTE *)(a1 + 16);
  *(_QWORD *)a1 = a1 + 16;
  v4 = *(_QWORD *)(a2 + 16) - *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = 0;
  sub_995C30(a1, (v3 + 8 * v4 - (unsigned __int64)*(unsigned int *)(a2 + 8)) >> 3);
  v5 = *(_DWORD *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) + 8 * (*(_DWORD *)(a2 + 16) - *(_DWORD *)a2) != v5 )
  {
    v6 = *(_DWORD *)(a2 + 24) + 8 * (*(_DWORD *)(a2 + 16) - *(_DWORD *)a2) - v5;
    v7 = 0;
    while ( 1 )
    {
      if ( v6 <= v7 )
      {
        LOBYTE(v9) = 0;
      }
      else
      {
        v9 = 0;
        v10 = 0;
        do
        {
          v11 = v10;
          v12 = ((1LL << v7) & *(_QWORD *)(*(_QWORD *)a2 + 8 * ((unsigned __int64)v7 >> 6))) != 0;
          ++v10;
          ++v7;
          v9 |= v12 << v11;
        }
        while ( v10 <= 7 && v6 > v7 );
      }
      v13 = *(_QWORD *)(a1 + 8);
      v14 = *(_BYTE **)a1;
      v15 = v13 + 1;
      if ( v24 == *(_BYTE **)a1 )
      {
        if ( v15 > 0xF )
        {
          v16 = 15;
LABEL_14:
          if ( (v15 & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v19 = 2 * v16;
          v25 = v19;
          if ( v15 < v19 )
          {
            v20 = v19 + 1;
            if ( v19 < 0 )
            {
              v20 = 0x8000000000000000LL;
              v25 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v25 = v13 + 1;
            v20 = v13 + 2;
          }
          v21 = (_BYTE *)operator new(v20);
          v22 = *(_BYTE **)a1;
          v15 = v13 + 1;
          v14 = v21;
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              *v21 = *v22;
            }
            else
            {
              v26 = *(_BYTE **)a1;
              v23 = memcpy(v21, *(const void **)a1, v13);
              v15 = v13 + 1;
              v22 = v26;
              v14 = v23;
            }
          }
          if ( v24 != v22 )
          {
            v28 = v14;
            v27 = v15;
            operator delete(v22);
            v14 = v28;
            v15 = v27;
          }
          *(_QWORD *)a1 = v14;
          *(_QWORD *)(a1 + 16) = v25;
        }
      }
      else
      {
        v16 = *(_QWORD *)(a1 + 16);
        if ( v15 > v16 )
          goto LABEL_14;
      }
      v14[v13] = v9;
      v17 = *(_BYTE **)a1;
      *(_QWORD *)(a1 + 8) = v15;
      v17[v13 + 1] = 0;
      if ( v6 <= v7 )
        return a1;
    }
  }
  return v2;
}
