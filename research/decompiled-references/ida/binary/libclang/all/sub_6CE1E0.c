unsigned __int64 __fastcall sub_6CE1E0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int8 v6; // bl
  unsigned int v7; // r12d
  __int64 v8; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax

  v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(unsigned __int8 *)(v4 + 16);
  if ( (unsigned int)(v5 - 56) <= 1 )
    goto LABEL_2;
  v10 = a2;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 56 <= 1 )
  {
    v4 = sub_B0D320(v4);
    if ( v4 )
    {
LABEL_2:
      v6 = *(_BYTE *)(v4 + 18);
      v7 = *(_DWORD *)(v4 + 20);
      v8 = sub_6CE1E0(a1, *(_QWORD *)(v4 + 32), v5);
      return sub_6C5F70((__int64)a1, v8, v7, (v6 >> 3) & 0xF);
    }
    v4 = *(_QWORD *)v2;
    LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)v2 + 16LL);
  }
  if ( (_BYTE)v5 == 10 )
    return sub_6C7660((__int64)a1, 0, (*(_DWORD *)(v4 + 32) >> 1) & 0xFFFFFF);
  v11 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_BYTE *)(v11 + 16);
  if ( v12 == 10 )
  {
    v4 = sub_B0D320(v4);
    if ( v4 )
      return sub_6C7660((__int64)a1, 0, (*(_DWORD *)(v4 + 32) >> 1) & 0xFFFFFF);
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v12 = *(_BYTE *)(v11 + 16);
  }
  if ( v12 == 46 )
  {
    v13 = sub_B14A40(v11);
    v10 = sub_6B31C0(v13, a2);
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  }
  v14 = *(unsigned __int16 *)(v11 + 18);
  LOWORD(v14) = (unsigned __int16)v14 >> 3;
  v15 = (unsigned int)(v14 + 76);
  LOWORD(v15) = v15 & 0x1FF;
  switch ( v15 )
  {
    case 0LL:
    case 1LL:
    case 3LL:
    case 11LL:
      result = a1[2318];
      break;
    case 2LL:
      result = a1[2312];
      break;
    case 6LL:
      result = a1[2319];
      break;
    case 7LL:
      result = a1[2320];
      break;
    case 8LL:
      result = a1[2321];
      break;
    case 9LL:
      result = a1[2322];
      break;
    case 10LL:
      result = a1[2323];
      break;
    case 22LL:
      result = a1[2335];
      break;
    case 23LL:
      result = a1[2336];
      break;
    case 24LL:
      result = a1[2337];
      break;
    case 28LL:
      result = a1[2341];
      break;
    case 29LL:
      result = a1[2342];
      break;
    case 30LL:
      result = a1[2343];
      break;
    case 34LL:
      result = a1[2347];
      break;
    case 35LL:
      result = a1[2348];
      break;
    case 36LL:
      result = a1[2349];
      break;
    case 40LL:
      result = a1[2353];
      break;
    case 41LL:
      result = a1[2354];
      break;
    case 42LL:
      result = a1[2355];
      break;
    default:
      result = v10;
      break;
  }
  return result;
}

