__int64 __fastcall sub_AFF3D0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  _DWORD *v5; // rdx
  _DWORD *v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // rax
  _DWORD *v9; // rdx
  _DWORD *v10; // r13
  _DWORD *v11; // r14
  __int64 v12; // rax
  const char *v13; // rsi
  _DWORD *v14; // r14
  __int64 v15; // rax
  const char *v17; // rsi
  __int64 v18; // rax
  const char *v19; // rsi
  __int64 v20; // rax
  _DWORD *v21; // rdx
  _DWORD *v22; // r13
  __int64 v23; // rax
  _BYTE v24[57]; // [rsp+Fh] [rbp-39h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v24[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_FA77D0(a1);
  else
    v4 = v3 >> 4;
  switch ( v4 )
  {
    case 1:
      sub_995540(a2, "[[gnu::interrupt");
      sub_995540(a2, &byte_22F0C30);
      v21 = *(_DWORD **)(a1 + 48);
      v22 = &v21[*(unsigned int *)(a1 + 40)];
      if ( v21 != v22 )
      {
        v14 = *(_DWORD **)(a1 + 48);
        do
        {
          sub_AFB8E0(a2, v24);
          v23 = sub_995540(a2, "\"");
          switch ( *v14 )
          {
            case 0:
              v13 = "supervisor";
              break;
            case 1:
              v13 = "machine";
              break;
            case 2:
              v13 = "qci-nest";
              break;
            case 3:
              v13 = "qci-nonest";
              break;
            case 4:
              v13 = "SiFive-CLIC-preemptible";
              break;
            case 5:
              v13 = "SiFive-CLIC-stack-swap";
              break;
            default:
              return sub_AFF7D0();
          }
          ++v14;
          v15 = sub_995540(v23, v13);
          sub_995540(v15, "\"");
        }
        while ( v22 != v14 );
      }
      break;
    case 0:
      sub_995540(a2, "__attribute__((interrupt");
      sub_995540(a2, &byte_22F0C30);
      v5 = *(_DWORD **)(a1 + 48);
      v6 = &v5[*(unsigned int *)(a1 + 40)];
      if ( v5 != v6 )
      {
        v7 = *(_DWORD **)(a1 + 48);
        do
        {
          sub_AFB8E0(a2, v24);
          v8 = sub_995540(a2, "\"");
          switch ( *v7 )
          {
            case 0:
              v19 = "supervisor";
              break;
            case 1:
              v19 = "machine";
              break;
            case 2:
              v19 = "qci-nest";
              break;
            case 3:
              v19 = "qci-nonest";
              break;
            case 4:
              v19 = "SiFive-CLIC-preemptible";
              break;
            case 5:
              v19 = "SiFive-CLIC-stack-swap";
              break;
            default:
              return sub_AFF7D0();
          }
          ++v7;
          v20 = sub_995540(v8, v19);
          sub_995540(v20, "\"");
        }
        while ( v6 != v7 );
      }
      sub_995540(a2, &byte_22F0C30);
      if ( !v24[0] )
        sub_995540(a2, ")");
      return sub_995540(a2, "))");
    case 2:
      sub_995540(a2, "[[gnu::interrupt");
      sub_995540(a2, &byte_22F0C30);
      v9 = *(_DWORD **)(a1 + 48);
      v10 = &v9[*(unsigned int *)(a1 + 40)];
      if ( v9 != v10 )
      {
        v11 = *(_DWORD **)(a1 + 48);
        do
        {
          sub_AFB8E0(a2, v24);
          v12 = sub_995540(a2, "\"");
          switch ( *v11 )
          {
            case 0:
              v17 = "supervisor";
              break;
            case 1:
              v17 = "machine";
              break;
            case 2:
              v17 = "qci-nest";
              break;
            case 3:
              v17 = "qci-nonest";
              break;
            case 4:
              v17 = "SiFive-CLIC-preemptible";
              break;
            case 5:
              v17 = "SiFive-CLIC-stack-swap";
              break;
            default:
              return sub_AFF7D0();
          }
          ++v11;
          v18 = sub_995540(v12, v17);
          sub_995540(v18, "\"");
        }
        while ( v10 != v11 );
      }
      break;
    default:
      return sub_AFF7D0();
  }
  sub_995540(a2, &byte_22F0C30);
  if ( !v24[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, "]]");
}
