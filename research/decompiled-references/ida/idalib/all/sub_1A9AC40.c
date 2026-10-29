unsigned __int64 __fastcall sub_1A9AC40(__int64 *a1, _DWORD *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned int v7; // edx
  unsigned __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // [rsp+18h] [rbp-E0h]
  __int64 v18; // [rsp+18h] [rbp-E0h]
  __int64 v19; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD *v21; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v22; // [rsp+50h] [rbp-A8h] BYREF
  char v23; // [rsp+A8h] [rbp-50h]
  unsigned int v24; // [rsp+B0h] [rbp-48h]
  char v25; // [rsp+B4h] [rbp-44h]

  result = sub_B8E970((__int64)(a2 + 12));
  if ( result )
  {
    v3 = result;
    if ( (*(_BYTE *)(result + 28) & 0x7F) == 0xE )
    {
LABEL_7:
      if ( *(_QWORD *)(v3 + 56) )
      {
        v4 = *(_QWORD *)(v3 + 48);
        if ( (*(_BYTE *)(v4 + 73) & 0x20) != 0 )
        {
          if ( *(_QWORD *)(v4 + 104) )
          {
            if ( *(_QWORD *)(v4 + 112) )
            {
              v5 = *(_QWORD *)(v3 + 64);
              v6 = *(_QWORD *)(v3 + 72);
              if ( (!v5 || (*(_BYTE *)(v5 + 58) & 0x10) != 0) && (!v6 || (*(_BYTE *)(v6 + 58) & 0x10) != 0) )
              {
                v7 = *(_DWORD *)(v3 + 24);
                if ( !v7 )
                {
                  v8 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
                  if ( v8 == sub_BA60E0 )
                    v7 = a2[15];
                  else
                    v7 = v8((__int64)a2);
                }
                sub_168B9F0((__int64)v20, a1, v7, 0x1BFFu, 0);
                if ( v23 )
                {
                  sub_AE9DF0(&v22, *(_QWORD *)(v6 + 40), 9u);
                }
                else if ( v25 )
                {
                  v17 = *(_QWORD *)(v6 + 40);
                  v9 = sub_168B9E0(v20);
                  v13 = v17;
                  v14 = v9;
                  v15 = (__int64)v21;
                  if ( v21 )
                  {
                    v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64))(*v21 + 32LL))(
                            v21,
                            a1,
                            *v21,
                            v17);
                    v13 = v17;
                  }
                  v18 = v13;
                  v19 = v15;
                  v16 = sub_1587BC0(v14, &v19, v10, v13, v11, v12);
                  sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * v24 + 8), v18, 9u);
                }
                v19 = *(_QWORD *)(v4 + 40);
                sub_15894B0((__int64)v20, &v19);
                sub_15F7200(v20);
              }
            }
          }
        }
      }
      while ( 1 )
      {
        result = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v3 = result;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0xE )
          goto LABEL_7;
      }
    }
    else
    {
      while ( 1 )
      {
        result = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v3 = result;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0xE )
          goto LABEL_7;
      }
    }
  }
  return result;
}
