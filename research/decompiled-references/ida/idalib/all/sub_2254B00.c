__int64 __fastcall sub_2254B00(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // r13d
  char v5; // di
  int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // r11
  char *v9; // r9
  int v10; // edi
  int v11; // ebp
  char v12; // bl
  int v13; // edi
  __int64 v14; // rbx
  int v15; // edi
  int v16; // ecx
  __int64 v17; // rcx

  result = a1;
  if ( (unsigned __int64)(a2 + 7) >= unk_26FADE0 )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 4) = 0xFFFFFFFFLL;
    *(_BYTE *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 40) = a3;
    return result;
  }
  v4 = a2 + 1;
  v5 = *((_BYTE *)off_2C8F610 + a2);
  v6 = *((unsigned __int8 *)off_2C8F610 + a2 + 1);
  v7 = v5 & 0x3F;
  if ( (v5 & 0x40) != 0 )
  {
    v4 = a2 + 3;
    v8 = a2 + 4;
    v9 = &off_2CCA878[(v6 << 8) | *((unsigned __int8 *)off_2C8F610 + a2 + 2)];
    LOBYTE(v6) = *((_BYTE *)off_2C8F610 + a2 + 3);
    if ( v5 >= 0 )
      goto LABEL_5;
LABEL_9:
    v14 = (unsigned int)v8;
    LODWORD(v8) = v4 + 3;
    v15 = *((unsigned __int8 *)off_2C8F610 + v4 + 2) | ((unsigned __int8)v6 << 16);
    v16 = *((unsigned __int8 *)off_2C8F610 + v14);
    v12 = *((_BYTE *)off_2C8F610 + v4 + 2) & 1;
    v11 = ((v16 << 8) | v15) >> 3;
    v10 = 0;
    if ( (*((_BYTE *)off_2C8F610 + v4 + 2) & 2) != 0 )
    {
      v17 = (unsigned int)v8;
      LODWORD(v8) = v4 + 6;
      v10 = (*((unsigned __int8 *)off_2C8F610 + v4 + 4) << 8)
          | (*((unsigned __int8 *)off_2C8F610 + v17) << 16)
          | *((unsigned __int8 *)off_2C8F610 + v4 + 5);
    }
    goto LABEL_7;
  }
  v9 = &off_2CCA878[v7];
  v8 = a2 + 2;
  v7 = 1;
  if ( v5 < 0 )
    goto LABEL_9;
LABEL_5:
  v10 = 0;
  v11 = -1;
  v12 = (unsigned __int8)v6 >> 7;
  if ( (v6 & 0x40) != 0 )
  {
    v13 = *((unsigned __int8 *)off_2C8F610 + v8);
    LODWORD(v8) = v4 + 3;
    v10 = (v13 << 8) | *((unsigned __int8 *)off_2C8F610 + v4 + 2) | ((v6 & 0x3F) << 16);
  }
LABEL_7:
  *(_DWORD *)(result + 4) = v11;
  *(_BYTE *)(result + 12) = v12;
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 8) = v10;
  *(_DWORD *)(result + 16) = v8 - a2;
  *(_QWORD *)(result + 24) = v9;
  *(_QWORD *)(result + 32) = v7;
  *(_QWORD *)(result + 40) = a3;
  return result;
}
