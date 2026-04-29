__int64 __fastcall sub_3EC5A0(__int64 a1, __int64 a2, double a3)
{
  unsigned int v4; // r12d
  char v5; // al
  __int64 v6; // rdi
  int dtype_size; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v4 = sub_3EC1D0(a1, a2, 1, a3);
  if ( v4 != -1 )
  {
    v5 = *(_BYTE *)(a1 + 40LL * (int)a2 + 65);
    if ( (unsigned __int8)(v5 - 2) <= 2u || (unsigned __int8)(v5 - 6) <= 1u )
    {
      v6 = *(unsigned __int8 *)(a1 + 40LL * (int)a2 + 69);
      if ( (_BYTE)v6 != 9 )
      {
        dtype_size = get_dtype_size(v6);
        v8 = *(_QWORD *)(a1 + 832);
        v9 = *(_QWORD *)(v8 + 584);
        if ( !v9 )
          sub_3E4140(a3, v6, (int)a2);
        v10 = (int)v4;
        v11 = *(int *)(*(_QWORD *)(v8 + 576) + 4 * v9 - 4);
        *(_QWORD *)(v8 + 584) = v9 - 1;
        v4 = v11;
        sub_3E8420(
          a1,
          2u,
          dtype_size,
          *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
          v10,
          v11,
          *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
      }
    }
  }
  return v4;
}
