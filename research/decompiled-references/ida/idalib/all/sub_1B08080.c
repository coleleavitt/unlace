unsigned __int64 __fastcall sub_1B08080(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  _QWORD *v6; // r15
  _QWORD *v10; // rax
  unsigned int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  const char *v17; // [rsp+4h] [rbp-E8h] BYREF
  size_t v18; // [rsp+Ch] [rbp-E0h]
  _QWORD v19[2]; // [rsp+14h] [rbp-D8h] BYREF
  _BYTE v20[200]; // [rsp+24h] [rbp-C8h] BYREF

  if ( !a4 )
    return 1;
  v6 = &a2[a3];
  if ( v6 == sub_1AE7A80(a2, (__int64)v6, 55)
    && v6 == sub_1AE7A80(a2, (__int64)v6, 111)
    && (*(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x31u || sub_1AE7A80(a2, (__int64)v6, 110) == v6) )
  {
    v17 = nullptr;
    v18 = 0;
    if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) > 0x31u )
    {
      v17 = "'map', 'use_device_ptr', or 'use_device_addr'";
      v18 = j__strlen("'map', 'use_device_ptr', or 'use_device_addr'");
    }
    else
    {
      v17 = "'map' or 'use_device_ptr'";
      v18 = j__strlen("'map' or 'use_device_ptr'");
    }
    v12 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
    sub_168B9F0((__int64)v20, a1, a5, 0x11CBu, 0);
    v13 = sub_1682BA0((__int64)v20, (__int64)&v17);
    v14 = sub_20EAB70(71, v12);
    v19[1] = v15;
    v19[0] = v14;
    sub_166BAF0(v13, (__int64)v19);
    sub_15F7200(v20);
    return 1;
  }
  else
  {
    sub_15F2480(*a1);
    v10 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_EFFE40(v10, a5, a6, a2, a3, a4);
  }
}
