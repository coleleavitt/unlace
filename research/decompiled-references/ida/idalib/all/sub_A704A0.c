unsigned __int64 __fastcall sub_A704A0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int8 v10; // bl
  unsigned int v11; // r12d
  __int64 v12; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax

  v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(unsigned __int8 *)(v7 + 16);
  v9 = (unsigned int)(v8 - 57);
  if ( (unsigned int)v9 <= 1 )
    goto LABEL_2;
  v14 = a2;
  v15 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
  if ( (unsigned int)v15 <= 1 )
  {
    v7 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v15, v8, a5);
    if ( v7 )
    {
LABEL_2:
      v10 = *(_BYTE *)(v7 + 18);
      v11 = *(_DWORD *)(v7 + 20);
      v12 = sub_A704A0(a1, *(_QWORD *)(v7 + 32), v9, v8);
      return sub_A70300((__int64)a1, v12, v11, (v10 >> 3) & 0xF);
    }
    v7 = *(_QWORD *)v5;
    v8 = *(unsigned __int8 *)(*(_QWORD *)v5 + 16LL);
  }
  if ( (_BYTE)v8 == 10 )
    return sub_A70200((__int64)a1, 0, (*(_DWORD *)(v7 + 32) >> 1) & 0xFFFFFF);
  v16 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(unsigned __int8 *)(v16 + 16);
  if ( (_BYTE)v17 == 10 )
  {
    v7 = sub_F63050(v7, a2, v17, v8, a5);
    if ( v7 )
      return sub_A70200((__int64)a1, 0, (*(_DWORD *)(v7 + 32) >> 1) & 0xFFFFFF);
    v18 = *(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v16 = *(_QWORD *)v18;
    v17 = *(unsigned __int8 *)(*(_QWORD *)v18 + 16LL);
  }
  if ( (_BYTE)v17 == 47 )
  {
    v19 = sub_F60F10(v16, a2, v17, v8, a5);
    v14 = sub_6F3660(v19);
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  }
  v20 = *(unsigned __int16 *)(v16 + 18);
  LOWORD(v20) = (unsigned __int16)v20 >> 3;
  v21 = (unsigned int)(v20 + 75);
  LOWORD(v21) = v21 & 0x1FF;
  switch ( v21 )
  {
    case 0LL:
    case 1LL:
    case 3LL:
    case 11LL:
      result = a1[2338];
      break;
    case 2LL:
      result = a1[2332];
      break;
    case 6LL:
      result = a1[2339];
      break;
    case 7LL:
      result = a1[2340];
      break;
    case 8LL:
      result = a1[2341];
      break;
    case 9LL:
      result = a1[2342];
      break;
    case 10LL:
      result = a1[2343];
      break;
    case 22LL:
      result = a1[2355];
      break;
    case 23LL:
      result = a1[2356];
      break;
    case 24LL:
      result = a1[2357];
      break;
    case 28LL:
      result = a1[2361];
      break;
    case 29LL:
      result = a1[2362];
      break;
    case 30LL:
      result = a1[2363];
      break;
    case 34LL:
      result = a1[2367];
      break;
    case 35LL:
      result = a1[2368];
      break;
    case 36LL:
      result = a1[2369];
      break;
    case 40LL:
      result = a1[2373];
      break;
    case 41LL:
      result = a1[2374];
      break;
    case 42LL:
      result = a1[2375];
      break;
    default:
      result = v14;
      break;
  }
  return result;
}
