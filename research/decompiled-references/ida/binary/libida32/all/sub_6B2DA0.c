__int64 __fastcall sub_6B2DA0(__int64 a1, __int64 a2, const char *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r12
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  size_t v12; // rax
  size_t v13; // rbp
  size_t v14; // rbx
  void *v15; // rax
  char v17; // [rsp+0h] [rbp-478h]
  char *s; // [rsp+10h] [rbp-468h]
  unsigned int v19; // [rsp+24h] [rbp-454h] BYREF
  char v20[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v21; // [rsp+438h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v4 = (_QWORD *)operator new(0x18u);
  v4[1] = 0;
  *v4 = off_2B0DCC8;
  v4[2] = a2;
  hook_event_listener(3, v4, 0, 0);
  *(_QWORD *)(a2 + 760) = 0;
  *(_QWORD *)(a2 + 896) = 0;
  memset(
    (void *)((a2 + 768) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a2 - (((_DWORD)a2 + 768) & 0xFFFFFFF8) + 904) >> 3));
  v5 = (_QWORD *)operator new[](0x10u);
  v6 = qstrdup(a3);
  *(_QWORD *)(a2 + 784) = v5;
  *v5 = v6;
  v5[1] = 0;
  sub_389700((__int64)"CPU:%s\n", a3);
  qflush(stdout);
  if ( !qgets(v20, 1024) )
    sub_375320((__int64)"upg32: ida64 did not communicate the procmod name");
  s = (char *)qstrtok(v20, ":");
  if ( !s )
LABEL_20:
    sub_375320((__int64)"wrong procmod description: %s", v20);
  v7 = 0;
  while ( 1 )
  {
    v8 = qstrtok(nullptr, ":");
    if ( !v8 )
      break;
    v19 = 0;
    if ( (unsigned int)qsscanf(v8, (int)"%u", (int)&v19, v9, v10, v11, v17) != 1 )
      goto LABEL_20;
    switch ( v7 )
    {
      case 1:
        *(_DWORD *)(a2 + 768) = v19;
        goto LABEL_10;
      case 2:
        *(_DWORD *)(a2 + 772) = v19;
        goto LABEL_10;
      case 3:
        *(_DWORD *)(a2 + 776) = v19;
        goto LABEL_10;
      case 4:
        *(_DWORD *)(a2 + 780) = v19;
        goto LABEL_10;
      case 5:
        *(_DWORD *)(a2 + 828) = v19;
        goto LABEL_10;
      case 6:
        *(_DWORD *)(a2 + 832) = v19;
        goto LABEL_10;
      case 7:
        *(_DWORD *)(a2 + 836) = v19;
        goto LABEL_10;
      case 8:
        *(_DWORD *)(a2 + 840) = v19;
        goto LABEL_10;
      case 9:
        *(_DWORD *)(a2 + 844) = v19;
        goto LABEL_10;
      case 10:
        *(_QWORD *)(a2 + 880) = v19;
        goto LABEL_8;
      default:
        *(_DWORD *)(a2 + 764) = v19;
LABEL_10:
        ++v7;
        break;
    }
  }
LABEL_8:
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v12 = strlen(s);
  v13 = v12 + 1;
  v14 = v12;
  v15 = (void *)qvector_reserve(a1, 0, v12 + 1, 1);
  *(_QWORD *)a1 = v15;
  *(_QWORD *)(a1 + 8) = v13;
  memmove(v15, s, v14);
  *(_BYTE *)(*(_QWORD *)a1 + v14) = 0;
  return a1;
}

