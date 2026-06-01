void __fastcall sub_D8D070(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // esi
  __int64 v10; // r14
  __int64 i; // r12
  unsigned int v12; // esi
  int v13; // r13d
  int v14; // r14d
  __int64 v15; // kr10_8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE v32[48]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v33[11]; // [rsp+30h] [rbp-58h] BYREF

  v1 = a1;
  v2 = sub_CFDF60(a1);
  v3 = v2;
  if ( *(_BYTE *)(v2 + 60) )
  {
    v8 = *(_DWORD *)(v2 + 20);
    if ( *(_QWORD *)(v2 + 40) )
    {
      if ( v8 != -1 )
      {
        v9 = *(_DWORD *)(v2 + 16);
        if ( v9 <= v8 )
        {
          v10 = v8 / v9 - 1;
          for ( i = 0; ; ++i )
          {
            sub_CFE430((__int64)v33, a1, i);
            sub_CFE7A0((__int64)v32, v33);
            sub_E232A0(v33);
            sub_D8D070(v32);
            sub_E232A0(v32);
            if ( v10 == i )
              break;
          }
        }
      }
    }
    else if ( v8 != -1 )
    {
      v12 = *(_DWORD *)(v2 + 16);
      v13 = v8 / v12;
      if ( v12 <= v8 )
      {
        v14 = 0;
        do
        {
          v15 = a1;
          a1 = v1;
          switch ( *(_DWORD *)(v3 + 48) )
          {
            case 0:
              *(_BYTE *)sub_D0C5D0(v1) = 0;
              break;
            case 1:
              *(_BYTE *)sub_D0C7E0(v1) = 0;
              break;
            case 2:
              *(_WORD *)sub_D0CBD0(v1) = 0;
              break;
            case 3:
              *(_WORD *)sub_D0CDE0(v1) = 0;
              break;
            case 4:
              *(_DWORD *)sub_D0D1D0(v1) = 0;
              break;
            case 5:
              *(_DWORD *)sub_D0D3E0(v1) = 0;
              break;
            case 6:
              *(_QWORD *)sub_D0D9C0(v1) = 0;
              break;
            case 7:
              *(_QWORD *)sub_D0DBD0(v1) = 0;
              break;
            case 8:
              v22 = sub_D0E1E0(v1);
              *(_QWORD *)v22 = 0;
              *(_DWORD *)(v22 + 8) = 0;
              break;
            case 9:
              v21 = sub_D0E230(v1);
              *(_QWORD *)v21 = 0;
              *(_DWORD *)(v21 + 8) = 0;
              break;
            case 0xA:
              *(_BYTE *)sub_D0E7B0(v1) = 0;
              break;
            case 0xB:
              v16 = sub_D0F1C0(v1);
              if ( *(_DWORD *)(v16 + 8) > 0x40u && *(_QWORD *)v16 )
                operator delete[](*(void **)v16);
              a1 = v1;
              v17 = sub_D0F1C0(v1);
              *(_DWORD *)(v17 + 8) = 0;
              *(_QWORD *)v17 = 0;
              *(_BYTE *)(v17 + 12) = 1;
              *(_DWORD *)(v17 + 16) = 0;
              break;
            case 0xC:
              v20 = sub_D0E280(v1);
              *(_QWORD *)v20 = 0;
              *(_DWORD *)(v20 + 8) = 0;
              break;
            case 0xD:
              v18 = sub_D0EA30(v1);
              sub_E232A0(v18);
              a1 = v1;
              v19 = sub_D0EA30(v1);
              goto LABEL_26;
            case 0xE:
              v23 = sub_D0EF40(v1);
              sub_E232A0(v23);
              a1 = v1;
              v19 = sub_D0EF40(v1);
              *(_OWORD *)(v19 + 16) = 0;
              *(_OWORD *)(v19 + 48) = 0;
LABEL_26:
              *(_QWORD *)v19 = 0;
              *(_OWORD *)(v19 + 8) = 0;
              *(_DWORD *)(v19 + 24) = 1;
              *(_QWORD *)(v19 + 40) = 0;
              *(_QWORD *)(v19 + 32) = 0;
              break;
            default:
              a1 = v15;
              break;
          }
          ++v14;
        }
        while ( v13 != v14 );
      }
    }
  }
  else
  {
    v4 = *(_QWORD *)(v2 + 32);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 280);
      v6 = v5 + 24LL * *(unsigned int *)(v4 + 288);
      while ( v5 != v6 )
      {
        v7 = *(_DWORD *)(v5 + 8);
        v5 += 24;
        sub_E23220(v33, *(_QWORD *)(a1 + 32), (unsigned int)(*(_DWORD *)a1 + v7), (unsigned int)(*(_DWORD *)a1 + v7));
        sub_D8D070(v33);
        sub_E232A0(v33);
      }
    }
    else if ( *(_BYTE *)(v3 + 52) )
    {
      switch ( *(_DWORD *)(v3 + 48) )
      {
        case 0:
          *(_BYTE *)sub_D0C5D0(a1) = 0;
          break;
        case 1:
          *(_BYTE *)sub_D0C7E0(a1) = 0;
          break;
        case 2:
          *(_WORD *)sub_D0CBD0(a1) = 0;
          break;
        case 3:
          *(_WORD *)sub_D0CDE0(a1) = 0;
          break;
        case 4:
          *(_DWORD *)sub_D0D1D0(a1) = 0;
          break;
        case 5:
          *(_DWORD *)sub_D0D3E0(a1) = 0;
          break;
        case 6:
          *(_QWORD *)sub_D0D9C0(a1) = 0;
          break;
        case 7:
          *(_QWORD *)sub_D0DBD0(a1) = 0;
          break;
        case 8:
          v30 = sub_D0E1E0(a1);
          *(_QWORD *)v30 = 0;
          *(_DWORD *)(v30 + 8) = 0;
          break;
        case 9:
          v29 = sub_D0E230(a1);
          *(_QWORD *)v29 = 0;
          *(_DWORD *)(v29 + 8) = 0;
          break;
        case 0xA:
          *(_BYTE *)sub_D0E7B0(a1) = 0;
          break;
        case 0xB:
          v27 = sub_D0F1C0(a1);
          if ( *(_DWORD *)(v27 + 8) > 0x40u && *(_QWORD *)v27 )
            operator delete[](*(void **)v27);
          v28 = sub_D0F1C0(a1);
          sub_CFE920(v28);
          break;
        case 0xC:
          v26 = sub_D0E280(a1);
          *(_QWORD *)v26 = 0;
          *(_DWORD *)(v26 + 8) = 0;
          break;
        case 0xD:
          v24 = sub_D0EA30(a1);
          sub_E232A0(v24);
          v25 = sub_D0EA30(a1);
          goto LABEL_41;
        case 0xE:
          v31 = sub_D0EF40(a1);
          sub_E232A0(v31);
          v25 = sub_D0EF40(a1);
          *(_OWORD *)(v25 + 16) = 0;
          *(_OWORD *)(v25 + 48) = 0;
LABEL_41:
          *(_QWORD *)v25 = 0;
          *(_OWORD *)(v25 + 8) = 0;
          *(_DWORD *)(v25 + 24) = 1;
          *(_QWORD *)(v25 + 40) = 0;
          *(_QWORD *)(v25 + 32) = 0;
          break;
        default:
          return;
      }
    }
  }
}
