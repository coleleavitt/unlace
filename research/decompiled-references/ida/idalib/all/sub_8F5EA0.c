__int64 __fastcall sub_8F5EA0(__int64 *a1, _QWORD *a2, void *a3, int a4)
{
  int v4; // r12d
  int v7; // r13d
  __int64 v8; // r15
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rax
  size_t v14; // r13
  void *v15; // rax
  size_t v16; // rax
  size_t v17; // r14
  size_t v18; // rbx
  void *v19; // rax
  int v20; // ebx
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 (***v23)(); // rdi
  __int64 (*v24)(); // rax
  __int64 v25; // [rsp+8h] [rbp-1060h]
  __int64 v26; // [rsp+18h] [rbp-1050h]
  char s[4104]; // [rsp+20h] [rbp-1048h] BYREF
  unsigned __int64 v28; // [rsp+1028h] [rbp-40h]

  v4 = 2;
  v28 = __readfsqword(0x28u);
  v7 = a4 & 2;
  while ( 1 )
  {
    if ( !v7 )
    {
      v10 = fopenRB(a3);
      goto LABEL_8;
    }
    v8 = fopenM(a3);
    if ( v8 )
      break;
    if ( *__errno_location() != 2 )
      goto LABEL_5;
    v10 = fopenWB(a3);
LABEL_8:
    if ( v10 )
    {
      s[0] = 0;
      v8 = 0;
      goto LABEL_10;
    }
LABEL_5:
    qdirname(s);
    if ( v4 != 1 )
    {
      v4 = 1;
      if ( (unsigned __int8)sub_8FE170(s, 4096) )
        continue;
    }
    return sub_8FD540(-1, a3);
  }
  s[0] = 0;
  sub_8F5DC0(a1, (__int64)s, 4096, (__int64)a3);
  v10 = fopenWB(s);
  if ( !v10 )
  {
    v20 = *__errno_location();
    qfclose(v8);
    return sub_8FD540(v20, s);
  }
LABEL_10:
  v26 = v10;
  v11 = operator new(0xC0u);
  v12 = v26;
  v13 = a1[3];
  *(_QWORD *)v11 = &unk_2BFC820;
  *(_QWORD *)(v11 + 8) = a1;
  if ( (a4 & 8) != 0 )
    v13 = 0;
  *(_QWORD *)(v11 + 24) = 0;
  *(_OWORD *)(v11 + 32) = 0;
  *(_QWORD *)(v11 + 16) = v13;
  if ( a3 )
  {
    v14 = strlen((const char *)a3);
    v15 = (void *)qvector_reserve(v11 + 24, 0, v14 + 1, 1);
    *(_QWORD *)(v11 + 24) = v15;
    *(_QWORD *)(v11 + 32) = v14 + 1;
    memmove(v15, a3, v14);
    v12 = v26;
    *(_BYTE *)(*(_QWORD *)(v11 + 24) + v14) = 0;
  }
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 128) = 0;
  memset(
    (void *)((v11 + 56) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)v11 + 48 - (((_DWORD)v11 + 56) & 0xFFFFFFF8) + 88) >> 3));
  *(_DWORD *)(v11 + 136) = a4;
  *(_BYTE *)(v11 + 140) = 0;
  if ( (a4 & 4) != 0 )
  {
    v25 = v12;
    MD5Init(v11 + 48);
    v23 = *(__int64 (****)())(v11 + 16);
    v12 = v25;
    if ( v23 )
    {
      v24 = **v23;
      if ( v24 != sub_8CE200 )
      {
        ((void (__fastcall *)(__int64 (***)(), void *, __int64 (*)(), __int64, __int64, double))v24)(
          v23,
          a3,
          sub_8CE200,
          v22,
          v25,
          0.0);
        v12 = v25;
      }
    }
  }
  *(_QWORD *)(v11 + 144) = v12;
  *(_QWORD *)v11 = &off_2B3FE00;
  *(_QWORD *)(v11 + 152) = v8;
  *(_QWORD *)(v11 + 160) = 0;
  *(_OWORD *)(v11 + 168) = 0;
  v16 = strlen(s);
  v17 = v16 + 1;
  v18 = v16;
  v19 = (void *)qvector_reserve(v11 + 160, 0, v16 + 1, 1);
  *(_QWORD *)(v11 + 160) = v19;
  *(_QWORD *)(v11 + 168) = v17;
  memmove(v19, s, v18);
  *(_BYTE *)(*(_QWORD *)(v11 + 160) + v18) = 0;
  *(_QWORD *)(v11 + 184) = 0;
  if ( (*(_BYTE *)(v11 + 136) & 2) != 0 )
  {
    v21 = (_QWORD *)operator new(0x10u);
    sub_7CCE80(v21);
    v21[1] = v11;
    *v21 = &off_2B3FDD8;
    *(_QWORD *)(v11 + 184) = v21;
  }
  *a2 = v11;
  return 0;
}
