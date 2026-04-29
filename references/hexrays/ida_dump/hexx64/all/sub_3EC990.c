__int64 __fastcall sub_3EC990(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  _DWORD *v8; // rdx
  char v10; // al
  int v11; // r15d
  int v12; // r14d
  int dtype_size; // eax
  int v14; // eax
  int v15; // [rsp+0h] [rbp-58h] BYREF
  int v16; // [rsp+4h] [rbp-54h]
  int v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(unsigned __int8 *)(v4 + 144);
  if ( (_BYTE)v5 )
  {
    v8 = *(_DWORD **)(v4 + 112);
    v10 = *(_BYTE *)(v4 + 128) & 0xF;
    if ( v10 == 6 )
    {
      v12 = v8[101];
      v11 = v8[102];
    }
    else
    {
      if ( v10 != 1 )
        return 0;
      v11 = v8[97];
      v12 = 8;
    }
    if ( (*(_BYTE *)(a4 + 16) & 8) == 0 )
    {
      dtype_size = get_dtype_size(*(unsigned __int8 *)(a4 + 12));
      v17 = v12;
      v15 = 1;
      v16 = dtype_size;
      sub_125180(a2, (unsigned __int8 *)&v15);
      sub_11CDA0((__int64)&v15);
      if ( (*(_BYTE *)(a4 + 16) & 0x2A) == 0 )
      {
        v14 = 1;
        if ( (unsigned int)(*(_DWORD *)(a4 + 8) - 22) > 2 )
          v14 = get_dtype_size(*(unsigned __int8 *)(a4 + 12));
        v17 = v11;
        v15 = 1;
        v16 = v14;
        sub_125180(a3, (unsigned __int8 *)&v15);
        sub_11CDA0((__int64)&v15);
      }
    }
  }
  return v5;
}
