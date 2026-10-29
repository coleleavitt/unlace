__int64 __fastcall sub_B911E0(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 *v19; // rbx
  __int64 v20; // rsi
  __int16 v21; // ax
  __int64 *v22; // rbx
  unsigned __int64 v23; // rax
  _BYTE v25[41]; // [rsp+Fh] [rbp-29h] BYREF

  v6 = sub_B8C710(a1, v25, a3, a4, a5, a6);
  if ( (_BYTE)v6 )
  {
    v7 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 56LL))(a1);
    v12 = v7;
    if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
      return 0;
    v13 = sub_B8C3D0(v7, (__int64)v25, v8, v9, v10, v11);
    v17 = *((unsigned int *)v13 + 2);
    v18 = *v13 + 8 * v17;
    v19 = (*(_BYTE *)(v12 + 29) & 1) != 0 ? (__int64 *)*sub_B8C3D0(v12, (__int64)v25, v17, v14, v15, v16) : nullptr;
    if ( (__int64 *)v18 == v19 )
    {
      return 0;
    }
    else
    {
      v20 = *v19;
      v21 = *(_WORD *)(*v19 + 36);
      if ( v21 != 400 )
      {
        v22 = v19 + 1;
        do
        {
          if ( v21 == 142 )
          {
            v23 = (unsigned __int64)a1;
            if ( (a1[28] & 0x7F) != 0 )
              v23 = sub_B8C2C0((__int64)a1);
            if ( (unsigned int)sub_B90460(*(_QWORD *)(v23 + 88), v20, 0, 0, 0) == 1 )
              break;
          }
          if ( (__int64 *)v18 == v22 )
            return 0;
          v20 = *v22++;
          v21 = *(_WORD *)(v20 + 36);
        }
        while ( v21 != 400 );
      }
    }
  }
  return v6;
}
