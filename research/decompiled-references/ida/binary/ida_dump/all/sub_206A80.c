_BOOL8 __fastcall sub_206A80(__int64 a1, _BYTE *a2, __int64 a3, unsigned __int8 a4)
{
  __int64 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  if ( (**(_DWORD **)(a1 + 8) & 0x40000) != 0 )
    return 0;
  if ( *a2 != 15 )
  {
    if ( *a2 == 5
      && **(_DWORD **)(a1 + 32) != 62
      && (unsigned __int8)sub_1CBA80(*(_QWORD *)(a1 + 16), *(_QWORD *)(a3 + 24), (unsigned __int64)a2, a4) )
    {
      v5 = *(__int64 **)(*(_QWORD *)(a1 + 184) + 112LL);
      v6 = sub_330F80(*(_QWORD *)(a1 + 8));
      v7 = v5[1];
      v8 = v6;
      v9 = (__int64 *)(*v5 + 8 * v7);
      if ( (__int64 *)*v5 == v9 )
        goto LABEL_15;
      v10 = (__int64 *)*v5;
      while ( v8 != *v10 )
      {
        if ( v9 == ++v10 )
          goto LABEL_15;
      }
      if ( v9 == v10 )
      {
LABEL_15:
        if ( v5[2] < (unsigned __int64)(v7 + 1) )
        {
          v11 = qvector_reserve();
          v12 = v5[1];
          *v5 = v11;
          v9 = (__int64 *)(v11 + 8 * v12);
        }
        *v9 = v8;
        ++v5[1];
      }
      return 1;
    }
    return 0;
  }
  return (unsigned __int8)sub_1CBA80(*(_QWORD *)(a1 + 16), *(_QWORD *)(a3 + 24), (unsigned __int64)a2, a4) != 0;
}
