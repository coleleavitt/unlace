__int64 __fastcall sub_D256A0(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rbp
  bool v25; // cc
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // rbx
  void *v30; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-50h]
  int v32; // [rsp+40h] [rbp-48h]
  __int64 v33; // [rsp+60h] [rbp-28h]
  int v34; // [rsp+68h] [rbp-20h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        *(_BYTE *)(v6 + *(unsigned int *)(*(_QWORD *)(v6 + 32) + 24LL) + 40) = sub_D22760(*(_QWORD *)(a1 + 560));
        *(_BYTE *)(v6 + 44) |= 2u;
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        *(_BYTE *)(v7 + *(unsigned int *)(*(_QWORD *)(v7 + 32) + 24LL) + 40) = sub_D22E60(*(_QWORD *)(a1 + 560));
        *(_BYTE *)(v7 + 44) |= 2u;
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        *(_WORD *)(v8 + *(unsigned int *)(*(_QWORD *)(v8 + 32) + 24LL) + 40) = sub_D23370(*(_QWORD *)(a1 + 560));
        *(_BYTE *)(v8 + 44) |= 2u;
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        *(_WORD *)(v9 + *(unsigned int *)(*(_QWORD *)(v9 + 32) + 24LL) + 40) = sub_D23A90(*(_QWORD *)(a1 + 560));
        *(_BYTE *)(v9 + 44) |= 2u;
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        *(_DWORD *)(v10 + *(unsigned int *)(*(_QWORD *)(v10 + 32) + 24LL) + 40) = sub_D23BA0(*(_QWORD *)(a1 + 560));
        *(_BYTE *)(v10 + 44) |= 2u;
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        *(_DWORD *)(v11 + *(unsigned int *)(*(_QWORD *)(v11 + 32) + 24LL) + 40) = sub_D242B0(*(_QWORD *)(a1 + 560));
        *(_BYTE *)(v11 + 44) |= 2u;
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        *(_QWORD *)(v12 + *(unsigned int *)(*(_QWORD *)(v12 + 32) + 24LL) + 40) = sub_D243C0(*(_QWORD *)(a1 + 560));
        *(_BYTE *)(v12 + 44) |= 2u;
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        *(_QWORD *)(v13 + *(unsigned int *)(*(_QWORD *)(v13 + 32) + 24LL) + 40) = sub_D24B00(*(_QWORD *)(a1 + 560));
        *(_BYTE *)(v13 + 44) |= 2u;
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        v15 = sub_D25090(*(_QWORD *)(a1 + 560));
        v16 = *(unsigned int *)(*(_QWORD *)(v14 + 32) + 24LL);
        *(_QWORD *)(v14 + v16 + 40) = v15;
        *(_DWORD *)(v14 + v16 + 48) = v17;
        *(_BYTE *)(v14 + 44) |= 2u;
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        v19 = sub_D251C0(*(_QWORD *)(a1 + 560));
        v20 = *(unsigned int *)(*(_QWORD *)(v18 + 32) + 24LL);
        *(_QWORD *)(v18 + v20 + 40) = v19;
        *(_DWORD *)(v18 + v20 + 48) = v21;
        *(_BYTE *)(v18 + 44) |= 2u;
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        *(_BYTE *)(v22 + *(unsigned int *)(*(_QWORD *)(v22 + 32) + 24LL) + 40) = sub_D08FE0(*(_QWORD *)(a1 + 560));
        *(_BYTE *)(v22 + 44) |= 2u;
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v23 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        sub_D0AF80((__int64)&v30, *(_QWORD *)(a1 + 560));
        v24 = v23 + *(unsigned int *)(*(_QWORD *)(v23 + 32) + 24LL) + 40;
        sub_C18DB0(v24, (__int64)&v30);
        v25 = v31 <= 0x40;
        *(_DWORD *)(v24 + 16) = v32;
        if ( !v25 && v30 )
          operator delete[](v30);
        goto LABEL_35;
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v23 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        v26 = sub_D08C00(*(_QWORD *)(a1 + 560));
        v27 = *(unsigned int *)(*(_QWORD *)(v23 + 32) + 24LL);
        *(_QWORD *)(v23 + v27 + 40) = v26;
        *(_DWORD *)(v23 + v27 + 48) = v28;
LABEL_35:
        *(_BYTE *)(v23 + 44) |= 2u;
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        sub_D09010((__int64)&v30, *(_QWORD *)(a1 + 560));
        sub_E23400(v29 + *(unsigned int *)(*(_QWORD *)(v29 + 32) + 24LL) + 40, &v30);
        sub_E232A0(&v30);
        *(_BYTE *)(v29 + 44) |= 2u;
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3);
        sub_D0A640((__int64)&v30, *(_QWORD *)(a1 + 560));
        v5 = v4 + *(unsigned int *)(*(_QWORD *)(v4 + 32) + 24LL) + 40;
        sub_E23400(v5, &v30);
        *(_QWORD *)(v5 + 48) = v33;
        *(_DWORD *)(v5 + 56) = v34;
        sub_E232A0(&v30);
        *(_BYTE *)(v4 + 44) |= 2u;
      }
      break;
  }
  return 1;
}
