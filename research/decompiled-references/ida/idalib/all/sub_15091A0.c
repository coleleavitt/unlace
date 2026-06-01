__int64 __fastcall sub_15091A0(__int64 a1, __int64 a2, char a3, __m128i a4)
{
  unsigned int v4; // ebp
  bool v6; // zf
  unsigned int v7; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // r12
  __int64 v14; // rdi
  int v15; // [rsp+Ch] [rbp-3Ch] BYREF
  void *v16; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-30h]
  char v18; // [rsp+1Ch] [rbp-2Ch]

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v6 = *(_WORD *)(a1 + 32) == 22;
  v7 = *(_DWORD *)(a1 + 40);
  v15 = 0;
  if ( v6 )
  {
    v9 = sub_20EB760(48, 0);
    v11 = sub_1509090((const __m128i *)a1, v9, a4, v10, &v15, 0);
    LOBYTE(v4) = a3 | (v11 == 1);
    if ( !(_BYTE)v4 )
    {
      v12 = (_DWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL);
      v13 = v12;
      if ( (*v12 & 0x3C000) == 0 )
      {
        if ( sub_19179E0(*(_QWORD *)(a1 + 96), v7, v12, 0) != 1 )
        {
          v14 = *(_QWORD *)(a1 + 96);
          v17 = 1;
          v16 = nullptr;
          v18 = 0;
          if ( sub_1915F20(v14, v13, &v16, 1) != 1 )
          {
            *(_QWORD *)(a2 + 32) = v13;
            v4 = 1;
            *(_BYTE *)(a2 + 40) = 1;
          }
          if ( v17 > 0x40 )
          {
            if ( v16 )
              operator delete[](v16);
          }
        }
        return v4;
      }
    }
    return 0;
  }
  if ( a3 )
    return 0;
  v4 = *(unsigned __int8 *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = 0;
  if ( (_BYTE)v4 )
    return v4;
  *(_BYTE *)(a2 + 40) = 1;
  return 1;
}
