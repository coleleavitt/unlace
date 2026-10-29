__int64 __fastcall sub_6A5F30(void (*a1)(const char *, ...), unsigned __int8 **a2, int a3, int a4)
{
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // r12d
  char v11; // r14
  int v12; // r14d
  _QWORD *v13; // rdx
  int v14; // ebx
  int v15; // r14d
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  _BYTE *v19; // rsi
  __int64 v20; // rdi
  int v21; // eax
  const char *v22; // rsi
  int v23; // [rsp+4h] [rbp-444h] BYREF
  int v24[2]; // [rsp+8h] [rbp-440h] BYREF
  char v25[1024]; // [rsp+10h] [rbp-438h] BYREF
  _BYTE v26[8]; // [rsp+410h] [rbp-38h] BYREF
  unsigned __int64 v27; // [rsp+418h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v23 = 0;
  *(_QWORD *)v24 = 0;
  v9 = sub_5383A0(a2, &v23, (__int64 **)v24);
  if ( !(_BYTE)v9 )
  {
    a1("// FAILED TO PARSE TYPE ATTRS!\n");
    return v9;
  }
  v25[0] = 0;
  v11 = v23;
  switch ( a4 )
  {
    case 7:
    case 11:
      if ( (unsigned int)v23 <= 0x1F )
        goto LABEL_12;
      v20 = (__int64)&v25[(int)qsnprintf((unsigned int)v25, 1024, (unsigned int)"UNKNOWN_TAH(%08X) ", v23, v7, v8)];
      goto LABEL_20;
    case 10:
      v21 = v23 & 0x60;
      if ( v21 == 64 )
      {
        v22 = "__ptr64 ";
        goto LABEL_32;
      }
      if ( v21 == 96 )
      {
        v22 = "__restrict ";
        goto LABEL_32;
      }
      v22 = "__ptr32 ";
      if ( v21 == 32 )
      {
LABEL_32:
        v20 = qstpncpy(v25, v22, 1024);
        goto LABEL_20;
      }
LABEL_5:
      LOBYTE(v12) = v23 & 0xF;
      if ( (v23 & 0xF) == 0 )
        goto LABEL_6;
      v20 = (__int64)v25;
LABEL_34:
      v19 = &v26[-v20];
LABEL_35:
      qsnprintf(v20, (_DWORD)v19, (unsigned int)"__declspec(align(%d)) ", 1 << (v12 - 1), v7, v8);
LABEL_21:
      if ( v25[0] )
        a1("//\t%*c%s\n", a3 + 1, 32, v25);
LABEL_6:
      v13 = *(_QWORD **)v24;
      if ( *(_QWORD *)v24 && *(_QWORD *)(*(_QWORD *)v24 + 8LL) )
      {
        v14 = a3 + 1;
        v15 = 0;
        v16 = 0;
        do
        {
          v17 = v15;
          v18 = *v13 + 48 * v16;
          ++v15;
          a1(
            "//\t%*cattr_%d: %*.*s => %*.*s\n",
            v14,
            32,
            v17,
            *(_QWORD *)(v18 + 8),
            *(_QWORD *)(v18 + 8),
            *(const char **)v18,
            *(_QWORD *)(v18 + 32),
            *(_QWORD *)(v18 + 32),
            *(const char **)(v18 + 24));
          v13 = *(_QWORD **)v24;
          v16 = v15;
        }
        while ( (unsigned __int64)v15 < *(_QWORD *)(*(_QWORD *)v24 + 8LL) );
      }
      return v9;
    case 13:
      v20 = (__int64)v25;
      if ( (v23 & 0x40) != 0 )
        v20 = qstpncpy(v25, "__unaligned ", 1024);
      if ( (v11 & 0x20) != 0 )
        v20 = qstpncpy(v20, "__attribute__((msstruct)) ", &v26[-v20]);
      if ( v11 < 0 )
        v20 = qstpncpy(v20, "__cppobj ", &v26[-v20]);
      goto LABEL_20;
    case 14:
      v20 = (__int64)v25;
      if ( (v23 & 0x40) != 0 )
        v20 = qstpncpy(v25, "__unaligned ", 1024);
      if ( (v11 & 0x20) != 0 )
        v20 = qstpncpy(v20, "__baseclass ", &v26[-v20]);
      goto LABEL_20;
    case 45:
      if ( (v23 & 0x20) == 0 )
      {
LABEL_12:
        LOBYTE(v12) = v23 & 0xF;
        if ( (v23 & 0xF) == 0 )
          goto LABEL_6;
        LODWORD(v19) = 1024;
        v20 = (__int64)v25;
        goto LABEL_35;
      }
      v20 = qstpncpy(v25, "__64bit ", 1024);
LABEL_20:
      v12 = v11 & 0xF;
      if ( v12 )
        goto LABEL_34;
      goto LABEL_21;
    default:
      goto LABEL_5;
  }
}
