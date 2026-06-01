__int64 __fastcall sub_BAAC40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // bp
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // r14
  _QWORD *v19; // r12
  __int64 v20; // rax

  v6 = a3;
  v7 = *(_QWORD *)(a1 + 104);
  if ( !v7 )
  {
    sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v7 = *(_QWORD *)(a1 + 104);
  }
  v8 = 0;
  v9 = (unsigned __int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v9 )
  {
    v8 = *v9;
    if ( *v9 )
    {
      v10 = *(_QWORD *)(v8 + 8);
      v8 = 0;
      if ( (v10 & 6) == 0 )
      {
        v8 = sub_BAAB00(a1, a2, v6, a4, a5, a6);
        if ( !v8 )
        {
          v16 = sub_BAA520(a1, a2, v11, v12, v13, v14);
          v18 = v17;
          v19 = (_QWORD *)v16;
          if ( (_QWORD *)v16 != v17 )
          {
            while ( 1 )
            {
              v20 = sub_BAAC40(*v19, a2, v6);
              if ( v20 )
                break;
              if ( v18 == ++v19 )
                return v8;
            }
            return v20;
          }
        }
      }
    }
  }
  return v8;
}
