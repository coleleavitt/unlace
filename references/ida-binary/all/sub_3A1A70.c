unsigned __int64 __fastcall sub_3A1A70(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rbp
  _QWORD *v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v3 = (_QWORD *)*a3;
  v4 = *a3 + 8LL * a3[1];
  if ( v4 != *a3 )
  {
    do
    {
      v6 = sub_4A0A30(a1, *v3, 0);
      if ( v6 != -1 )
      {
        v7 = (_QWORD *)operator new(0x10u);
        v8 = a2[2];
        v9 = *a2;
        *v7 = diffpos_sync_pos_t___vtable;
        v10 = v7;
        v7[1] = v6;
        v11 = a2[1];
        if ( v8 < v11 + 1 )
        {
          v14 = v10;
          v12 = qvector_reserve(a2, v9, v11 + 1, 8);
          v10 = v14;
          *a2 = v12;
          v9 = v12;
          v11 = a2[1];
        }
        *(_QWORD *)(v9 + 8 * v11) = v10;
        ++a2[1];
      }
      ++v3;
    }
    while ( (_QWORD *)v4 != v3 );
  }
  return v15 - __readfsqword(0x28u);
}
