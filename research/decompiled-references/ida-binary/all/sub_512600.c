__int64 __fastcall sub_512600(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v7; // r15
  int v9; // ebx
  __int64 v10; // r13
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  size_t v14; // rax
  const char *v15; // rbx
  size_t v16; // rdx
  int v17; // [rsp+Ch] [rbp-6Ch]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  int v21; // [rsp+30h] [rbp-48h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( a4 != 4 )
    goto LABEL_2;
  v7 = *(_QWORD *)(a2 + 56);
  v9 = 0;
  v10 = v7 + 48LL * *(_QWORD *)(a2 + 64);
  if ( v10 == v7 )
  {
LABEL_17:
    *a5 = -1;
    *a6 = -1;
LABEL_2:
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
    return a1;
  }
  while ( 1 )
  {
    QT::QTextLayout::text((QT::QTextLayout *)&ptr);
    v11 = v21 + 1;
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      v17 = v11;
      free(ptr);
      v11 = v17;
    }
    v12 = v9 + v11;
    if ( v12 > a3 )
      break;
    v7 += 48;
    if ( v10 == v7 )
      goto LABEL_17;
    v9 = v12;
  }
  *a5 = v9;
  *a6 = v12;
  v13 = *(_QWORD *)(v7 + 8);
  if ( v13 )
  {
    v14 = v13 - 1;
    v15 = *(const char **)v7;
    v16 = v14 >> 63;
  }
  else
  {
    LOBYTE(v16) = 0;
    v14 = 0;
    v15 = &s1;
  }
  if ( !v15 || (_BYTE)v16 )
  {
    v14 = 0;
    if ( v15 )
      v14 = strlen(v15);
  }
  QT::QString::fromUtf8(a1, v14, v15);
  return a1;
}
