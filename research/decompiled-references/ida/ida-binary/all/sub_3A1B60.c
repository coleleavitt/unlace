_DWORD *__fastcall sub_3A1B60(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  _DWORD *v3; // rax
  _DWORD *v4; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int128 v8; // [rsp+0h] [rbp-48h] BYREF
  int v9; // [rsp+10h] [rbp-38h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return nullptr;
  v2 = sub_4A0A30(a1, a2, 0);
  if ( v2 == -1 )
    return nullptr;
  v3 = (_DWORD *)operator new(0x10u);
  *v3 = -4;
  v4 = v3;
  v5 = (_QWORD *)operator new(0x10u);
  v5[1] = v2;
  *v5 = diffpos_sync_pos_t___vtable;
  *((_QWORD *)v4 + 1) = v5;
  v6 = *a1;
  v9 = 0;
  v8 = 0;
  if ( ((*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v6 + 848))(a1, &v8, v2, 2) & 1) == 0 )
    *v4 = sub_277BB0((__int64)&v8);
  return v4;
}
