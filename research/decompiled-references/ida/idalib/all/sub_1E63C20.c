__int64 __fastcall sub_1E63C20(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v18; // rax
  __int64 v19; // r13
  void (*v20)(); // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax

  v9 = sub_1E63330(a1, a2, a3, a4, a5, a6);
  if ( (_BYTE)v9 )
    return v9;
  v12 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 47 <= 1 )
    goto LABEL_3;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 > 1 )
    return v9;
  v12 = sub_F63050(v12, a2, v7, v8);
  if ( v12 )
  {
LABEL_3:
    if ( (*((_BYTE *)sub_F60F10(v12, a2, v7, v8, v10, v11) + 74) & 0x20) == 0 )
    {
      v18 = sub_F60F10(v12, a2, v13, v14, v15, v16);
      *((_BYTE *)v18 + 74) |= 0x20u;
      v19 = *(_QWORD *)(a1 + 256);
      v20 = *(void (**)())(*(_QWORD *)v19 + 64LL);
      v25 = sub_F60F10(v12, a2, v21, v22, v23, v24);
      if ( v20 != nullsub_151 )
        ((void (__fastcall *)(__int64, _QWORD *))v20)(v19, v25);
    }
    return v9;
  }
  return v9;
}
