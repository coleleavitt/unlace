void __fastcall sub_189FBC0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r15
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  _BYTE *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // [rsp+18h] [rbp-100h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+20h] [rbp-F8h] BYREF
  int v31; // [rsp+28h] [rbp-F0h]
  __int64 v32; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v33; // [rsp+38h] [rbp-E0h]
  _BYTE *v34; // [rsp+40h] [rbp-D8h]
  __int16 v35; // [rsp+48h] [rbp-D0h]
  __int64 v36[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v38; // [rsp+70h] [rbp-A8h] BYREF
  char v39; // [rsp+C8h] [rbp-50h]
  unsigned int v40; // [rsp+D0h] [rbp-48h]
  char v41; // [rsp+D4h] [rbp-44h]

  v2 = sub_B8E970(a2 + 48);
  if ( v2 )
  {
    v3 = v2;
    while ( (*(_BYTE *)(v3 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v3 + 58) & 2) == 0 )
    {
      v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v3 )
        return;
    }
    while ( 1 )
    {
      v4 = *(_DWORD *)(v3 + 24);
      v5 = sub_168B6D0((__int64)a1);
      if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v5 + 32), 0x1D6Cu, v4, v5, v6, v7) != 1
        && (*(_BYTE *)(v3 + 58) & 2) != 0 )
      {
        v8 = sub_BA85D0(v3);
        v9 = v8;
        if ( v8 )
        {
          v10 = sub_BAD910(v8, *(_QWORD *)(v3 + 40), 1, 0, 0, 0);
          if ( v10 )
          {
            if ( (*(_BYTE *)(v10 + 58) & 8) != 0 )
            {
              v11 = sub_BACEB0(v10, 1);
              v15 = v11;
              if ( v11 )
              {
                v16 = *(_QWORD *)(v11 + 120);
                if ( v16 )
                {
                  v17 = *(_QWORD *)(v16 + 40);
                  v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v17 & 7) != 0 )
                    v18 = 0;
                  v19 = (_BYTE *)sub_BAE3D0(v9, v18, v36, v12, v13, v14);
                  if ( v19 )
                  {
                    if ( (*(_BYTE *)(v3 + 58) & 0x10) == 0 )
                    {
                      v20 = *a1;
                      v33 = v3;
                      v30 = off_2C56EA0;
                      v32 = v20;
                      v31 = 16777472;
                      v34 = v19;
                      v35 = 0;
                      v21 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 64LL))(v3);
                      sub_BC97E0((__int64 *)&v30, v21);
                      if ( !(_BYTE)v35 && (!sub_B8C090(v19) || !HIBYTE(v35)) )
                      {
                        sub_168B9F0((__int64)v36, a1, v4, 0x1D6Cu, 0);
                        if ( v39 )
                        {
                          sub_1894370(&v38, (__int64)v19);
                        }
                        else if ( v41 )
                        {
                          v24 = sub_168B9E0(v36);
                          v27 = v37;
                          if ( v37 )
                            v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
                          v29 = v27;
                          v28 = sub_1587BC0(v24, &v29, v22, v23, v25, v26);
                          sub_1894370((unsigned __int8 **)(*v28 + 32LL * v40 + 8), (__int64)v19);
                        }
                        sub_15F7200(v36);
                        sub_168B9F0((__int64)v36, a1, *(_DWORD *)(v15 + 24), 0x189Au, 0);
                        sub_15F7200(v36);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v3 )
        break;
      while ( 1 )
      {
        while ( (*(_BYTE *)(v3 + 28) & 0x7F) != 0x12 )
        {
          v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v3 )
            return;
        }
        if ( (*(_BYTE *)(v3 + 58) & 2) != 0 )
          break;
        v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v3 )
          return;
      }
    }
  }
}
