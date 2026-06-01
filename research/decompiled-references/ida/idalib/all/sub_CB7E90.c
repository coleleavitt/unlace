__int64 __fastcall sub_CB7E90(_QWORD ***a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  char v7; // bp
  char v8; // bp
  unsigned int v9; // [rsp+Ch] [rbp-5Ch]
  void *v10; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-50h]
  void *v12; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-40h]
  char v14; // [rsp+2Ch] [rbp-3Ch]

  v2 = *(_QWORD *)(a2 + 16);
  v3 = sub_A72040(*a1[61], *(_QWORD *)(v2 + 8));
  v4 = v3;
  if ( v3 && (unsigned int)*(unsigned __int8 *)(v3 + 16) - 2 >= 2 )
    v4 = 0;
  v5 = sub_CB1280((__int64)a1, *(_QWORD *)(a2 + 8));
  if ( !((unsigned __int8 (__fastcall *)(_QWORD ***, __int64))(*a1)[5])(a1, v2) )
    return 0;
  v12 = (void *)(a2 | 4);
  if ( !(unsigned __int8)sub_CA9100((__int64)a1, 0, (__int64 *)&v12) )
    return 0;
  v12 = (void *)(a2 | 4);
  if ( !(unsigned __int8)sub_CAB4E0((__int64)a1, (__int64 *)&v12) )
    return 0;
  v12 = (void *)(a2 | 4);
  if ( !(unsigned __int8)sub_CA4FA0((__int64)a1, *(_DWORD *)(*(_QWORD *)(v5 + 280) + 8LL), (__int64 *)&v12) )
    return 0;
  v9 = sub_CB1440((__int64)a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 280) + 24LL) + 48LL));
  if ( v9 > 0xB )
  {
    v12 = (void *)(a2 | 4);
    if ( (unsigned __int8)sub_CA4560((__int64)a1, *(_DWORD *)(*(_QWORD *)(v5 + 280) + 8LL), (__int64 *)&v12) )
    {
      v12 = (void *)(a2 | 4);
      if ( (unsigned __int8)sub_CABEE0((__int64)a1, (__int64 *)&v12) )
      {
        sub_A5DAD0((__int64)&v10, v4);
        v14 = 1;
        v13 = v11;
        v11 = 0;
        v12 = v10;
        v7 = sub_CB7B60((__int64)a1, (__int64)&v12, 7, a2);
        if ( v13 > 0x40 && v12 )
          operator delete[](v12);
        if ( v11 > 0x40 && v10 )
          operator delete[](v10);
        if ( v7 )
        {
          v12 = (void *)(a2 | 4);
          if ( (unsigned __int8)sub_CA01B0((__int64)a1, 7, (__int64 *)&v12) )
          {
            v12 = (void *)(a2 | 4);
            return sub_CA4FA0((__int64)a1, *(_DWORD *)(*(_QWORD *)(v5 + 280) + 32LL), (__int64 *)&v12);
          }
        }
      }
    }
    return 0;
  }
  sub_A5DAD0((__int64)&v10, v4);
  v14 = 1;
  v13 = v11;
  v11 = 0;
  v12 = v10;
  v8 = sub_CB7B60((__int64)a1, (__int64)&v12, v9, a2);
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( !v8 )
    return 0;
  v12 = (void *)(a2 | 4);
  return sub_CA4FD0((__int64)a1, v9, *(_DWORD *)(*(_QWORD *)(v5 + 280) + 32LL), (__int64 *)&v12);
}
