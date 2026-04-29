_BOOL8 __fastcall sub_202200(__int64 a1, _BYTE *a2, __int64 a3, unsigned __int8 a4)
{
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 *v10; // rcx
  __int64 *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx

  if ( (**(_DWORD **)(a1 + 8) & 0x40000) != 0 )
    return 0;
  if ( *a2 != 15 )
  {
    if ( *a2 == 5
      && **(_DWORD **)(a1 + 32) != 62
      && (unsigned __int8)sub_1C76C0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a3 + 24), (unsigned __int64)a2, a4) )
    {
      v6 = *(__int64 **)(*(_QWORD *)(a1 + 184) + 112LL);
      v7 = sub_32BF20(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a3 + 32) + 24LL));
      v8 = v6[1];
      v9 = v7;
      v10 = (__int64 *)(*v6 + 8 * v8);
      if ( (__int64 *)*v6 == v10 )
        goto LABEL_15;
      v11 = (__int64 *)*v6;
      while ( v9 != *v11 )
      {
        if ( v10 == ++v11 )
          goto LABEL_15;
      }
      if ( v10 == v11 )
      {
LABEL_15:
        v12 = v8 + 1;
        if ( v6[2] < v12 )
        {
          v13 = qvector_reserve(v6, *v6, v12, 8);
          v14 = v6[1];
          *v6 = v13;
          v10 = (__int64 *)(v13 + 8 * v14);
        }
        *v10 = v9;
        ++v6[1];
      }
      return 1;
    }
    return 0;
  }
  return (unsigned __int8)sub_1C76C0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a3 + 24), (unsigned __int64)a2, a4) != 0;
}
