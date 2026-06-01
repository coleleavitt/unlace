__int64 __fastcall sub_C952D0(_QWORD ***a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  char v7; // bp
  char v8; // bp
  __int64 v9; // r8
  unsigned int v10; // [rsp+Ch] [rbp-5Ch]
  void *v11; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-50h]
  void *v13; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-40h]
  char v15; // [rsp+2Ch] [rbp-3Ch]

  v2 = *(_QWORD *)(a2 + 16);
  v3 = sub_A4E300(*a1[158], *(_QWORD *)(v2 + 8));
  v4 = v3;
  if ( v3 && (unsigned int)*(unsigned __int8 *)(v3 + 16) - 2 >= 2 )
    v4 = 0;
  v5 = sub_C90DA0((__int64)a1, *(_QWORD *)(a2 + 8));
  if ( !((unsigned __int8 (__fastcall *)(_QWORD ***, __int64))(*a1)[6])(a1, v2) )
    return 0;
  v13 = (void *)(a2 | 4);
  if ( !(unsigned __int8)sub_CDCC60(a1, 0, &v13) )
    return 0;
  v13 = (void *)(a2 | 4);
  if ( !(unsigned __int8)sub_CFE030(a1, &v13) )
    return 0;
  v13 = (void *)(a2 | 4);
  if ( !(unsigned __int8)sub_CF7240(a1, *(unsigned int *)(*(_QWORD *)(v5 + 280) + 8LL), &v13) )
    return 0;
  v10 = sub_C90F60((__int64)a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 280) + 24LL) + 48LL));
  if ( v10 > 0xB )
  {
    v13 = (void *)(a2 | 4);
    if ( (unsigned __int8)sub_CEB0E0(a1, *(unsigned int *)(*(_QWORD *)(v5 + 280) + 8LL), &v13) )
    {
      v13 = (void *)(a2 | 4);
      if ( (unsigned __int8)sub_CDD040(a1, &v13) )
      {
        sub_A39D90((__int64)&v11, v4);
        v15 = 1;
        v14 = v12;
        v12 = 0;
        v13 = v11;
        v7 = sub_C94FA0((__int64)a1, (__int64)&v13, 7, a2);
        if ( v14 > 0x40 && v13 )
          operator delete[](v13);
        if ( v12 > 0x40 && v11 )
          operator delete[](v11);
        if ( v7 )
        {
          v13 = (void *)(a2 | 4);
          if ( (unsigned __int8)sub_D34B10(a1, 7, &v13) )
          {
            v13 = (void *)(a2 | 4);
            return sub_CF7240(a1, *(unsigned int *)(*(_QWORD *)(v5 + 280) + 32LL), &v13);
          }
        }
      }
    }
    return 0;
  }
  sub_A39D90((__int64)&v11, v4);
  v15 = 1;
  v14 = v12;
  v12 = 0;
  v13 = v11;
  v8 = sub_C94FA0((__int64)a1, (__int64)&v13, v10, a2);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  if ( !v8 )
    return 0;
  v13 = (void *)(a2 | 4);
  return sub_D02F80(a1, v10, *(unsigned int *)(*(_QWORD *)(v5 + 280) + 32LL), &v13, v9);
}

