void __fastcall sub_1A93190(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 *v13; // rbx
  __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9

  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
  {
    v7 = sub_B8C3D0(a3, a2, a3, a4, a5, a6);
    v11 = *((unsigned int *)v7 + 2);
    v12 = *v7 + 8 * v11;
    if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
      v13 = (__int64 *)*sub_B8C3D0(a3, a2, v11, v8, v9, v10);
    else
      v13 = nullptr;
    while ( (__int64 *)v12 != v13 )
    {
      v14 = *(_WORD *)(*v13 + 36);
      if ( v14 == 199 || v14 == 386 || v14 == 142 )
      {
        v15 = sub_B395B0(*v13, *a1);
        sub_B8CC60(a2, v15, v16, v17, v18, v19);
      }
      ++v13;
    }
  }
}
