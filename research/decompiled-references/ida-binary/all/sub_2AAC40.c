__int64 __fastcall sub_2AAC40(_QWORD *a1)
{
  unsigned int v1; // eax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  const char *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int v10; // ebp
  void *ptr[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+10h] [rbp-98h]
  __int64 v14; // [rsp+20h] [rbp-88h] BYREF
  __int64 v15; // [rsp+28h] [rbp-80h]
  int v16; // [rsp+30h] [rbp-78h]
  __int64 v17; // [rsp+38h] [rbp-70h]
  __int64 v18; // [rsp+40h] [rbp-68h]
  __int128 v19; // [rsp+48h] [rbp-60h]
  _QWORD v20[2]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v21[7]; // [rsp+70h] [rbp-38h] BYREF

  v21[3] = __readfsqword(0x28u);
  v16 = 0;
  v14 = 56;
  v15 = -1;
  v17 = -1;
  v18 = 0;
  v19 = 0;
  v1 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 504LL))(a1);
  v4 = a1[55];
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 8);
  v5 = *(_QWORD *)(v4 + 72);
  get_node_info(&v14, v5, v1, v4, v2, v3);
  v13 = 0;
  *(_OWORD *)ptr = 0;
  v6 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v15), 8), v5);
  v7 = nullptr;
  v21[1] = v8;
  v21[0] = v6;
  v20[0] = sub_4AF930(v21, 0, ptr, 0);
  v20[1] = v9;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v10 = 0;
    free(ptr[0]);
    if ( !LODWORD(v20[0]) )
      goto LABEL_6;
  }
  else
  {
    v10 = 0;
    if ( !LODWORD(v20[0]) )
      goto LABEL_6;
  }
  v7 = (const char *)(__ROR4__(_byteswap_ulong(QT::QColor::rgb((QT::QColor *)v20)), 8) & 0xFFFFFF);
  v10 = sub_2A8380((__int64)a1, (int)v7);
LABEL_6:
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, v7);
  }
  return v10;
}
