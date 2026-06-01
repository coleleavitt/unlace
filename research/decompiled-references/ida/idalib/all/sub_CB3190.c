__int64 __fastcall sub_CB3190(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // r8d
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // r8
  char v14; // al
  char v15; // al
  __int64 v16; // rbx
  __int64 v17; // r12
  unsigned int v18; // eax
  __int64 v19; // r8
  unsigned int v20; // ecx
  unsigned int v21; // esi
  unsigned int v22; // r12d
  __int64 v23; // [rsp+0h] [rbp-68h]
  __int64 v24; // [rsp+0h] [rbp-68h]
  unsigned int v25; // [rsp+8h] [rbp-60h]
  int v26; // [rsp+Ch] [rbp-5Ch]
  __int64 v27; // [rsp+10h] [rbp-58h]
  __int64 v29[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a2 + 280);
  v27 = v4 + 24LL * *(unsigned int *)(a2 + 288);
  if ( v27 != v4 )
  {
    v5 = a3 | 4;
    do
    {
      if ( (*(_BYTE *)(*(_QWORD *)v4 + 68LL) & 1) == 0 || *(_QWORD *)(*(_QWORD *)v4 + 40LL) )
      {
        v6 = *(_QWORD *)(v4 + 16);
        if ( *(_BYTE *)(v6 + 60) || *(_QWORD *)(v6 + 32) || !*(_BYTE *)(v6 + 52) )
        {
          v29[0] = v5;
          if ( !(unsigned __int8)sub_CA4B10(a1, *(_DWORD *)(v4 + 8), v29) )
            return 0;
          if ( *(_BYTE *)(v6 + 60) )
          {
            if ( *(_QWORD *)(v6 + 40) )
            {
              v8 = sub_CEF5A0(v6);
              if ( !(unsigned __int8)sub_CB2EE0(a1, v8, a3) )
                return 0;
            }
            else
            {
              v24 = sub_CEF620(v6);
              v18 = sub_CE6180(*(_QWORD *)(a1 + 488), v24);
              v20 = *(_DWORD *)(v6 + 20);
              v25 = v18;
              if ( v20 != -1 )
              {
                v21 = *(_DWORD *)(v6 + 16);
                v26 = v20 / v21;
                if ( v20 >= v21 )
                {
                  v22 = 0;
                  while ( (unsigned __int8)sub_CB2AD0(a1, v25, v24, a3, v19) )
                  {
                    v29[0] = v5;
                    if ( !(unsigned __int8)sub_CA4D80(a1, v25, v22, v29) )
                      break;
                    if ( ++v22 == v26 )
                      goto LABEL_11;
                  }
                  return 0;
                }
              }
            }
          }
          else
          {
            v7 = *(_QWORD *)(v6 + 32);
            if ( !v7 || !(unsigned __int8)sub_CB3190(a1, v7, a3) )
              return 0;
          }
LABEL_11:
          v29[0] = v5;
          if ( !(unsigned __int8)sub_CABC60(a1, v29) )
            return 0;
          if ( *(_BYTE *)(a2 + 648) )
            break;
        }
        else
        {
          v23 = sub_CEF5A0(v6);
          v11 = sub_CEF5A0(v6);
          v12 = sub_CB1440(a1, v11);
          v14 = sub_CB2AD0(a1, v12, v23, a3, v13);
          v9 = 0;
          if ( !v14 )
            return v9;
          v29[0] = v5;
          v15 = sub_CA4FD0(a1, v12, *(_DWORD *)(v4 + 8), v29);
          v9 = 0;
          if ( !v15 )
            return v9;
          if ( *(_BYTE *)(a2 + 648) )
            break;
        }
      }
      v4 += 24;
    }
    while ( v27 != v4 );
  }
  v16 = *(_QWORD *)(a2 + 8);
  v17 = v16 + 32LL * *(unsigned int *)(a2 + 16);
  if ( v16 != v17 )
  {
    while ( 1 )
    {
      v29[0] = a3 | 4;
      if ( !(unsigned __int8)sub_CA4AE0(a1, *(_DWORD *)(v16 + 8), v29) )
        break;
      if ( !(unsigned __int8)sub_CB3190(a1, *(_QWORD *)(v16 + 24), a3) )
        break;
      v29[0] = a3 | 4;
      if ( !(unsigned __int8)sub_CABC60(a1, v29) )
        break;
      v16 += 32;
      if ( v16 == v17 )
        return 1;
    }
    return 0;
  }
  return 1;
}
