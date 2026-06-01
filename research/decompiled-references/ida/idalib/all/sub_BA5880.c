__int64 __fastcall sub_BA5880(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 *v3; // rdx
  unsigned int v4; // ebx
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // al
  unsigned int v8; // ecx
  __int64 v9; // rax
  unsigned __int64 (__fastcall *v10)(__int64); // rax
  int v11; // ebp
  int v12; // eax
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]
  _QWORD v14[5]; // [rsp+10h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(unsigned int *)(a1 + 60);
  if ( !v1 )
    goto LABEL_13;
  if ( (v1 & 4) == 0 )
  {
    if ( (_DWORD)v2 )
      return *(_QWORD *)(a1 + 56);
    v6 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v6 )
    {
      v7 = *(_BYTE *)(v6 + 28) & 0x7F;
      v8 = v7 - 34;
      if ( v8 > 5 )
      {
        if ( v7 == 71 || v7 == 72 )
        {
          v10 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL);
          if ( v10 == sub_BA57F0 )
            return ((unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 48) + 16LL))(*(_QWORD *)(v6 + 48)) >> 32 << 32)
                 | *(unsigned int *)(*(_QWORD *)(v6 + 56) + 8LL);
          else
            return v10(v6);
        }
        if ( v8 > 0x11 )
          return ((unsigned __int64)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6) >> 32 << 32)
               | *(unsigned int *)(a1 + 56);
        v11 = *(_DWORD *)(v6 + 64);
        v13 = v6;
        v12 = sub_B73090(v6);
        v6 = v13;
        if ( v12 == v11 )
          return ((unsigned __int64)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6) >> 32 << 32)
               | *(unsigned int *)(a1 + 56);
      }
      return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32) | *(unsigned int *)(a1 + 56);
  }
  v3 = (__int64 *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v3 )
  {
LABEL_13:
    if ( (_DWORD)v2 )
      return *(_QWORD *)(a1 + 56);
    return ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32) | *(unsigned int *)(a1 + 56);
  }
  if ( (*(_DWORD *)(a1 + 64) & 0xFFFFFFFE) != 0 )
    v4 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 8LL);
  else
    v4 = *(_DWORD *)(a1 + 56);
  if ( !(_DWORD)v2 )
  {
    v9 = *v3;
    v14[1] = v3 + 1;
    v14[0] = v9;
    v2 = sub_F6CE20(v14);
  }
  return (v2 << 32) | v4;
}
