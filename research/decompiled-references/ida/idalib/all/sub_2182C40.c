__int64 __fastcall sub_2182C40(__int64 a1, int a2)
{
  size_t v2; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax

  switch ( a2 )
  {
    case 5:
      *(_QWORD *)a1 = a1 + 16;
      v4 = j__strlen("v5");
      sub_2181180((_QWORD *)a1, "v5", (__int64)&aV5[v4 + 1]);
      *(_BYTE *)(a1 + 32) = 1;
      break;
    case 55:
      *(_QWORD *)a1 = a1 + 16;
      v5 = j__strlen("v55");
      sub_2181180((_QWORD *)a1, "v55", (__int64)&aHexagonv55[v5 + 7]);
      *(_BYTE *)(a1 + 32) = 1;
      break;
    case 60:
      *(_QWORD *)a1 = a1 + 16;
      v6 = j__strlen("v60");
      sub_2181180((_QWORD *)a1, "v60", (__int64)&aHexagonv60[v6 + 7]);
      *(_BYTE *)(a1 + 32) = 1;
      break;
    case 62:
      *(_QWORD *)a1 = a1 + 16;
      v7 = j__strlen("v62");
      sub_2181180((_QWORD *)a1, "v62", (__int64)&aHexagonv62[v7 + 7]);
      *(_BYTE *)(a1 + 32) = 1;
      break;
    case 65:
      *(_QWORD *)a1 = a1 + 16;
      v8 = j__strlen("v65");
      sub_2181180((_QWORD *)a1, "v65", (__int64)&aHexagonv65[v8 + 7]);
      *(_BYTE *)(a1 + 32) = 1;
      break;
    case 67:
      *(_QWORD *)a1 = a1 + 16;
      v9 = j__strlen("v67");
      sub_2181180((_QWORD *)a1, "v67", (__int64)&aHexagonv67[v9 + 7]);
      *(_BYTE *)(a1 + 32) = 1;
      break;
    case 68:
      *(_QWORD *)a1 = a1 + 16;
      v10 = j__strlen("v68");
      sub_2181180((_QWORD *)a1, "v68", (__int64)&aHexagonv68[v10 + 7]);
      *(_BYTE *)(a1 + 32) = 1;
      break;
    case 69:
      *(_QWORD *)a1 = a1 + 16;
      v11 = j__strlen("v69");
      sub_2181180((_QWORD *)a1, "v69", (__int64)&aHexagonv69[v11 + 7]);
      *(_BYTE *)(a1 + 32) = 1;
      break;
    case 71:
      *(_QWORD *)a1 = a1 + 16;
      v12 = j__strlen("v71");
      sub_2181180((_QWORD *)a1, "v71", (__int64)&aHexagonv71[v12 + 7]);
      *(_BYTE *)(a1 + 32) = 1;
      break;
    case 73:
      *(_QWORD *)a1 = a1 + 16;
      v13 = j__strlen("v73");
      sub_2181180((_QWORD *)a1, "v73", (__int64)&aHexagonv73[v13 + 7]);
      *(_BYTE *)(a1 + 32) = 1;
      break;
    case 75:
      *(_QWORD *)a1 = a1 + 16;
      v2 = j__strlen("v75");
      sub_2181180((_QWORD *)a1, "v75", (__int64)&aHexagonv75[v2 + 7]);
      *(_BYTE *)(a1 + 32) = 1;
      break;
    default:
      *(_QWORD *)(a1 + 32) = 0;
      *(_OWORD *)a1 = 0;
      *(_OWORD *)(a1 + 16) = 0;
      break;
  }
  return a1;
}
