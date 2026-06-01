__int64 __fastcall sub_18BEAC0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, double a6)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r13
  __int64 result; // rax
  __int64 v17; // rbx
  char v18; // al
  unsigned int v19; // ecx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 57 > 1 )
  {
    v25 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
    if ( (unsigned int)v25 > 1 )
      BUG();
    v8 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v25, a4);
  }
  v9 = *(_QWORD *)(a3 + 248);
  v10 = *(_DWORD *)(v8 + 20);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 58 )
    v15 = sub_A76A60(v9, a2, v10);
  else
    v15 = sub_A70300(v9, a2, v10, (*(_BYTE *)(v8 + 18) >> 3) & 0xF);
  if ( (*(_WORD *)a1 & 0x1FF) != 0x4F || (result = *(_QWORD *)(a1 + 16), v15 != *(_QWORD *)(result + 8)) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *(_BYTE *)(v17 + 16);
    switch ( v18 )
    {
      case 13:
        if ( (((*(_WORD *)(v17 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
          goto LABEL_8;
        break;
      case 47:
        v20 = sub_F60F10(v17, a2, v11, v12, v13, v14);
        if ( (*((_BYTE *)v20 + 74) & 1) == 0 && (v20[16] & 0xFFFFFFFFFFFFFFF8LL) == 0
          || *((char *)sub_F60F10(v17, a2, v21, v22, v23, v24) + 76) < 0 )
        {
LABEL_8:
          v19 = 39;
          return sub_160A600(a3, a1, v15, v19, 0, 0, a5, a6, 0);
        }
        break;
      case 10:
        v19 = 27;
        return sub_160A600(a3, a1, v15, v19, 0, 0, a5, a6, 0);
      default:
        goto LABEL_8;
    }
    v19 = 27;
    return sub_160A600(a3, a1, v15, v19, 0, 0, a5, a6, 0);
  }
  return result;
}
