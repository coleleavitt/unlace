__int64 __fastcall sub_6A6F00(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax

  v2 = 0;
  if ( (unsigned __int8)sub_78CBC0(a2) > 3u )
  {
    v3 = sub_789AD0(a2, 1);
    if ( !v3 )
      v3 = (__int64)a2;
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3) + 82) & 0x40) == 0
      && (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3) + 83) & 2) == 0 )
    {
      switch ( sub_781200(a2) )
      {
        case 0LL:
        case 2LL:
          v2 = 3;
          goto LABEL_8;
        case 1LL:
          v2 = 2;
          goto LABEL_8;
        case 3LL:
          return 1;
        case 4LL:
          return 4;
        default:
LABEL_8:
          if ( (a2[82] & 1) == 0 )
            return v2;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 1LL) & 8) != 0 || *(_DWORD *)(*(_QWORD *)(a1 + 17288) + 340LL) == 10 )
            goto LABEL_18;
          if ( (a2[29] & 1) == 0 )
            goto LABEL_30;
          v4 = sub_79A2B0(a2);
          v5 = *(_QWORD *)v4;
          v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
          if ( v5 < v6 )
          {
            while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 189 )
            {
              v5 += 8LL;
              if ( v6 == v5 )
                goto LABEL_30;
            }
          }
          else
          {
            if ( v5 == v6 )
            {
LABEL_30:
              if ( !(unsigned __int8)sub_78AE60(a2) )
                return 1;
              return v2;
            }
            while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 189 )
            {
              v6 += 8LL;
              if ( v5 == v6 )
                goto LABEL_30;
            }
          }
          if ( v5 == v6 )
            goto LABEL_30;
LABEL_18:
          if ( (a2[29] & 1) == 0 )
            goto LABEL_19;
          v8 = sub_79A2B0(a2);
          v9 = *(_QWORD *)v8;
          v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
          if ( v9 < v10 )
          {
            while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 215 )
            {
              v9 += 8LL;
              if ( v10 == v9 )
                goto LABEL_19;
            }
          }
          else
          {
            if ( v9 == v10 )
              goto LABEL_19;
            while ( *(_WORD *)(*(_QWORD *)v10 + 32LL) != 215 )
            {
              v10 += 8LL;
              if ( v9 == v10 )
                goto LABEL_19;
            }
          }
          if ( v9 != v10 )
            goto LABEL_30;
LABEL_19:
          if ( (unsigned __int8)sub_78AC20(a2) )
            return 4;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 17288) + 340LL) == 10 && (a2[28] & 0x7F) == 0x24 )
            return 2 * (unsigned int)((a2[87] & 0x20) == 0);
          break;
      }
    }
    return 2;
  }
  return v2;
}

