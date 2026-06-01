char __fastcall sub_F3DE70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  char v7; // al
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // dl
  _QWORD *v13; // rbx
  char result; // al
  __int64 v15; // rdx

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  if ( v7 != 48 )
    return (unsigned __int8)(v7 - 2) <= 4u;
  v8 = sub_F3D150(*(_QWORD **)(v6 + 24), a2, v6, a4, a5, a6);
  v12 = *((_BYTE *)v8 + 28);
  v13 = v8;
  result = 1;
  v15 = (v12 & 0x7Fu) - 59;
  if ( (unsigned int)v15 <= 2 )
  {
    sub_6E4DB0((__int64 *)(v13[13] + 96LL), v13[13], v15, v9, v10, v11);
    return *(_BYTE *)v13[16] >> 7;
  }
  return result;
}

